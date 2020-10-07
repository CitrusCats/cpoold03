int my_print_comb2(void)
{
    for (int a = 0; a < 100; ++a) {
        for (int b = a + 1; b < 100; ++b) {
            my_putchar(a / 10 + '0');
            my_putchar(a % 10 + '0');
            my_putchar(' ');
            my_putchar(b / 10 + '0');
            my_putchar(b % 10 + '0');
            if (a != 98) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
}
