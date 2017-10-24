//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int pastamin = 1000000;
	int juicemin = 1000000;
	int input;
	for(int i=0;i<3;i++){
		cin >> input;
		pastamin = min(input,pastamin);
	}
	for(int i=0;i<2;i++){
		cin >> input;
		juicemin = min(input,juicemin);
	}
	
	cout << pastamin + juicemin - 50 << endl;
	return 0;
}

