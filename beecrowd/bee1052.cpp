#include <bits/stdc++.h>

using namespace std;

int main(){
    int mes;
    cin >> mes;

    string mesIngles;

    switch (mes) {
        case 1:  mesIngles = "January";   break;
        case 2:  mesIngles = "February";  break;
        case 3:  mesIngles = "March";     break;
        case 4:  mesIngles = "April";     break;
        case 5:  mesIngles = "May";       break;
        case 6:  mesIngles = "June";      break;
        case 7:  mesIngles = "July";      break;
        case 8:  mesIngles = "August";    break;
        case 9:  mesIngles = "September"; break;
        case 10: mesIngles = "October";   break;
        case 11: mesIngles = "November";  break;
        case 12: mesIngles = "December";  break;
        default:  break;
    }

    cout << mesIngles << endl;

    return 0;
}