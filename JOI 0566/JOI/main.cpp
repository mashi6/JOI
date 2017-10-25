//
//  main.cpp

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){	
	int n;
	int team[3][10001];
	int point[3][10001];
	int gets[10001];
	for(int i = 0;i<3;i++)for(int j=0;j<10001;j++)gets[j] = team[i][j] = point[i][j]= 0;
	
	cin >> n;
	for(int i=0;i<n*(n-1)/2;i++){
		cin >> team[0][i] >> team[1][i] >> point[0][i] >> point[1][i];
	}
	
	for(int i=0;i<n*(n-1)/2;i++){
		if(point[0][i] > point[1][i]){
			gets[team[0][i]] += 3;
		}else if(point[0][i] < point[1][i]){
			gets[team[1][i]] += 3;
		}else{
			gets[team[0][i]] += 1;
			gets[team[1][i]] += 1;
		}
	}
	
	vector <pair<int,int> > vec;
	for(int i=1;i<=n;i++){
		vec.push_back(make_pair(gets[i],i));//点数、番号
	}
	sort(vec.begin(),vec.end());
	int answer[101]={};
	int memo = -1;
	int count = 0;
	for(int i=n-1;i>=0;i--){
		if(memo == vec[i].first){
			count ++;
		}else{
			memo = vec[i].first;
			count = 0;
		}
		answer[vec[i].second] = n - i - count;
	}
	for(int i=1;i<=n;i++){
		cout << answer[i] << endl;
	}
	
	return 0;
}
