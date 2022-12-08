/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hayy <ael-hayy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:51:44 by ael-hayy          #+#    #+#             */
/*   Updated: 2022/08/27 11:21:19 by ael-hayy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string _target;
    void    exec_form() const;
public:
    PresidentialPardonForm(const std::string& target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm & y);
    PresidentialPardonForm& operator=(PresidentialPardonForm & y);
    std::string  getTarget();
    void    beSigned(Bureaucrat& c);
    void    execute(Bureaucrat const & executor) const;
    
};

