/**
 * Computes x raised to the power of y.
 * Returns 0 if x or y is negative.
 * Returns 1 when y is 0.
 */
int power(int x, int y) {

    if (x < 0 || y < 0) {
        return 0;
    }

    int result = 1;

    for (int i = 0; i < y; i++) {
        result = result * x;
    }

    return result;
}