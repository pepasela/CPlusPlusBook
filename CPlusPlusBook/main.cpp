#include <iostream>
#include <string>


using namespace std;
#include "message.h"



class Line{
	int mx1, mx2,my1 ,my2;
public:
	Line() {};
	Line(int x1, int y1, int x2, int y2){mx1 = x1;mx2  = x2;my1 = y1;my2 = y2;}
	void print(){cout << mx1 << mx2 << my1 << my2 << endl;}
};

int main(){
	
	Message msg_arr[4];
	Message *pmsg = msg_arr;
	pmsg->setID(1);
	for(int i = 0;i < 4;i++)
	{
		pmsg->print();
		system("PAUSE");
		pmsg++;
	};
/*
	Line l0(1,2,2,4);
	Line l1(4,5,6,7);
	Line l2(6,6,2,6);

	Line triangle[3];
	triangle[0] = l0;
	triangle[1] = l1;
	triangle[2] = l2;
	
	for (int i = 0; i<3; i++){
		triangle[i].print();
			system("PAUSE");
	};
	Message circle[3];
	Message m3;
	m3.setID(3);
	circle[0] = m3.getID();
	m3.setID(2);
	circle[1] = m3.getID();
	m3.setID(1);
	circle[2] = m3.getID();

	for(int i=0; i<3; i++)
	{
		circle[i].print();
		system("Pause");
	}
	*/
	

	return 0;
};


