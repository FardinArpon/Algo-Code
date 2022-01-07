#include <iostream>
using namespace std;
int n, m, graph[10] [10], i, j, k, v, s, visited[10], visit [10], stk[10],top=0;
int main (){
cout<< "Enter the number of vertices: ";
cin>>n;
cout<<" Enter the number of edges: ";
cin>>m;
for(k=1; k<=n; k++)
{
cin>>i>>j;
graph[i][j]= 1;
}
cout<<"Enter the initial vertex: ";
cin>>v;
cout<<"DFS ORDER:"<<v<<" ";
visited[v]=1;
s=1;
while(s<n)
{
for(j=n; j>=1;j--)
{
if(graph[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
visited[j]=1;
stk [top] =j;
top++;
}
}
v= stk[--top];
cout<<v<<" ";
s++;
visit[v]=0;
visited [v] = 1;
}
