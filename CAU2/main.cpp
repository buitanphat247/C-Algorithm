#include <bits/stdc++.h>
#define N 101
#define M 501
#define pii pair<int, int>
using namespace std;


int a[N][N];
int d[N];
pii lst[M];
int m,n, res;

void DFS(int u){
    d[u]=1;
    for(int v=1; v<=n;v++){
        if(a[u][v]>0 and d[v]==0) DFS(v);
    }
}

int CountConnected(){
    memset(d,0,sizeof(d));
    int c =0;
    for(int i=1; i<=n; i++){
        if(d[i]==0){
            c++;
            DFS(i);
        }
    }
    return c;
}

int main()
{
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);


    cin >> n >>m;
    for(int u,v,i=1; i<=m;i++){
        cin >> u >>v;
        lst[i]=pii(u,v);
        a[u][v]=++a[v][u];
    }

    int k =CountConnected();

    for(int i=1; i<=m; i++){
        int u= lst[i].first, v=lst[i].second;
        int tmp = a[u][v];
        a[u][v]= a[v][u]=0;
        int p = CountConnected();
        if(p>k and tmp==1 ) res++;
        a[u][v]=a[v][u]= tmp;
    }

    cout<< res;
    return 0;
}
