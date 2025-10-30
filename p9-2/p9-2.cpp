#include <iostream>

using namespace std;

bool isSortedIncreasing(int arr[], int size);
bool isSortedDecreasing(int arr[], int size);

int main() {
	int array[6] = { 1, 3, 5, 7, 9, 11 };

	if (isSortedIncreasing(array, 6)) cout << "The data are increasing.\n";
	else cout << "The data are not increasing.\n";
	
	if (isSortedDecreasing(array, 6)) cout << "The data are decreasing.\n";
	else cout << "The data are not decreasing.\n";

	return 0;
}

bool isSortedIncreasing(int arr[], int size) {
	for (int i = 1; i< size; i++) {
		if (arr[i] <= arr[i - 1]) {
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		if (arr[i] >= arr[i - 1]) {
			return false;
		}
	}
	return true;
}