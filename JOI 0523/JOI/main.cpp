//
//  main.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int TARO = 0;
const int HANAKO = 1;
vector<int> card[2];
int n;
int now=-1;
int turn = TARO;
//int hanakopoint,taropoint;

void search(){
	int Min = 10000;
	for(int i=0;i<card[turn].size();i++){
		if(now < card[turn][i]){
			Min = min(card[turn][i],Min);
		}
	}
	
	if(Min == 10000){
		now = -1;
	}else{
		now = Min;
		for(int i=0;i<card[turn].size();i++){
			if(card[turn][i] == now){
				card[turn].erase(card[turn].begin() + i);
				break;
			}
		}
	}
}

int main(){	
	while(1){
		bool check[201];
		
		for(int i=0;i<201;i++){
			check[i] = true;
		}
		card[TARO].clear();
		card[HANAKO].clear();

		cin >> n;
		if(n==0)break;
		int input;
		for(int i=0;i<n;i++){
			cin >> input;
			card[TARO].push_back(input);
			check[input] = false;
		}
		for(int i=1;i<=2*n;i++){
			if(check[i]){
				card[HANAKO].push_back(i);
			}
		}
		
		sort(card[TARO].begin(),card[TARO].end());
		sort(card[HANAKO].begin(),card[HANAKO].end());
		now = -1;
		turn = TARO;
		
		while(card[TARO].size() != 0 && card[HANAKO].size() != 0){
			search();
			if(turn){
				turn = TARO;
			}else{
				turn = HANAKO;
			}
		}
		cout << card[HANAKO].size() << endl << card[TARO].size() << endl;//なぜか逆
	}
	return 0;
}
