#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b; 
	bool l[4]; //khai bao mang loai san pham 
	memset(l,0,sizeof(l)); //gan het tat ca gia tri trong mang = 0.  
	if(a>=3&&b<=4) l[1]=1; //co the la loai 1 
	if(a<=6&&b>=2) l[2]=1; //co the la loai 2 
	if(a<=2&&b<=3) l[3]=1; //co the la loai 3 
	if(l[1]==l[2]&&l[2]==l[3]&&l[3]==0) cout<<0; //neu ca 3 deu khong phu hop: in ra 0; 
	else{
		for(int i=1;i<=3;i++){
			if(l[i]==1) cout<<i<<" "; //loai nao phu hop thi in ra
		} 
	} 
	return 0; 
} 
