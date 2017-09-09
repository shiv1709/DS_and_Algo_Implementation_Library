//C++ Program for Implementation of BFS(Breadth First Search) traversal of Graph

/*
***************************
Author@Shiv Pratap Singh
***************************
*/

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
void BFS(int src); 
};
void Graph::addedge(int u,int v)
{
adj[u].push_back(v);
}
void Graph:: BFS(int src)
{
bool *visited=new bool[V];
for(int j=0;j<V;j++)
visited[j]=false;
visited[src]=true;
list<int >queue;
list<int >::iterator i;
queue.push_back(src);
while(!queue.empty())
{
src=queue.front();
cout<<src<<" ";
queue.pop_front();
for(i=adj[src].begin();i!=adj[src].end();i++)
{
if(visited[*i]==false)
{
visited[*i]=true;
queue.push_back(*i);
}
}
}
cout<<endl;
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
g.BFS(s);
return 0;
}
