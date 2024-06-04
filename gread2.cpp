#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"STR.h"
#include<crtdbg.h>

class GAME_OBJECT {
public:
	GAME_OBJECT() {
		printf("GAME_OBJECT\n");
	}
	virtual~GAME_OBJECT() {
		printf("~GAME_OBJECT\n");
	}
};

class SCENE : public GAME_OBJECT {
public:
	SCENE() {
		printf("SCENE\n");
	}
	virtual~SCENE() {
		printf("~SCENE\n");
	}
	virtual void draw() {}
	virtual void update() {
		
	}
	void proc() {
		this->draw();
		this->update();
	}
};

class TITLE : public SCENE {
public:
	TITLE() {
		printf("TITLE\n");
	}
	~TITLE() {
		printf("~TITLE\n");
	}
	void draw() {
		printf("TITLE::draw\n");
	}
	void update() {
		printf("TITLE::update\n");
	}
};

class GAME_OVER : public SCENE {
public:
	GAME_OVER() {
		printf("GAME_OVER\n");
	}
	~GAME_OVER() {
		printf("~GAME_OVER\n");
	}
	void draw() {
		printf("GAME_OVER::draw\n");
	}
	void update() {
		printf("GAME_OVER::update\n");
	}
};

class A {
private:
	int Cnt = 5;
public:
	A() {
		printf("A()\n");
	}
	~A() {
		printf("~A()\n");
	}
	void update() {
			delete this;
	}
};

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	class A p;
	p.update();
	/*
	printf("a-----------------------------------\n");
	class STR s1("ABCD");
	printf("b-----------------------------------\n");
	class STR s2(s1);
	printf("c-----------------------------------\n");
	s2 = s2;
	printf("e-----------------------------------\n");
	*/

}