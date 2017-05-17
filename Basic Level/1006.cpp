#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	const int a = num % 10;
	const int b = num/10 % 10;
	const int c = num / 100 % 10;

	for (int i = 0; i < c; i++) {
		cout << "B";
	}
	for (int i = 0; i < b; i++) {
		cout << "S";
	}
	for (int i = 0; i < a; i++) {
		cout << i+1;
	}


}