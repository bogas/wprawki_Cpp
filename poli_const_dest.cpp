#include <iostream>
#include <string>

using namespace std;
class being
{
	public:
	being(){cout<<"Being created"<<endl;};
	virtual ~being(){cout<<"Being kiled"<<endl;}

	
	private:

	virtual void doStuff() = 0;
};

class animal : public being
{
	public:
	animal() { cout<<"Animal created"<<endl;}
	virtual ~animal(){cout<<"Animal kiled"<<endl;}
	
	
	private:
	void doStuff(){cout<<"Did Stuff"<<endl;}
	
};

class dog : public animal
{
	public:
	dog(){cout<<"Dog created"<<endl;}
	~dog(){cout<<"Dog killed"<<endl;}
};

class cat : public animal
{
	public:
	cat(){cout<<"Cat created"<<endl;}
	~cat(){cout<<"Cat killed"<<endl;}
};

class catodog : public cat, public dog
{
	public:
	catodog(){cout<<"catodog created"<<endl;}
	~catodog(){cout<<"catodog killed"<<endl;}
};


int main()

{
	
	
	catodog* omega = new catodog();
	delete omega;
	
	return 0;
}
