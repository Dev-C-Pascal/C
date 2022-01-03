#include <string> 
#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    int A,N; 
    cin >> A >> N; 
    if (N<0 && A>0 && A+N<=0) {cout << A+N-1;return 0;}; 
    if (N>0 && A<0 && A+N>=0) {cout << A+N+1;return 0;}; 
    if (A-abs(N)==0) {cout << A+N-1; return 0;}; 
    if (A+N==0) {cout << A+N+1; return 0;}; 
    if (A+N==1) {cout << A+N+1; return 0;}; cout << A+N; }