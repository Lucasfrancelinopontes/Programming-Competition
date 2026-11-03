#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 4e18;
const int MOD = 1e9 + 7;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define F first
#define S second

struct Point {
    ll x, y;

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

ll cross(const Point& a, const Point& b, const Point& c) {
    return (b.x - a.x) * (c.y - a.y)
         - (b.y - a.y) * (c.x - a.x);
}

int sign(ll x) {
    if (x < 0) return -1;
    if (x > 0) return 1;
    return 0;
}

bool onSegment(const Point& a, const Point& b, const Point& p) {
    return cross(a, b, p) == 0
        && min(a.x, b.x) <= p.x && p.x <= max(a.x, b.x)
        && min(a.y, b.y) <= p.y && p.y <= max(a.y, b.y);
}

bool segmentsIntersect(const Point& a, const Point& b,
                       const Point& c, const Point& d) {
    ll c1 = cross(a, b, c);
    ll c2 = cross(a, b, d);
    ll c3 = cross(c, d, a);
    ll c4 = cross(c, d, b);

    if (c1 == 0 && onSegment(a, b, c)) return true;
    if (c2 == 0 && onSegment(a, b, d)) return true;
    if (c3 == 0 && onSegment(c, d, a)) return true;
    if (c4 == 0 && onSegment(c, d, b)) return true;

    return sign(c1) * sign(c2) < 0 && sign(c3) * sign(c4) < 0;
}

bool blockedByObstacle(const Point& a, const Point& b,
                       const Point& c, const Point& d) {
    if (!segmentsIntersect(a, b, c, d)) return false;

    bool sharedEndpoint = (a == c || a == d || b == c || b == d);
    if (!sharedEndpoint) return true;

    // Se forem colineares, só é permitido o contato em um único ponto.
    if (cross(a, b, c) == 0 && cross(a, b, d) == 0) {
        ll low, high;

        if (abs(b.x - a.x) >= abs(b.y - a.y)) {
            low = max(min(a.x, b.x), min(c.x, d.x));
            high = min(max(a.x, b.x), max(c.x, d.x));
        } else {
            low = max(min(a.y, b.y), min(c.y, d.y));
            high = min(max(a.y, b.y), max(c.y, d.y));
        }

        return high > low; // Sobreposição de comprimento positivo.
    }

    // Interseção isolada no vértice compartilhado: permite a curva ali.
    return false;
}

double distanceBetween(const Point& a, const Point& b) {
    double dx = double(a.x - b.x);
    double dy = double(a.y - b.y);
    return hypot(dx, dy);
}

bool visible(const Point& a, const Point& b,
             const vector<pair<Point, Point>>& obstacles) {
    for (const auto& obstacle : obstacles) {
        if (blockedByObstacle(a, b, obstacle.F, obstacle.S)) {
            return false;
        }
    }

    return true;
}

double shortestRoute(const vector<Point>& nodes,
                     const vector<pair<Point, Point>>& obstacles) {
    int n = sz(nodes);
    vector<vector<pair<int, double>>> graph(n);

    // Grafo de visibilidade: cada vértice é início, fim ou ponta de obstáculo.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (visible(nodes[i], nodes[j], obstacles)) {
                double w = distanceBetween(nodes[i], nodes[j]);
                graph[i].pb({j, w});
                graph[j].pb({i, w});
            }
        }
    }

    // Dijkstra a partir do ponto inicial (índice 0) até o final (índice 1).
    const double INF_D = numeric_limits<double>::infinity();
    vector<double> dist(n, INF_D);
    priority_queue<pair<double, int>,
                   vector<pair<double, int>>,
                   greater<pair<double, int>>> pq;

    dist[0] = 0.0;
    pq.push({0.0, 0});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u] + 1e-12) continue;
        if (u == 1) return d;

        for (auto [v, w] : graph[u]) {
            if (dist[v] > d + w + 1e-12) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist[1];
}

void solve() {
    ll xi, yi, xf, yf;
    int n;

    while (cin >> xi >> yi >> xf >> yf >> n) {
        if (xi == 0 && yi == 0 && xf == 0 && yf == 0 && n == 0) break;

        vector<Point> nodes;
        vector<pair<Point, Point>> obstacles;

        nodes.pb({xi, yi}); // Índice 0: início.
        nodes.pb({xf, yf}); // Índice 1: chegada.

        for (int i = 0; i < n; i++) {
            ll x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            Point a = {x1, y1};
            Point b = {x2, y2};

            obstacles.pb({a, b});
            nodes.pb(a);
            nodes.pb(b);
        }

        cout << fixed << setprecision(2)
             << shortestRoute(nodes, obstacles) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;

    while (T--) {
        solve();
    }

    return 0;
}
