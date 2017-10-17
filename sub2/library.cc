//*****************************************************************************
//
// Michael Geng
// CS 2401
//
//							Library C++ File
// This file holds all of the implementations for the functions in the 
// library.h file. Can add books, sort library, display library, ect.
//
// Last Edit: 1 - 25 - 17
// Submission Date: 1 - 25 - 17
//
//****************************************************************************






#include<string>
#include<iomanip>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include"library.h"
#include"book.h"
using namespace std;

Library::Library()
{
	tracker = 0;
}

void Library::addbook(Book a)
{
	data[tracker] = a;
	tracker++;
}

void Library::showall(ostream& outs)const
{
	for(int i = 0; i < tracker; ++i)
	{
		cout << data[i] << endl;
	}
}

int Library::size()const
{
	int size = tracker; 
	return size;
}

int Library::numpages()const
{
	int counter1 = 0;
	int counter2 = 0;

	for(int i = 0; i < tracker; ++i)
	{
		counter1 = data[i].get_pages();
		counter2 += counter1;
	}
	return counter2;
}

// WORK ON THIS
void Library::sort_by_date()
{
	bool done = false;
    	int i;
    	Book tmp;
    	while(!done)
	{
		done = true;
		for(i = tracker - 1; i >= 1; --i)
		{
	  	 	if(data[i].get_copyright() < data[i-1].get_copyright())
			{
				done = false;
				tmp = data[i];
				data[i] = data[i-1];
				data[i-1] = tmp;
	 	   	}
		}
    	}
}


// WORK ON THIS
void Library::sort_by_title()
{
	bool done = false;
	int i;
	Book tmp;
	while(!done)
	{
		done = true;
		for(i = tracker - 1; i >= 1; --i)
		{
			if(data[i].get_title() < data[i-1].get_title())
			{
				done = false;
				tmp = data[i];
				data[i] = data[i-1];
				data[i-1] = tmp;
			}
		}
	}
}

void Library::find_title(string a)const
{
	for(int i = 0; i < tracker; ++i)
	{
		if(data[i].get_title() == a)
		{
			cout << data[i] << endl;
		}
	}
	return;
}

void Library::find_author(string a)const
{
	for(int i = 0; i < tracker; ++i)
	{
		if(data[i].get_author() == a)
		{
			cout << data[i] << endl;
		}
	}
	return;
}

void Library::remove(string a)
{
	for(int i = 0; i < tracker; ++i)
	{
		if(data[i].get_title() == a)
		{
			for(int j = i; j < tracker; ++j)
			{
				data[j] = data[j+1];
				tracker--;
				return;
			}
		}
	}
}

void Library::load(istream& ins)
{
	Book temp;
	while (ins >> temp)
	{
		addbook(temp);
	}
}

void Library::save(ostream& outs)
{
	for(int i = 0; i < tracker; i++)
	{
		outs << data[i];
	}
}
