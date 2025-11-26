#include <stdio.h>
#include <stdbool.h>

extern void solve(int*, bool*);

int main() {
        bool x;
        int val = 1000;
        solve(&val, &x);
        printf("%d\n", x);
        return 0;
}
