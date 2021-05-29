#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(time(NULL));
	ClapTrap	jedi("Luke_Skywalker");
	NinjaTrap	sithlord("Darth_Vader");
	FragTrap	smuggler("Han_Solo");
	ScavTrap	sphinx("clever_cat");
	SuperTrap	sup("whatsup");

	std::cout  << std::endl;

	std::cout << "----- THE SHOW BEGINS -----" << std::endl;
	std::cout << "---------- ACT I ----------" << std::endl;
	sithlord.ninjaShoebox( jedi );
	std::cout << jedi.getName() << " DIED(no)." << std::endl;
	std::cout << "--------   end   ----------" << std::endl;
	std::cout << std::endl;
	std::cout << " < Загадка от Жака Фреско." << std::endl <<
	"  Почему это не возможно? > " << std::endl;
	std::cout  << std::endl;

	std::cout << "---------- ACT II ---------" << std::endl;
	sithlord.ninjaShoebox( sithlord );
	std::cout << "--------   end   ----------" << std::endl;
	std::cout << std::endl;
	std::cout << " < Загадка от Жака Фреско." << std::endl <<
	"  Сколько раз должен выстрелить в себя из бластера" <<
	" потерявший своего отца и световой меч " << std::endl << "  " <<
	sithlord.getName() << " чтобы покончить жизнь самоубийством? > " <<
	std::endl;
	std::cout  << std::endl;

	std::cout << "-------- ACT III ----------" << std::endl;
	sithlord.ninjaShoebox( smuggler );
	std::cout << "--------   end   ----------" << std::endl;
	std::cout << std::endl;
	std::cout << " < Загадка от Жака Фреско." << std::endl <<
	" Почему " << smuggler.getName() <<
	" не может добить " << sithlord.getName() << "? > " <<
	std::endl;
	std::cout  << std::endl;

	std::cout << "-------- ACT IV ----------" << std::endl;
	sithlord.ninjaShoebox( sphinx );
	std::cout << "--------   END   ----------" << std::endl;
	std::cout << std::endl;


	sithlord.rangedAttack("biba");
	sithlord.meleeAttack("boba");

	sup.rangedAttack("a");
	sup.meleeAttack("b");

//	sup.vaulthunter_dot_exe("c");
//	sup.ninjaShoebox(sithlord);


//	FragTrap robo2( "Claptrap" );
//	ScavTrap bobo2( "Blaptrap");
//
//	std::cout << "---- Copy check ----" << std::endl;
//	FragTrap robo( robo2 );
//	ScavTrap bobo( bobo2 );
//	std::cout << std::endl;
//
//	std::cout << "<<<<<<<<<   PART I   >>>>>>>>>" << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "--- Attack testing ---" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	robo.rangedAttack("Zerling");
//	robo.meleeAttack("Ultralisk");
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "--- Damage testing ---" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	robo.takeDamage(3);
//	robo.takeDamage(50);
//	robo.takeDamage(200);
//	robo.takeDamage(5);
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "--- Repair testing ---" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	robo.beRepaired(5);
//	robo.beRepaired(50);
//	robo.beRepaired(200);
//	robo.beRepaired(5);
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "--- Attack testing ---" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	for (int i = 0; i < 6; i++)
//	{
//		robo.vaulthunter_dot_exe("bad guy");
//	}
//	std::cout << std::endl;
//
//	std::cout << "<<<<<<<<<   PART II   >>>>>>>>>" << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "--- Attack testing ---" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	bobo.rangedAttack("Footman (yes my lord!)");
//	bobo.meleeAttack("Grunt (zag-zag)");
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "--- Damage testing ---" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	bobo.takeDamage(3);
//	bobo.takeDamage(50);
//	bobo.takeDamage(200);
//	bobo.takeDamage(5);
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "--- Repair testing ---" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	bobo.beRepaired(5);
//	bobo.beRepaired(50);
//	bobo.beRepaired(200);
//	bobo.beRepaired(5);
//	std::cout << std::endl;
//
//	std::cout << "----------------------" << std::endl;
//	std::cout << "-- Challenge testing -" << std::endl;
//	std::cout << "----------------------" << std::endl;
//	for (int i = 0; i < 6; i++)
//	{
//		bobo.challengeNewcomer("pretty girl");
//	}
//	std::cout << std::endl;
	return 0;
}