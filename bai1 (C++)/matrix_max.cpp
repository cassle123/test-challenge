#include <iostream>
using namespace std;
#define N  4

void printMatrix(int matrix[][N], int n) {
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int maxSum(int a, int b, int c){
	int max = a;
	if(max < b){
		max = b;
	}
	if(max < c){
		max = c;
	}
	return max;
}
int maxSumDiagonal(int matrix[][N]){
	int max = 0;
	for(int i =0; i < N; i++){
		int sum1 = 0;
		int sum2 = 0;
		int row = 0;
		int col = i;
		while(row < N && col < N){
			sum1 += matrix[row][col];
			sum2 += matrix[col][row];
			col++;
			row++;
		}
		max = maxSum(max, sum1, sum2);
	}
	return max;
}
int main(){
	int matrix[][N] = {
		{1, 3, 4, 6},
		{2, 5, 6, 1},
		{3, 8, 4, 6},
		{9, 7, 6, 0},
	};
	printMatrix(matrix, 4);
	cout << "Tong lon nhat tim duoc: " << maxSumDiagonal(matrix) << endl;
	
	return 0;
}
