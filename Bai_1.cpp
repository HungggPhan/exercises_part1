#include <bits/stdc+.h>
using namespace std;
int main(){
	int n;//n:so qua tao 
	cin>>n; //nhap n
	if(n%2==0){ //neu n chan: 
		cout<<n/2<<" "<<n/2; //thi so tao 2 nguoi bang nhau = n/2 	} 
	else { //neu n le: 
		cout<<n/2<<" "<<n-n/2;// thi so tao cua Viet bang phan nguyen cua n:2, con lai la cua Nam 
	} 
	return 0; 
} 
/* #include <bits/stdc++.h> :
thu vien <bits/stdc++.h> la thu vien thong dung trong lap trinh thi dau.
No la tong hop cua cac thu vien co ban nhu <stdio.h> <iostream> <string> <vector> <stack> <queue> <math.h> <algorithm> <map> <set>...
Khi ta khai bao thu vien nay, ta khong can phai khai bao cac thu vien tren nua va co the dung tat ca cac ham trong cac thu vien tren.
Khi thi, khuyen khich nen su dung thu vien nay de toi uu hoa thoi gian code. 
*/ 
