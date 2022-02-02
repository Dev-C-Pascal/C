#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n][n], s[n], c[n];
    for (int i = 0; i < n; i++) //Считывание матрицы
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
 
    for(int j=0;j< n;j++) //подсчёт заходов
    {
        s[j]=0;
        for(int i=0;i< n;i++)
        {
            s[j] = s[j] + a[i][j];
        }
 
    }
 
    for(int i=0;i< n;i++) //подсчёт исходов
    {
        c[i]=0;
        for(int j=0;j< n;j++)
            c[i]=c[i]+a[i][j];
 
    }
 
    for (int i = 0; i < n; i++) //Вывод поочёрдно заходов и исходов
    {
            cout << s[i] << " " << c[i] << endl;
 
    }
}