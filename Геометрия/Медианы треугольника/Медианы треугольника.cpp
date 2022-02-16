
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main()
{
    long double a, b, c;
    cin >> a >> b >> c;

double ma = (sqrt(2*(b*b)+2*(c*c)-a*a))/2;
double mb = (sqrt(2*(a*a)+2*(c*c)-b*b))/2;
double mc = (sqrt(2*(a*a)+2*(b*b)-c*c))/2;

cout << fixed << setprecision(3) << ma << endl;
cout << fixed << setprecision(3) << mb << endl;
cout << fixed << setprecision(3) << mc << endl;
    
    return 0;
}