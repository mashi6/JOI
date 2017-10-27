//
//  main.cpp

#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){	
	int w,h;
	cin >> w >> h;
	int n;
	cin >> n;
	int matrix[1001][2];
	for(int i=0;i<n;i++){
		cin >> matrix[i][0] >> matrix[i][1];
	}
	
	int answer = 0;
	for(int i=0;i<n-1;i++){
		int x,y;
		x = matrix[i+1][0] - matrix[i][0];
		y = matrix[i+1][1] - matrix[i][1];
		if(x*y < 0){
			answer += abs(x) + abs(y);
		}else{
			answer += min(abs(x),abs(y)) + (max(abs(x),abs(y)) - min(abs(x),abs(y)));
		}
	}
	cout << answer << endl;
	
	return 0;
}
