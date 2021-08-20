#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	if(a==b){
		cout<<"HOA"; 
	} 
	else{
		if(a==0){
			if(b==1){
				cout<<"BAC";		 	
			}	
			else {
				cout<<"NAM"; 
			}
		}
		else if(a==1){
			if(b==0){
				cout<<"NAM"; 
			} 
			else{
				cout<<"BAC"; 
			}  
		}
		else {
			if(b==0){
				cout<<"NAM";
			} 
			else {
				cout<<"BAC"; 
			} 
		} 
	} 
    return 0;
}
