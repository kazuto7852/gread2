#pragma once
class STR
{
private:
	char* str;
	size_t len;
public:
	STR(const char* s);
	STR(const class STR& s);
	~STR();
	void disp();
	STR& operator=(const STR& s);
	//void strcpy(class STR& s);
};

