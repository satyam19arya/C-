#include <stdio.h>

int testDemo(int, int);

int main() {
    int you = 64, me = 32;
    int we = testDemo(you, me);
    printf("%d %d %d\n", me, you, we);
    return 0;
}

int testDemo(int me, int you) {
    me = me + you; // 32 + 32 + 64 = 128
    return me - you; // 128 - 64
    you = you - me;
    return me + you;
}