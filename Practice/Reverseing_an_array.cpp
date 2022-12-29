#include<iostream>
using namespace std;
int main(){
    int a[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int temp=0;
    for(int i=0; i<n; i++){
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}