#include <iostream>
#include <cmath>
using namespace std; 
int main() 
{   
    setlocale(0, "rus");
    int i, j; 
    bool flag; 
    int count = 0;
 
    for ( i = 2; i < 10000; i++) 
    { 
        flag = true; 
        for ( j = 2; j <= i/2; j++) 
            if( i % j == 0) 
                flag = false; 
          if(flag) 
          {
           cout << "куб простого числа " << i << " равен " << pow(double(i), 2) << endl;
           count++; 
          }
          if(count == 100) 
              break;
    }  
}
