#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e; 
	cin>>a>>b>>c>>d>>e; 
	int sum=a+b+c+d+e;
	int Min=sum-max(a,max(b,max(c,max(d,e))));
	int Max=sum-min(a,min(b,min(c,min(d,e))));
	cout<<Min<<" "<<Max;
    return 0;
}
/*
thay vi tim tat ca C(4,5) tong cua 4 trong 5 gia tri roi so sanh;
ta chi can tinh tong 5 gia tri nhap vao va tru di so lon nhat => thu duoc tong nho nhat
và nguoc lai 
*/
