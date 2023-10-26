#pragma once

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	public: System::Windows::Forms::Label^ NLabel;
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
			this->PLabel = (gcnew System::Windows::Forms::Label());
			this->CodP = (gcnew System::Windows::Forms::TextBox());
			this->IdPanel = (gcnew System::Windows::Forms::Panel());
			this->IdLabel = (gcnew System::Windows::Forms::Label());
			this->Ced = (gcnew System::Windows::Forms::TextBox());
			this->Codigos = (gcnew System::Windows::Forms::Panel());
			this->CPanel = (gcnew System::Windows::Forms::Panel());
			this->CodC = (gcnew System::Windows::Forms::TextBox());
			this->RLabel = (gcnew System::Windows::Forms::Label());
			this->RPanel = (gcnew System::Windows::Forms::Panel());
			this->CodR = (gcnew System::Windows::Forms::TextBox());
			this->MLabel = (gcnew System::Windows::Forms::Label());
			this->MPanel = (gcnew System::Windows::Forms::Panel());
			this->CodM = (gcnew System::Windows::Forms::TextBox());
			this->PrLabel = (gcnew System::Windows::Forms::Label());
			this->PrPanel = (gcnew System::Windows::Forms::Panel());
			this->CodPr = (gcnew System::Windows::Forms::TextBox());
			this->NLabel = (gcnew System::Windows::Forms::Label());
			this->NPanel = (gcnew System::Windows::Forms::Panel());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->CLabel = (gcnew System::Windows::Forms::Label());
			this->KcalLabel = (gcnew System::Windows::Forms::Label());
			this->KcalPanel = (gcnew System::Windows::Forms::Panel());
			this->Kcal = (gcnew System::Windows::Forms::TextBox());
			this->PreLabel = (gcnew System::Windows::Forms::Label());
			this->PrePanel = (gcnew System::Windows::Forms::Panel());
			this->Precio = (gcnew System::Windows::Forms::TextBox());
			this->CaLabel = (gcnew System::Windows::Forms::Label());
			this->CaPanel = (gcnew System::Windows::Forms::Panel());
			this->Cantidad = (gcnew System::Windows::Forms::TextBox());
			this->PPanel->SuspendLayout();
			this->Codigos->SuspendLayout();
			this->CPanel->SuspendLayout();
			this->RPanel->SuspendLayout();
			this->MPanel->SuspendLayout();
			this->PrPanel->SuspendLayout();
			this->NPanel->SuspendLayout();
			this->KcalPanel->SuspendLayout();
			this->CaPanel->SuspendLayout();
			this->PrPanel->SuspendLayout();
			this->IdLabel->SuspendLayout();
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
			// PLabel
			// 
			this->PLabel->AutoSize = true;
			this->PLabel->Location = System::Drawing::Point(3, 4);
			this->PLabel->Name = L"PLabel";
			this->PLabel->Size = System::Drawing::Size(84, 16);
			this->PLabel->TabIndex = 2;
			this->PLabel->Text = L"Código País:";
			// 
			// CodP
			// 
			this->CodP->Location = System::Drawing::Point(29, 23);
			this->CodP->Name = L"CodP";
			this->CodP->Size = System::Drawing::Size(132, 22);
			this->CodP->TabIndex = 3;
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
			// IdLabel
			// 
			this->IdLabel->AutoSize = true;
			this->IdLabel->Location = System::Drawing::Point(3, 4);
			this->IdLabel->Name = L"IdLabel";
			this->IdLabel->Size = System::Drawing::Size(84, 16);
			this->IdLabel->TabIndex = 2;
			this->IdLabel->Text = L"Cedula:";
			// 
			// Ced
			// 
			this->Ced->Location = System::Drawing::Point(29, 23);
			this->Ced->Name = L"Ced";
			this->Ced->Size = System::Drawing::Size(132, 22);
			this->Ced->TabIndex = 3;
			// 
			// Códigos
			// 
			this->Codigos->Controls->Add(this->CPanel);
			this->Codigos->Controls->Add(this->PPanel);
			this->Codigos->Controls->Add(this->IdPanel); 
			this->Codigos->Controls->Add(this->RPanel);
			this->Codigos->Controls->Add(this->MPanel);
			this->Codigos->Controls->Add(this->PrPanel);
			this->Codigos->Controls->Add(this->NPanel);
			this->Codigos->Controls->Add(this->KcalPanel);
			this->Codigos->Controls->Add(this->PrePanel);
			this->Codigos->Controls->Add(this->CaPanel);
			this->Codigos->Location = System::Drawing::Point(23, 20);
			this->Codigos->Name = L"Códigos";
			this->Codigos->Size = System::Drawing::Size(513, 301);
			this->Codigos->TabIndex = 2;
			// 
			// CPanel
			// 
			this->CPanel->Controls->Add(this->CodC);
			this->CPanel->Controls->Add(this->CLabel);
			this->CPanel->Location = System::Drawing::Point(3, 59);
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
			this->RPanel->Location = System::Drawing::Point(3, 114);
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
			this->RLabel->Size = System::Drawing::Size(120, 16);
			this->RLabel->TabIndex = 2;
			this->RLabel->Text = L"Código Restaurante:";

			// 
			// MPanel
			// 
			this->MPanel->Controls->Add(this->CodM);
			this->MPanel->Controls->Add(this->MLabel);
			this->MPanel->Location = System::Drawing::Point(3, 173);
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
			this->MLabel->Size = System::Drawing::Size(120, 16);
			this->MLabel->TabIndex = 2;
			this->MLabel->Text = L"Código Menu:";

			// 
			// PrPanel
			// 
			this->PrPanel->Controls->Add(this->CodPr);
			this->PrPanel->Controls->Add(this->PrLabel);
			this->PrPanel->Location = System::Drawing::Point(3, 232);
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
			this->PrLabel->Size = System::Drawing::Size(120, 16);
			this->PrLabel->TabIndex = 2;
			this->PrLabel->Text = L"Código Producto:";

			// 
			// NPanel
			// 
			this->NPanel->Controls->Add(this->Nombre);
			this->NPanel->Controls->Add(this->NLabel);
			this->NPanel->Location = System::Drawing::Point(183, 3);
			this->NPanel->Name = L"NPanel";
			this->NPanel->Size = System::Drawing::Size(164, 50);
			this->NPanel->TabIndex = 4;
			// 
			// CodN
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
			this->NLabel->Size = System::Drawing::Size(120, 16);
			this->NLabel->TabIndex = 2;
			this->NLabel->Text = L"Nombre:";

			// 
			// KcalPanel
			// 
			this->KcalPanel->Controls->Add(this->Kcal);
			this->KcalPanel->Controls->Add(this->KcalLabel);
			this->KcalPanel->Location = System::Drawing::Point(183, 59);
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
			this->KcalLabel->Size = System::Drawing::Size(120, 16);
			this->KcalLabel->TabIndex = 2;
			this->KcalLabel->Text = L"Kcal:";

			// 
			// PrePanel
			// 
			this->PrePanel->Controls->Add(this->Precio);
			this->PrePanel->Controls->Add(this->PreLabel);
			this->PrePanel->Location = System::Drawing::Point(183, 114);
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
			this->PreLabel->Size = System::Drawing::Size(120, 16);
			this->PreLabel->TabIndex = 2;
			this->PreLabel->Text = L"Precio:";

			// 
			// CaPanel
			// 
			this->CaPanel->Controls->Add(this->Cantidad);
			this->CaPanel->Controls->Add(this->CaLabel);
			this->CaPanel->Location = System::Drawing::Point(183, 173);
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
			// PreLabel
			// 
			this->CaLabel->AutoSize = true;
			this->CaLabel->Location = System::Drawing::Point(3, 4);
			this->CaLabel->Name = L"CaLabel";
			this->CaLabel->Size = System::Drawing::Size(120, 16);
			this->CaLabel->TabIndex = 2;
			this->CaLabel->Text = L"Cantidad:";

			// 
			// IngresoDatos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(555, 334);
			this->Controls->Add(this->Codigos);
			this->Controls->Add(this->Titulo);
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
			this->NPanel->ResumeLayout(false);
			this->NPanel->PerformLayout();
			this->KcalPanel->ResumeLayout(false);
			this->KcalPanel->PerformLayout();
			this->PrePanel->ResumeLayout(false);
			this->PrePanel->PerformLayout();
			this->CaPanel->ResumeLayout(false);
			this->CaPanel->PerformLayout();

			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	};
}
