#include<iostream>
#include<string.h>

using namespace std;

bool check(char code[]){
	int i;
	for (i = 0; code[i] == 'A'; i++){

	}
	const int a = i;
	//cout << "a" << a << endl;
	if (code[i++] == 'P'){
		for (; code[i] == 'A'; i++){

		}
		const int b = i - a - 1;
		if (b == 0){
			return false;
		}
		else{
			if (code[i++] == 'T'){
				for (; code[i] == 'A'; i++){

				}
				const int c = i - b - a - 2;
				//cout << "c" << c << endl;
				//cout << "i" << i << endl;
				//cout << "i" << strlen(code) << endl;
				if (strlen(code) == i && c == a*b){
					return true;
				}
				else{
					return false;
				}
			}
			else{
				return false;
			}
		}
		//cout << "b" << b << endl;
		
	}
	else{
		return false;
	}
}

int main(){
	int num;
	cin >> num;
	int i;

	char code[10][100];
	bool ans[10];
	for (i = 0; i < num; i++){
		cin >> code[i];
		if (check(code[i])){
			ans[i] = true;
		}
		else{
			ans[i] = false;
		}
	}
	for (int j = 0; j < i; j++){
		if (ans[j]){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	
}

