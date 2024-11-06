// we ll be using queue 
// make a array called visited this is used in most of the graphh related questions
// we go to the node and ask which are the 
#include<iostream> 
#include<vector>
#include<list>
#include<queue>
//The Time complexity of BFS is O(V + E) when Adjacency List is used 
//and O(V^2) when Adjacency Matrix is used, where V stands for vertices and E stands for edges

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