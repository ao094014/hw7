//**********************************************************************************
//
// Michael Geng
// 
// CS 2401
//
// Project 1: My Library
//
// Due Date: 1/31/17
//
//				LIBRARY CLASS
// Provides functions for this program to carry
// out various tasks that the user might need
// suuch as sorts, searches, and listings.

// Last Edit: 1 - 25 - 17
// Submission Date: 1 - 25 - 17
//
//**********************************************************************************


#ifndef Library_h
#define Library_h
#include<iostream>
#include<string>
#include"book.h"

using namespace std;

class Library
{
public:
	Library();
	void addbook(Book a);
	void showall(ostream& outs)const;
	int size()const;
	int numpages()const;
	void sort_by_date();
	void sort_by_title();
	void find_title(string a)const;
	void find_author(string a)const;
	void remove(string a);
	void load(istream& ins);
	void save(ostream& outs);
private:
	size_t tracker;
	static const size_t SIZE = 200;
	Book data[SIZE];
	Book lib_book;	
};

#endif
