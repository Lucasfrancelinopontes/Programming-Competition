a,b,c = map(float,input().split())

if a < b +c and c < b+a and b < c+a:
    print(f"Perimetro = {a+b+c:.1f}")
else:
    print(f"Area = {((a+b)*c)/2:.1f}")