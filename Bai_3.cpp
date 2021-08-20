#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d; 
	cin>>a>>b>>c>>d; 
	cout<<min(a,min(b,min(c,d)))<<" "<<max(a,max(b,max(c,d))); 
	/*
	ham min(&value1,&value2) tra ve gia tri nho hon giua hai doi so;
	viec dung cac ham min long nhau se tim duoc gia tri nho nhat.
	tuong tu nhu vay doi voi ham max(). 
	*/
    return 0;
}
