int main()
{
  printf("RA2211042010009\n");
  int n, i;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 5; ++i) 
  printf("%d * %d = %d \n", n, i, n * i);
  
  return 0;
}
