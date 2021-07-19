/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:10:26 by frfrance          #+#    #+#             */
/*   Updated: 2021/07/02 14:36:07 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery", 145, 137)
{
	this->setTarget(target);
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) : Form("Shrubbery", 145, 137)
{
	*this = ref;
	return ;
}

ShrubberyCreationForm					&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	Form::operator=(ref);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

void				ShrubberyCreationForm::exec() const
{

	std::ofstream		os;
	std::stringstream	ss;
	std::string tree[17] = {"	          .     .  .      +     .      .          .",
							"     .       .      .     #       .           .",
							"        .      .         ###            .      .      .",
							"      .      .   \"#:. .:##\"##:. .:#\"  .      .",
							"          .      . \"####\"###\"####\"  .",
							"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .",
							"  .             \"#########\"#########\"        .        .",
							"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .",
							"     .     .  \"#######""##\"##""#######\"                  .",
							"                .\"##\"#####\"#####\"##\"           .      .",
							"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .",
							"      .     \"#######\"##\"#####\"##\"#######\"      .     .",
							"    .    .     \"#####""#######""#####\"    .      ."
							"            .     \"      000      \"    .     .",
							"       .         .   .   000     .        .       ."
							".. .. ..................O000O........................ ......"};

	ss << "< " << this->getTarget() << " > _shrubbery";
	os.open(ss.str());
	if (os.fail())
	{
		std::cout << ", not executed\n";
		return ;
	}
	for (int i = 0; i < 17; i++)
		os << tree[i] << std::endl;
	os.close();
	return ;

}
