#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n<=100){
		cout<<n*2000; 
	} 
	else if(n<=200){
		cout<<200000+(n-100)*3000; 
	} 
	else if(n<=300){
		cout<<500000+(n-200)*5000; 
	} 
	else cout<<1000000+(n-300)*10000; 
    return 0;
}
