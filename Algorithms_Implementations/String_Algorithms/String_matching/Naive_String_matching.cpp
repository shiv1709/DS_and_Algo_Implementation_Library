//C++ Program for Linked List Representation of given Binary Tree(BT)
/*
***************************
Author@Shiv Pratap Singh
***************************
*/
#include<bits/stdc++.h>
using namespace std;
void searchpatt(char text[],char pat[])
{
int m,n,i,j;
m=strlen(pat);
n=strlen(text);

for(i=0;i<=n-m;i++)
{
for(j=0;j<m;j++)
{
if(text[i+j]!=pat[j])
break;
}
if(j==m)
cout<<"pattern found at index "<<i<<endl;

}

}
int main()
{
char text[50],pat[50];
cout<<"Enter text and then pattern to search\n";
cin>>text;
cin>>pat;
searchpatt(text,pat);
return 0;
}
