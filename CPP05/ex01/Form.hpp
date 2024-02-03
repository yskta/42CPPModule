/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:58:08 by yokitaga          #+#    #+#             */
/*   Updated: 2024/02/03 18:42:08 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name_;
		bool isSigned_;
		const int gradeToSign_;
		const int gradeToExecute_;
	public:
		Form();
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &src);
		Form &operator=(const Form &right); 
		~Form();

		const std::string getName() const;
		bool	getSigned() const;
    	int		getGradeToSign() const;
    	int		getGradeToExecute() const;

		void	beSigned(const Bureaucrat &src);
		
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream&   operator<<( std::ostream& out, const Form& right );

#endif