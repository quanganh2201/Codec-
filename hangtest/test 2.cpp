#include<iostream>
using namespace std;
 void sort(float array[], int size, bool isAscending){
	 if (isAscending==true){
 		for (int i=0; i< size;i++){
 			for(int j=i+1; j<size;j++){
 				if (array[i]>array[j]){
 					float doi= array[i];
 					array[i]=array[j];
 					array[j]=doi;
				 }
			 }
		 }
	 }
	 else {
	 	for (int i=0; i<size;i++){
 			for(int j=i+1; j<size;j++){
 				if (array[i]<array[j]){
 					float doi= array[i];
 					array[i]=array[j];
 					array[j]=doi;
 				}
 			}
 		}
	}

 }
 int main(){
 	float array[1000];
 	int size;
 	bool isAscending;
 	cin >> size;
 	for (int i=0; i<size;i++){
 		cin >> array[i];
	 }
	cin >>isAscending;
	sort (array,size,isAscending);
	for (int i=0; i< size; i++){
		cout << array[i]<<"; ";
	}
	return 0;
}
 
