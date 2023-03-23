void traverse(int i, vector<int> &visited, vector<int> adj[])
{
    visited[i] = 1;
    for(auto it:adj[i])
    {
        if(!visited[it])
            traverse(it,visited,adj);
    }
}

int DFS(int V, vector<int> adj[])
{
    vector<int> visited(V,0);
    visited[0] = 1;
    traverse(0,visited,adj);
    for(auto it:visited)
    {
        if(it == 0)
            return 0;
    }
    return 1;
}
