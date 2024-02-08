#include <unistd.h>

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_in_base(char c, char *base)
{
	while (*base)
		if (c == *base++)
			return (1);
	return (0);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
{
	
	if (n > size - 1)
	{
		ft_print(n / size, base, size);//Basamak Düşürerek Recursive Çağrı n < size - 1 olana kadar recursive devam eder yani oluşan sayı,sayı sisteminin maksimum indexini geçmiyecek
		
		n %= size;//Basamak Düşürme
	}
	ft_putchar(base[n]);
	//N Maksimum size - 1 yanı tabanın sonu olursa tabanda bu indexi arayıp ekrana yazdırabilirim yoksa bölmem gerekli
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	size = -1;
	while (base[++size])
	{
		if (base[size] == '+' || base[size] == '-' || base[size] == ' ' //+-veya boşmu
			|| ft_in_base(base[size], base + size + 1)//Taban Aynı Karakteri İki Kere Bulunduruyormu kontrolu
			|| (base[size] >= 9 && base[size] <= 13))
			return ;
	}
	if (size < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, size);
	}
	else
		ft_print(nbr, base, size);
	
}

int     main(void)
{
    char base[]="01";
    ft_putnbr_base(-8,base);
    return (0);
}