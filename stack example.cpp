#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    stack<int>marks;
    for(int i = 1; i<=6; i++)
    {
        marks.push(i);
    }
    while(!marks.empty())
    {
        int x = marks.top();
        marks.pop();
        cout << x << " ";
    }
    return 0;
}
