/*
 * Language: C
 * Problem: 450A. Jzzhu and Children
 * Tag: implementation
 */
#include <stdio.h>

int main()
{
    int n, m; 
    int ai;
    int round = 0, max_round = 0;
    int last_child_idx = 1;
    int i;

    scanf("%d %d", &n, &m);

    for (i = 1; i <= n && scanf("%d", &ai) == 1; i++) {
        round = ai / m;
        round += (ai % m > 0) ? 1 : 0;
        
        if (round >= max_round) {
            max_round = round;
            last_child_idx = i;      
        }
    }

    printf("%d\n", last_child_idx);

    return 0;
}
