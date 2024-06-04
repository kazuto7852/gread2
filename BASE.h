#pragma once
#include<stdio.h>
class BASE
{
public:
	BASE() {
		printf("BASE()");
	}
	virtual ~BASE() {
		printf("~BESE()");
	}
};

