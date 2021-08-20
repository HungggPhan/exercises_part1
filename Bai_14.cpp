#include <bits/stdc++.h>
using namespace std; 
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c&&(b+c)>a&&(a+c)>b){
		if(a==b&&b==c) cout<<"deu";
		else if((pow(a,2)+pow(b,2))==pow(c,2)||(pow(a,2)+pow(c,2))==pow(b,2)||(pow(b,2)+pow(c,2))==pow(a,2)) cout<<" vuong"; 
		else if(a==b||b==c||a==c) cout<<"can"; 
		else cout<<"thuong"; 
	}
	else cout<<"khong"; 
	return 0; 
} 
 
