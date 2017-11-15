#define PR printf
#define PROGRAM int main (void)

#define BEGIN {
#define END }

#define MAX(x, y) ((x > y) ? x : y)
#define MAX5(a, b, c, d, e) (MAX(MAX(a, MAX(b, c)), MAX(d, e)))
