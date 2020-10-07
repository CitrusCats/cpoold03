int my_print_revalpha(void)
{
    int letter;

    letter = 122;
    while (letter > 96)
    {
       my_putchar(letter);
       letter--; 
    }
    my_putchar('\n');
    return 0;
}