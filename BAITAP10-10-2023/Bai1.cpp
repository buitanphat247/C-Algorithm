#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s;
    long long n;
    cin>>n;
    while(n--)
    {
        cin>>s;
        for(long long i=0;i<s.size();i++)
            if(s[i]-'0'==0)
                s[i]='5';
        cout<<s<<endl;
    }
}
