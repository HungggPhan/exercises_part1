#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a=n/100;  //a = 2 so dau cua n  
	int b=n%100;  // b = 2 so cuoi cua n 
	//kiem tra xem so dau cua a + so cuoi cua a co bang so dau cua b cong so cuoi cua b khong? 
	if((a/10+a%10)==(b/10)+(b%10)) cout<<"YES"; 
	else cout<<"NO"; 
    return 0;
}
