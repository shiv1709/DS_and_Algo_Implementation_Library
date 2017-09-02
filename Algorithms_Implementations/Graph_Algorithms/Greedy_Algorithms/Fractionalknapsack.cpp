#include<bits/stdc++.h>
using namespace std;
struct item
{
int value,weight;
item(int v,int w):value(v),weight(w)
{
}
};
bool cmp(struct item a,struct item b)
{
double r1=(double)a.value/a.weight;
double r2=(double)b.value/b.weight;
return r1>r2;
}
double fracknapsack(int cap ,struct item arr[],int n)
{
sort(arr,arr+n,cmp);
double finalval=0.0;
int curwt=0;
for(int i=0;i<n;i++)
{
if(curwt+arr[i].weight<=cap)
{
curwt+=arr[i].weight;
finalval+=arr[i].value;
}
else
{
int rem;
rem=cap-curwt;
finalval+=((double)rem/arr[i].weight)*arr[i].value;
}

}
return finalval;
}
int main()
{
double fv;
int cap=50;
struct item arr[]={{60, 10}, {100, 20}, {120, 30}};
int n=sizeof(arr)/sizeof(arr[0]);
fv=fracknapsack(cap,arr,n);
printf(" Maximum profit obtained = %lf",fv);
return 0;
}
