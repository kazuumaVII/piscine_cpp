/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:55:07 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/16 17:55:08 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    public:
    	Human();
    	~Human();
		Brain &getBrain();
		std::string identify();


    private:
		Brain _instanceBrain;
};

#endif
