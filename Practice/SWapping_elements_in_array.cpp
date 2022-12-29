#include<iostream>
using namespace std;

void printarrray(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n)
            swap(arr[i], arr[i+1]);
    }
}

int main(){
    int a[1000];
    int b[1000];
    int n1,n2;
    cin>>n1>>n2;
    for(int i=0; i<n1; i++){
        cin>>a[n1];
    }
    for(int i=0; i<n2; i++){
        cin>>b[n2];
    }
    swapalternate(a,n1);
    printarrray(a,n1);

    cout<<endl;

    swapalternate(b,n2);
    printarrray(b,n2);
    return 0;
}