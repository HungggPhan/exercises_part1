#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if((a+b)>c&&(b+c)>a&&(a+c)>b&&((pow(a,2)+pow(b,2))==pow(c,2)||(pow(a,2)+pow(c,2))==pow(b,2)||(pow(b,2)+pow(c,2))==pow(a,2))) cout<<"YES"; //Pythago
	else cout<<"NO"; 
	return 0; 
} //ham pow(&a,&b) tra ve a^b
 
