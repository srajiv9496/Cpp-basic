#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int age[3];
	    for(int i=0; i<3; i++)
	        cin>>age[i];
	    int n=3;
	    sort(age, age + n);
	    if(age[0] + age[1] == age[2])
	        cout<<"Yes"<<endl;
	    else 
	        cout<<"No"<<endl;
	}
	return 0;
}