/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaliber <maaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:33:46 by maaliber          #+#    #+#             */
/*   Updated: 2022/12/19 12:25:47 by maaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main(void)
{

	void	*ptr;
	char	*s = NULL;
	int		a = 0;

	ptr = &a;
	ft_printf("<------------------------------------------>\n");
	ft_printf("<-----------------42_PRINTF---------------->\n");
	ft_printf("<------------------------------------------>\n");
	ft_printf("Int ->%d<-   Str ->%s<-     ABcD\n", 15123, "Hello bla bla bla \n Test saut \t Test tab\n");
	ft_printf("Int ->%i<-   Hexa ->%X<-  \n", -456, 1234);
	ft_printf("Min int ->%d<-   Max int ->%d<-\n", -2147483647, 2147483647);
	ft_printf("Min int ->%i<-   Max int ->%i<-\n", -2147483647, 2147483647);
	ft_printf("Min int ->%u<-   Max int ->%u<-\n", -2147483647, 2147483647);
	ft_printf("Min int ->%x<-   Max int ->%x<-\n", -2147483647, 2147483647);
	ft_printf("+ int ->%x<-   - int ->%x<-\n", -1, 42);
	ft_printf("Min int ->%X<-   Max int ->%X<-\n", -2147483647, 2147483647);
	ft_printf("Zeros ->%d, %i, %x, %X<-\n", 0, 0, 0, 0);
	ft_printf("Ptr ->%p<-\n", ptr);
	ft_printf("Ptr NULL->%s<- \nStr NULL->%p<-\n", s, NULL);
	ft_printf(" %c %c %c ", '2', '1', 0);
	ft_printf("\n");
	
	printf("\n<------------------------------------------>\n");
	printf("<------------------PRINTF------------------>");
	printf("\n<------------------------------------------>\n");
	printf("Int ->%d<-   Str ->%s<-     ABcD\n", 15123, "Hello bla bla bla \n Test saut \t Test tab\n");
	printf("Int ->%i<-   Hexa ->%X<-  \n", -456, 1234);
	printf("Min int ->%d<-   Max int ->%d<-\n", -2147483647, 2147483647);
	printf("Min int ->%i<-   Max int ->%i<-\n", -2147483647, 2147483647);
	printf("Min int ->%u<-   Max int ->%u<-\n", -2147483647, 2147483647);
	printf("Min int ->%x<-   Max int ->%x<-\n", -2147483647, 2147483647);
	printf("+ int ->%x<-   - int ->%x<-\n", -1, 42);
	printf("Min int ->%X<-   Max int ->%X<-\n", -2147483647, 2147483647);
	printf("Zeros ->%d, %i, %x, %X<-\n", 0, 0, 0, 0);
	printf("Ptr ->%p<-\n", ptr);
	printf("Ptr NULL->%s<- \nStr NULL->%p<-\n", s, NULL);
	printf(" %c %c %c ", '2', '1', 0);
	
	printf("\n<------------------------------------------>\n");
	printf("<------------------Options----------------->");
	printf("\n<------------------------------------------>\n\n");

	ft_printf("Alt mod :\n");
	ft_printf("%#x, %#x\n", -456, 456);
	ft_printf("%#x, %#x\n", -2147483647, 2147483647);
	printf("%#x, %#x\n", -2147483647, 2147483647);
	ft_printf("-------------------------------\n\n");

	ft_printf("Sign mod :\n");
	ft_printf("%+d, %+d\n", -2147483647, 2147483647);
	printf("%+d, %+d\n", -2147483647, 2147483647);
	ft_printf("%+d, %+d\n", -156789, 5511808);
	printf("%+d, %+d\n", -156789, 5511808);
	ft_printf("%+d, %+d\n", -0, 0);
	printf("%+d, %+d\n", -0, 0);
	ft_printf("\n");
	ft_printf("%+i, %+i\n", -2147483647, 2147483647);
	printf("%+i, %+i\n", -2147483647, 2147483647);
	ft_printf("%+i, %+i\n", -156789, 5511808);
	printf("%+i, %+i\n", -156789, 5511808);
	ft_printf("%+i, %+i\n", -0, 0);
	printf("%+i, %+i\n", -0, 0);
	ft_printf("-------------------------------\n\n");

	ft_printf("Space mod :\n");
	ft_printf("% d, % d\n", -2147483647, 2147483647);
	printf("% d, % d\n", -2147483647, 2147483647);
	ft_printf("% d, % d\n", -156789, 5511808);
	printf("% d, % d\n", -156789, 5511808);
	ft_printf("% d, % d\n", -0, 0);
	printf("% d, % d\n", -0, 0);
	ft_printf("\n");
	ft_printf("% i, % i\n", -2147483647, 2147483647);
	printf("% i, % i\n", -2147483647, 2147483647);
	ft_printf("% i, % i\n", -156789, 5511808);
	printf("% i, % i\n", -156789, 5511808);
	ft_printf("% i, % i\n", -0, 0);
	printf("% i, % i\n", -0, 0);
	ft_printf("-------------------------------\n\n");

	ft_printf("Padded mod :\n");
	ft_printf("%#015x, %#015x\n", -2147483647, 2147483647);
	printf("%#015x, %#015x\n", -2147483647, 2147483647);
	ft_printf("%#010x, %#09x\n", -156789, 5511808);
	printf("%#010x, %#09x\n", -156789, 5511808);
	ft_printf("%#05x, %#05x\n", -0, 0);
	printf("%#05x, %#05x\n", -0, 0);
	ft_printf("\n");
	ft_printf("%015d, %015d\n", -2147483647, 2147483647);
	printf("%015d, %015d\n", -2147483647, 2147483647);
	ft_printf("%010d, %09d\n", -156789, 5511808);
	printf("%010d, %09d\n", -156789, 5511808);
	ft_printf("%05d, %05d\n", -0, 0);
	printf("%05d, %05d\n", -0, 0);
	ft_printf("\n");
	ft_printf("% i, % i\n", -2147483647, 2147483647);
	printf("% i, % i\n", -2147483647, 2147483647);
	ft_printf("% i, % i\n", -156789, 5511808);
	printf("% i, % i\n", -156789, 5511808);
	ft_printf("% i, % i\n", -0, 0);
	printf("% i, % i\n", -0, 0);
	ft_printf("-------------------------------\n\n");

	ft_printf("Special case :\n");
	ft_printf("%#015m, %##015x\n", 0, 0);
	ft_printf("%t", -2147483647);
	ft_printf("%\0", -0);
	ft_printf("%#015m\n", 0);
	ft_printf("%#015d\n", 0);
	ft_printf("%+015u\n", 0);
	ft_printf("%015.10x\n", 0);
	ft_printf("% 15.10x\n", 0);
	//ft_printf("Ptr : %p   Max int %X\n", -2147483648, 2147483647);
	/*ft_printf("%s\n", "Bonjour");
	ft_printf("%d\n", -1);
	ft_printf("%d\n", 42);
	ft_printf("%d\n", 1564848);

	ft_printf("\nHEX\n");
	ft_printf("%x\n", 2515122);
	ft_printf("%X\n", 2515122);
	ft_printf("%x\n", -2515122);
	ft_printf("%X\n", -2515122);
	ft_printf("%x\n", 3);
	ft_printf("%X\n", 45);*/

	/*printf("%%");
	printf("%-.5s\n", "Bonjour");
	printf("%05d\n", -1);
	printf("%-40.10d\n", -1);
	printf("%-+40.10d\n", -1);
	printf("%-40.10u\n", -1);
	printf("%40.10u\n", -1);

	printf("\nHEX\n");
	printf("%x\n", 2515122);
	printf("%X\n", 2515122);
	printf("%010x\n", 2515122);
	printf("%10X\n", 2515122);
	printf("%-5x\n", 3);
	printf("%-5X\n", 45);*/

	ft_printf("% 15.10x\n", 0, 3);
	return (0);
}