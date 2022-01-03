// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
public:
	enum Mode {STO, IPO, FPO};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
	Mode mode;

public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
	void stone_mode();
	void ipound_mode();
	void fpound_mode();
	Stonewt operator+(const Stonewt & b) const;
	Stonewt operator-(const Stonewt & b) const;
	Stonewt operator*(double n) const;
    //void show_lbs() const;        // show weight in pounds format
    //void show_stn() const;        // show weight in stone format
	friend Stonewt operator*(double n,const Stonewt &a)
	{return a*n;}
	friend std::ostream &
		operator<<(std::ostream & os, const Stonewt & s);
};
#endif
