/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:28:11 by frfrance          #+#    #+#             */
/*   Updated: 2021/06/30 19:06:42 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ISquad.hpp"
# include "Squad.hpp"
# include "TacticalMarine.hpp"
# include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	// std::cout << "\n\t\t----> other TEST <-------\n";

	// Squad			*team_1 = new Squad;
	// ISpaceMarine	*tm_1 = new TacticalMarine;
	// ISpaceMarine	*tm_2 = new TacticalMarine;
	// ISpaceMarine	*tm_3 = new TacticalMarine;
	// ISpaceMarine	*tm_4 = new TacticalMarine;
	// std::cout << std::endl;

	// Squad			*team_2 = new Squad;
	// ISpaceMarine	*at_1 = new AssaultTerminator;
	// ISpaceMarine	*at_2 = new AssaultTerminator;
	// ISpaceMarine	*at_3 = new AssaultTerminator;
	// std::cout << std::endl;

	// team_1->push(tm_1);
	// team_1->push(tm_2);
	// team_1->push(tm_3);
	// team_1->push(tm_4);
	// std::cout << "EQUIPE 1  <" << team_1->getCount() << "> soldats\n";

	// team_2->push(at_1);
	// team_2->push(at_2);
	// team_2->push(at_3);
	// std::cout << "EQUIPE 2  <" << team_2->getCount() << "> soldats\n";

	// std::cout << std::endl;
	// for (int i = 0; i < team_1->getCount(); i++)
	// {
	// 	ISpaceMarine	*cur = team_1->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// std::cout << std::endl;
	// std::cout << "Destruction de < EQUIPE 1 >\n";
	// delete team_1;

	// std::cout << "EQUIPE 1  <" << team_1->getCount() << "> soldats\n";

	// std::cout << std::endl;
	// for (int i = 0; i < team_2->getCount(); i++)
	// {
	// 	ISpaceMarine	*cur = team_2->getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// }
	// std::cout << std::endl;
	// std::cout << "Destruction de < EQUIPE 1 >\n";
	// delete team_2;

	// std::cout << "EQUIPE 2  <" << team_2->getCount() << "> soldats\n";

	// system("leaks a.out");

	return 0;
}
