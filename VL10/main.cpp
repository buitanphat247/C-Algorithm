#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin>>n;
    n[n.size()] = 'p';
    int cnt = 0, i=0;
    while(n[i]!='p')
    {
        if(n[i]>='0' && n[i] <= '9')
        {
            cnt++;
        }
        i++;
    }
    cout<<cnt;
    return 0;
}
