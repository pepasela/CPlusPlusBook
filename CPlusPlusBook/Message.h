#ifndef MESSAGE_H
#define MESSAGE_H
#include <iostream>
#include <string>
using namespace std;
class Message{

private:
	int id;
	char msg[128];
public:
	Message(int i){id = i;}
	Message() {id=0;}
	void setID(int i) {id = i;}
	int getID() {return id;}
	void setMsg(char *m) {strcpy_s(msg, m);}
	char *getMsg() {return msg;}
	void readMsg();
	void readID();
	void print(){cout << msg <<endl;}
};

#endif