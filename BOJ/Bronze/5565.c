/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5565.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:59:39 by yujo              #+#    #+#             */
/*   Updated: 2020/03/09 16:01:58 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int sum;
	int book;

	scanf("%d", &sum);

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &book);
		sum -= book;
	}

	printf("%d", sum);

	return 0;
}
