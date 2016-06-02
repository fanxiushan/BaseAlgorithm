//
//  Sort.c
//  BaseAlgorithm
//
//  Created by xiushanfan on 2/6/16.
//  Copyright © 2016年 Frank. All rights reserved.
//

#include "Sort.h"

//选择排序
void selectionSort(int *a,int count) {
    for (int i = 0; i < count; i++) {
        int minIndex = i;
        for (int j = i ; j < count; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = a[minIndex];
            a[minIndex] = a[i];
            a[i] = temp;
        }
    }
}

//冒泡排序
void bubbleSort(int *a,int count) {
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if ( a[j+1] < a[j]) {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}

//插入排序
void insertionSort(int *a,int count) {
    for (int i = 0; i < count; i++) {
        for (int j = i+1; j > 0; j--) {
            if (a[j] < a[j-1]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
}

