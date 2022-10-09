//---------------------------------------------------------------------------

#ifndef PionRosuH
#define PionRosuH
#include "Pion.h"


//---------------------------------------------------------------------------

class PionRosu: public Pion
{
	protected:
	int tipPion;
	  TImage *imagine;
	   int ctR;
	   int ordine_casutaR;
	   public:
	PionRosu(int x, int y,int zar, int tipPion0, TImage *imagine0, int ctR0, int ordine_casutaR0);
	PionRosu();

	 void muta( int zar);
	  bool Verifica(TImage *img);
	  int tip_pion();



};

#endif
