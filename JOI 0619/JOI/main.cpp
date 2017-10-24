//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int min1 = 100,min2 = 100,sum1 = 0,sum2 = 0;
	int input;
	for(int i=0;i<4;i++){
		cin >> input;
		min1 = min(min1,input);
		sum1 += input;
	}
	for(int i=0;i<2;i++){
		cin >> input;
		min2 = min(min2,input);
		sum2 += input;
	}
	
	cout << (sum1 - min1) + (sum2 - min2)<< endl;
	
	return 0;
}
