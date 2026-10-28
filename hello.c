#include <stdio.h>

int main() {
    int m[3] = {1, 2, 3};
    printf("%s\n", "Hello, world!");
    for(int i=0; i<=3; i++){
        printf("%d\t%p\n", m[i], &m[i]);
    }
    return 0;
}