#include<bits/stdc++.h>
using namespace std;
void mergeArrays(int arr1[],int arr2[],int n1,int n2,int arr3[]){
    //traverse the elements in array 1 and store them in array 3.
    int i=0,j=0,k=0;
    while(i<n1){
        arr3[k++]=arr1[i++];
    }
    while(j<n2){
        arr3[k++] = arr2[j++];

    }
    sort(arr3,arr3+n1+n2);
}
int main()
{
    int arr1[]={9,2,3,4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[]={7,6,5};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[n1+n2];
    mergeArrays(arr1,arr2,n1,n2,arr3);

    for(int i=0;i<n1+n2;i++){
        cout<<"The Sorted array is"<<" "; 
        cout<<arr3[i];
        cout<<endl;
    }
    return 0;
}