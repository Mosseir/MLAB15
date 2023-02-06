#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double m[][N]){
	for(int i = 0; i < N ; i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0; j < N; j++){
			cin >> m[i][j] ;
		}
	}
}

void findLocalMax(const double x[][N], bool y[][N]){
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			if ((i > 0 && i <= N - 2) && (j > 0 && j <= N - 2)){
				if ((x[i][j] >= x[i - 1][j]) && (x[i][j] >= x[i][j - 1]) && (x[i][j] >= x[i][j + 1]) && (x[i][j] >= x[i + 1][j])){
					y[i][j] = 1;
				}else y[i][j] = 0;
				}else y[i][j] = 0;
		}
	}
}

void showMatrix(const bool s[][N]){
	for(int i = 0; i < N ; i++){
		for (int j = 0; j < N; j++)
		{
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
}