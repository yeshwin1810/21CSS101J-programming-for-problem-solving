int main() {

  int i, n;

  int t1=0, t2=1;

  int nextterm = t1+t2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: \n%d\n%d\n", t1, t2);

  for (i=3; i<=n; ++i) {
    printf("%d\n", nextterm);
    t1 = t2;
    t2 = nextterm;
    nextterm = t1 + t2;
  }
}
