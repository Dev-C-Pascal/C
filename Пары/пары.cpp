#include <bits/stdc++.h>
using namespace std;
long long a, b, c, d, s;
int main() {
cin >>a>>b>>c>>d;
s=a*b+c*d;
if (a*c+b*d>s)
{ 
s=a*c+b*d;
}
if (a*d+b*c>s)
{
s=a*d+b*c;
}
cout <<(s);
return 0;
}
