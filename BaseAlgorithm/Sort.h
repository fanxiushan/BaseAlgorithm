//
//  Sort.h
//  BaseAlgorithm
//
//  Created by xiushanfan on 2/6/16.
//  Copyright © 2016年 Frank. All rights reserved.
//

#ifndef Sort_h
#define Sort_h

#include <stdio.h>

/**
 *  选择排序
 *
 *  @param a     待排序的数组
 *  @param count 数组元素个数
 */
void selectionSort(int *a,int count);

/**
 *  冒泡排序
 *
 *  @param a     待排序的数组
 *  @param count 数组元素个数
 */
void bubbleSort(int *a,int count);

/**
 *  插入排序
 *
 *  @param a     待排序的数组
 *  @param count 数组元素个数
 */
void insertionSort(int *a,int count);


#endif /* Sort_h */
