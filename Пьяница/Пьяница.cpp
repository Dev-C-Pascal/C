#include <iostream> 
#include <queue> 
using namespace std; 
int main() { 
    int n, m, l; 
    queue <int> q1; 
    queue <int> q2; 
    for (int i = 0; i < 5; i++) 
    { 
        cin >> n; 
        q1.push(n); 
    } 
    for (int i = 0; i < 5; i++) 
    { 
        cin >> n; 
        q2.push(n); 
    } 
    n = 0; 
    while (q1.size() != 0 && q2.size() != 0) 
    { 
        n++; 
        if (q1.front() == 9 && q2.front() == 0) 
        { 
            l = q2.front(); 
            q2.pop(); 
            m = q1.front(); 
            q1.pop(); 
            q2.push(m); 
            q2.push(l); 
        } else 
        if (q1.front() == 0 && q2.front() == 9) 
        { 
            l = q2.front(); 
            q2.pop(); 
            m = q1.front(); 
            q1.pop(); 
            q1.push(m); 
            q1.push(l); 
        } else
        if (q1.front() > q2.front()) 
        { 
            l = q2.front(); 
            q2.pop(); 
            m = q1.front(); 
            q1.pop(); 
            q1.push(m); 
            q1.push(l); 
        } else 
        if (q1.front() < q2.front()) 
        { 
            l = q2.front(); 
            q2.pop(); 
            m = q1.front(); 
            q1.pop(); 
            q2.push(m); 
            q2.push(l); 
        } 
        if (n > 1000000) 
        { 
            cout << "Botva"; 
            return 0; 
        } 
    } 
    if (q1.empty()) cout << "Igor "; 
    else cout << "Artur "; 
    cout << n; 
}