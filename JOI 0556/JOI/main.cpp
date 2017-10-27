//
//  main.cpp

#include <iostream>
using namespace std;
using ll = long long;

ll max(ll x,ll y){
	if(x > y){
		return x;
	}else{
		return y;
	}
}

int main(){	
	ll n;
	cin >> n;
	int k;
	cin >> k;
	ll input[1001];
	for(int i=0;i<k;i++){
		ll inputA,inputB;
		cin >> inputA >> inputB;
		if(inputA > n/2){
			inputA = n - inputA + 1;

		}
		if(inputB > n/2){
			inputB = n - inputB + 1;
		}
		input[i] = min(inputA,inputB);
	}
	
	for(int i = 0;i<k;i++){
		switch(input[i]%3){
			case 0:
				cout << "3" << endl;
				break;
			case 1:
				cout << "1" << endl;
				break;
			case 2:
				cout << "2" << endl;
		}
	}
	
	return 0;
}
