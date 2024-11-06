#include<iostream> 
#include<vector>
#include<list>
#include<queue>

using namespace std;

void dfs(int node,vector<int> adj[],vector<int> vis,vector<int> &ans)
{
    vis[node]=1;
    ans.push_back(node);
    for(auto it : adj[node])
    {
        if(!vis[it])
        {
            dfs(it,adj,vis,ans);
        }
    }
    
}
vector<int> dfs_helper(int V,vector<int> adj[],int N)
{
    vector<int> vis(N,0);
    int start =0;
    vector<int> ans;
    dfs(start,adj,vis,ans);
    return ans;
}
int main()
{
    int N,M;
    vector<int> adj[M];
    int vertex;
    dfs_helper(vertex,adj,N);


    return 0; 
}