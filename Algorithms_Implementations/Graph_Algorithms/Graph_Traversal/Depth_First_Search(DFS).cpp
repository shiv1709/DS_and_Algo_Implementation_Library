#include<bits/stdc++.h>
using namespace std;
class Graph
{
int V;
list<int> *adj;
public:
Graph(int V)
{
this->V=V;
adj=new list<int>[V];
}
void addedge(int u,int v);
void DFS(int src);
void DFShelper(int vr ,bool visited[]); 
};
void Graph::addedge(int u,int v)
{
adj[u].push_back(v);
}
void Graph::DFShelper(int vr, bool visited[])
{
visited[vr]=true;
cout<<vr<<" ";
list<int> :: iterator i;
for(i=adj[vr].begin();i!=adj[vr].end();i++)
{
if(visited[*i]==false)
DFShelper(*i,visited);
}
}
void Graph::DFS(int vr)
{
bool *visited=new bool[V];
for(int j=0;j<V;j++)
visited[j]=false;
DFShelper(vr,visited);
}
int main()
{
int nodes,edges,u,v,s;
cout<<"Enter number of nodes and edges \n";
cin>>nodes>>edges;
Graph g(nodes);
cout<<"Enter connections of graph\n";
for(int j=0;j<edges;j++)
{
cin>>u>>v;
g.addedge(u,v);
}
cout<<"Enter starting vertex\n";
cin>>s;
g.DFS(s);
return 0;
}
