/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2991.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 14:08:18 by yujo              #+#    #+#             */
/*   Updated: 2020/03/11 14:26:23 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	int p, m, n;
	int g1 = 0, g2 = 0, g3 = 0;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d", &p, &m, &n);
	
	if (p % (a + b) <= a && p % (a + b) != 0)
		g1 += 1;
	if (p % (c + d) <= c && p % (c + d) != 0)
		g1 += 1;
	if (m % (a + b) <= a && m % (a + b) != 0)
		g2 += 1;
	if (m % (c + d) <= c && m % (c + d) != 0)
		g2 += 1;
	if (n % (a + b) <= a && n % (a + b) != 0)
		g3 += 1;
	if (n % (c + d) <= c && n % (c + d) != 0)
		g3 += 1;

	printf("%d\n%d\n%d\n", g1, g2, g3);

	return 0;
}
