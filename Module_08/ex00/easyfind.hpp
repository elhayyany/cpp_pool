/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:02:29 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/30 10:50:37 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef easyfind_HPP
# define easyfind_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
#include <stack>
#include <exception>
#include <queue>
#include <typeinfo>
template<typename T>
typename T::iterator easyfind(T& cnt, int g);
template<typename T>
typename T::const_iterator easyfind(T const& cnt, int g);

#include "easyfind.tpp"
#endif
