int atoi(const char *nptr)
{
	size_t	res;
	int signe;

	while (*nptr == ' ' || *nptr == '\t' ||(*nptr == '\n' || \
		*nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr++;
	signe = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signe = -1;
		nptr++;
	}
	res = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{:x
		res = (res * 10) + (*nptr - '0');
		nptr++;
	}
	return (res * signe);
}
