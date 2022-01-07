
#include <iostream>
using namespace std;
int n, cost[10][10], i, j, s=1, a, b, u, v, parent[10], mincost=0, Min;
int Find(int i)
{
while(parent[i])
{
i = parent[i];
}
return i;
}
int Union(int i, int j)
{
if(i!=j)
{
parent[j] = i;
return 1;
}
return 0;
}
int main(){
cout<<"Enter the number of vertices: ";
cin>>n;
for(i=1; i<=n; i++)
for(j=1; j<=n; j++)
{
cin>>cost[i][j];
if(cost[i][j]==0)
cost[i][j] = 999;
}
while(s<n)
{
for(i=1,Min=999; i<=n; i++){
for(j=1; j<=n; j++){
if(cost[i][j]<Min)
{
Min = cost[i][j];
a = u = i;
b = v = j;
}
}
}
u = Find(u);
v = Find(v);
if (Union(u,v))
{


cout<<s<<" edge ("<<a<<","<<b<<") = "<<Min<<"\n";
mincost = mincost+Min;
s++;
}
cost[a][b] = cost[b][a]= 999;
}
cout<<"\n Minimum cost = "<<mincost;
}
