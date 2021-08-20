#include <bits/stdc++.h>
using namespace std; 
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b) swap(a,b); 
	if(a>c) swap(a,c);
	if(b>c) swap(b,c);
	cout<<max((b-a-1),(c-b-1)); 
} 
//sap xep a, b, c tang dan; so buoc di lon nhat bang khoang cach lon nhat giua 2 quan co lien tiep tru 1  
