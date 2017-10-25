//
//  main.cpp

#include <iostream>
using namespace std;
const int White = 0;
const int Red = 1;
const int Blue = 2;

int main(){
	int n,m;
	int color[51][4];
	for(int i=0;i<51;i++){
		for(int j=0;j<4;j++){
			color[i][j] = 0;
		}
	}
	
	string input[51];
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> input[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			switch(input[i][j-1]){
				case 'W':
					color[i][White] ++;
					break;
				case 'B':
					color[i][Blue] ++;
					break;
				case 'R':
					color[i][Red] ++;
					break;
			}
		}
	}
	int answer = 1000000;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k<=n;k++){
				if(i+j+k != n)continue;
				int white,blue,red;
				white = blue = red = 0;
				for(int w=1;w<=i;w++){
					white += color[w][Blue] + color[w][Red];
				}
				for(int b=i+1;b<=i+j;b++){
					blue += color[b][White] + color[b][Red];
				}
				for(int r=i+j+1;r<=i+j+k;r++){
					red += color[r][Blue] + color[r][White];
				}
				
				answer = min(answer,white+blue+red);
				
			}
		}
	}
	
	cout << answer << endl;
	return 0;
}
