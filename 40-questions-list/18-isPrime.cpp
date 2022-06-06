bool isPrime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}