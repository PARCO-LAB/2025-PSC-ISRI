#include <stdio.h>

struct time {
    int h, m, s;
};

// Converte orario in secondi totali
int to_seconds(struct time t) {
    return t.h * 3600 + t.m * 60 + t.s;
}

struct time elapsed(struct time t1, struct time t2) {
    int sec1 = to_seconds(t1);
    int sec2 = to_seconds(t2);
    int diff;

    // Valore assoluto
    if (sec1 > sec2) 
        diff = sec1 - sec2;
    else 
        diff = sec2 - sec1;

    struct time res;
    res.h = diff / 3600;
    diff = diff % 3600;
    res.m = diff / 60;
    res.s = diff % 60;

    return res;
}

int main() {
    // (non è richiesto scanf o printf)
    struct time start = {14, 29, 10};
    struct time end   = {16, 30, 15};

    struct time diff  = elapsed(start, end);

    printf("Tempo trascorso: %02i:%02i:%02i\n", diff.h, diff.m, diff.s);
    return 0;
}