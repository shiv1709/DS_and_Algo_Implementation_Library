#include<bits/stdc++.h>
using namespace std;
#define V 6
int mindist(int dist[V],bool sptset[V])
{
int min_indx,min=INT_MAX;
for(int v=0;v<V;v++)
{
if(sptset[v]==false && dist[v]<min)
{
min=dist[v],min_indx=v;
}
}
return min_indx;
}
void printans(int dist[V])
{
cout<<"Vetex \t Distance from source\n";
for(int i=0;i<V;i++)
cout<<i<<" \t "<<dist[i]<<endl;
}
void dijkstra(int graph[V][V],int src)
{
int dist[V];
bool sptset[V];
for(int i=0;i<V;i++)
{
sptset[i]=false;
dist[i]=INT_MAX;
}
dist[src]=0;
for(int count=0;count<V-1;count++)
{
int u=mindist(dist,sptset);
sptset[u]=true;
for(int v=0;v<V;v++)
{
if(graph[u][v]&& sptset[v]==false && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
dist[v]=dist[u]+graph[u][v];
}
}
printans(dist);
}
int main()
{
int s;
int graph[V][V];
cout<<"Enter connections with weight in matrix form\n";

for(int i=0;i<V;i++)
{
for(int j=0;j<V;j++)
cin>>graph[i][j];
}
cout<<"Enter source vertex\n";
cin>>s;
dijkstra(graph,s);
return 0;
}
