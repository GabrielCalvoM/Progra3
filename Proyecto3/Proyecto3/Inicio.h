#pragma once

#include "Ventana.h"
#include "Arboles/Arboles.h"
#include "Arboles/Enums.h"
#include <string>
#include <iostream>

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Resumen de Inicio
	/// </summary>
	public ref class Inicio : public System::Windows::Forms::Form
	{
	public:

		delegate void VentanaAbierta(System::Object^ sender, System::EventArgs^ e);
		event VentanaAbierta^ Abierto;

		Inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		void VentanaCerrada(System::Object^ sender, System::EventArgs^ e) {
			this->Show();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckBox^ AdminOp;
	private: System::Windows::Forms::CheckBox^ ClienteOp;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Codigo;

	private: System::Windows::Forms::Button^ Ingresar;
	private: System::Windows::Forms::Label^ Advertencia;


	protected:

	protected:

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
			this->AdminOp = (gcnew System::Windows::Forms::CheckBox());
			this->ClienteOp = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Codigo = (gcnew System::Windows::Forms::TextBox());
			this->Ingresar = (gcnew System::Windows::Forms::Button());
			this->Advertencia = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// AdminOp
			// 
			this->AdminOp->AutoSize = true;
			this->AdminOp->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdminOp->Location = System::Drawing::Point(3, 3);
			this->AdminOp->Name = L"AdminOp";
			this->AdminOp->Size = System::Drawing::Size(232, 37);
			this->AdminOp->TabIndex = 1;
			this->AdminOp->Text = L"Administrador";
			this->AdminOp->UseVisualStyleBackColor = true;
			this->AdminOp->Click += gcnew System::EventHandler(this, &Inicio::alternaCliente);
			// 
			// ClienteOp
			// 
			this->ClienteOp->AutoSize = true;
			this->ClienteOp->Font = (gcnew System::Drawing::Font(L"Consolas", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClienteOp->Location = System::Drawing::Point(3, 46);
			this->ClienteOp->Name = L"ClienteOp";
			this->ClienteOp->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ClienteOp->Size = System::Drawing::Size(142, 37);
			this->ClienteOp->TabIndex = 2;
			this->ClienteOp->Text = L"Cliente";
			this->ClienteOp->UseVisualStyleBackColor = true;
			this->ClienteOp->Click += gcnew System::EventHandler(this, &Inicio::alternaAdmin);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->AdminOp);
			this->panel1->Controls->Add(this->ClienteOp);
			this->panel1->Location = System::Drawing::Point(44, 81);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(238, 86);
			this->panel1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Eras Demi ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(318, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Cédula:";
			// 
			// Codigo
			// 
			this->Codigo->Location = System::Drawing::Point(318, 132);
			this->Codigo->Name = L"Codigo";
			this->Codigo->Size = System::Drawing::Size(178, 22);
			this->Codigo->TabIndex = 5;
			// 
			// Ingresar
			// 
			this->Ingresar->Location = System::Drawing::Point(330, 182);
			this->Ingresar->Name = L"Ingresar";
			this->Ingresar->Size = System::Drawing::Size(165, 26);
			this->Ingresar->TabIndex = 6;
			this->Ingresar->Text = L"Ingresar";
			this->Ingresar->UseVisualStyleBackColor = true;
			this->Ingresar->Click += gcnew System::EventHandler(this, &Inicio::entrar);
			// 
			// Advertencia
			// 
			this->Advertencia->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Advertencia->ForeColor = System::Drawing::Color::Red;
			this->Advertencia->Location = System::Drawing::Point(12, 9);
			this->Advertencia->Name = L"Advertencia";
			this->Advertencia->Size = System::Drawing::Size(515, 55);
			this->Advertencia->TabIndex = 7;
			this->Advertencia->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(539, 293);
			this->Controls->Add(this->Advertencia);
			this->Controls->Add(this->Ingresar);
			this->Controls->Add(this->Codigo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"Inicio";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Inicio";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void entrar(System::Object^ sender, System::EventArgs^ e) {		if (!ClienteOp->Checked && !AdminOp->Checked) {
			Advertencia->Text = "ELIJA UNA OPCIÓN DE INGRESO";
		}
		else if (String::IsNullOrEmpty(Codigo->Text)) {
			Advertencia->Text = "DIGITE UNA CÉDULA PARA INGRESAR";
		}
		else {
			ingresar();
		}
	}
	private: System::Void alternaCliente(System::Object^ sender, System::EventArgs^ e) {
		AdminOp->Checked = true;
		ClienteOp->Checked = false;
	}
	private: System::Void alternaAdmin(System::Object^ sender, System::EventArgs^ e) {
		AdminOp->Checked = false;
		ClienteOp->Checked = true;
	}
	private: System::Void ingresar() {
		bool valido = false;
		bool admin;
		int cedula = 0;

		if (Codigo->Text != "") {
			cedula = System::Convert::ToInt32(Codigo->Text);
		}

		if (AdminOp->Checked) {
			if (Arboles::getInstance().admins.VerificarAdmin(cedula)) {
				admin = true;
				valido = true;
			}
		}
		else if (ClienteOp->Checked) {
			if (Arboles::getInstance().clientes.VerificarCliente(cedula)) {
				admin = false;
				valido = true;
			}
		}

		if (valido) {
			Ventana^ menu = gcnew Ventana();
			menu->Cerrado += gcnew Ventana::VentanaCerrada(this, &Inicio::VentanaCerrada);
			menu->verificarAdmin(admin);
			this->Visible = false;
			this->Codigo->Text = "";
			this->AdminOp->Checked = false;
			this->ClienteOp->Checked = false;
			menu->Show();
		}
		else {
			Advertencia->Text = "LA CÉDULA NO COINCIDE CON EL PERFIL SELECCIONADO";
		}
	}
};
}
