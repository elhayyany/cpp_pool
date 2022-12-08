/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:11:46 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/14 13:28:14 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl    *h;

    h = new Harl;
    h->complain("INFO");
    h->complain("DEBUG");
    h->complain("WARNING");
    h->complain("ERROR");
    delete h;
    return (0);
}