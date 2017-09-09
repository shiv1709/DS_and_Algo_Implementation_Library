//C++ Program for Implementation of Prims Algorithm 

/*
***************************
Author@Shiv Pratap Singh
***************************
*/

#include<bits/stdc++.h>
using namespace std;
#define  V 5
int minkey(int key[V],bool mstset[V])
{
int min=INT_MAX,min_indx;
for(int v=0;v<V;v++)
{
if(mstset[v]==false and key[v]<min)
min=key[v],min_indx=v;
}
return min_indx;
}
void printmst(int parent[V],int graph[V][V])
{long long mincost=0;
cout<<" Edge \t Weight\n";
for(int i=1;i<V;i++)
{
cout<<parent[i]<<" - "<<i<<"\t"<<graph[i][parent[i]]<<endl;
mincost+=graph[i][parent[i]];
}
cout<<"MCST  total weight is "<<mincost<<endl;
}
void prims(int graph[V][V])
{
int parent[V];
int key[V];
bool mstset[V];
for(int i=0;i<V;i++)
{
key[i]=INT_MAX;
mstset[i]=false;
}
key[0]=0;
parent[0]=-1;
for(int count=0;count<V-1;count++)
{
int u=minkey(key,mstset);
mstset[u]=true;
for(int v=0;v<V;v++)
{

if(graph[u][v] && mstset[v]==false && graph[u][v]<key[v])
{
parent[v]=u;
key[v]=graph[u][v];
}

}

}
printmst(parent,graph);
}
int main()
{
int graph[V][V];
cout<<"Enter connections with weight in matrix form\n";
for(int i=0;i<V;i++)
{
for(int j=0;j<V;j++)
cin>>graph[i][j];
}
prims(graph);
return 0;
}
