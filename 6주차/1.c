// 삽입 정렬
#include <stdio.h>

void insertionSortAscending(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];          // 삽입할 값
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];   // 큰 값을 뒤로 한 칸 밀기
            j--;
        }
        arr[j + 1] = key;          // 알맞은 위치에 삽입
    }
}

// 선택 정렬

void selectionSortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;                   

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;               
        }

        int temp = arr[i];             
        arr[i] = arr[min];
        arr[min] = temp;
    }
}


// 삽입 정렬 함수
void insertionSortAscending(int arr[], int n) {

    // 두번째 원소부터 차례대로 정렬
    for (int i=1; i<n; i++) {

        // 현재 삽입할 값을 key에 저장
        int key = arr[i];

        // key 바로 앞 위치부터 비교
        int j = i-1;

        // key보다 큰 값들을 오른쪽으로 한 칸씩 이동
        while (j>=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }

        // 알맞은 위치에 key 삽입
        arr[j+1] = key;
    }
}