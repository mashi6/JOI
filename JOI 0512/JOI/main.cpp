//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	string input,answer="";
	cin >> input;
	
	for(int i=0;i<input.size();i++){
		char c = input[i] - 3;
		if(c < 'A'){
			c += 26;
		}
		answer += c;
	}
	cout << answer << endl;
	return 0;
}
