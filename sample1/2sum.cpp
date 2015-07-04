#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int solNum;
	cin >> solNum;
	if(solNum<2 || solNum>100000) exit(1);

	int solution[solNum];
	for(int i=0; i<solNum; i++) {
		cin >> solution[i];
		if(solution[i]<-1000000000 || solution[i]>1000000000) exit(1);
	}

	int sum, a, b;
	int min=99998;
	for(int i=0; i<solNum; i++) {
		for(int j=i+1; j<solNum; j++) {
			sum = solution[i]+solution[j];
			if(sum<0) sum = -sum;
			if(sum<min) { min=sum; a=i; b=j; }
		}
	}

	cout << solution[a] << " " << solution[b] << endl;
}
