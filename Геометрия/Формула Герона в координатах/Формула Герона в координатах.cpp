#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;
 
int main()
{
    double x1, y1, x2, y2, x3, y3, a, b, c, p;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    
   a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
b = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
c = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    
   p = (a + b + c) / 2;
double r = sqrt(p*(p - a)*(p - b)*(p - c));
cout << fixed << setprecision(3) << r << endl;
    
  
    
return 0;
}