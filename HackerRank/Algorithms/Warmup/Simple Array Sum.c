#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int count = 0, i = 0, sum = 0;
    int arr[10000];
    
    scanf("%d", &count);
    for(; i < count; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < count; i++) {
        sum += arr[i];
    }
    
    printf("%d", sum);
    return 0;
}
