//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int L,A,B,C,D;
	cin >> L >> A >> B >> C >> D;

	int L1 = A / C;
	if(A%C != 0)L1++;
	int L2 = B / D;
	if(B%D != 0)L2++;
	
	cout << L - max(L1,L2) << endl;
	return 0;
}

