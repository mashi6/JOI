//
//  main.cpp

#include <iostream>
using namespace std;


int main(){
	
	while(1){
		int n,m;
		cin >> n >> m;
		if(n == 0 && m == 0)break;
		
		int sugoroku[1001]={},saikoro[1001]={};
		
		for(int i=1;i<=n;i++){
			cin >> sugoroku[i];
		}
		for(int i=0;i<m;i++){
			cin >> saikoro[i];
		}
		
		int now=1;
		for(int i=0;i<m;i++){
			now += saikoro[i];
			now += sugoroku[now];
			
			if(now >= n){
				cout << i+1 << endl;
				break;
			}
		}
	}
	
	return 0;
}
