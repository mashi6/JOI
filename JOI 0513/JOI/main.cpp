//
//  main.cpp

#include <iostream>
using namespace std;
int n,m;
int number[201];

void cut(int k){
	int Numbers[201]={};
	for(int i=0;i<k;i++){
		Numbers[2*n-k+i] = number[i];
	}
	for(int i=0;i<2*n-k;i++){
		Numbers[i] = number[i+k];
	}
	for(int i=0;i<201;i++){
		number[i] = Numbers[i];
	}
}
void shaffle(){
	int array1[101]={},array2[101]={};
	for(int i=0;i<n;i++){
		array1[i] = number[i];
	}
	for(int i=n;i<2*n;i++){
		array2[i-n] = number[i];
	}
	for(int i=0;i<n;i++){
		number[2*i] = array1[i];
		number[2*i+1] = array2[i];
	}
}

int main(){
	int order[1001];
	cin >> n >> m;
	for(int i=1;i<=200;i++){
		number[i-1] = i;
	}
	for(int i=0;i<m;i++){
		cin >> order[i];
	}
	
	for(int i=0;i<m;i++){
		if(order[i] == 0){
			shaffle();
		}else{
			cut(order[i]);
		}
	}
	
	for(int i=0;i<2*n;i++){
		cout << number[i] << endl;
	}
	
	return 0;
}
