#include "Arboles/Enums.h"
#include "Arboles/Arboles.h"
#include <msclr/marshal_cppstd.h>
#include <vcclr.h>

#pragma once

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// Resumen de IngresoDatos
	/// </summary>
	public ref class IngresoDatos : public System::Windows::Forms::Form
	{
	public:
		IngresoDatos(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~IngresoDatos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ActMenu accion;
	private: Arbol arbol;
	private: bool cantidad;

	private: System::Windows::Forms::Label^ Titulo;
	protected:

	protected:

	protected:

	public: System::Windows::Forms::Panel^ PPanel;
	protected:

	public: System::Windows::Forms::Label^ PLabel;
	public: System::Windows::Forms::TextBox^ CodP;
	public: System::Windows::Forms::Panel^ Codigos;
	public: System::Windows::Forms::Panel^ CPanel;
	public: System::Windows::Forms::TextBox^ CodC;

	public: System::Windows::Forms::Label^ CLabel;
	public: System::Windows::Forms::Panel^ RPanel;
	public: System::Windows::Forms::TextBox^ CodR;
	public: System::Windows::Forms::Label^ RLabel;
	public: System::Windows::Forms::Panel^ MPanel;
	public: System::Windows::Forms::TextBox^ CodM;
	public: System::Windows::Forms::Label^ MLabel;
	public: System::Windows::Forms::Panel^ PrPanel;
	public: System::Windows::Forms::TextBox^ CodPr;
	public: System::Windows::Forms::Label^ PrLabel;
	public: System::Windows::Forms::Panel^ NPanel;
	public: System::Windows::Forms::TextBox^ Nombre;

	public: System::Windows::Forms::Panel^ KcalPanel;
	public: System::Windows::Forms::TextBox^ Kcal;
	public: System::Windows::Forms::Label^ KcalLabel;
	public: System::Windows::Forms::Panel^ PrePanel;
	public: System::Windows::Forms::TextBox^ Precio;
	public: System::Windows::Forms::Label^ PreLabel;
	public: System::Windows::Forms::Panel^ CaPanel;
	public: System::Windows::Forms::TextBox^ Cantidad;
	public: System::Windows::Forms::Label^ CaLabel;
	public: System::Windows::Forms::Panel^ IdPanel;
	public: System::Windows::Forms::TextBox^ Ced;
	public: System::Windows::Forms::Label^ IdLabel;



	private: System::Windows::Forms::Button^ Execute;
	public:

	public:

	public:
	public: System::Windows::Forms::Label^ NLabel;

	public:


	private: System::Windows::Forms::Label^ Msj;
	private: System::Windows::Forms::Panel^ CompraPanel;
	private: System::Windows::Forms::Panel^ NuevoProd;

	public: System::Windows::Forms::Panel^ NCPanel;
	private:

	public: System::Windows::Forms::TextBox^ Nciudad;
	public: System::Windows::Forms::Label^ NCLabel;

	private:










	public: System::Windows::Forms::Panel^ NPrPanel;

	public: System::Windows::Forms::TextBox^ NProd;
	public: System::Windows::Forms::Label^ NPrLabel;
public: System::Windows::Forms::Panel^ NRPanel;



	public: System::Windows::Forms::TextBox^ NRes;
public: System::Windows::Forms::Label^ NRLabel;
public: System::Windows::Forms::Panel^ NMPanel;



public: System::Windows::Forms::TextBox^ NMenu;
public: System::Windows::Forms::Label^ NMLabel;
public: System::Windows::Forms::Panel^ NPPanel;
public: System::Windows::Forms::TextBox^ NPais;
public: System::Windows::Forms::Label^ NPLabel;





	public:
	private:



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->PPanel = (gcnew System::Windows::Forms::Panel());
			this->CodP = (gcnew System::Windows::Forms::TextBox());
			this->PLabel = (gcnew System::Windows::Forms::Label());
			this->IdPanel = (gcnew System::Windows::Forms::Panel());
			this->Ced = (gcnew System::Windows::Forms::TextBox());
			this->IdLabel = (gcnew System::Windows::Forms::Label());
			this->Codigos = (gcnew System::Windows::Forms::Panel());
			this->CPanel = (gcnew System::Windows::Forms::Panel());
			this->CodC = (gcnew System::Windows::Forms::TextBox());
			this->CLabel = (gcnew System::Windows::Forms::Label());
			this->RPanel = (gcnew System::Windows::Forms::Panel());
			this->CodR = (gcnew System::Windows::Forms::TextBox());
			this->RLabel = (gcnew System::Windows::Forms::Label());
			this->MPanel = (gcnew System::Windows::Forms::Panel());
			this->CodM = (gcnew System::Windows::Forms::TextBox());
			this->MLabel = (gcnew System::Windows::Forms::Label());
			this->PrPanel = (gcnew System::Windows::Forms::Panel());
			this->CodPr = (gcnew System::Windows::Forms::TextBox());
			this->PrLabel = (gcnew System::Windows::Forms::Label());
			this->KcalPanel = (gcnew System::Windows::Forms::Panel());
			this->Kcal = (gcnew System::Windows::Forms::TextBox());
			this->KcalLabel = (gcnew System::Windows::Forms::Label());
			this->PrePanel = (gcnew System::Windows::Forms::Panel());
			this->Precio = (gcnew System::Windows::Forms::TextBox());
			this->PreLabel = (gcnew System::Windows::Forms::Label());
			this->CaPanel = (gcnew System::Windows::Forms::Panel());
			this->Cantidad = (gcnew System::Windows::Forms::TextBox());
			this->CaLabel = (gcnew System::Windows::Forms::Label());
			this->NPanel = (gcnew System::Windows::Forms::Panel());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->NLabel = (gcnew System::Windows::Forms::Label());
			this->Execute = (gcnew System::Windows::Forms::Button());
			this->Msj = (gcnew System::Windows::Forms::Label());
			this->CompraPanel = (gcnew System::Windows::Forms::Panel());
			this->NuevoProd = (gcnew System::Windows::Forms::Panel());
			this->NCPanel = (gcnew System::Windows::Forms::Panel());
			this->Nciudad = (gcnew System::Windows::Forms::TextBox());
			this->NCLabel = (gcnew System::Windows::Forms::Label());
			this->NPrPanel = (gcnew System::Windows::Forms::Panel());
			this->NProd = (gcnew System::Windows::Forms::TextBox());
			this->NPrLabel = (gcnew System::Windows::Forms::Label());
			this->NRPanel = (gcnew System::Windows::Forms::Panel());
			this->NRes = (gcnew System::Windows::Forms::TextBox());
			this->NRLabel = (gcnew System::Windows::Forms::Label());
			this->NMPanel = (gcnew System::Windows::Forms::Panel());
			this->NMenu = (gcnew System::Windows::Forms::TextBox());
			this->NMLabel = (gcnew System::Windows::Forms::Label());
			this->NPPanel = (gcnew System::Windows::Forms::Panel());
			this->NPLabel = (gcnew System::Windows::Forms::Label());
			this->NPais = (gcnew System::Windows::Forms::TextBox());
			this->PPanel->SuspendLayout();
			this->IdPanel->SuspendLayout();
			this->Codigos->SuspendLayout();
			this->CPanel->SuspendLayout();
			this->RPanel->SuspendLayout();
			this->MPanel->SuspendLayout();
			this->PrPanel->SuspendLayout();
			this->KcalPanel->SuspendLayout();
			this->PrePanel->SuspendLayout();
			this->CaPanel->SuspendLayout();
			this->NPanel->SuspendLayout();
			this->CompraPanel->SuspendLayout();
			this->NuevoProd->SuspendLayout();
			this->NCPanel->SuspendLayout();
			this->NPrPanel->SuspendLayout();
			this->NRPanel->SuspendLayout();
			this->NMPanel->SuspendLayout();
			this->NPPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// Titulo
			// 
			this->Titulo->AutoSize = true;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titulo->Location = System::Drawing::Point(16, 17);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(0, 28);
			this->Titulo->TabIndex = 0;
			// 
			// PPanel
			// 
			this->PPanel->Controls->Add(this->CodP);
			this->PPanel->Controls->Add(this->PLabel);
			this->PPanel->Location = System::Drawing::Point(3, 3);
			this->PPanel->Name = L"PPanel";
			this->PPanel->Size = System::Drawing::Size(164, 50);
			this->PPanel->TabIndex = 1;
			// 
			// CodP
			// 
			this->CodP->Location = System::Drawing::Point(29, 23);
			this->CodP->Name = L"CodP";
			this->CodP->Size = System::Drawing::Size(132, 22);
			this->CodP->TabIndex = 3;
			// 
			// PLabel
			// 
			this->PLabel->AutoSize = true;
			this->PLabel->Location = System::Drawing::Point(3, 4);
			this->PLabel->Name = L"PLabel";
			this->PLabel->Size = System::Drawing::Size(84, 16);
			this->PLabel->TabIndex = 2;
			this->PLabel->Text = L"Código País:";
			// 
			// IdPanel
			// 
			this->IdPanel->Controls->Add(this->Ced);
			this->IdPanel->Controls->Add(this->IdLabel);
			this->IdPanel->Location = System::Drawing::Point(3, 3);
			this->IdPanel->Name = L"IdPanel";
			this->IdPanel->Size = System::Drawing::Size(164, 50);
			this->IdPanel->TabIndex = 1;
			// 
			// Ced
			// 
			this->Ced->Location = System::Drawing::Point(29, 23);
			this->Ced->Name = L"Ced";
			this->Ced->Size = System::Drawing::Size(132, 22);
			this->Ced->TabIndex = 3;
			// 
			// IdLabel
			// 
			this->IdLabel->AutoSize = true;
			this->IdLabel->Location = System::Drawing::Point(3, 4);
			this->IdLabel->Name = L"IdLabel";
			this->IdLabel->Size = System::Drawing::Size(53, 16);
			this->IdLabel->TabIndex = 2;
			this->IdLabel->Text = L"Cedula:";
			// 
			// Codigos
			// 
			this->Codigos->Controls->Add(this->CPanel);
			this->Codigos->Controls->Add(this->PPanel);
			this->Codigos->Controls->Add(this->IdPanel);
			this->Codigos->Controls->Add(this->RPanel);
			this->Codigos->Controls->Add(this->MPanel);
			this->Codigos->Controls->Add(this->PrPanel);
			this->Codigos->Location = System::Drawing::Point(23, 20);
			this->Codigos->Name = L"Codigos";
			this->Codigos->Size = System::Drawing::Size(513, 114);
			this->Codigos->TabIndex = 2;
			// 
			// CPanel
			// 
			this->CPanel->Controls->Add(this->CodC);
			this->CPanel->Controls->Add(this->CLabel);
			this->CPanel->Location = System::Drawing::Point(173, 3);
			this->CPanel->Name = L"CPanel";
			this->CPanel->Size = System::Drawing::Size(164, 50);
			this->CPanel->TabIndex = 4;
			// 
			// CodC
			// 
			this->CodC->Location = System::Drawing::Point(29, 23);
			this->CodC->Name = L"CodC";
			this->CodC->Size = System::Drawing::Size(132, 22);
			this->CodC->TabIndex = 3;
			// 
			// CLabel
			// 
			this->CLabel->AutoSize = true;
			this->CLabel->Location = System::Drawing::Point(3, 4);
			this->CLabel->Name = L"CLabel";
			this->CLabel->Size = System::Drawing::Size(100, 16);
			this->CLabel->TabIndex = 2;
			this->CLabel->Text = L"Código Ciudad:";
			// 
			// RPanel
			// 
			this->RPanel->Controls->Add(this->CodR);
			this->RPanel->Controls->Add(this->RLabel);
			this->RPanel->Location = System::Drawing::Point(173, 58);
			this->RPanel->Name = L"RPanel";
			this->RPanel->Size = System::Drawing::Size(164, 50);
			this->RPanel->TabIndex = 4;
			// 
			// CodR
			// 
			this->CodR->Location = System::Drawing::Point(29, 23);
			this->CodR->Name = L"CodR";
			this->CodR->Size = System::Drawing::Size(132, 22);
			this->CodR->TabIndex = 3;
			// 
			// RLabel
			// 
			this->RLabel->AutoSize = true;
			this->RLabel->Location = System::Drawing::Point(3, 4);
			this->RLabel->Name = L"RLabel";
			this->RLabel->Size = System::Drawing::Size(130, 16);
			this->RLabel->TabIndex = 2;
			this->RLabel->Text = L"Código Restaurante:";
			// 
			// MPanel
			// 
			this->MPanel->Controls->Add(this->CodM);
			this->MPanel->Controls->Add(this->MLabel);
			this->MPanel->Location = System::Drawing::Point(343, 3);
			this->MPanel->Name = L"MPanel";
			this->MPanel->Size = System::Drawing::Size(164, 50);
			this->MPanel->TabIndex = 4;
			// 
			// CodM
			// 
			this->CodM->Location = System::Drawing::Point(29, 23);
			this->CodM->Name = L"CodM";
			this->CodM->Size = System::Drawing::Size(132, 22);
			this->CodM->TabIndex = 3;
			// 
			// MLabel
			// 
			this->MLabel->AutoSize = true;
			this->MLabel->Location = System::Drawing::Point(3, 4);
			this->MLabel->Name = L"MLabel";
			this->MLabel->Size = System::Drawing::Size(90, 16);
			this->MLabel->TabIndex = 2;
			this->MLabel->Text = L"Código Menu:";
			// 
			// PrPanel
			// 
			this->PrPanel->Controls->Add(this->CodPr);
			this->PrPanel->Controls->Add(this->PrLabel);
			this->PrPanel->Location = System::Drawing::Point(343, 58);
			this->PrPanel->Name = L"PrPanel";
			this->PrPanel->Size = System::Drawing::Size(164, 50);
			this->PrPanel->TabIndex = 4;
			// 
			// CodPr
			// 
			this->CodPr->Location = System::Drawing::Point(29, 23);
			this->CodPr->Name = L"CodPr";
			this->CodPr->Size = System::Drawing::Size(132, 22);
			this->CodPr->TabIndex = 3;
			// 
			// PrLabel
			// 
			this->PrLabel->AutoSize = true;
			this->PrLabel->Location = System::Drawing::Point(3, 4);
			this->PrLabel->Name = L"PrLabel";
			this->PrLabel->Size = System::Drawing::Size(111, 16);
			this->PrLabel->TabIndex = 2;
			this->PrLabel->Text = L"Código Producto:";
			// 
			// KcalPanel
			// 
			this->KcalPanel->Controls->Add(this->Kcal);
			this->KcalPanel->Controls->Add(this->KcalLabel);
			this->KcalPanel->Location = System::Drawing::Point(3, 4);
			this->KcalPanel->Name = L"KcalPanel";
			this->KcalPanel->Size = System::Drawing::Size(164, 50);
			this->KcalPanel->TabIndex = 4;
			// 
			// Kcal
			// 
			this->Kcal->Location = System::Drawing::Point(29, 23);
			this->Kcal->Name = L"Kcal";
			this->Kcal->Size = System::Drawing::Size(132, 22);
			this->Kcal->TabIndex = 3;
			// 
			// KcalLabel
			// 
			this->KcalLabel->AutoSize = true;
			this->KcalLabel->Location = System::Drawing::Point(3, 4);
			this->KcalLabel->Name = L"KcalLabel";
			this->KcalLabel->Size = System::Drawing::Size(36, 16);
			this->KcalLabel->TabIndex = 2;
			this->KcalLabel->Text = L"Kcal:";
			// 
			// PrePanel
			// 
			this->PrePanel->Controls->Add(this->Precio);
			this->PrePanel->Controls->Add(this->PreLabel);
			this->PrePanel->Location = System::Drawing::Point(173, 3);
			this->PrePanel->Name = L"PrePanel";
			this->PrePanel->Size = System::Drawing::Size(164, 50);
			this->PrePanel->TabIndex = 4;
			// 
			// Precio
			// 
			this->Precio->Location = System::Drawing::Point(29, 23);
			this->Precio->Name = L"Precio";
			this->Precio->Size = System::Drawing::Size(132, 22);
			this->Precio->TabIndex = 3;
			// 
			// PreLabel
			// 
			this->PreLabel->AutoSize = true;
			this->PreLabel->Location = System::Drawing::Point(3, 4);
			this->PreLabel->Name = L"PreLabel";
			this->PreLabel->Size = System::Drawing::Size(49, 16);
			this->PreLabel->TabIndex = 2;
			this->PreLabel->Text = L"Precio:";
			// 
			// CaPanel
			// 
			this->CaPanel->Controls->Add(this->Cantidad);
			this->CaPanel->Controls->Add(this->CaLabel);
			this->CaPanel->Location = System::Drawing::Point(343, 4);
			this->CaPanel->Name = L"CaPanel";
			this->CaPanel->Size = System::Drawing::Size(164, 50);
			this->CaPanel->TabIndex = 4;
			// 
			// Cantidad
			// 
			this->Cantidad->Location = System::Drawing::Point(29, 23);
			this->Cantidad->Name = L"Cantidad";
			this->Cantidad->Size = System::Drawing::Size(132, 22);
			this->Cantidad->TabIndex = 3;
			// 
			// CaLabel
			// 
			this->CaLabel->AutoSize = true;
			this->CaLabel->Location = System::Drawing::Point(3, 4);
			this->CaLabel->Name = L"CaLabel";
			this->CaLabel->Size = System::Drawing::Size(64, 16);
			this->CaLabel->TabIndex = 2;
			this->CaLabel->Text = L"Cantidad:";
			// 
			// NPanel
			// 
			this->NPanel->Controls->Add(this->Nombre);
			this->NPanel->Controls->Add(this->NLabel);
			this->NPanel->Location = System::Drawing::Point(25, 305);
			this->NPanel->Name = L"NPanel";
			this->NPanel->Size = System::Drawing::Size(164, 50);
			this->NPanel->TabIndex = 4;
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(29, 23);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(132, 22);
			this->Nombre->TabIndex = 3;
			// 
			// NLabel
			// 
			this->NLabel->AutoSize = true;
			this->NLabel->Location = System::Drawing::Point(3, 4);
			this->NLabel->Name = L"NLabel";
			this->NLabel->Size = System::Drawing::Size(59, 16);
			this->NLabel->TabIndex = 2;
			this->NLabel->Text = L"Nombre:";
			// 
			// Execute
			// 
			this->Execute->Location = System::Drawing::Point(429, 330);
			this->Execute->Name = L"Execute";
			this->Execute->Size = System::Drawing::Size(107, 36);
			this->Execute->TabIndex = 6;
			this->Execute->Text = L"Ejecutar";
			this->Execute->UseVisualStyleBackColor = true;
			this->Execute->Click += gcnew System::EventHandler(this, &IngresoDatos::ejecutar);
			// 
			// Msj
			// 
			this->Msj->AutoSize = true;
			this->Msj->Location = System::Drawing::Point(185, 15);
			this->Msj->Name = L"Msj";
			this->Msj->Size = System::Drawing::Size(0, 16);
			this->Msj->TabIndex = 9;
			// 
			// CompraPanel
			// 
			this->CompraPanel->Controls->Add(this->KcalPanel);
			this->CompraPanel->Controls->Add(this->CaPanel);
			this->CompraPanel->Controls->Add(this->PrePanel);
			this->CompraPanel->Location = System::Drawing::Point(23, 146);
			this->CompraPanel->Name = L"CompraPanel";
			this->CompraPanel->Size = System::Drawing::Size(513, 58);
			this->CompraPanel->TabIndex = 10;
			// 
			// NuevoProd
			// 
			this->NuevoProd->Controls->Add(this->NCPanel);
			this->NuevoProd->Controls->Add(this->Msj);
			this->NuevoProd->Controls->Add(this->NPPanel);
			this->NuevoProd->Controls->Add(this->NPrPanel);
			this->NuevoProd->Controls->Add(this->NRPanel);
			this->NuevoProd->Controls->Add(this->NMPanel);
			this->NuevoProd->Location = System::Drawing::Point(23, 210);
			this->NuevoProd->Name = L"NuevoProd";
			this->NuevoProd->Size = System::Drawing::Size(513, 115);
			this->NuevoProd->TabIndex = 11;
			// 
			// NCPanel
			// 
			this->NCPanel->Controls->Add(this->Nciudad);
			this->NCPanel->Controls->Add(this->NCLabel);
			this->NCPanel->Location = System::Drawing::Point(175, 5);
			this->NCPanel->Name = L"NCPanel";
			this->NCPanel->Size = System::Drawing::Size(164, 50);
			this->NCPanel->TabIndex = 7;
			// 
			// Nciudad
			// 
			this->Nciudad->Location = System::Drawing::Point(29, 23);
			this->Nciudad->Name = L"Nciudad";
			this->Nciudad->Size = System::Drawing::Size(132, 22);
			this->Nciudad->TabIndex = 3;
			// 
			// NCLabel
			// 
			this->NCLabel->AutoSize = true;
			this->NCLabel->Location = System::Drawing::Point(3, 4);
			this->NCLabel->Name = L"NCLabel";
			this->NCLabel->Size = System::Drawing::Size(96, 16);
			this->NCLabel->TabIndex = 2;
			this->NCLabel->Text = L"Nueva Ciudad:";
			// 
			// NPrPanel
			// 
			this->NPrPanel->Controls->Add(this->NProd);
			this->NPrPanel->Controls->Add(this->NPrLabel);
			this->NPrPanel->Location = System::Drawing::Point(345, 60);
			this->NPrPanel->Name = L"NPrPanel";
			this->NPrPanel->Size = System::Drawing::Size(164, 50);
			this->NPrPanel->TabIndex = 10;
			// 
			// NProd
			// 
			this->NProd->Location = System::Drawing::Point(29, 23);
			this->NProd->Name = L"NProd";
			this->NProd->Size = System::Drawing::Size(132, 22);
			this->NProd->TabIndex = 3;
			// 
			// NPrLabel
			// 
			this->NPrLabel->AutoSize = true;
			this->NPrLabel->Location = System::Drawing::Point(3, 4);
			this->NPrLabel->Name = L"NPrLabel";
			this->NPrLabel->Size = System::Drawing::Size(107, 16);
			this->NPrLabel->TabIndex = 2;
			this->NPrLabel->Text = L"Nuevo Producto:";
			// 
			// NRPanel
			// 
			this->NRPanel->Controls->Add(this->NRes);
			this->NRPanel->Controls->Add(this->NRLabel);
			this->NRPanel->Location = System::Drawing::Point(175, 60);
			this->NRPanel->Name = L"NRPanel";
			this->NRPanel->Size = System::Drawing::Size(164, 50);
			this->NRPanel->TabIndex = 8;
			// 
			// NRes
			// 
			this->NRes->Location = System::Drawing::Point(29, 23);
			this->NRes->Name = L"NRes";
			this->NRes->Size = System::Drawing::Size(132, 22);
			this->NRes->TabIndex = 3;
			// 
			// NRLabel
			// 
			this->NRLabel->AutoSize = true;
			this->NRLabel->Location = System::Drawing::Point(3, 4);
			this->NRLabel->Name = L"NRLabel";
			this->NRLabel->Size = System::Drawing::Size(126, 16);
			this->NRLabel->TabIndex = 2;
			this->NRLabel->Text = L"Nuevo Restaurante:";
			// 
			// NMPanel
			// 
			this->NMPanel->Controls->Add(this->NMenu);
			this->NMPanel->Controls->Add(this->NMLabel);
			this->NMPanel->Location = System::Drawing::Point(345, 5);
			this->NMPanel->Name = L"NMPanel";
			this->NMPanel->Size = System::Drawing::Size(164, 50);
			this->NMPanel->TabIndex = 9;
			// 
			// NMenu
			// 
			this->NMenu->Location = System::Drawing::Point(29, 23);
			this->NMenu->Name = L"NMenu";
			this->NMenu->Size = System::Drawing::Size(132, 22);
			this->NMenu->TabIndex = 3;
			// 
			// NMLabel
			// 
			this->NMLabel->AutoSize = true;
			this->NMLabel->Location = System::Drawing::Point(3, 4);
			this->NMLabel->Name = L"NMLabel";
			this->NMLabel->Size = System::Drawing::Size(86, 16);
			this->NMLabel->TabIndex = 2;
			this->NMLabel->Text = L"Nuevo Menu:";
			// 
			// NPPanel
			// 
			this->NPPanel->Controls->Add(this->NPais);
			this->NPPanel->Controls->Add(this->NPLabel);
			this->NPPanel->Location = System::Drawing::Point(5, 5);
			this->NPPanel->Name = L"NPPanel";
			this->NPPanel->Size = System::Drawing::Size(164, 50);
			this->NPPanel->TabIndex = 5;
			// 
			// NPLabel
			// 
			this->NPLabel->AutoSize = true;
			this->NPLabel->Location = System::Drawing::Point(3, 4);
			this->NPLabel->Name = L"NPLabel";
			this->NPLabel->Size = System::Drawing::Size(80, 16);
			this->NPLabel->TabIndex = 2;
			this->NPLabel->Text = L"Nuevo País:";
			// 
			// NPais
			// 
			this->NPais->Location = System::Drawing::Point(29, 23);
			this->NPais->Name = L"NPais";
			this->NPais->Size = System::Drawing::Size(132, 22);
			this->NPais->TabIndex = 3;
			// 
			// IngresoDatos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(555, 378);
			this->Controls->Add(this->CompraPanel);
			this->Controls->Add(this->Execute);
			this->Controls->Add(this->Codigos);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->NPanel);
			this->Controls->Add(this->NuevoProd);
			this->Name = L"IngresoDatos";
			this->Text = L"IngresoDatos";
			this->PPanel->ResumeLayout(false);
			this->PPanel->PerformLayout();
			this->IdPanel->ResumeLayout(false);
			this->IdPanel->PerformLayout();
			this->Codigos->ResumeLayout(false);
			this->CPanel->ResumeLayout(false);
			this->CPanel->PerformLayout();
			this->RPanel->ResumeLayout(false);
			this->RPanel->PerformLayout();
			this->MPanel->ResumeLayout(false);
			this->MPanel->PerformLayout();
			this->PrPanel->ResumeLayout(false);
			this->PrPanel->PerformLayout();
			this->KcalPanel->ResumeLayout(false);
			this->KcalPanel->PerformLayout();
			this->PrePanel->ResumeLayout(false);
			this->PrePanel->PerformLayout();
			this->CaPanel->ResumeLayout(false);
			this->CaPanel->PerformLayout();
			this->NPanel->ResumeLayout(false);
			this->NPanel->PerformLayout();
			this->CompraPanel->ResumeLayout(false);
			this->NuevoProd->ResumeLayout(false);
			this->NuevoProd->PerformLayout();
			this->NCPanel->ResumeLayout(false);
			this->NCPanel->PerformLayout();
			this->NPrPanel->ResumeLayout(false);
			this->NPrPanel->PerformLayout();
			this->NRPanel->ResumeLayout(false);
			this->NRPanel->PerformLayout();
			this->NMPanel->ResumeLayout(false);
			this->NMPanel->PerformLayout();
			this->NPPanel->ResumeLayout(false);
			this->NPPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void config(Arbol arb, ActMenu act, bool cant) {
		arbol = arb;
		accion = act;
		cantidad = cant;
		this->Text = System::Convert::ToString(accion) + " " + System::Convert::ToString(arbol);
	}

	private: System::Void ejecutar(System::Object^ sender, System::EventArgs^ e) {
		Arboles& arboles = Arboles::getInstance();

		int pais;
		int ciudad;
		int res;
		int menu;
		int prod;
		int kcal;
		int precio;
		int cant;
		int cedula;
		std::string nom;

		if (!System::String::IsNullOrWhiteSpace(CodP->Text))
			pais = System::Convert::ToInt32(CodP->Text);
		if (!System::String::IsNullOrWhiteSpace(CodC->Text))
			ciudad = System::Convert::ToInt32(CodC->Text);
		if (!System::String::IsNullOrWhiteSpace(CodR->Text))
			res = System::Convert::ToInt32(CodR->Text);
		if (!System::String::IsNullOrWhiteSpace(CodM->Text))
			menu = System::Convert::ToInt32(CodM->Text);
		if (!System::String::IsNullOrWhiteSpace(CodPr->Text))
			prod = System::Convert::ToInt32(CodPr->Text);
		if (!System::String::IsNullOrWhiteSpace(Kcal->Text))
			kcal = System::Convert::ToInt32(Kcal->Text);
		if (!System::String::IsNullOrWhiteSpace(Precio->Text))
			precio = System::Convert::ToInt32(Precio->Text);
		if (!System::String::IsNullOrWhiteSpace(Cantidad->Text))
			cant = System::Convert::ToInt32(Cantidad->Text);
		if (!System::String::IsNullOrWhiteSpace(Ced->Text))
			cedula = System::Convert::ToInt32(Ced->Text);
		if (!System::String::IsNullOrWhiteSpace(Nombre->Text));
			nom = msclr::interop::marshal_as<std::string>(Nombre->Text);
		

		if (accion == Insercion) {
			if (arbol == Pais) {

				if (arboles.paises.VerificarPais(pais)) {
					Msj->Text = "El país ya existe";
				}
				else {
					arboles.paises.InsertaNodo(pais, nom);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Ciudad) {

				if (arboles.ciudades.VerificarCiudad(pais, ciudad)) {
					Msj->Text = "La ciudad ya existe";
				}
				else {
					arboles.ciudades.InsertaNodo(pais, ciudad, nom, arboles.paises);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Restaurante) {

				if (arboles.restaurantes.VerificarRestaurante(pais, ciudad, res)) {
					Msj->Text = "El restaurante ya existe";
				}
				else {
					arboles.restaurantes.InsertaNodo(pais, ciudad, res, nom, arboles.ciudades);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Arbol::Menu) {

				if (arboles.menus.VerificarM(pais, ciudad, res, menu)) {
					Msj->Text = "El menú ya existe";
				}
				else {
					arboles.menus.InsertaNodo(pais, ciudad, res, menu, nom, arboles.restaurantes);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Producto) {

				if (arboles.productos.VerificarPr(pais, ciudad, res, menu, prod)) {
					Msj->Text = "El producto ya existe";
				}
				else {
					arboles.productos.InsertaNodo(pais, ciudad, res, menu, prod, nom, kcal, precio, cant, arboles.menus);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Cliente) {

				if (arboles.clientes.VerificarCliente(cedula)) {
					Msj->Text = "El cliente ya existe";
				}
				else {
					arboles.clientes.InsertaNodo(cedula, nom);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Admin) {

				if (arboles.admins.VerificarAdmin(cedula)) {
					Msj->Text = "El administrador ya existe";
				}
				else {
					arboles.admins.InsertaNodo(cedula, nom);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Fila) {
				
				if (arboles.clientes.VerificarCliente(cedula) == NULL)
					Msj->Text = "El cliente no está registrado";
				else if (arboles.fila.verificarCliente(cedula))
					Msj->Text = "El cliente ya está en la fila";
				else if (arboles.fila.ColaLlena())
					Msj->Text = "La cola está llena";
				else {
					arboles.fila.insertaCliente(cedula, arboles.clientes);
					Msj->Text = "Inserción exitosa";
				}
			}
			else if (arbol == Compra) {

				if (!arboles.productos.VerificarPr(pais, ciudad, res, menu, prod))
					Msj->Text = "El producto no está registrado";
				else if (arboles.fila.ColaVacia())
					Msj->Text = "La cola está vacía";
				else if (arboles.fila.verificarProducto(pais, ciudad, res, menu, prod))
					Msj->Text = "El producto ya está en la lista de compras";
				else {
					arboles.fila.agregaProducto(pais, ciudad, res, menu, prod, cant);
					Msj->Text = "Inserción exitosa";
				}
			}
		}

		else if (accion == Consulta) {
			if (arbol == Pais) {
				pnodo obj = arboles.paises.VerificarPais(pais);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Ciudad) {
				cnodo obj = arboles.ciudades.VerificarCiudad(pais, ciudad);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Restaurante) {
				cout << "aaaaaaaa";
				rnodo obj = arboles.restaurantes.VerificarRestaurante(pais, ciudad, res);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Arbol::Menu) {
				mnodo obj = arboles.menus.VerificarM(pais, ciudad, res, menu);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Producto) {
				prnodo obj = arboles.productos.getProducto(pais, ciudad, res, menu, prod);
				Msj->Text = ("Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str()) + "\n" +
							 "Calorías: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(to_string(obj->kcal)).c_str()) + "\n" +
							 "Precio: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(to_string(obj->precio)).c_str()) + "\n" +
							 "Cantidad: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(to_string(obj->cant)).c_str()) + "\n");
			}
			else if (arbol == Cliente) {
				clnodo obj = arboles.clientes.getCliente(cedula);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->getNombre()).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Admin) {
				adnodo obj = arboles.admins.getAdmin(cedula);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->getNombre()).c_str());
				else
					Msj->Text = "No existe";
			}
		}

		else {
			if (arbol == Pais) {

				if (arboles.paises.VerificarPais(pais)) {
					arboles.paises.Modificar(pais, nom);
					Msj->Text = "Modificación exitosa";
				}
				else
					Msj->Text = "El país no existe";
			}
			else if (arbol == Ciudad) {

				if (arboles.ciudades.VerificarCiudad(pais, ciudad)) {
					arboles.ciudades.Modificar(pais, ciudad, nom);
					Msj->Text = "Modificación exitosa";
				}
				else
					Msj->Text = "La ciudad ya existe";
			}
			else if (arbol == Restaurante) {

				if (arboles.restaurantes.VerificarRestaurante(pais, ciudad, res)) {
					arboles.restaurantes.ModificarR(pais, ciudad, res, nom);
					Msj->Text = "Modificación exitosa";
				}
				else
					Msj->Text = "El restaurante ya existe";
			}
			else if (arbol == Arbol::Menu) {

				if (arboles.menus.VerificarM(pais, ciudad, res, menu)) {
					arboles.menus.Modificar(pais, ciudad, res, menu, nom);
					Msj->Text = "Modificación exitosa";
				}
				else
					Msj->Text = "El menú ya existe";
			}
			else if (arbol == Producto) {

				if (arboles.productos.VerificarPr(pais, ciudad, res, menu, prod)) {
					arboles.productos.Modificar(pais, ciudad, res, menu, prod, nom, to_string(kcal), to_string(precio), to_string(cant));
					Msj->Text = "Modificación exitosa";
				}
				else
					Msj->Text = "El producto ya existe";
			}
			else if (arbol == Cliente) {

				if (arboles.clientes.VerificarCliente(cedula)) {
					arboles.clientes.ModificarCliente(cedula, nom);
					Msj->Text = "Modificación exitosa";
				}
				else
					Msj->Text = "El cliente ya existe";
			}
			else if (arbol == Admin) {

				if (arboles.admins.VerificarAdmin(cedula)) {
					arboles.admins.ModificarAdmin(cedula, nom);
					Msj->Text = "Modificación exitosa";
				}
				else
					Msj->Text = "El administrador ya existe";
			}
			else if (arbol == Compra) {
				
				if (arboles.fila.verificarProducto(pais, ciudad, res, menu, prod)) {
					arboles.fila.modificarCant(pais, ciudad, res, menu, prod, cant);
					Msj->Text = "Modificación exitosa";
				}
			}
		}
	}

	public: System::Void actualizar() {
		if (accion == Consulta || accion == Eliminacion || arbol == Fila) {
			this->CompraPanel->Visible = false;
			this->NPanel->Visible = false;
		}

		if (arbol == Compra)
			this->NPanel->Visible = false;

		if (arbol != Cliente && arbol != Admin && arbol != Fila)
			this->IdPanel->Visible = false;
		
		if (arbol != Producto) {
			this->KcalPanel->Visible = false;
			this->PrePanel->Visible = false;

			if (arbol != Compra) {
				this->PrPanel->Visible = false;
				this->CompraPanel->Visible = false;

				if (arbol != Arbol::Menu) {
					this->MPanel->Visible = false;

					if (arbol != Restaurante) {
						this->RPanel->Visible = false;

						if (arbol != Ciudad) {
							this->CPanel->Visible = false;

							if (arbol != Pais) {
								this->PPanel->Visible = false;
							}
						}
					}
				}
			}
		}
	}


};
}
