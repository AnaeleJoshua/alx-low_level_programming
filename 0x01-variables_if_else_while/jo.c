/* betty style doc for function main goes there */
/**
 *main-computes a random number, everytime it is compiled
 *
 *this program pribts
 *a random number
 *Return: 0 if program exceutes successfully
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
        return (0);
}
