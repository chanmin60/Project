#include <iostream>
using namespace std;

int calculateSum(int numbers[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += numbers[i];
	}
	return sum;
}

double calculateAverage(int numbers[], int size) {
	double sum = calculateSum(numbers, size);
	double average = sum / size;
	return average;
}

int main() {
	const int SIZE = 5;
	int numbers[SIZE];
	
	cout << "다섯 숫자를 입력하세요" << endl;
		for (int i = 0; i < SIZE;i++) {
			cout << "숫자 " << i << ": ";
			cin >> numbers[i];
		}
		int total = calculateSum(numbers, SIZE);
		int average = calculateAverage(numbers, SIZE);
	cout << "합계 : " << total << endl;
	cout << "평균 : " << average << endl;
	return 0;
}
