//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
		int n,m;
		int time[101][101];
		string matrix[101];
	
		cin >> n >> m;
		for(int i=0;i<n;i++){
			cin >> matrix[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(matrix[i][j] == 'c'){
				time[i][j] = 0;
			}else{
				if(j == 0){
					time[i][j] = -1;
				}else if(time[i][j-1] == -1){
					time[i][j] = -1;
				}else{
					time[i][j] = time[i][j-1] + 1;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << time[i][j];
			if(j != m-1){
				cout << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
