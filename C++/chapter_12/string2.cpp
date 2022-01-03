// string1.cpp -- String class methods
#include <cstring>                 // string.h for some
#include <cctype>
#include "string2.h"               // includes <iostream>

using std::cin;
using std::cout;

// initializing static class member

int String::num_strings = 0;

// static method
int String::HowMany()
{
    return num_strings;
}

// class methods
String::String(const char * s)     // construct String from C string
{
    len = std::strlen(s);          // set size
    str = new char[len + 1];       // allot storage
    std::strcpy(str, s);           // initialize pointer
    num_strings++;                 // set object count
}

String::String()                   // default constructor
{
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // default string
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;             // handle static member update
    len = st.len;              // same length
    str = new char [len + 1];  // allot space
    std::strcpy(str, st.str);  // copy string to new location
}

String::~String()                     // necessary destructor
{
    --num_strings;                    // required
    delete [] str;                    // required
}

// overloaded operator methods    

    // assign a String to a String
String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

    // assign a C string to a String
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

String & String::operator+(const String &st2)
{
	int len_temp = len;
	char * temp = new char[len+1];
	strcpy(temp,str);
	len+=st2.len;
	delete [] str;
	str = new char[len+1];
	strcpy(str,temp);
	strcpy(str+len_temp,st2.str);
	delete [] temp;
	return *this;
}
String & String::operator+(const char * st2)
{
	int len_temp = len;
	char * temp = new char[len+1];
	strcpy(temp,str);
	len+=strlen(st2);
	delete [] str;
	strcpy(str,temp);
	strcpy(str+len_temp,st2);
	delete [] temp;
	return *this;
}
String & operator+(const char * st1, String &st2)
{
	int len_temp = strlen(st1);
	char * temp = new char[st2.len+1];
	strcpy(temp,st2.str);
	st2.len+=strlen(st1);
	delete [] st2.str;
	st2.str = new char[st2.len+1];
	strcpy(st2.str,st1);
	strcpy(st2.str+len_temp,temp);
	delete [] temp;
	return st2;
}
void String::stringup()
{
	for(int i=0;i<len;i++)
	{	
		if(isalpha(str[i]))
			str[i]=toupper(str[i]);
	}
}
void String::stringlow()
{
	for(int i=0;i<len;i++)
	{	
		if(isalpha(str[i]))
			str[i]=tolower(str[i]);
	}
}
int String::has(char ch)
{
	int num=0;
	for(int i=0;i<len;i++)
	{
		if(ch==str[i])
			num++;
	}
	return num;
}

// read-write char access for non-const String
char & String::operator[](int i)
{
    return str[i];
}

    // read-only char access for const String
const char & String::operator[](int i) const
{
    return str[i];
}

// overloaded operator friends

bool operator<(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2)
{
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

    // simple String output
ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os; 
}

    // quick and dirty String input
istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is; 
}
