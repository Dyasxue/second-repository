#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=0,h=0,H=0,t=0;
	bool a=false;
	cin>>n;
	cin>>H;
	for(int i=1;i<n;i++){
		cin>>h;
		if(H-h>0){
			a=true;
		}
		else if(H-h<0){
			if(a==true){
				t++;
			}
			a=false;
		}
		else{
		}
		H=h;
		
	}
	cout<<t;
	return 0;
} 
