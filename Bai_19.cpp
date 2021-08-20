#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	//sap xep a<b<c;
	if(a>b) swap(a,b); 
	if(a>c) swap(a,c);
	if(b>c) swap(b,c);
	//cong boi cua csc bang hieu cua 2 so lien tiep
	//neu hieu 2 so lien tiep ma lon hon hieu con lai thi so bi thieu nam o giua 2 so do 
	if((b-a)<(c-b)) cout<<b+(b-a); 
	else if((b-a)>(c-b)) cout<<b-(c-b);
	//neu 2 cap hieu bang nhau thi so bi thieu là so cuoi 
	else cout<<c+(b-a); 
} 
