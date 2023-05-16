# include <iostream>
int	ft_atoi(std::string str)
{
	int	result;

	result = 0;
	for (int i = 0; str[i]; i++)
	{
		if (isalpha(str[i]) == 1)
			return (9);
		if (str[i] == '+' || str[i] == '-')
			i++;
		if (str[i] == '+' || str[i] == '-')
			return (9);
		while (str[i] >= '0' && str[i] <= '9' && str[i])
		{
			if (isalpha(str[i]) == 1)
				return (9);
			result = result * 10 + str[i] - '0';
			if (result > 9)
				return (9);
			i++;
		}
	}
	return (result);
}

int main ()
{
	
	std::cout << ft_atoi("37l") << std::endl;
}