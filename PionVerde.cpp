//---------------------------------------------------------------------------

#pragma hdrstop

#include "PionVerde.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
PionVerde:: PionVerde(int x, int y, int zar, int tipPion0, TImage *imagine0,int ctV0, int ordine_casutaV0): Pion(x, y, zar)
{
	this->tipPion=tipPion0;
	this->imagine=imagine0;
	this->ctV=ctV0;
	this->ordine_casutaV=ordine_casutaV0;
	imagine->Width=33;
	imagine->Height=57;
	imagine->Left=x;
	imagine->Top=y;
	imagine->Visible=true;
	imagine->Stretch=true;

}
PionVerde:: PionVerde()
{
	tipPion=2;
	ctV=0;
	ordine_casutaV=0;

}
  bool PionVerde::Verifica(TImage *img)
   {
	   if(imagine==img)
	   return true;
	   else return false;
   }
   int PionVerde::tip_pion()
   {
		 return tipPion;
   }

  void PionVerde::muta(int zar)
{
	imagine->Left=x;
	imagine->Top=y;
	if((x==576 && y==135)||(x==632 && y==88)||(x==632 && y==144)|| (x==576 && y==88) )
	  {
			x=472;
			y=35;
			   imagine->Left=x;
			   imagine->Top=y;
	  }
	  else
	  {
		  while(zar>0)
		  {
			  if(ordine_casutaV<4 )
				{
					if(ctV<5){
						  y+=50;
					  imagine->Top=y;
					  ctV++;
					  ordine_casutaV++;

					}

				}
				if(ordine_casutaV>4 && ordine_casutaV<9)
				{
					if(ctV<=4){
					x+=53;
					imagine->Left=x;
					ctV++;
					ordine_casutaV++;

					}
				}
				if(ordine_casutaV==4)
				{
				   ordine_casutaV++;
					ctV=0;
				}
				if(ordine_casutaV>=10 && ordine_casutaV<12)
				 {
					 if(ctV<3)
					 {
						 y+=50;
					  imagine->Top=y;
					  ctV++;
					  ordine_casutaV++;
					 }
				 }
				 if(ordine_casutaV==9)
				 {
					ordine_casutaV++;
					ctV=0;
				 }
				 if(ordine_casutaV>=13 && ordine_casutaV<17)
				 {    if(ctV<=4)
					   {	 x-=53;
						 imagine->Left=x;
						ctV++;
						ordine_casutaV++;

					   }
				 }
				 if(ordine_casutaV==12)
				{
				   ordine_casutaV++;
					ctV=0;
				}
				if(ordine_casutaV>=18 && ordine_casutaV<22)
				{
					if(ctV<=4)
					{
						   y+=50;
					  imagine->Top=y;
					  ctV++;
					  ordine_casutaV++;
					}
				}
				if(ordine_casutaV==17)
				{
				   ordine_casutaV++;
					ctV=0;
				}
				 if(ordine_casutaV>=23 && ordine_casutaV<25)
				{
					if(ctV<3)
					{
						x-=55;
						 imagine->Left=x;
						ctV++;
						ordine_casutaV++;
					}

				}

				if(ordine_casutaV==22)
				{
				   ordine_casutaV++;
					ctV=0;
				}
				if(ordine_casutaV>=26 && ordine_casutaV<30)
				 {
					 if(ctV<=4)
					 {
						 y-=50;
					  imagine->Top=y;
					  ctV++;
					  ordine_casutaV++;
					 }
				 }

				 if(ordine_casutaV==25)
				{
				   ordine_casutaV++;
					ctV=0;
				}

				if(ordine_casutaV>=31 && ordine_casutaV<35)
				{
					if(ctV<=4)
					{
					   x-=54;
						 imagine->Left=x;
						ctV++;
						ordine_casutaV++;
					}
				}
				if(ordine_casutaV==30)
				{
				  ordine_casutaV++;
					ctV=0;
				}
				if(ordine_casutaV>=36 && ordine_casutaV<38)
				{
					if(ctV<3)
					{
						y-=50;
					  imagine->Top=y;
					  ctV++;
					  ordine_casutaV++;
					}
				}
				if(ordine_casutaV==35)
				{
				  ordine_casutaV++;
					ctV=0;
				}

				if(ordine_casutaV>=39 && ordine_casutaV<43)
				{
					if(ctV<=4)
					{
					   x+=54;
						 imagine->Left=x;
						ctV++;
						ordine_casutaV++;
					}
				}
				if(ordine_casutaV==38)
				{
				   ordine_casutaV++;
					ctV=0;
				}
				if(ordine_casutaV>=44 && ordine_casutaV<48)
				 {
					 if(ctV<=4)
					 {
						y-=50;
					  imagine->Top=y;
					  ctV++;
					  ordine_casutaV++;
					 }
				 }
				 if(ordine_casutaV==43)
				{
				   ordine_casutaV++;
					ctV=0;
				}
				if( ordine_casutaV>=49 && ordine_casutaV<50)
				{
						x+=54;
						 imagine->Left=x;
						ctV++;
						ordine_casutaV++;
				}
				 if(ordine_casutaV==48)
				{
				   ordine_casutaV++;
					ctV=0;

				}
				if( ordine_casutaV>=51 && ordine_casutaV<55)
				{
					if(ctV<=4)
					{
						y+=50;
					  imagine->Top=y;
					  ctV++;
					  ordine_casutaV++;
					}
				}
				if(ordine_casutaV==50)
				{
				   ordine_casutaV++;
					ctV=0;

				}

			  zar--;
		  }

	   }

}
