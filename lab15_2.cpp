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
		cout << "Row " << i+1 << ":";
		for(int j = 0; j < N; j++){
			cin >> m[i][j] ;
		}
	}
}

void findLocalMax(const double [][N], bool [][N]){

}

void showMatrix(const bool s[][N]){
	for(int i = 0; i < N ; i++){
		
	}
}