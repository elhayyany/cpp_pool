/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:02:26 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/30 11:05:55 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T> typename T::iterator easyfind(T& cnt, int g)
{
	typename T::iterator it = std::find(cnt.begin(), cnt.end(), g);
	if (it == cnt.end())
		throw std::invalid_argument("your target does not exist");
	return (it);
}
template<typename T> typename T::const_iterator easyfind(T const& cnt, int g)
{
	typename T::const_iterator it = std::find(cnt.begin(), cnt.end(), g);
	if (it == cnt.end())
		throw std::invalid_argument("your target does not exist");
	return (it);
}