#include <iostream>
using namespace std;

int search(int data[][100], int m, int n, int target, int &t_row, int &t_col) {

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(data[i][j] == target) {
				t_row = i;
				t_col = j;
				return 1; 
			}
		}
	}
	return 0;
}

int main() {

	int m, n;
	int target;
	int result;
	int t_row = 0;
	int t_col = 0;

	cout<<"Please input n and m: ";
	cin>>m>>n;

	int matrix[100][100];

	cout<<"Please input the distinct of matrix n*m by row major:"<<endl;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin>>matrix[i][j];
		}
	}

	cout<<"Please input a target to search (<ctrl>-d to exit): ";
	while(cin>>target) {

		result = search(matrix, m, n, target, t_row, t_col);
	
		// cout<<result<<t_row<<t_col<<endl;
		if(result == 0) {
			cout<<"Not found."<<endl;
		} else {
			cout<<"Found in row "<<t_row<<", column "<<t_col<<" (indexed from 0)"<<endl;
		}

		cout<<"Please input a target to search (<ctrl>-d to exit): ";
	}

	return 0;
}