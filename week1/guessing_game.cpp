#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void func(int,int);

int main() {
	int highest=10, lowest=1;
	func(highest, lowest);
}

void func(int highest, int lowest) {
	if(highest<lowest) { cout << "Stan is dishonest" << endl; return; }
	int ollyNum;
	cin >> ollyNum;
	string ans;
	cin >> ans;
	cin >> ans;
	if(ans == "on") { cout << "Stan may be honest" << endl; return; }
	else if(ans == "high") func(ollyNum-1, lowest);
	else if(ans == "low") func(highest, ollyNum+1);
	else { cout << "invalid answer" << endl; exit(1); }
}
