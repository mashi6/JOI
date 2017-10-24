//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int N,M;
	cin >> N >> M;
	int array[101]={};
	for(int i=0;i<N;i++){
		cin >> array[i];
	}
	
	for(int j=1;j<=M;j++){
		for(int i=0;i<N-1;i++){
			if(array[i]%j > array[i+1]%j){
				int memo = array[i];
				array[i] = array[i+1];
				array[i+1] = memo;
			}
		}
	}
	
	for(int i=0;i<N;i++){
		cout << array[i] << endl;
	}
	return 0;
}
