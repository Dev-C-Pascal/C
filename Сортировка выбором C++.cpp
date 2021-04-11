#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main()
{
    srand((int)time(0));
    int n, k;
    cout <<"n="; cin >>n;
 
    double*a = new double[n];
 
    for (int i = 0; i < n; i++)
      {
      a[i]=rand()%9 + 1;
      cout <<a[i]<<" ";
      }
    cout <<"\n";
    
    cout << "Make choice: 1 - up, 2 - down: "; cin >> k;
 
    double tmp;
    for(int i = 0; i < n; ++i) 
    { 
        int pos = i; 
        tmp = a[i];
        for(int j = i + 1; j < n; ++j) 
        {
            if (a[j] < tmp) 
           {
               pos = j; 
               tmp = a[j]; 
           }          
        }
        a[pos] = a[i]; 
        a[i] = tmp; 
    }
    
    if (k==2)
    for (int i = 0; i < n/2; i++)    
    swap (a[i], a[n-1-i]);
    
    for (int i = 0; i < n; i++)      
      cout <<a[i]<<" ";      
    cout <<"\n";
    delete[]a;
system("pause");
return 0;
}
