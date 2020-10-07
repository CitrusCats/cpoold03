int my_print_comb(void)
{
    for (int a = 0; a < 10; ++a) {
        for (int b = a + 1; b < 10; ++b) {
            for (int c = b + 1; c < 10; ++c) {
                my_putchar('0'+a);
                my_putchar('0'+b);
                my_putchar('0'+c);
                if (a != 7) {
                    my_putchar(',');
                    my_putchar(' ');
                }
            }
        }
    }
}
