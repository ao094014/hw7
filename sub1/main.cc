/************************************************
main file for animal homes project
file will include menu and save/load
-Andrew Orsburn spring 2017
************************************************/
#include "a_homes.h"
#include <fstream>
using namespace std;

void menu();
int main()
{
	
	a_homes *ptr;
	ifstream ifs;
	ifs.open("save.txt");
	char code;
	list<a_homes*> item;
	list<a_homes*>::iterator it;
	int choice;
	while(ifs.peek()=='\n') ifs.ignore();
	//ifs >> code;
	while(ifs >> code)
	{
		
		if(code == '!')
		{
			ptr = new Megalodon;
			ptr -> input(ifs);
			item.push_back(ptr);
		}
		else if(code == '@')
		{
			ptr = new Eagle;
			ptr -> input(ifs);
			item.push_back(ptr);
		}
		else if(code == '#')
		{
			ptr = new p_bear;
			ptr -> input(ifs);
			item.push_back(ptr);
		}
		else if(code == '$')
		{
			ptr = new cheetah;
			ptr -> input(ifs);
			item.push_back(ptr);
		}
		else if(code == '%')
		{
			ptr = new Wampa;
			ptr -> input(ifs);
			item.push_back(ptr);
		}
	while(ifs.peek()=='\n') ifs.ignore();
	//ifs >> code;
	
	}
	
	do{
		menu();
		cin >> choice;
		switch(choice)
		{
			case 1:
				Megalodon *m;
				m = new Megalodon;
				m -> input(cin);
				item.push_back(m);
				break;
			case 2:
				Eagle *e;
				e = new Eagle;
				e -> input(cin);
				item.push_back(e);
				break;
			case 3:
				p_bear *pb;
				pb = new p_bear;
				pb -> input(cin);
				item.push_back(pb);
				break;
			case 4:
				cheetah *c;
				c = new cheetah;
				c -> input(cin);
				item.push_back(c);
				break;
			case 5:
				Wampa *w;
				w = new Wampa;
				w -> input(cin);
				item.push_back(w);
				break;
			case 6:
				for(it = item.begin(); it != item.end(); ++it)
				{
					(*it) -> output(cout);
				}
				break;



		}

	}while(choice != 7 || choice > 7);
	ofstream ofs;
	ofs.open("save.txt");
	for(it=item.begin();it != item.end(); ++it)
	{
		(*it) -> output(ofs);
	}
	ofs.close();


}

void menu()
{
	cout << "Welcome to animal homes builder inc!\nHow may we assist you today?\n";
	cout << "Enter a '1' to build a Megalodon tank!\n";
	cout << "Enter a '2' to build an Eagle's nest!\n";
	cout << "Enter a '3' to build a polar bear enclosure!\n";
	cout << "Enter a '4' to build a cheetah pit!\n";
	cout << "Enter a '5' to build our brand new Wampa cave!\n";
	cout << "Enter a '6' to show all the homes you've built\n";
	cout << "Enter a '7' to Exit the animal homes builder app!\n";

}
