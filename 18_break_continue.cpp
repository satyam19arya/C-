// break
#include <stdio.h>

int main() {
    int x = 10, y = 5, ans;
    while(y-- >= 1, x-- >= 1) {
        if(y == 0)
            break;
        ans = x / y;
        printf("%d / %d = %d \n", x, y, ans);
    }
    printf("Out of while loop");
    return 0;
}

// continue
#include <stdio.h>

int main() {
    int x = 10, y = 5, ans;
    while(y-- >= 1, x-- >= 1) {
        if(y == 0)
            continue;;
        ans = x / y;
        printf("%d / %d = %d \n", x, y, ans);
    }
    printf("Out of while loop");
    return 0;
}