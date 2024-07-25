#include <stdio.h>

int main () {
    int first_array[] = {10,20,30,40,50,60,70,80,90,100};
    int second_array[10];
    int i,j;

    for(i = 0, j = 9; i < 10; i++, j--) {
        second_array[j] = first_array[i];
    }

    for(i = 0; i < 10; i++) {
        first_array[i] = second_array[i];
    }
    for(i = 0; i < 10; i++) {
        printf("%dth element of first_array is %d\n",i,first_array[i]);
    }
    return 0;
}