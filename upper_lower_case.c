#include <stdio.h>

int main () {
    char country[] = {'b','a','n','g','l','a','d','e','s','h','\0'};
    int i;
    // country[0] = 'A' + ('b' - 'a');
    // country[4] = 'A' + ('l' - 'a');
    for(i = 0; i < 10; i++) {
        if(country[i] >= 97 && country[i] <= 122) {
            country[i] = 'A' + (country[i] - 'a');
        }
        
    }
    printf("Country : %s\n",country);
}