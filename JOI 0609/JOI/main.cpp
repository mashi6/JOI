//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int N,M;
	int targets[101];
	int point[101];
	int matrix[101][101];
	
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			matrix[i][j] = 0;
		}
		targets[i] = 0;
		point[i] = 0;
	}
	
	cin >> N >> M;
	for(int i=0;i<M;i++){
		cin >> targets[i];
	}
	for(int j=0;j<M;j++){
		for(int i=0;i<N;i++){
			cin >> matrix[i][j];
		}
	}
	
	for(int j=0;j<M;j++){
		int target = targets[j];
		int count = 0;
		for(int i=0;i<N;i++){
			if(matrix[i][j] == target){
				point[i]++;
			}else{
				count++;
			}
		}
		point[target-1] += count;
	}
	for(int i=0;i<N;i++){
		cout << point[i] << endl;
	}
	
	return 0;
}
