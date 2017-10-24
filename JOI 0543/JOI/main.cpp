//
//  main.cpp

#include <iostream>
using namespace std;


int main(){
	while(1){
		int sum;
		int input;
		int SUM=0;
		cin >> sum;
		if(sum == 0)break;
		for(int i=0;i<9;i++){
			cin >> input;
			SUM += input;
		}
		cout << sum - SUM << endl;
	}
	return 0;
}
