// workmi.cpp -- multiple inheritance
// compile with workermi.cpp
#include <iostream>
#include <cstring>
#include "workermi.h"
const int SIZE = 5;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;
   using std::strchr;

   QueueTp<Worker> * lolas = new QueueTp<Worker>(SIZE);
   Waiter waiter("Sky",124859600,5);
   Singer singer("Lolita",100000000,3);

	lolas->enqueue(waiter);
	lolas->enqueue(singer);

    cout << "\nHere is your staff:\n";
    cout << endl;
	Singer temp1;
	Waiter temp2;
	lolas->dequeue(temp1);
	lolas->dequeue(temp2);
	temp1.Show();
	temp2.Show();
    cout << "Bye.\n";
    // cin.get();
    // cin.get();
    return 0; 
}
