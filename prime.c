int main() {
    int n = 29;
    int cnt = 0;
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else {
     for (int i = 1; i <= n; i++) {
               if (n % i == 0)
                cnt++;
        }
     if (cnt > 2)
            printf("%d is NOT prime\n", n);

        // else it is prime
        else
            printf("%d is prime", n);
    }

    return 0;
}
