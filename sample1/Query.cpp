#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int inputNum;
	cin >> inputNum;
	if(inputNum <1 || inputNum > 100000) exit(1);

	int input[inputNum];
	for(int i=0; i<inputNum; i++) {
		cin >> input[i];
		if(input[i]<-100 || input[i]>100) exit(1);
	}

	int questNum;
	cin >> questNum;
	if(questNum <1 || questNum >100000) exit(1);

	int quest[questNum][2];
	for(int i=0; i<questNum; i++) {
		cin >> quest[i][0] >> quest[i][1];
	}
	
	for(int j=0; j<questNum; j++) {
		int min=input[quest[j][0]-1];
		for(int i=quest[j][0]; i<quest[j][1]; i++) {
			if(min > input[i]) min = input[i];
		}
		cout << min << endl;
	}
}
