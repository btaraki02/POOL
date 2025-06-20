#include <unistd.h>

int ft_chat(char *s1, char c, int len)
{
	int i = 0;
	while (i < len)
	{
		if (s1[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void ft_union(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		if (ft_chat(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}

	j = 0;
	while (s2[j])
	{
		i = 0;
		while (s1[i] && s1[i] != s2[j])
			i++;

		if (!s1[i]) // أي أن s2[j] غير موجود في s1
		{
			if (ft_chat(s2, s2[j], j)) // و لم يتكرر في s2
				write(1, &s2[j], 1);
		}
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}