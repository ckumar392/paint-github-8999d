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
vector<int> bfs(int N,vector<int> adj[])
{
    vector<int> visit(N,0),bfs;
    visit[0]=1;
    queue<int> q;
    q.push(0);
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto x : adj[node])
        {
            if(!visit[x])
            {
                visit[x]=1;
                q.push(x);
            }
        }
    }

}
int main()
{
    int N,M;
    vector<int> adj[M];


    return 0; 
}