
#include <iostream>
#include <vector>
using namespace std;
 
int main() {
     int tests;
  cin >> tests;
  while(tests--)
  {
      
    int m,n,f,l; bool p=true;
    cin>>n>>m;
    vector <int> a(n);
    for (int i=0; i<m; i++){
        cin>>f>>l;
        a[f-1]++; a[l-1]++;
    }
    for (int i=0; i<n; i++){if (a[i]!=a[0]){p=false; break;}}
    if (p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
}