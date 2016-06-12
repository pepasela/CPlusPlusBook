#include <iostream>
#include <string>


using namespace std;
#include "Message.h"
#include <algorithm>




int main(){
	
	int arr1[7] = {3,1,90,-12,89,2,3};
	string arr2[4] = {"itzchak" , "sally", "boobo","zibi"};
	int *p1 = find(arr1,arr1+7,24);
	string *p2 = find(arr2,arr2+4,"sally");
	cout << p2 <<endl;
	system("Pause");
	return 0;
};


