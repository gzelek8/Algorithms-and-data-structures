//
// Created by peepe on 03.02.2020.
//

#include <iostream>

#ifndef AISD_SORT_H
#define AISD_SORT_H

#endif //AISD_SORT_H

void bubbleSort(int *array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

void insertSort(int *array, int n) {
    int key, index;
    for (int i = 1; i < n; i++) {
        key = array[i];
        index = i - 1;
        while (index >= 0 && key < array[index]) {
            array[index + 1] = array[index];
            index--;
        }
        array[index + 1] = key;
    }
}

void selectSort(int *arr, int n) {
    int index, tmp;
    for (int i = 0; i < n; i++) {
        index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }
        tmp = arr[i];
        arr[i] = arr[index];
        arr[index] = tmp;
    }
}

void shellSort(int *array, int n) {
    int temp;
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

void quickSort(int *array, int left, int right) {
    int i = left;
    int j = right;
    int x = array[right];
    do {
        while (array[i] < x) {
            i++;
        }
        while (array[j] > x) {
            j--;
        }
        if (i <= j) {
            std::swap(array[i], array[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (left < j) quickSort(array, left, j);
    if (right > i) quickSort(array, i, right);

}

