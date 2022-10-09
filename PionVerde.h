//---------------------------------------------------------------------------

#ifndef PionVerdeH
#define PionVerdeH
#include "Pion.h"
//---------------------------------------------------------------------------
class PionVerde: public Pion
{
	protected:
	int tipPion;
  TImage *imagine;
	 int ctV;
	 int ordine_casutaV;
     public:
	PionVerde(int x, int y, int zar, int tipPion0, TImage *imagine0, int ctV0, int ordine_casutaV0);
	PionVerde();

	void muta(int zar);
	 bool Verifica(TImage *img) ;
	 int tip_pion();


};


#endif
