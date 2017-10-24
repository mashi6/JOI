//
//  main.cpp

#include <iostream>
using namespace std;


int main(){	
	int x,yb,yc,yd,p;
	cin >> x >> yb >> yc >> yd >> p;
	cout << min(p*x,yb + max(p - yc,0)*yd) << endl;
	return 0;
}
