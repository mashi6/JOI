//
//  main.cpp

#include <iostream>
using namespace std;

bool checked[501];
int n,m;
bool matrix[501][501];

void reset(){
	for(int i=0;i<501;i++){
		checked[i] = false;
		for(int j=0;j<501;j++){
			matrix[i][j] = false;
		}
	}
	n = m = 0;
}
void dfs(int depth,int now,int parent){
	if(depth >= 2)return;
	for(int i=1;i<501;i++){
//		if(checked[i])continue;
		if(i == now)continue;
		if(i == parent)continue;
		if(matrix[now][i]){
			checked[i] = true;
			dfs(depth+1,i,now);
		}
	}
}

int main(){
	while(1){
		reset();
		cin >> n >> m;
		if(n == 0 && m == 0)break;
		int input1,input2;
		for(int i=0;i<m;i++){
			cin >> input1 >> input2;
			matrix[input1][input2] = true;
			matrix[input2][input1] = true;
		}
		checked[1] = true;
		dfs(0,1,-1);
		int answer = 0;
		for(int i=2;i<501;i++){
			if(checked[i])answer++;
		}
		cout << answer << endl;
	}
	return 0;
}
