#include<iostream>
#include<list>

using namespace std;

int main(){
	int num[100];
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++){
		cin >> num[i];
	}
	
	list<int> temp;
	m = m%n;
	
	for (int i = 0; i < m; i++){
		temp.push_back(num[i]);
	}
	for (int i = m; i < n; i++){
		temp.push_back(num[i]);
		num[i] = temp.front();
		temp.pop_front();
	}
	for (int i = 0; i < m; i++){
		num[i] = temp.front();
		temp.pop_front();
	}

	cout << num[0];
	for (int i = 1; i < n; i++){
		cout << " " << num[i];
	}



}