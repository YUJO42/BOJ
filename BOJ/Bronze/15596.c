/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15596.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 23:54:11 by yujo              #+#    #+#             */
/*   Updated: 2020/03/05 23:59:14 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	sum(int *a, int n)
{
	long long i = 0;
	long long ans = 0;

	while (i < n)
	{
		ans += a[i];
		i++;
	}
	return (ans);
}