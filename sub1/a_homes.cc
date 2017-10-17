/************************************************
Animal homes header file
-will include the parent and child classes
CS2401 project 5 Spring 2017 Andrew Orsburn
************************************************/

#include "a_homes.h"
#include <string>
using namespace std;

void Megalodon::input(istream& ins)
{
	if(&ins == &cin)
	{
		cout << "\nYou've chosen to build a tank for a Megalodon\n";
		cout << "What would you like the radius (in meters) of your tank to be?\n";
		cin >> radius;
		cout << "\nHow tall(in meters) would you like your tank to be?\n";
		cin >> height;
		cout << "\nDo you want your tank to be transparent or not trasparent?\n";
		while(ins.peek()=='\n') ins.ignore();;
		getline(cin, transparency);
		cout << "\nIf you want a ceiling on your tank enter 1 and if you do not want a celing enter a 0\n";
		cin >> ceiling;
		cout << endl;
	}
	else{
		while(ins.peek()=='\n') ins.ignore();
		ins >> radius;
		ins >> height;
		while(ins.peek()=='\n') ins.ignore();
		getline(ins, transparency);
		ins >> ceiling;
	}
	
}

void Eagle::input(istream& ins)
{
	if(&ins == &cin)
	{
		cout << "\nYou've chosen to build a nest for an Eagle!\n";
		cout << "Where would you like the location of your nest to be? e.g. A tree, Hotel California, etc.\n";
		while(ins.peek()=='\n') ins.ignore();
		getline(cin, location);
		cout << "\nWhat do you want your nest to be made out of?\n";
		getline(cin, material);
		cout << "\nAt what  altitude(meters) would you like your nest to be?\n";
		cin >> altitude;
		cout << "\nHow many Eagles do you want your nest to be able to fit?\n";
		cin >> number_of_eagles;
		cout << endl;
	}
	else{
		while(ins.peek()=='\n') ins.ignore();
		getline(ins, location);
		getline(ins, material);
		ins >> altitude;
		ins >> number_of_eagles;
	}
}

void p_bear::input(istream& ins)
{
	if(&ins == &cin)
	{
		cout << "\nYou've chosen to build a Polar Bear enclosure\n";
		cout << "What type of enclosure do you want? Indoor, outdoor, or mixed?\n";
		while(ins.peek()=='\n') ins.ignore();
		getline(cin, type);
		cout << "\nDo you want a  freshwater pool in your enclosure for swimming/drinking? Enter 1 for yes and 0 for no\n";
		cin >> pool;
		cout << "\nHow cold do you want your enclosure to be?\n";
		cin >> temperature;
		cout << "\nWhat do you want the length (in meters) of your enclosure to be?\n";
		cin >> length;
		cout << "\nWhat about the width (in meters)?\n";
		cin >> width;
		cout << endl;
	}
	else{
		while(ins.peek()=='\n') ins.ignore();
		getline(ins, type);
		ins >> pool;
		ins >> temperature;
		ins >> length;
		ins >> width;
	}
}

void cheetah::input(istream& ins)
{
	if(&ins == &cin)
	{
		cout << "\nYou've chosen to build a Cheetah pit\n";
		cout << "How hot do you want your pit to be?\n";
		cin >> temperature;
		cout << "\nDo you want a water source built in? Enter 1 for yes and 0 for no\n";
		cin >> water;
		cout << "\nWhat do you want the length (in meters) to be?\n";
		cin >> length;
		cout << "\nThe width(in meters)?\n";
		cin >> width;
		cout << "\nThe height (in meters)?\n";
		cin >> height;
		cout << "\nIf you want a jungle gym in your pit enter 1 and if you do not want a jungle gym enter a 0\n";
		cin >> jungle_gym;
	}
	else{
		while(ins.peek()=='\n') ins.ignore();
		ins >> temperature;
		ins >> water;
		ins >> length;
		ins >> width;
		ins >> height;
		ins >> jungle_gym;
	}
}

