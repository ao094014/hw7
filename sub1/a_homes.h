/************************************************
Animal homes header file
-will include the parent and child classes
CS2401 project 5 Spring 2017 Andrew Orsburn
************************************************/
#include <iostream>
#include <list>
#include <string>
class a_homes{
	public:
	virtual void input(std::istream& ins) =0;
	virtual void output(std::ostream& outs) =0;
};

class Megalodon:public a_homes{
	public:
	void input(std::istream& ins);
	void output(std::ostream& outs);
	private:
	double radius;
	double height;
	std::string transparency;
	bool ceiling;
	
};

class Eagle:public a_homes{
	public:
	void input(std::istream& ins);
	void output(std::ostream& outs);
	private:
	std::string location;
	std::string material;
	double altitude;
	int number_of_eagles;
	
};

class p_bear:public a_homes{
	public:
	void input(std::istream& ins);
	void output(std::ostream& outs);
	private:
	std::string type;
	bool pool;
	int temperature;
	double length;
	double width;
};

class cheetah:public a_homes{
	public: 
	void input(std::istream& ins);
	void output(std::ostream& outs);
	private:
	int temperature;
	bool water;
	double length;
	double width;
	double height;
	bool jungle_gym;
};

class Wampa:public a_homes{
	public:
	void input(std::istream& ins);
	void output(std::ostream& outs);
	private:
	double skeletons;
	bool jedi;
	bool tauntaun;
	std::string location_on_Hoth;
};
