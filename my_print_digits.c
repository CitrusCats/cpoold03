int my_print_digits(void)
{
    int digit;

    digit = 48;
    while (digit < 58)
    {
        my_putchar(digit);
        digit++;
    }
    my_putchar('\n');
    return 0;
}