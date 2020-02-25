


#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int>&visited,vector<int>mp[], int i, int &ans,vector<int>musem) {
    visited[i]=true;
    ans +=musem[i];
    for(auto j=mp[i].begin();j!=mp[i].end();++j) {
        if(!visited[*j])
            dfs(visited,mp,*j,ans,musem);
    }

}

void driver(int n, vector<int>mp[],vector<int>musem,vector<int>&val) {
    vector<int>visited(n+1,0);
    int ans;
    for(int i=1;i<=n;++i) {
        ans = 0;
        if(visited[i] == false) {
            dfs(visited,mp,i,ans,musem);
            val.push_back(ans);
        }
    }

}
int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>mp[n+1];
    vector<int>musem(n+1);
    vector<int>val;
    int a,b;

    for(int j=0;j<m;++j) {
        cin>>a>>b;
        mp[a].push_back(b);
        mp[b].push_back(a);
    }

    for(int i=1;i<=n;++i) {
        cin>>musem[i];
    }

    driver(n,mp,musem,val);
    sort(val.begin(),val.end());
    int s=0,e=val.size()-1;
    int ans = 0;
    if(k > val.size())
        cout<<"-1";
    else {
        for(int x=0;x<k;++x) {
            if(x%2 == 0) {
                ans += val[e];
                e--;
            }
            else {
                ans += val[s];
                s++;
            }
        }
        cout<<ans;
    }
}

