/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msulc <msulc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:10:00 by msulc             #+#    #+#             */
/*   Updated: 2024/02/01 14:15:15 by msulc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
    static int  _instancies;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(const RobotomyRequestForm& src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm& src);
    ~RobotomyRequestForm();

    void beExecuted(void) const;
    std::string getTarget() const;
    void getInstancies() const;
};


#endif