#include <bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c; 
	if((a+b+c)==180){
		if(a==b&&b==c){
			cout<<"DEU"; 
		} 
		else if(a==b||b==c||a==c){
			if(a==90||b==90||c==90) cout<<"VUONG CAN";
			else cout<<"CAN"; 
		} 
		else if(a==90||b==90||c==90){
			cout<<"VUONG"; 
		}
		else cout<<"THUONG"; 
	} 
	else cout<<0; 
} 
