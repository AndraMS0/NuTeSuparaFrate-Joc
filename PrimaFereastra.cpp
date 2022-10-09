//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "PrimaFereastra.h"
#include "Pion.h"
#include "PionRosu.h"
#include "PionVerde.h"
#include "Intrebare.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner) {


}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{

	Image1->Picture->LoadFromFile("Imagine_Form.png");
	Image9->Picture->LoadFromFile("pionprim.png");
	Image7->Picture->LoadFromFile("pionprim.png");
	Image6->Picture->LoadFromFile("pionprim.png");
	Image8->Picture->LoadFromFile("pionprim.png");
	Image4->Picture->LoadFromFile("pionsecund.png");
	Image5->Picture->LoadFromFile("pionsecund.png");
	Image3->Picture->LoadFromFile("pionsecund.png");
	Image2->Picture->LoadFromFile("pionsecund.png");

	p[0]=new PionRosu(256,485,0,1,Image9,0,0);
	p[1]=new PionRosu(256,440,0,1,Image7,0,0);
	p[2]=new PionRosu(200,440,0,1,Image6,0,0);
	p[3]=new PionRosu(200,496,0,1,Image8,0,0);
	p[4]=new PionVerde(576,135,0,2,Image4,0,0);
	p[5]=new PionVerde(632,144,0,2,Image5,0,0);
	p[6]=new PionVerde(632,88,0,2,Image3,0,0);
	p[7]=new PionVerde(576,88,0,2,Image2,0,0);



}
//---------------------------------------------------------------------------





void __fastcall TForm1::btnZarClick(TObject *Sender)
{    if(joaca==true)
	{
	 int zar=rand()%6+1;
	  Edit1->Text=zar;
    }

}
//---------------------------------------------------------------------------

  bool TForm1:: comun(int tip, int valoare_next_casuta)
  {
	bool este_comun=false;
	if(tip==1)
	{
		for(int i=0;i<4;i++)
		{
			if(pozR[i]==valoare_next_casuta)
			{

			este_comun=true;
			break;
			}
		}
	}
	if(tip==2)
	{
		for(int i=4;i<8;i++)

		{
			if(pozV[i]==valoare_next_casuta)
			{
				este_comun=true;
				break;
            }
		}
	}
	return este_comun;
  }


void __fastcall TForm1::alege_pionClick(TObject *Sender)
{      if(joaca==true)
{
		TImage *pioni=(TImage*) Sender;


		for(int i=0;i<8;i++)
		{
			 if(p[i]->Verifica(pioni) && p[i]->tip_pion()!=last_moved)
			 {
			 int val=StrToInt( Edit1->Text);
				int valoare_next_casuta;
				String s="";
				s=IntToStr(val);
				s+=IntToStr(i);
				s+=IntToStr(p[i]->tip_pion());
				  if(p[i]->tip_pion()==1)
				  valoare_next_casuta=pozR[i]+val;
				  if(p[i]->tip_pion()==2)
				   valoare_next_casuta=pozV[i]+val;


				   if(comun(p[i]->tip_pion(),valoare_next_casuta)==false && (pozR[i]!=43 || pozV[i]!=43))
				   {

					if( ServerSocket1->Active==True)
					{
					  joaca=false;
					   ServerSocket1->Socket->Connections[0]->SendText(s);

					}
					  if( ClientSocket1->Active==True)
					  {
					  joaca=false;
						ClientSocket1->Socket->SendText(s);
					  }

					  if(p[i]->tip_pion()==1)
						pozR[i]=valoare_next_casuta;
					  if(p[i]->tip_pion()==2)
						pozV[i]=valoare_next_casuta;

					   p[i]->muta(val);
					   last_moved=p[i]->tip_pion();
					   mesaj->Text="Poti continua";

				   }
				   else
				   mesaj->Text="Pozitie ocupata";
				break;
			 }




		}

       }
}

//---------------------------------------------------------------------------





void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket)

{
  String s=Socket->ReceiveText();
  int date=StrToInt(s);
  int tipul_pionului=date%10;
  date/=10;
  int nr_pion=date%10;
  int zar=date/10;
  Edit1->Text=IntToStr(zar);
  joaca=true;
	p[nr_pion]->muta(zar);
  last_moved=p[nr_pion]->tip_pion();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket)

{
  String s=Socket->ReceiveText();
  int date=StrToInt(s);
  int tipul_pionului=date%10;
  date/=10;
  int nr_pion=date%10;
  int zar=date/10;
  Edit1->Text=IntToStr(zar);
  joaca=true;
  p[nr_pion]->muta(zar);
  last_moved=p[nr_pion]->tip_pion();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormShow(TObject *Sender)
{

if(Form2->ShowModal()==mrOk)
	{
		ServerSocket1->Active=True;
	   joaca=true;
	}

if(Form2->ShowModal()==mrYes)
	{
		ClientSocket1->Active=True;
	   joaca=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EXITClick(TObject *Sender)
{
 for (int i=0;i<8;i++)
 delete p[i];
 exit(0);
}
//---------------------------------------------------------------------------

