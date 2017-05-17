#include<iostream>

using namespace std;

int main(){
	int num;
	cin >> num;

	int count = 0;
	

	int a = 0;
	int b = 0;

	for (int i = 3; i <= num; i=i+2){
		bool check = true;
		for (int j = 3; j*j <= i; j=j+2){
			if (i%j == 0){
				check = false;
				break;
			}
		}
		if (check){
			b = i;
			if (b - a == 2){
				count++;
			}
			a = b;
		}
	}

	cout << count;

}