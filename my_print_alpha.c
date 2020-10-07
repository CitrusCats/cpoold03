int my_print_alpha(void)
{
    int letter;

    letter = 97;
    while (letter < 123) {
       my_putchar(letter);
       letter++;
    }
    my_putchar('\n');
    return 0;
}
