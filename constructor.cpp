#include <iostream>
#include <string.h>

class noConstr
{
	public:
	char* value;
	noConstr(){value = (char*)malloc(5*sizeof(char)); value = strdup("dida");}
	noConstr(noConstr &other) {value = (char*)malloc(5*sizeof(char)); value = strdup("puda");}
	~noConstr() {std::cout<<"noConstr deleted"<<std::endl;memset(value,0,strlen(value));delete value; value = 0;}
	noConstr& operator=(noConstr &n ){ this->value = (char*)malloc(5*sizeof(char)); this->value = strdup("pupu"); return *this;}
};


int main()

{
	noConstr* a = new noConstr();
	noConstr u;
	std::cout<<std::hex<<a->value<<std::endl;
	
	std::cout<<std::hex<<u.value<<std::endl;
	//char* value = (char*)malloc(5*sizeof(char));
	//value = strdup("dupa");
	//a->value = value;
	noConstr b;
	b = u;
	std::cout<<std::hex<<b.value<<std::endl;
	//std::cout<<"before delete of other object "<<std::hex<<.value<<std::endl;
	//delete a;
	
	//std::cout<<"After "<<std::hex<<b.value<<std::endl;
	//std::cout<<"Template file"<<std::endl;
	return 0;
}
