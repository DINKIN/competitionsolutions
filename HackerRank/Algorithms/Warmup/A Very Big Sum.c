#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int sum = 0, num = 0;
    int count = 0, i = 0;
    
    scanf("%d", &count);
    for (; i < count; i++) {
        scanf("%lld", &num);
        sum += num;
    }
    
    printf("%lld", sum);
    return 0;
}
