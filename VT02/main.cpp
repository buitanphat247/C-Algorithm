#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n, greater<int>());
    for(int i=1; i<=n; i++){
        if(a[1]>a[i]){
            cout<<a[i];
            break;
        }
        if(a[1]==a[n]){
            cout<<"NOT FOUND";
            break;
        }
    }
    return 0;
}
