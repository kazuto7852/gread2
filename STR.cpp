#include "STR.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
STR::STR(const char* s) {
	printf("STR::STR(const char*s) this = %p\n", this);
	len = strlen(s);
	str = new char[len + 1];
	printf("new str = %p\n", str);
	strcpy_s(str, len + 1, s);
}

STR::STR(const class STR& s) {
	printf("STR::STR(class STR& s) this = %p &s = %p\n", this, &s);
	len = s.len;
	str = new char[len + 1];
	strcpy_s(str, len + 1, s.str);
}

STR::~STR() {
	printf("STR::~STR() this = %p\n", this);
	delete[] str;
	printf("delete str = %p\n", str);
}

void STR::disp() {
	printf("STR::disp() this = %p\n", this);
	printf("%s\n", str);
}

/*
void STR::strcpy(class STR& s) {
	printf("STR::strcpy(class STR& s) this = %p\n", this);
	delete[] str;
	printf("delete str = %p\n", str);
	size_t len = strlen(s.str);
	str = new char[len + 1];
	printf("new str = %p\n", str);
	strcpy_s(str, len + 1, s.str);
}
*/

class STR& STR::operator=(const class STR& s) {
	if (this != &s) {
		printf("STR::operator=(const STR s) this = %p &s = %p\n ", this,&s);
		delete[] str;
		printf("delete str = %p\n", str);
		len = s.len;
		str = new char[len + 1];
		printf("new str = %p\n", str);
		strcpy_s(str, len + 1, s.str);
	}
	printf("d----------------------------\n");
	return *this;
}