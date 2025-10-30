#include <iostream>

using namespace std;

bool isSortedIncreasing(int arr[], int size);
bool isSortedDecreasing(int arr[], int size);
bool hasAdjecentDuplicates(int arr[], int size);
bool hasDuplicates(int arr[], int size);

int main() {
	int array[6];

	for (int i = 0; i < 6; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> array[i];
	}

	if (isSortedIncreasing(array, 6)) cout << "The data are increasing.\n";
	else cout << "The data are not increasing.\n";
	
	if (isSortedDecreasing(array, 6)) cout << "The data are decreasing.\n";
	else cout << "The data are not decreasing.\n";

	if (hasAdjecentDuplicates(array, 6)) cout << "The data has adjacent duplicates.\n";
	else cout << "The data has no adjacent duplicates.\n";

	if (hasDuplicates(array, 6)) cout << "The data has duplicates.\n";
	else cout << "The data has no duplicates.\n";

	return 0;
}

bool isSortedIncreasing(int arr[], int size) {
	for (int i = 1; i< size; i++) {
		if (arr[i] < arr[i - 1]) {
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		if (arr[i] > arr[i - 1]) {
			return false;
		}
	}
	return true;
}

bool hasAdjecentDuplicates(int arr[], int size) {
	for (int i = 1; i < size; i++) {
		if (arr[i] == arr[i - 1]) {
			return true;
		}
	}
	return false;
}

bool hasDuplicates(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] == arr[j]) {
				return true;
			}
		}
	}
	return false;
}