#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    long double a, b, c;
    cin >> a >> b;
    cin >> c;
    
double p = (a + b + c) / 2;
double r = sqrt(p*(p - a)*(p - b)*(p - c));
cout << fixed << setprecision(3) << r << endl;
    
    return 0;
}