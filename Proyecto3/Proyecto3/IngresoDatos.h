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

	private: System::Windows::Forms::Panel^ PPanel;
	protected:

	private: System::Windows::Forms::Label^ PLabel;
	private: System::Windows::Forms::TextBox^ CodP;
	private: System::Windows::Forms::Panel^ Códigos;
	private: System::Windows::Forms::Panel^ CPanel;
	private: System::Windows::Forms::TextBox^ CodC;

	private: System::Windows::Forms::Label^ CLabel;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->Códigos = (gcnew System::Windows::Forms::Panel());
			this->CPanel = (gcnew System::Windows::Forms::Panel());
			this->CodC = (gcnew System::Windows::Forms::TextBox());
			this->CLabel = (gcnew System::Windows::Forms::Label());
			this->PPanel->SuspendLayout();
			this->Códigos->SuspendLayout();
			this->CPanel->SuspendLayout();
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
			// Códigos
			// 
			this->Códigos->Controls->Add(this->CPanel);
			this->Códigos->Controls->Add(this->PPanel);
			this->Códigos->Location = System::Drawing::Point(23, 61);
			this->Códigos->Name = L"Códigos";
			this->Códigos->Size = System::Drawing::Size(513, 131);
			this->Códigos->TabIndex = 2;
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
			// IngresoDatos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(555, 334);
			this->Controls->Add(this->Códigos);
			this->Controls->Add(this->Titulo);
			this->Name = L"IngresoDatos";
			this->Text = L"IngresoDatos";
			this->PPanel->ResumeLayout(false);
			this->PPanel->PerformLayout();
			this->Códigos->ResumeLayout(false);
			this->CPanel->ResumeLayout(false);
			this->CPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	};
}
