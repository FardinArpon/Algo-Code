#include <iostream>
using namespace std;
int partition (int Array[], int left, int right){
int pivot = Array[right];
int i = (left-1);
for (int j=left; j<right; j++)
{
if(Array[j]<pivot)
{
i++;
swap(Array[i],Array[j]);
}
}
swap(Array[i+1],Array[right]);
return(i+1);
}

void quickSort(int Array[],int left, int right){
if (left<right){
int p = partition(Array,left,right);
quickSort(Array,left,p-1);
quickSort(Array, p+1, right);
}
}
int main(){
int A[10],n,i;
cout << "Enter Array size: ";
cin>>n;
for (i=0; i<n; i++)
cin>>A[i];
cout<< "Unsorted Data: ";
for (i=0; i<n; i++)
cout<<A[i]<<" ";
quickSort (A, 0, n-1);
cout<<"\n sorted Data : ";
for(i=0; i<n; i++)
cout<<A[i]<<" ";
}
