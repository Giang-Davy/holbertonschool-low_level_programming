int _atoi(char *s)
{
    int result = 0;
    int sign = 1;

    /* Skip leading non-numeric characters */
    while (*s && (*s < '0' || *s > '9'))
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        s++;
    }

    /* Convert string to integer */
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
