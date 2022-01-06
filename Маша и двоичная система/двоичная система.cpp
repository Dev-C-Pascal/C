#include <bits/stdc++.h>
using namespace std;
#define int long long
 
signed decToBin(int num) {
    int t=0, k=1;
    while(num)
    {
        t +=(num%2)*k;
        num=num/2;
        k=k*10;
    }
    return t;
}
 
signed razrad(int j, int u){
    int answer;
    while(j!=0){
        if(j%10 == u){
            answer++;
        }
        j=j%10;
    }
    return answer;
}
 
signed main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int pr = pow(2,a) + pow(2,b) - pow(2,c);
    int otvet = decToBin(pr);

int count=0;
while(otvet)
{
   if(otvet%10==d)
         count++;
  otvet/=10;
}
cout<<count;
return 0;
}