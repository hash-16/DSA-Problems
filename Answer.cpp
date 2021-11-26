#include<bits/stdc++.h>
using namespace std;
#define int long long int
vector<int>v[100000+1];
int vis[100000+1]={0};

void dfs(int a)
{
    
    vis[a]=1;
    for(auto j:v[a])
    {
        if(vis[j]==0)
         dfs(j);
    }
    
    
}
 ///commit branch  
int32_t main() {
   int n,p,a,b;
    cin >> n >> p;
    if(n==1)
    {
        cout << 0 <<"\n";
        return 0;
    }
    
    while(p--)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            c++;
            dfs(i);
           
       }
   }
   
   cout << c-1 <<"\n";
    
}
