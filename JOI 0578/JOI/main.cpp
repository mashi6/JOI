//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int n;
	cin >> n;
	string sign;
	cin >> sign;
	string input[101];
	for(int i=0;i<n;i++){
		cin >> input[i];
	}
	int answer = 0;
	for(int i=0;i<n;i++){//全ての看板について。
		string str="";
		for(int j=0;j<100;j++){//間隔
			for(int k=0;k<input[i].size();k++){//始点
				for(int l=0;l<sign.size();l++){//文字１つ１つについて。
					if(k + j*l >= input[i].size())break;
					str += input[i][k + j*l];
				}
				if(str == sign){
					answer ++;
					break;
				}else{
					str = "";
				}
			}
			if(str == sign){
				break;
			}
		}
	}
	
	cout << answer << endl;
	
	return 0;
}
