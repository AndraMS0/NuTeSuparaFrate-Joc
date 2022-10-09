//---------------------------------------------------------------------------

#ifndef PrimaFereastraH
#define PrimaFereastraH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include "PionRosu.h"
#include "PionVerde.h"
#include <System.Win.ScktComp.hpp>



//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TButton *btnZar;
	TEdit *Edit1;
	TEdit *mesaj;
	TServerSocket *ServerSocket1;
	TClientSocket *ClientSocket1;
	TMemo *Memo1;
	TButton *EXIT;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall btnZarClick(TObject *Sender);
	void __fastcall alege_pionClick(TObject *Sender);
	void __fastcall ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall EXITClick(TObject *Sender);


private:	// User declarations
public:	  Pion *p[8];	// User declarations
		  int last_moved=0;
		  bool joaca;
		bool comun(int tip, int valoare);
		int pozR[4]={0};
		int pozV[8]={0};




	__fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
  //int TForm1::last_moved=0;
#endif
