void update(int *a,int *b) {
    // Complete this function
    int sum, minus;
    sum = *a + *b;
    minus = *a >= *b ? *a - *b : *b - *a;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
