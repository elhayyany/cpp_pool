/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:25:24 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/31 19:53:24 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class T> MutantStack<T>::MutantStack(/* args */)
{

}
template<class T> MutantStack<T>::MutantStack(MutantStack&t)
{
    *this = t;
}
template<class T> MutantStack<T>& MutantStack<T>::operator=(MutantStack&t)
{
    *this = t;
    return (*this);
}

template<class T> MutantStack<T>::~MutantStack()
{
}
template<class T>  typename  MutantStack<T>::iterator    MutantStack<T>::begin()
{
    return (this->c.begin());
}
template<class T>  typename  MutantStack<T>::iterator    MutantStack<T>::end()
{
    return (this->c.end());
}
template<class T>  typename  MutantStack<T>::const_iterator    MutantStack<T>::cbegin()
{
    return (this->c.cbegin());
}
template<class T>  typename  MutantStack<T>::const_iterator    MutantStack<T>::cend()
{
    return (this->c.cend());
}
template<class T>  typename  MutantStack<T>::reverse_iterator    MutantStack<T>::rbegin()
{
    return (this->c.rbegin());
}
template<class T>  typename  MutantStack<T>::reverse_iterator    MutantStack<T>::rend()
{
    return (this->c.rend());
}
template<class T>  typename  MutantStack<T>::const_reverse_iterator    MutantStack<T>::crbegin()
{
    return (this->c.crbegin());
}
template<class T>  typename  MutantStack<T>::const_reverse_iterator    MutantStack<T>::crend()
{
    return (this->c.crend());
}