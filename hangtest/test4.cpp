#include<bits/stdc++.h>
using namespace std;
int main(){
	longlong x;
	float tong;
	int tich=1;
	cout <<" Nhap x";
	cin>> x;
	tong = 1+ x;
	for (int i=2;i<=50;i++){
		tich=tich*i;
		x=x*x;
		tong = tong+ x/tich;
	}
	if (x<0 or x>50){
		cout<< "invalid";
	}
	else
	 {
	 cout << "e^x = "<<setprecision(4)<< fixed<<tong;
	 } 
	
	return 0;
}
