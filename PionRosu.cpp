//---------------------------------------------------------------------------

#pragma hdrstop

#include "PionRosu.h"


//---------------------------------------------------------------------------
#pragma package(smart_init)


 PionRosu:: PionRosu(int x, int y,int zar, int tipPion0, TImage *imagine0,int ctR0, int ordine_casutaR0):Pion(x,y, zar)
	{
		this->tipPion=tipPion0;
		this->imagine= imagine0;
		this->ctR=ctR0;
		this->ordine_casutaR=ordine_casutaR0;
		imagine->Width=33;
		imagine->Height=57;
		imagine->Left=x;
		imagine->Top=y;
		imagine->Visible=true;
		imagine->Stretch=true;

	}
   PionRosu:: PionRosu()
	{
		tipPion=1;
		ctR=0;
		ordine_casutaR=0;
	}
   bool PionRosu::Verifica(TImage *img)
   {
	   if(imagine==img)
	   return true;
	   else return false;
   }
   int PionRosu::tip_pion()
   {
	   return tipPion;
   }

    void PionRosu::muta( int zar)
  {

	  imagine->Left=x;
	  imagine->Top=y;

	 if((x==256 && y==485)||(x==256 && y==440)||(x==200 && y==440)||(x==200 && y==496))
	  {
			x=360;
			   y=536;

			  imagine->Left=x;
			   imagine->Top=y;

	  }

	   else
		{

		   while(zar>0 )
		   {
				if(ordine_casutaR<4 )
				{
					if(ctR<5){
						  y-=50;
					  imagine->Top=y;
					  ctR++;
					  ordine_casutaR++;

					}


				}
				if(ordine_casutaR>4 && ordine_casutaR<9)
				{
					if(ctR<=4){
					x-=53;
					imagine->Left=x;
					ctR++;
					ordine_casutaR++;

					}
				}
			   if(ordine_casutaR==4)
				{
				   ordine_casutaR++;
					ctR=0;
				}


				 if(ordine_casutaR>=10 && ordine_casutaR<12)
				 {
					 if(ctR<3)
					 {
						 y-=50;
					  imagine->Top=y;
					  ctR++;
					  ordine_casutaR++;
					 }
				 }
				  if(ordine_casutaR==9)
				 {
					ordine_casutaR++;
					ctR=0;
				 }

				 if(ordine_casutaR>=13 && ordine_casutaR<17)
				 {    if(ctR<=4)
					   {	 x+=53;
						 imagine->Left=x;
						ctR++;
						ordine_casutaR++;

					   }
				 }
				 if(ordine_casutaR==12)
				{
				   ordine_casutaR++;
					ctR=0;
				}
				if(ordine_casutaR>=18 && ordine_casutaR<22)
				{
					if(ctR<=4)
					{
						   y-=50;
					  imagine->Top=y;
					  ctR++;
					  ordine_casutaR++;
                    }
				}
				if(ordine_casutaR==17)
				{
				   ordine_casutaR++;
					ctR=0;
				}

				if(ordine_casutaR>=23 && ordine_casutaR<25)
				{
					if(ctR<3)
					{
						x+=55;
						 imagine->Left=x;
						ctR++;
						ordine_casutaR++;
                    }
				}
				if(ordine_casutaR==22)
				{
				   ordine_casutaR++;
					ctR=0;
				}
				 if(ordine_casutaR>=26 && ordine_casutaR<30)
				 {
					 if(ctR<=4)
					 {
						 y+=50;
					  imagine->Top=y;
					  ctR++;
					  ordine_casutaR++;
					 }
				 }
				 if(ordine_casutaR==25)
				{
				   ordine_casutaR++;
					ctR=0;
				}

				if(ordine_casutaR>=31 && ordine_casutaR<35)
				{
					if(ctR<=4)
					{
					   x+=54;
						 imagine->Left=x;
						ctR++;
						ordine_casutaR++;
					}
				}
				if(ordine_casutaR==30)
				{
				  ordine_casutaR++;
					ctR=0;
				}

				if(ordine_casutaR>=36 && ordine_casutaR<38)
				{
					if(ctR<3)
					{
						y+=50;
					  imagine->Top=y;
					  ctR++;
					  ordine_casutaR++;
					}
				}
				if(ordine_casutaR==35)
				{
				  ordine_casutaR++;
					ctR=0;
				}

				if(ordine_casutaR>=39 && ordine_casutaR<43)
				{
					if(ctR<=4)
					{
					   x-=54;
						 imagine->Left=x;
						ctR++;
						ordine_casutaR++;
					}
				}
				if(ordine_casutaR==38)
				{
				   ordine_casutaR++;
					ctR=0;
				}
				 if(ordine_casutaR>=44 && ordine_casutaR<48)
				 {
					 if(ctR<=4)
					 {
						y+=50;
					  imagine->Top=y;
					  ctR++;
					  ordine_casutaR++;
					 }
				 }
				 if(ordine_casutaR==43)
				{
				   ordine_casutaR++;
					ctR=0;
				}
				if( ordine_casutaR>=49 && ordine_casutaR<50)
				{
						x-=54;
						 imagine->Left=x;
						ctR++;
						ordine_casutaR++;
				}
				if(ordine_casutaR==48)
				{
				   ordine_casutaR++;
					ctR=0;

				}
				if( ordine_casutaR>=51 && ordine_casutaR<55)
				{
					if(ctR<=4)
					{
						y-=50;
					  imagine->Top=y;
					  ctR++;
					  ordine_casutaR++;
					}
				}
				if(ordine_casutaR==50)
				{
				   ordine_casutaR++;
					ctR=0;

				}

				zar--;


			}
		   }

  }
