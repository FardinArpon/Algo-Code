#include <iostream>
using namespace std;
void merge(int array[],int left, int mid, int right){
int n1 = mid-left+1;
int n2 = right-mid;
int L[n1],R[n2];
for(int i=0;i<n1;i++)
L[i]=array[left+i];
for(int j=0;j<n2;j++)
R[j]=array[mid+1+j];
int k;
int i=0;
int j=0;
k=left;

while(i<n1&&j<n2){
if(L[i]<=R[j]){
array[k] = L[i];
i++;
}
else{
array[k]= R[j];
j++;
}
k++;
}
while(i<n1){
array[k] = L[i];
i++;
k++;
}
while(j<n2){
array[k]= R[j];
j++;
k++;
}
}
void mergeSort(int array[], int left, int right){
if (left<right)
{

int mid = (left+right)/2;
mergeSort(array, left, mid);
mergeSort(array, mid+1, right);
merge(array, left, mid, right);
}
}
int main(){
int n;
cout<<"Enter the array size: ";
cin>>n;
int A[n];
for(int i=0; i<n; i++)
cin>>A[i];
cout<<"Unsorted Data: ";
for(int i=0; i<n; i++)
cout<<A[i]<<" ";
mergeSort(A, 0, n-1);
cout<<"\nSorted Data: ";
for(int i=0; i<n; i++)
cout<<A[i]<<" ";
}
