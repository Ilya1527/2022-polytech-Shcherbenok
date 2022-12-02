int gcd(int a, int b) 
{
    if (a < 0) 
        a *= -1;
    if (b < 0) 
        b *= -1;
    while (true)
    {
        if ((a != 0) && (b != 0))
        {
            if (a > b)
                a %= b;
            else b %= a;
        }
        else 
            return a + b;
    }
    return 0;
}