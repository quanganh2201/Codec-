#include<iostream>
using namespace std;
void tinhchan( int k, int z){
    int ga,cho;
    ga= 2*k-z/2;
    cho= z/2-k;
	cout << "dog: "<<cho;
	cout<<"chicken: "<<ga; 
}
int main(){
	int k;
	int z;
	cin>>k>>z;
	cout<<"tong ga và cho "<< k;
	cout <<"tong chan ga va cho"<<z;
	tinhchan(k,z);
	return 0;
}
