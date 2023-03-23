void fun(vector<int> adj[], int s, bool visited[])
{ 	
    visited[s]=true;
    cout<< s <<" ";
    
    for(int u:adj[s])
    {
        if(visited[u]==false)
            fun(adj,u,visited);
    }
}





void DFS(vector<int> adj[], int V)
{
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
		
    for(int i=0;i<V;i++)
    
    {
        if(visited[i]==false)
            fun(adj,i,visited);
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
