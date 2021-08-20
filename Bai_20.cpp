#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(b==2){
		if(a==28){
			if((c%4==0&&c%4!=100)||c%400==0){
				a=29; 
			}
			else{
				a=1;
				b=3; 
			} 
		}
		else if(a==29){
			a=1;
			b=3; 
		}
		else a=a+1; 
	}
	else if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){
		if(a==30){
			a=31; 
		} 
		else if(a==31){
			a=1;
			b=b+1; 
		} 
		else a=a+1; 
	} 
	else {
		if(a==30){
			a=1;
			b=b+1; 
		} 
		else a=a+1; 
	} 
	cout<<a<<" "<<b<<" "<<c; 
} 
