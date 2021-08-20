#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if(n>m){ //neu n>m 
		cout<<m<<" "<<(n-m)/2; //so doi giay khac mau = so nho hon; so doi giay cung mau la cac chiec giay con lai. 
	} 
	else {
		cout<<n<<" "<<(m-n)/2; 
	} 
	return 0; 
} 
