//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int input;
	int sum = 0;
	for(int i = 0;i < 4;i++){
		cin >> input;
		sum += input;
	}
	cout << sum / 60 << endl << sum % 60 << endl;
	return 0;
}

