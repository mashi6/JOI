//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int check[201];
	int who[201];
	int matrix[201][3];
	int point[201];
	for(int i=0;i<201;i++){
		check[i] = 0;
		who[i] = -1;
		point[i] = 0;
		for(int j=0;j<3;j++){
			matrix[i][j] = 0;
		}
	}
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin >> matrix[i][j];
		}
	}
	
	for(int j=0;j<3;j++){
		for(int i=0;i<201;i++){
			check[matrix[i][j]] ++;
			who[matrix[i][j]] = i;
		}
		for(int i=0;i<201;i++){
			if(check[i] == 1){
				point[who[i]] += i;
			}
		}
		for(int i=0;i<201;i++){
			check[i] = who[i] = 0;
		}
	}
	
	for(int i=0;i<n;i++){
		cout << point[i] << endl;
	}
	
	return 0;
}
