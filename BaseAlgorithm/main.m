//
//  main.m
//  BaseAlgorithm
//
//  Created by xiushanfan on 2/6/16.
//  Copyright © 2016年 Frank. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Sort.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        int a[5] = {1,3,2,5,4};
        int count = 5;
        bubbleSort(a, count);
        for (int i = 0; i < count; i++) {
            NSLog(@"%d",a[i]);
        }
    }
    return 0;
}
