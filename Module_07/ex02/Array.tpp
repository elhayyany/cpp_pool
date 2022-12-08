/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:42:58 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/29 17:19:54 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template<class T> Array<T>::Array()
{
    arr = 0;
}
template<class T> Array<T>::~Array()
{
    if (arr)
        delete [] arr;
}
template<class T> Array<T>::Array(int   nn)
{
    n = nn;
    arr = new T[nn];
}
template<class T> Array<T>::Array(Array& ar)
{
    n = ar.size();
    if (ar.arr)
        arr = new T[ar.size()];
    else
        arr = 0;
    for(int i = 0; i < ar.size(); i++)
    {
        arr[i] = ar[i];
    }
}
template<class T> Array<T>& Array<T>::operator=(Array& ar)
{
    if (arr)
        delete [] arr;
    n = ar.size();
    if (n)
        this->arr = new T[ar.size()];
    for(int i = 0; i < ar.size(); i++)
    {
        this->arr[i] = ar[i];
    }
    
    return *this;
}

template<class T> const char * Array<T>::badindex::what () const _NOEXCEPT
{
    return ("error: invalid index");
}
template<class T> T& Array<T>::operator[](int dex)
{
    if (dex < size() && dex >= 0)
        return this->arr[dex];
    throw (badindex());
}
template<class T> int Array<T>::size()
{
    if (!arr)
        return (0);
    else
        return (n);
}