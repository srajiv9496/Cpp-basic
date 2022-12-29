#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int K){
    int start = 0;
    int end = size-1;
    int mid = start + ( end - start )/2;

    while ( start <= end){
        if(arr[mid] == K)
            return mid;
        if(arr[mid] < K){
            start = mid + 1;
        }
        else 
            end = mid - 1;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main(){
    int n;
    cout << "Input the numebr of terms: " << endl;
    cin >> n;
    int array[n];
    cout << "Input the terms: " << endl;
    for(int i = 0 ; i < n ; i++)
        cin >> array[i] ;
    cout << " Enter the element you want to search for: " << endl;
    int a;
    cin >> a;
    int index=binarySearch(array, n, a);
    cout << "The index of" << a << " is: " << index << endl;
    return 0;
}