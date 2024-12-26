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
	
	cout << "�ټ����� ���ڸ� �Է��ϼ���" << endl;
		for (int i = 0; i < SIZE;i++) {
			cout << "���� " << i << ": ";
			cin >> numbers[i];
		}
		int total = calculateSum(numbers, SIZE);
		int average = calculateAverage(numbers, SIZE);
	cout << "�հ�� : " << total << endl;
	cout << "����� : dfasdfsdfsdf " << average << endl;
	return 0;
}
