//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int n,answer=0;
	string str;
	string ring[100];
	cin >> str >> n;
	for(int i=0;i<n;i++){
		cin >> ring[i];
		ring[i] += ring[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<ring[i].size()-str.size();j++){
			string memo = ring[i].substr(j,str.size());
			if(memo == str){
				answer ++;
				break;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
