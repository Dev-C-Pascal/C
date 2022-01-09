
#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Deque
{
    vector<int> box1;
    vector<int> box2;
    int n, box_size=0;
    void push_front(int n)
    {
        box1.push_back(n);
        box_size++;
    }
    void push_back(int n)
    {
        box2.push_back(n);
        box_size++;
    }
    int pop_front()
    {
        if(box1.size()>0)
        {
            int a=box1[box1.size()-1];
            box1.erase(box1.end()-1);
            box_size--;
            return a;
        }
        else if(box2.size()>0)
        {
            int a=box2[0];
            box2.erase(box2.begin());
            box_size--;
            return a;
        }
        return 1;
    }
    int pop_back()
    {
        if(box2.size()>0)
        {
            int a=box2[box2.size()-1];
            box2.erase(box2.end()-1);
            box_size--;
            return a;
        }
        else if(box1.size()>0)
        {
            int a=box1[0];
            box1.erase(box1.begin());
            box_size--;
            return a;
        }
        return 1;
    }
    int front()
    {
        if(box1.size()>0)
        {
            int a=box1[box1.size()-1];
            return a;
        }
        else if(box2.size()>0)
        {
            int a=box2[0];
            return a;
        }
        return 1;
    }
    int back()
    {
        if(box2.size()>0)
        {
            int a=box2[box2.size()-1];
            return a;
        }
        else if(box1.size()>0)
        {
            int a=box1[0];
            return a;
        }
        return 1;
    }
    int size()
    {
        return box_size;
    }
    string clear()
    {
        box1.erase(box1.begin(), box1.end());
        box2.erase(box2.begin(), box2.end());
        box_size=0;
        return "ok";
    }
    string exit()
    {
        return "bye";
    }
};
int main() 
{
    Deque a;
    string s;
    while(cin>>s)
    {
        if(s=="push_front")
        {
            int n;
            cin>>n;
            a.push_front(n);
            cout<<"ok"<<endl;
        }
        if(s=="push_back")
        {
            int n;
            cin>>n;
            a.push_back(n);
            cout<<"ok"<<endl;
        }
        if(s=="pop_front")
        {
            cout<<a.pop_front()<<endl;
        }
        if(s=="pop_back")
        {
            cout<<a.pop_back()<<endl;
        }
        if(s=="front")
        {
            cout<<a.front()<<endl;
        }
        if(s=="back")
        {
            cout<<a.back()<<endl;
        }
        if(s=="size")
        {
            cout<<a.size()<<endl;
        }
        if(s=="clear"){
            a.clear();
            cout<<a.clear()<<endl;
        }
        if(s=="exit")
        {
            cout<<a.exit()<<endl;
            break;
        }
    }
    return 0;
}