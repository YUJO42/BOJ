/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2443.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 17:07:48 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 17:33:48 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int k = (n * 2) - (i * 2) - 1; k > 0; k--)
			printf("*");
		printf("\n");
	}

	return 0;
}
