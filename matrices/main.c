//
//  main.c
//  matrices
//
//  Created by Zachary Brachmanis on 4/13/15.
//  Copyright (c) 2015 Zac Brachmanis Developments. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[9][5] = {{1,2,3,4,5},{3,4,4,4,4},{1,0,1,2,2},{5,6,2,1,1},{10,1,5,3,8},{2,1,8,6,2},{43,8,5,1,9},{2,8,9,3,2},{4,6,5,9,1}};
    int captured_points[9][5];
    int x_array_length = 9;
    int y_array_length = 5;
    size_t size = 0;
    
    for (int i = 0; i < x_array_length; i++) {
        for (int j = 0; j < y_array_length; j++) {
            if (j == 4) {
                printf("%d",array[i][j]);
            } else {
                printf("%d,",array[i][j]);
            }
            if (array[i][j] == 0) {
                captured_points[size][0] = i;
                captured_points[size++][1] = j;
            }
        }
        printf("\n");
    }
    printf("\n");
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < y_array_length; j++) {
            array[captured_points[i][0]][j] = 0;
        }
        printf("\n");
        for (int k = 0; k < x_array_length; k++) {
            array[k][captured_points[i][1]] = 0;
        }
    }
    
    for (int i = 0; i < x_array_length; i++) {
        for (int j = 0; j < y_array_length; j++) {
            if (j == 4) {
                printf("%d",array[i][j]);
            } else {
                printf("%d,",array[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
