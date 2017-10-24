//
//  main.cpp

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){	
	vector<int>W,K;
	int input;
	for(int i=0;i<10;i++){
		cin >> input;
		W.push_back(input);
	}
	for(int i=0;i<10;i++){
		cin >> input;
		K.push_back(input);
	}
	sort(W.begin(),W.end());
	sort(K.begin(),K.end());
	
	cout << W[9] + W[8] + W[7] << " " << K[9] + K[8] + K[7] << endl;
	return 0;
}
