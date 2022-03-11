#include <iostream>
using namespace std;

int main() {
	int* arr = new int[5];	// 입력받을 정수 배열 동적 할당
	double average = 0;	// 정수 5개의 평균 
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];	// 5개의 정수 입력받기(arr[0] ~ arr[4])
		average += arr[i];	// 평균 값 계산을 위해 누적 합 구하기
	}
	average /= 5;	// 평균 값 최종 계산
	cout << "평균 " << average << endl;
	delete[] arr;	// 배열의 반환
}