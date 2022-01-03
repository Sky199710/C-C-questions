/*************************************************************************
	> File Name: 8.h
	> Author: Sparks
	> Mail: zty971029@163.com 
	> Created Time: Tue 20 Jul 2021 01:00:21 AM PDT
 ************************************************************************/

#include<iostream>
#define MAXITEM 10
using namespace std;
typedef int Item;
class List{
private:
	Item item[MAXITEM];
	int num;
public:
	List();
	void AddItem(const Item point);
	bool isempty()const;
	bool isfull()const;
	void visit(void(*pf)(Item & points));
};
void show(Item & points);
