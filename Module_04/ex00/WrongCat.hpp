/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 16:59:53 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/06/25 17:44:00 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
#define WrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:
    WrongCat(/* args */);
    void SetType(std::string type);
    std::string GetType() const;
    WrongCat(std::string name);
    WrongCat(WrongCat const &src);
    WrongCat &operator=(WrongCat const &rhs);
    void makeSound() const;
    ~WrongCat();
};
#endif