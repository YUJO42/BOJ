/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10798.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 12:50:24 by yujo              #+#    #+#             */
/*   Updated: 2020/03/09 13:04:52 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char str[5][15] = {0, };

	freopen("input.txt", "r", stdin);
	for (int i = 0; i < 5; i++)
		scanf("%s", str[i]);
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (str[j][i] != 0)
				printf("%c", str[j][i]);
		}
	}

	return 0;
}
