#include <iostream>
#include <string>

#include "Message.h"

using namespace std;

void Message::readMsg(){
	cout <<"Enter message:" ;
	cin.getline(msg, 128);
}

void Message::readID(){
	cout << "Enter ID:";
	cin >> id;
};