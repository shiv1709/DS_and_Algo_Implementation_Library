//C++ Program for Linked List Representation of given Binary Tree(BT)
/*
***************************
Author@Shiv Pratap Singh
***************************
*/
#include<bits/stdc++.h>
using namespace std;
#define V 4
#define inf 999999
void shortpath(int dist[V][V])
{int i,j;
cout<<"This matrix shows all pair shortest path \n";
for(i=0;i<V;i++)
{
for(j=0;j<V;j++)
{
if(dist[i][j]==inf)
cout<<"inf ";
else
cout<<dist[i][j]<<" ";
}
cout<<endl;
}
}
void floyd(int graph[V][V] )
{
int i,j,k;
int dist[V][V];
for(i=0;i<V;i++)
{
for(j=0;j<V;j++)
dist[i][j]=graph[i][j];
}
for(k=0;k<V;k++)
{
for(i=0;i<V;i++)
{
for(j=0;j<V;j++)
{
if(dist[i][k]+dist[k][j]<dist[i][j])
dist[i][j]=dist[i][k]+dist[k][j];

} 

}

}
 shortpath(dist);
}
int main()
{
int graph[V][V];
cout<<"Enter connections in matrix form\n";
for(int i=0;i<V;i++)
{
for(int j=0;j<V;j++)
cin>>graph[i][j];
}
floyd(graph);
return 0;
}
