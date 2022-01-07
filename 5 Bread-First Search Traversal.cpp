#include <iostream>
using namespace std;
int n, m, k, i, j, graph[10][10], v, visited[10], visit[10], rare, front, qu[10];
int main(){
cout<<"Enter the number of vertices: ";
cin>>n;
cout<<"Enter the number of edges: ";
cin>>m;
cout<<"\nEDGES\n";
for(k=1; k<=m; k++){
cin>>i>>j;
graph[i][j] = 1;
}
cout<<" Enter the initial vertex: ";
cin>>v;
cout<<" Visited vertices: ";
cout<<v<<" ";
visited[v]=1;
k=1;
while(k<n)
{
for(j=1; j<=n; j++)
if(graph[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[j]=1;
qu[rare++] = j;
}
v= qu[front++];
cout<<v<<" ";
k++;
visit[v] = 0;
visited[v] = 1;
}

}
