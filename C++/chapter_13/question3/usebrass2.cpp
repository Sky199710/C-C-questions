// usebrass2.cpp -- polymorphic example
// compile with brass.cpp
#include <iostream>
#include <string>
#include "dma.h"
const int ITEMS = 4;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;

   dmaABC * p_items[ITEMS];
   char temp[40];
   int rating;
   char kind;

   for (int i = 0; i < ITEMS; i++)
   {
       cout << "Enter record's label: ";
       cin.getline(temp,40);
       cout << "Enter record's rating: ";
       cin >> rating;
       cout << "Enter 1 for Base DMA or "
            << "2 for Lack DMA or "
			<< "3 for Has DMA: ";
       while (cin >> kind && (kind != '1' && kind != '2' && kind !='3'))
           cout <<"Enter either 1, 2 or 3: ";
	   while (cin.get() != '\n')
            continue;
       if (kind == '1')
           p_items[i] = new baseDMA(temp, rating);
	   else if(kind == '2')
       {
		   char color[20];
           cout << "Enter the color: ";
           cin.getline(color,20);
		   p_items[i] = new lacksDMA(color, temp, rating);
		}
	   else 
	   {
		   char style[20];
		   cout<< "Enter the style: ";
		   cin.getline(style,20);
		   p_items[i] = new hasDMA(style,temp,rating);
	   }
   }
   cout << endl;
   for (int i = 0; i < ITEMS; i++)
   {
       p_items[i]->View();
       cout << endl;
   }
              
   for (int i = 0; i < ITEMS; i++)
   {
       delete p_items[i];  // free memory
   }
   cout << "Done.\n";         
 /* code to keep window open 
   if (!cin)
      cin.clear();
   while (cin.get() != '\n')
      continue;
*/
   return 0; 
}
