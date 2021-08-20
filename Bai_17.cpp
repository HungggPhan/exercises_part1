#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,x,y;
	cin>>a>>b>>c>>x>>y;
	//sap xep a<b<c;x<y; 
	if(a>b) swap(a,b); 
	if(a>c) swap(a,c);
	if(b>c) swap(b,c); 
	if(x>y) swap(x,y); 
	if(a<=x&&b<=y) cout<<"CO";
	else cout<<"KHONG"; 
} 
