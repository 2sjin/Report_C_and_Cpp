// 20194146 이승진, 연습문제 12-1
#include <stdio.h>

int main(void) {
	// 배열 선언
	int arr[] = {23, 10, 15, 92, 88};
	int size = sizeof(arr) / sizeof(arr[0]);	// 20 / 4 = 5

	// 포인터 *max를 선언하여 arr[0]을 최대값으로 가정하여 최댓값 산출
	int* max = arr;

	// 첫 번째 배열 요소를 포인터 배열로 변환
	*arr = (int*)arr[0];

	printf("■ 주어진 배열 요소 중에서 최댓값 구하는 프로그램\n");
	printf("배열 요소 : arr[ ] = {23, 10, 15, 92, 88}\n\n");

	// arr+i 번지의 데이터 값 출력(arr은 배열의 시작 주소)
	for (int i = 0; i < size; i++) {
		printf("%d번째 배열 요소 : %d\n", i, *(arr+i)); 

		// 배열 요소와 (int)max를 if 문으로 비교하여 최댓값 판별
		if (*(arr+i) > *max)
			*max = *(arr+i);
	}

	printf("%d개 숫자 중에서 최댓값은 %d입니다.\n", size, *max);
	return 0;
}