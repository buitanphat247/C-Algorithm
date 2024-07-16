#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    long long index=0;
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]=='0')
            index++;
        else break;
    }
    s.erase(s.begin(),s.begin()+index);
    cout<<s<<endl;
}
