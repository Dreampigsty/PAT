#include<iostream>
#include<string>
using namespace std;

int main(){
	int count;
	cin >> count;

	string maxName, maxNum,name,num;
	string minName, minNum;
	int maxScore=-1, minScore=101, score=0;

	int i;
	for (i = 0; i < count; i++){
		cin >> name >> num >> score;
		if (score > maxScore){
			maxScore = score;
			maxName = name;
			maxNum = num;
		}
		if (score < minScore){
			minScore = score;
			minName = name;
			minNum = num;
		}
	}
	cout << maxName <<" "<< maxNum<<endl;
	cout << minName << " "<<minNum << endl;
}