void Wampa::input(istream& ins)
{
	if(&ins == &cin)
	{
		cout << "\nYou've chosen to build a cave for a Wampa! Warning: Wampa caves only found on Hoth\n";
		cout << "How many skeletons do you want in your Wampa cave?\n";
		cin >> skeletons;
		cout << "\nDo you want an upside down Jedi in hanging in your cave? Enter 1 for yes and 0 for no\n";
		cin >> jedi;
		cout << "\nDo you want a stuffed tauntaun for the Wampa to play with? Enter 1 for yes and 0 for no\n";
		cin >> tauntaun;
		cout << "\nWhere on Hoth do you want your cave to be located within the planet?\n";
		while(ins.peek()=='\n') ins.ignore();
		getline(cin,location_on_Hoth);
	}
	else{
		while(ins.peek()=='\n') ins.ignore();
		ins >> skeletons;
		ins >> jedi;
		ins >> tauntaun;
		while(ins.peek()=='\n') ins.ignore();
		getline(ins, location_on_Hoth);
	}
}

void Megalodon::output(ostream& outs)
{
	if(&outs == &cout)
	{
		cout << "\nYou've built a megalodon tank with:\nA radius of: " << radius << endl;
	    cout << "A height of: " << height << endl;
		cout << "With a transparency of: " << transparency << endl;
		if(ceiling==true)
		{
			cout << "The tank will also have a ceiling. \n" << endl;
		}
		else{
			cout << "The tank will not have a ceiling on it\n" << endl;
		}
	}
	else{
		
		outs << '!' << endl << radius << endl << height << endl << transparency << endl << ceiling << endl;	
	}
}

void Eagle::output(ostream& outs)
{
	if(&outs == &cout)
	{
		cout << "\nYou have built an Eagle's nest at: " << location << endl
			 << "The nest is made of: " << material << endl
		     << "It will be " << altitude << " meters high and will be able to hold " 
			 << number_of_eagles << " eagles\n" << endl;
	}
	else{
	outs << '@' << endl << location << endl << material << endl << altitude << endl << number_of_eagles << endl;
	}
}

void p_bear::output(ostream& outs)
{
	if(&outs == &cout)
	{
		cout << "\nYou've chosen to build a polar bear enclosure\n"
			 << "Your enclosure will be: " << type << endl;
		if(pool==true)
		{
			cout << "Your enclosure will have a pool\n";
		}
		else{
			cout << "Your enclosure will not have a pool\n";
		}
		cout << "The temperature within the enclosure will be: " << temperature
			 << " degrees.\n" << "The length will be: " << length 
			 << " meters with a width of " << width << " meters.\n"
			 << endl;
	}
	else{
	outs << '#' << endl << type << endl << pool << endl << temperature 
		 << endl << length << endl << width << endl;
	}
}

void cheetah::output(ostream& outs)
{
	if(&outs == &cout)
	{
		cout << "\nYou've chosen to build a cheetah pit!\n"
			 << "The pit will be as hot as " << temperature << endl;
		if(water == true)
		{
			cout << "There will be a water source within your pit!\n";
		}
		else{
			cout << "There will not be a water source for your pit.\n";
		}
		cout << "The dimensions of the pit will be " << length << "(L) meters "
			 << "by " << width << "(w) meters " << "by " << height << "(h) meters \n";
		if(jungle_gym==true)
		{
			cout << "The pit will have a jungle gym for the cheetahs to play on\n";
			cout << endl;
		}
		else{
			cout << "The cheetahs will not have a jungle gym to play with :(\n";
			cout << endl;
		}
	}
	else{
		outs << '$' << endl << temperature << endl << water << endl 
			 << length << endl << width << endl << height << endl << jungle_gym;
	}
}

void Wampa::output(ostream& outs)
{
	if(&outs == &cout)
	{
		cout << "\nYou've decided to build a Wampa cave!\n"
			 << "The number of skeletons in your Wampa's closet is up to: " << skeletons << endl;
			if(jedi == true)
			{
				cout << "Luke Skywalker will be hanging upside down in the cave\n";
			}
			else{
				cout << "There will be no jedi hanging from the cave and these are not the droids you're looking for\n";
			 }
			
			if(tauntaun == true)
			{
				cout << "Your cave will have a stuffed tauntaun for decoration\n";
			}
			else{
				cout << "There will be no tauntaun in this cave\n";
			}
		cout << "The cave will be located at:" << location_on_Hoth << " on Hoth\n" << endl;
	}
	else{
		outs << '%' << endl << skeletons << endl << jedi << endl 
		<< tauntaun << endl << location_on_Hoth << endl;
	}
}
