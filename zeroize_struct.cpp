#include <iostream>
#include <cstring>

struct record
{
	uint8_t key;
	uint16_t value;	
};

class recordClass
{
	int key = 1;
	int value = 0x12;
	void func() {}; //no impact on sizeof class
};

void bytePrinter(uint8_t* start, int len)
{
	std::cout<<std::endl;
	for(int i = 0; i < len; i++)
	{
		std::cout<<std::hex<<(int)(start[i])<<", ";
	}
	std::cout<<std::endl;
}


int main()
{
	struct record a;
	
	std::cout<<"size of char and int: "<<sizeof(char)<<"  "<<sizeof(int)<<std::endl;
	std::cout<<"size of struct record: "<<sizeof(struct record) <<std::endl;
	std::cout<<"size of class record: "<<sizeof(recordClass) <<std::endl;
	std::cout<<"bytes in unzeroized record: "<<std::endl;
	bytePrinter(&(a.key), sizeof(struct record));
	
	std::cout<<"bytes in record initialized with {0}: "<<std::endl;
	struct record b;
	b.key = 1;
	b.value = 1;
	b = {0};
	bytePrinter((uint8_t*)&(b), sizeof(struct record));
	
	std::cout<<"bytes in record initialized memset: "<<std::endl;
	struct record c{.key = 2, .value = 2};
	std::memset(&c, 0, sizeof(struct record));
	bytePrinter(&(c.key), sizeof(struct record));
	
	return 0;
}
