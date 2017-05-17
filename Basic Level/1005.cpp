#include<iostream>
#include<string>
#include<list>
using namespace std;

int cal(int a){
	if (a % 2 == 0){
		return a / 2;
	}
	else{
		return (3 * a + 1) / 2;
	}
}


int main(){
	int count;
	cin >> count;

	list<int> num;
	list<int>::iterator iter;
	int temp;

	for (int i = 0; i < count; i++){
		cin >> temp;
		num.push_front(temp);
	}

	iter = num.begin();
	while (iter != num.end()){
		int a = *iter;
		while (cal(a) != 1){
			a = cal(a);
			num.remove(a);
		}
		*iter++;
	}

	num.sort();
	num.reverse();

	iter = num.begin();
	cout << *iter++;
	while (iter != num.end()){
		cout << " " << *iter++;
	}
}

