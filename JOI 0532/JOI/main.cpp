//
//  main.cpp

#include <iostream>
using namespace std;


int main(){
	int h1,h2,h3;//before
	int m1,m2,m3;
	int s1,s2,s3;
	int h1_,h2_,h3_;//after
	int m1_,m2_,m3_;
	int s1_,s2_,s3_;
	cin >> h1 >> m1 >> s1 >> h1_ >> m1_ >> s1_;
	cin >> h2 >> m2 >> s2 >> h2_ >> m2_ >> s2_;
	cin >> h3 >> m3 >> s3 >> h3_ >> m3_ >> s3_;
	int alls1 = (h1_*3600 + m1_*60 + s1_) - (h1*3600 + m1*60 + s1);
	int alls2 = (h2_*3600 + m2_*60 + s2_) - (h2*3600 + m2*60 + s2);
	int alls3 = (h3_*3600 + m3_*60 + s3_) - (h3*3600 + m3*60 + s3);
	
	int ansh1 = alls1 / 3600;
	int ansh2 = alls2 / 3600;
	int ansh3 = alls3 / 3600;
	alls1 %= 3600;
	alls2 %= 3600;
	alls3 %= 3600;
	
	int ansm1 = alls1/60;
	int ansm2 = alls2/60;
	int ansm3 = alls3/60;
	alls1 %= 60;
	alls2 %= 60;
	alls3 %= 60;
	
	int anss1 = alls1;
	int anss2 = alls2;
	int anss3 = alls3;
	
	cout << ansh1 << " " << ansm1 << " " << anss1 << endl;
	cout << ansh2 << " " << ansm2 << " " << anss2 << endl;
	cout << ansh3 << " " << ansm3 << " " << anss3 << endl;
	return 0;
}