//***************************************************************************
//
// Michael Geng
// CS 2401
//
// 								Book C++ File
// This file contains the implementations for the functions in the book.h
// class. This holds all of our getters as well as out input and output
// functions.
//
// Last Edit: 1 - 25 - 17
// Submission Date: 1 - 25 - 17
//
//**************************************************************************


#include<string>
#include<iomanip>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include"book.h"
using namespace std;

Book::Book()
{
	title = " ";
	author = " ";
	year = 0;
	pages = 0;
}

void Book::input(istream& ins)
{
	string book;
	if(&ins == &cin)
	{
		cout << "Title: ";
		if(cin.peek() == '\n') cin.ignore();
		getline(cin, title);
		cout << "\nAuthor: ";
		if(cin.peek() == '\n') cin.ignore();
		getline(cin, author);
		cout << "\nYear of copyright: ";
		cin >> year;
		cin.ignore(100, '\n');
		cout << "\nNumber of pages: ";
		cin >> pages;
		cin.ignore(100, '\n');
		cout << endl;
	}
	else
	{
		if(ins.peek() == '\n')
		{
			ins.ignore();
		}
		getline(ins, book);
		title = book;
		getline(ins, book);
		author = book;
		ins >> year;
		ins >> pages;
		return;
	}
}

void Book::output(ostream& outs)const
{
	if(&outs == &cout)
	{
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Year published: " << year << endl;
		cout << "Number of pages: " << pages << endl;
	}
	else
	{
		outs << title << endl;
		outs << author << endl;
		outs << year << endl;
		outs << pages << endl;
	}
}

string Book::get_title()const
{
	return title;
}
string Book::get_author()const
{
	return author;
}

int Book::get_copyright()const
{
	return year;
}

int Book::get_pages()const
{
	return pages;
}

istream& operator >>(istream& ins, Book& b1)
{
	b1.input(ins);
	return ins;
}

ostream& operator <<(ostream& outs, const Book& b1)
{
	b1.output(outs);
	return outs;
}
