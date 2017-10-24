//
//  main.cpp

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main(){
	while(1){
		char input[100001];
		int JOI=0,IOI=0;
		
		if(scanf("%s",input) == EOF){
			break;
		}
		
		for(int i=0;i<strlen(input)-2;i++){
			if(input[i] == 'J' && input[i+1] == 'O' && input[i+2] == 'I'){
				JOI ++;
			}
			if(input[i] == 'I' && input[i+1] == 'O' && input[i+2] == 'I'){
				IOI ++;
			}
		}
		
		cout << JOI << endl << IOI << endl;
	}
	return 0;
}
