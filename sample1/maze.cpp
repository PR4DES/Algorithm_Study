#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	int width, height;
	cin >> width >> height;
	if(width>20 || width<1 || height>20 || height<1) exit(1);

	int maze[width][height];
	for(int i=0; i<height; i++) {
		for(int j=0; j<width; j++) {
			cin >> maze[i][j];
		}
	}
	cout << maze[0][0] << endl;

}
