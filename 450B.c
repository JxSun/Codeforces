/*
 * Language: C
 * Problem: 450B. Jzzhu and Sequences
 * Tag: implementation, math
 */
#include <stdio.h>

int main()
{
    int x, y, i, n;
    int answer;    

    scanf("%d %d", &x, &y);
    scanf("%d", &n);

    // The function can be reduced as
    // f1 = -f4 = f7
    // f2 = -f5 = f8
    // f3 = -f6 = f9
    // Therefore, according to the index n the answer can be computed directly
    int quotient = n / 3;
    int remainder = n % 3;

    if (remainder == 0) {
        if (quotient % 2 != 0) {
            answer = y - x;
        } else {
            answer = x - y;
        }
    } else if (remainder == 1) {
        if (quotient % 2 == 0) {
            answer = x;
        } else {
            answer = -x;
        }
    } else if (remainder == 2) {
        if (quotient % 2 == 0) {
            answer = y;
        } else {
            answer = -y;
        }
    }

    answer %= 1000000007;
    if (answer < 0) {
        answer += 1000000007;
    }

    printf("%d\n", answer);

    return 0;
}
