#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int memberNum;
	cin >> memberNum;
	if(memberNum <1 || memberNum >6000) exit(1);

	int closeness[memberNum];
	for(int i=0; i<memberNum; i++) {
		cin >> closeness[i];
		if(closeness[i]<-128||closeness>127) exit(1);
	}


}
