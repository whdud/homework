#include <iostream>


float sum(float arr[], int size) {
	float total = 0;
	for (int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total;
}

float averge(float arr[], int size) {
	
	float result = sum(arr, size) / size;

	return result;

}
void sortUp(float arr[], int size) {
	for (int i = 1; i < size; i++) {
		float key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void sortDown(float arr[], int size) {
	for (int i = 1; i < size; i++) {
		float key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] < key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}


int main()
{
	float array[5];
	for (int i = 0; i < 5; i++) {
		std::cout << i+1<<" 번째숫자 입력 : ";
		std::cin >> array[i];
	}

	float totalSum = sum(array, 5);
	float avergeResult = averge(array, 5);
	std::cout << "배열의 합:" << totalSum << std::endl;
	std::cout << "배열의 평균: " << avergeResult << std::endl;

	sortUp(array, 5);
	std::cout << "오름차순 정렬: ";
	for (int i = 0; i < 5; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	sortDown(array, 5);
	std::cout << "내림차순 정렬: ";
	for (int i = 0; i < 5; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	

	
	return 0;
}

