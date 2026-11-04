import math
import sys

def main():
    a, b, c, d = map(int, sys.stdin.read().split())
    
    # B * log(A) > D * log(C)
    if b * math.log(a) > d * math.log(c):
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()