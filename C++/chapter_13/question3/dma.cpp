// dma.cpp --dma class methods

#include "dma.h"
#include <cstring>

dmaABC::dmaABC(const char * l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

dmaABC::dmaABC(const dmaABC & rs)
{
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

dmaABC::~dmaABC()
{
	delete [] label;
}

dmaABC & dmaABC::operator=(const dmaABC &rs)
{	
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

// baseDMA methods
baseDMA::baseDMA(const char * l, int r):dmaABC(l,r)
{}
void baseDMA::View() const
{
	std::cout << "Label: " << Label() << std::endl;
	std::cout << "Rating: " << Rate() << std::endl;
}


// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : dmaABC(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs)
    : dmaABC(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
	std::cout<<color;
}
void lacksDMA::View() const
{
	std::cout << "Label: " << Label() << std::endl;
	std::cout << "Rating: " << Rate() << std::endl;
	std::cout << "Color: "<< color  <<std::endl;
}



// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
         : dmaABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs)
         : dmaABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
         : dmaABC(hs)  // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    dmaABC::operator=(hs);  // copy base portion
    delete [] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}
    
void hasDMA::View() const
{
	std::cout << "Label: " << Label() << std::endl;
	std::cout << "Rating: " << Rate() << std::endl;
	std::cout << "Style: "<< style <<std::endl;
}
