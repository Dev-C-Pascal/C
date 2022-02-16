#include <iostream>

using namespace std;

int main()
{
int x1,x2,x3;
int y1,y2,y3;

  cin>> x1;
  cin>> y1;
  cin>> x2;
  cin>> y2;
  cin>> x3;
  cin>> y3;

  if((x1<=0&&x2>=0) || (x1>=0&&x2<=0) || (x3<=0&&x2>=0) || (x3>=0&&x2<=0) || (x3<=0&& x1>=0) || (x3>=0&&x1<=0))
  {
   if((y1<=0&&y2>=0) || (y1>=0&&y2<=0) || (y3<=0&&y2>=0) || (y3>=0&&y2<=0) || (y3<=0&& y1>=0) || (y3>=0&&y1<=0))
   {
     cout << "YES"<<endl;}
    else  cout << "NO"<<endl;
    }
   else cout << "NO"<<endl;

   
   return 0;
}