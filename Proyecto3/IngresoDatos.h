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
	public: System::Windows::Forms::Panel^ CePanel;
	public: System::Windows::Forms::TextBox^ Cedula;
	public: System::Windows::Forms::Label^ CeLabel;
	private: System::Windows::Forms::Button^ Execute;
	public:

	public:

	public:
	public: System::Windows::Forms::Label^ NLabel;

	public:

	private: System::Windows::Forms::Button^ Cerrar;
	private: System::Windows::Forms::Label^ Msj;

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
			this->CePanel = (gcnew System::Windows::Forms::Panel());
			this->Cedula = (gcnew System::Windows::Forms::TextBox());
			this->CeLabel = (gcnew System::Windows::Forms::Label());
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
			this->Cerrar = (gcnew System::Windows::Forms::Button());
			this->Msj = (gcnew System::Windows::Forms::Label());
			this->PPanel->SuspendLayout();
			this->IdPanel->SuspendLayout();
			this->Codigos->SuspendLayout();
			this->CePanel->SuspendLayout();
			this->CPanel->SuspendLayout();
			this->RPanel->SuspendLayout();
			this->MPanel->SuspendLayout();
			this->PrPanel->SuspendLayout();
			this->KcalPanel->SuspendLayout();
			this->PrePanel->SuspendLayout();
			this->CaPanel->SuspendLayout();
			this->NPanel->SuspendLayout();
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
			this->Codigos->Controls->Add(this->CePanel);
			this->Codigos->Controls->Add(this->CPanel);
			this->Codigos->Controls->Add(this->PPanel);
			this->Codigos->Controls->Add(this->IdPanel);
			this->Codigos->Controls->Add(this->RPanel);
			this->Codigos->Controls->Add(this->MPanel);
			this->Codigos->Controls->Add(this->PrPanel);
			this->Codigos->Controls->Add(this->KcalPanel);
			this->Codigos->Controls->Add(this->PrePanel);
			this->Codigos->Controls->Add(this->CaPanel);
			this->Codigos->Location = System::Drawing::Point(23, 20);
			this->Codigos->Name = L"Codigos";
			this->Codigos->Size = System::Drawing::Size(513, 191);
			this->Codigos->TabIndex = 2;
			// 
			// CePanel
			// 
			this->CePanel->Controls->Add(this->Cedula);
			this->CePanel->Controls->Add(this->CeLabel);
			this->CePanel->Location = System::Drawing::Point(3, 59);
			this->CePanel->Name = L"CePanel";
			this->CePanel->Size = System::Drawing::Size(164, 50);
			this->CePanel->TabIndex = 5;
			// 
			// Cedula
			// 
			this->Cedula->Location = System::Drawing::Point(29, 23);
			this->Cedula->Name = L"Cedula";
			this->Cedula->Size = System::Drawing::Size(132, 22);
			this->Cedula->TabIndex = 3;
			// 
			// CeLabel
			// 
			this->CeLabel->AutoSize = true;
			this->CeLabel->Location = System::Drawing::Point(3, 4);
			this->CeLabel->Name = L"CeLabel";
			this->CeLabel->Size = System::Drawing::Size(53, 16);
			this->CeLabel->TabIndex = 2;
			this->CeLabel->Text = L"Cédula:";
			this->CeLabel->Click += gcnew System::EventHandler(this, &IngresoDatos::CeLabel_Click);
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
			this->PrPanel->Location = System::Drawing::Point(343, 59);
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
			this->KcalPanel->Location = System::Drawing::Point(3, 115);
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
			this->PrePanel->Location = System::Drawing::Point(173, 114);
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
			this->CaPanel->Location = System::Drawing::Point(343, 115);
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
			this->NPanel->Location = System::Drawing::Point(26, 226);
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
			this->Execute->Location = System::Drawing::Point(420, 286);
			this->Execute->Name = L"Execute";
			this->Execute->Size = System::Drawing::Size(107, 36);
			this->Execute->TabIndex = 6;
			this->Execute->Text = L"Ejecutar";
			this->Execute->UseVisualStyleBackColor = true;
			this->Execute->Click += gcnew System::EventHandler(this, &IngresoDatos::ejecutar);
			// 
			// Cerrar
			// 
			this->Cerrar->Location = System::Drawing::Point(418, 225);
			this->Cerrar->Name = L"Cerrar";
			this->Cerrar->Size = System::Drawing::Size(108, 35);
			this->Cerrar->TabIndex = 8;
			this->Cerrar->Text = L"Cerrar";
			this->Cerrar->UseVisualStyleBackColor = true;
			this->Cerrar->Click += gcnew System::EventHandler(this, &IngresoDatos::salir);
			// 
			// Msj
			// 
			this->Msj->AutoSize = true;
			this->Msj->Location = System::Drawing::Point(207, 227);
			this->Msj->Name = L"Msj";
			this->Msj->Size = System::Drawing::Size(44, 16);
			this->Msj->TabIndex = 9;
			this->Msj->Text = L"label1";
			// 
			// IngresoDatos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(555, 334);
			this->Controls->Add(this->Msj);
			this->Controls->Add(this->Cerrar);
			this->Controls->Add(this->Execute);
			this->Controls->Add(this->Codigos);
			this->Controls->Add(this->Titulo);
			this->Controls->Add(this->NPanel);
			this->Name = L"IngresoDatos";
			this->Text = L"IngresoDatos";
			this->PPanel->ResumeLayout(false);
			this->PPanel->PerformLayout();
			this->IdPanel->ResumeLayout(false);
			this->IdPanel->PerformLayout();
			this->Codigos->ResumeLayout(false);
			this->CePanel->ResumeLayout(false);
			this->CePanel->PerformLayout();
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void config(Arbol arb, ActMenu act) {
		arbol = arb;
		accion = act;
		this->Text = System::Convert::ToString(accion) + " " + System::Convert::ToString(arbol);
	}

	private: System::Void ejecutar(System::Object^ sender, System::EventArgs^ e) {
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
		if (!System::String::IsNullOrWhiteSpace(Cedula->Text))
			cedula = System::Convert::ToInt32(Cedula->Text);
		if (!System::String::IsNullOrWhiteSpace(Nombre->Text));
			nom = msclr::interop::marshal_as<std::string>(Nombre->Text);
		

		if (accion == Insercion) {
			if (arbol == Pais) {
				Arboles::getInstance().paises.InsertaNodo(pais, nom);
				Msj->Text = "Inserción exitosa";
			}
			else if (arbol == Ciudad) {
				Arboles::getInstance().ciudades.InsertaNodo(pais, ciudad, nom, Arboles::getInstance().paises);
				Msj->Text = "Inserción exitosa";
			}
			else if (arbol == Restaurante) {
				Arboles::getInstance().restaurantes.InsertaNodo(pais, ciudad, res, nom, Arboles::getInstance().ciudades);
				Msj->Text = "Inserción exitosa";
			}
			else if (arbol == Arbol::Menu) {
				Arboles::getInstance().menus.InsertaNodo(pais, ciudad, res, menu, nom, Arboles::getInstance().restaurantes);
				Msj->Text = "Inserción exitosa";;
			}
			else if (arbol == Producto) {
				Arboles::getInstance().productos.InsertaNodo(pais, ciudad, res, menu, prod, nom, kcal, precio, cant, Arboles::getInstance().menus);
				Msj->Text = "Inserción exitosa";
			}
			else if (arbol == Cliente) {
				Arboles::getInstance().clientes.InsertaNodo(cedula, nom);
				Msj->Text = "Inserción exitosa";
			}
			else if (arbol == Admin) {
				Arboles::getInstance().admins.InsertaNodo(cedula, nom);
				Msj->Text = "Inserción exitosa";
			}
			else if (arbol == Fila) {
				Arboles::getInstance().fila.insertaCliente(cedula, Arboles::getInstance().clientes);
				Msj->Text = "Inserción exitosa";
			}
		}
		else if (accion == Consulta) {
			if (arbol == Pais) {
				pnodo obj = Arboles::getInstance().paises.VerificarPais(pais);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Ciudad) {
				cnodo obj = Arboles::getInstance().ciudades.VerificarCiudad(pais, ciudad);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Restaurante) {
				cout << "aaaaaaaa";
				rnodo obj = Arboles::getInstance().restaurantes.VerificarRestaurante(pais, ciudad, res);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Arbol::Menu) {
				mnodo obj = Arboles::getInstance().menus.VerificarM(pais, ciudad, res, menu);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Producto) {
				prnodo obj = Arboles::getInstance().productos.getProducto(pais, ciudad, res, menu, prod);
				Msj->Text = ("Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->nombre).c_str()) + "\n" +
							 "Calorías: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(to_string(obj->kcal)).c_str()) + "\n" +
							 "Precio: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(to_string(obj->precio)).c_str()) + "\n" +
							 "Cantidad: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(to_string(obj->cant)).c_str()) + "\n");
			}
			else if (arbol == Cliente) {
				clnodo obj = Arboles::getInstance().clientes.getCliente(cedula);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->getNombre()).c_str());
				else
					Msj->Text = "No existe";
			}
			else if (arbol == Admin) {
				adnodo obj = Arboles::getInstance().admins.getAdmin(cedula);
				if (obj)
					Msj->Text = "Nombre: " + Marshal::PtrToStringAnsi((IntPtr)(void*)(obj->getNombre()).c_str());
				else
					Msj->Text = "No existe";
			}
		}
		else {
			if (arbol == Pais) {
				Arboles::getInstance().paises.Modificar(pais, nom);
				Msj->Text = "Modificación exitosa";
			}
			else if (arbol == Ciudad) {
				Arboles::getInstance().ciudades.Modificar(pais, ciudad, nom);
				Msj->Text = "Modificación exitosa";
			}
			else if (arbol == Restaurante) {
				Arboles::getInstance().restaurantes.ModificarR(pais, ciudad, res, nom);
				Msj->Text = "Modificación exitosa";
			}
			else if (arbol == Arbol::Menu) {
				Arboles::getInstance().menus.Modificar(pais, ciudad, res, menu, nom);
				Msj->Text = "Modificación exitosa";
			}
			else if (arbol == Producto) {
				Arboles::getInstance().productos.Modificar(pais, ciudad, res, menu, prod, nom, to_string(kcal), to_string(precio), to_string(cant));
				Msj->Text = "Modificación exitosa";
			}
			else if (arbol == Cliente) {
				Arboles::getInstance().clientes.ModificarCliente(cedula, nom);
				Msj->Text = "Modificación exitosa";
			}
			else if (arbol == Admin) {
				Arboles::getInstance().admins.ModificarAdmin(cedula, nom);
				Msj->Text = "Modificación exitosa";
			}
			else if (arbol == Compra) {

			}
		}
	}
private: System::Void salir(System::Object^ sender, System::EventArgs^ e) {
	delete this;
}
private: System::Void CeLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
