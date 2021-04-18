#include <bits/stdc++.h>
using namespace std;

float getVal(int a){
	float sum = 1;
	for (auto h=2;h<=sqrt(a);h++){
		if (a%h==0){
			sum += h + (a / h);
		} 
	}
	return sum / a;
}

int main()
{
	int i, j;
	cin >> i >> j;
	pair<int, float> minim;
	minim.second = 10000000;
	for (int k = i; k<=j; k++){
		float curerg = getVal(k);
		if (curerg < minim.second) {
			minim.first = k;
			minim.second = curerg;
		}
	}
	cout << minim.first << "\n";
}
