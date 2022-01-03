// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
	mode=FPO;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
	mode=STO;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
	mode=STO;
}

Stonewt::~Stonewt()         // destructor
{
}
void Stonewt::stone_mode()
{
	mode = STO;
}
void Stonewt::ipound_mode()
{
	mode = IPO;
}
void Stonewt::fpound_mode()
{
	mode = FPO;
}
Stonewt Stonewt::operator+(const Stonewt & b)const
{
	Stonewt sum;
	sum.pounds=pounds+b.pounds;
	sum.stone=int(sum.pounds)/Lbs_per_stn;
	sum.pds_left=int(sum.pounds)%Lbs_per_stn+sum.pounds-int(sum.pounds);
	return sum;
}
Stonewt Stonewt::operator-(const Stonewt & b)const
{
	Stonewt diff;
	diff.pounds=pounds-b.pounds;
	diff.stone=int(diff.pounds)/Lbs_per_stn;
	diff.pds_left=int(diff.pounds)%Lbs_per_stn+diff.pounds-int(diff.pounds);
	return diff;
}
Stonewt Stonewt::operator*(double n)const
{
	Stonewt mult;
	mult.pounds=pounds*n;
	mult.stone=int(mult.pounds)/Lbs_per_stn;
	mult.pds_left=int(mult.pounds)%Lbs_per_stn+mult.pounds-int(mult.pounds);
	return mult;
}
std::ostream &
	operator<<(std::ostream & os, const Stonewt & s)
{
	if(s.mode==Stonewt::STO)
	{
		os<< s.stone << " stone, " <<s.pds_left << " pounds\n";
	}
	else if(s.mode==Stonewt::IPO)
	{
		cout <<int(s.pounds)<< " pounds\n";
	}
	else if(s.mode==Stonewt::FPO)
	{
		cout<<s.pounds<<" pounds\n";
	}
}


