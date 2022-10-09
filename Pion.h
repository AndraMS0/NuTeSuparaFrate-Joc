//---------------------------------------------------------------------------

#ifndef PionH
#define PionH
#pragma once
 #include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------




class Pion
{      protected:
	int x;
	int y;
	int zar;

 public:	Pion(int x0, int y0, int zar0)
	{
	   this->x=x0;
		this->y=y0;
		this->zar=zar0;
	}
	Pion()
	{
		x=0;
		y=0;
		zar=0;
	}

	virtual void muta( int zar)=0;
	virtual bool Verifica(TImage *img)=0;
	virtual int tip_pion()=0;








};

#endif
