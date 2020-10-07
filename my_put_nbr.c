int my_put_nbr(int nb)
{
    int r = 0;
    int count = 0;

    if (nb == 0)
        my_putchar('0');
    else {
        if (nb < 0) {
            nb = nb * -1;
            my_putchar('-');
        }
        for (; nb != 0; count++) {
            r = r * 10;
            r = r + nb % 10;
            nb = nb / 10;
        }
        for (; count > 0; count--) {
            my_putchar(r % 10 + '0');
            r = r / 10;
        }
    }
    my_putchar('\n');
}
