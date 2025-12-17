#include <stdio.h>

struct time {
    int h, m, s;
};

struct time tick(struct time t) {
    t.s++;
    if (t.s >= 60) {
        t.s = 0;
        t.m++;
        if (t.m >= 60) {
            t.m = 0;
            t.h++;
            if (t.h >= 24) {
                t.h = 0;
            }
        }
    }
    return t;
}

int main() {
    struct time t;
    scanf("%i:%i:%i", &t.h, &t.m, &t.s);

    t = tick(t);

    printf("%02i:%02i:%02i\n", t.h, t.m, t.s);
    return 0;
}