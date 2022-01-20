#include iostream

#include vector

using namespace std;

typedef pairint, int rb;

int main() {

 vectorrb lst;

 int n;

cinn;

 int a[n][n];

 for (int i=0; in; i++) {

   

   for (int j=0; jn; j++) cina[i][j];

 }

 
 for (int i=0; in; i++)

 for (int j=i+1; jn; j++)

    if (a[i][j]0) lst.push_back(make_pair(i+1,j+1));  

 for (int i=0; ilst.size(); i++)  

   coutlst[i].first lst[i].secondendl;

  system(pause);

 return 0;

}