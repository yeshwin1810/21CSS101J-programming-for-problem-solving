int main()
{
    printf("RA2211042010009\n");
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if (isalpha(c))
       printf("%c is an alphabet.", c);
    else
       printf("%c is not an alphabet.", c);
}
