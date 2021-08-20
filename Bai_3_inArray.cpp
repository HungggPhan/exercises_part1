#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[4]; 
	for(int i=0;i<4;i++){
		cin>>a[i]; 
	} 
	int Min,Max; 
	for(int i=0;i<4;i++){
		if(a[i]<Min) Min=a[i];
		if(a[i]>Max) Max=a[i]; 
	} 
	cout<<Min<<" "<<Max; 
    return 0;
}
