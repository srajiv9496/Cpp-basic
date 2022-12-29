#include<iostream>
using namespace std;

int findPivot(int arr[], int k)
{
    int s=0, e=k-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid]>= arr[0])
            s = mid + 1;
        else
            e=mid;
        mid = s + (e-s)/2;
    }
    return e;
}

int main()
{
    int array[1000]; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>array[i];
    cout<<"The pivot element index is: "<< findPivot(array, n);   
    return 0;
}