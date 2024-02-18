#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
        cout<<abs(y1-y2)<<endl;
    else if(y1==y2)
        cout<<abs(x1-x2)<<endl;
    else
    {
        if(y2-y1<x2-x1)
        {
            long long step_row=x2-(y2-y1)-x1;
            cout<<step_row+(y2-y1)<<endl;
        }
        else if(y2-y1>x2-x1)
        {
            long long step_col=y2-(x2-x1)-y1;
            cout<<step_col+(x2-x1)<<endl;
        }
        else if(y2-y1==x2-x1)
        {
            cout<<x2-x1<<endl;
        }
    }
}
