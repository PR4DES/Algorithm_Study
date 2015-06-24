#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int caseNum;
	cin >> caseNum;
	if(caseNum>10 || caseNum<1) exit(1);
	string input[caseNum];
	for(int i=0; i<caseNum; i++)
		cin >> input[i];
	for(int j=0; j<caseNum; j++) {
		for(int i=0; i<(2*input[j].length()); i++) if(i%2==0) cout << input[j][i];
		for(int i=0; i<input[j].length(); i++) if(i%2!=0) cout << input[j][i];
		cout << endl;
	}
}
