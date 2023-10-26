#include "Enums.h"

#pragma once

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ventana
	/// </summary>
	public ref class Ventana : public System::Windows::Forms::Form
	{
	public:
		Ventana(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		System::Void verificarAdmin(bool admin) {
			if (!admin) {
				this->InsercionB->Enabled = false;
				this->EliminacionB->Enabled = false;
				this->ModificacionB->Enabled = false;
			}
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ventana()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ActMenu accion;
	private: Arbol arbol;
	private: System::Windows::Forms::Panel^ MenuPop;
	protected:

	protected:
	private: System::Windows::Forms::Button^ Mantenimiento;
	private: System::Windows::Forms::Button^ Reportes;
	private: System::Windows::Forms::Button^ FacturacionPop;

	private: System::Windows::Forms::Button^ Info;
	private: System::Windows::Forms::Button^ Contactos;
	private: System::Windows::Forms::Panel^ MantOp;

	private: System::Windows::Forms::Button^ InsercionB;
	private: System::Windows::Forms::Button^ EliminacionB;
	private: System::Windows::Forms::Button^ ModificacionB;



	private: System::Windows::Forms::Button^ ConsultasB;
	private: System::Windows::Forms::Panel^ InsOp;


	private: System::Windows::Forms::Button^ PaisI;
	private: System::Windows::Forms::Button^ CiudadI;
	private: System::Windows::Forms::Button^ RestauranteI;
	private: System::Windows::Forms::Button^ MenuI;
	private: System::Windows::Forms::Button^ ProductoI;





	private: System::Windows::Forms::Button^ ClienteI;
	private: System::Windows::Forms::Button^ Compras;
	private: System::Windows::Forms::Button^ AdminI;
	private: System::Windows::Forms::Panel^ ModOp;

	private: System::Windows::Forms::Button^ PaísC;
	private: System::Windows::Forms::Panel^ ConsOp;


	private: System::Windows::Forms::Button^ AdminC;

	private: System::Windows::Forms::Button^ CiudadC;
	private: System::Windows::Forms::Button^ ClienteC;
	private: System::Windows::Forms::Button^ RestauranteC;
	private: System::Windows::Forms::Button^ MenuC;
	private: System::Windows::Forms::Button^ ProductoC;
	private: System::Windows::Forms::Button^ CompraM;
	private: System::Windows::Forms::Button^ ClienteM;
	private: System::Windows::Forms::Button^ PaisM;

	private: System::Windows::Forms::Button^ CiudadM;

	private: System::Windows::Forms::Button^ RestauranteM;

	private: System::Windows::Forms::Button^ AdminM;
	private: System::Windows::Forms::Button^ ProductoM;
	private: System::Windows::Forms::Button^ MenuM;





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
			this->MenuPop = (gcnew System::Windows::Forms::Panel());
			this->Contactos = (gcnew System::Windows::Forms::Button());
			this->Mantenimiento = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::Button());
			this->FacturacionPop = (gcnew System::Windows::Forms::Button());
			this->Reportes = (gcnew System::Windows::Forms::Button());
			this->MantOp = (gcnew System::Windows::Forms::Panel());
			this->ModificacionB = (gcnew System::Windows::Forms::Button());
			this->InsercionB = (gcnew System::Windows::Forms::Button());
			this->ConsultasB = (gcnew System::Windows::Forms::Button());
			this->EliminacionB = (gcnew System::Windows::Forms::Button());
			this->InsOp = (gcnew System::Windows::Forms::Panel());
			this->Compras = (gcnew System::Windows::Forms::Button());
			this->ClienteI = (gcnew System::Windows::Forms::Button());
			this->AdminI = (gcnew System::Windows::Forms::Button());
			this->PaisI = (gcnew System::Windows::Forms::Button());
			this->ProductoI = (gcnew System::Windows::Forms::Button());
			this->CiudadI = (gcnew System::Windows::Forms::Button());
			this->MenuI = (gcnew System::Windows::Forms::Button());
			this->RestauranteI = (gcnew System::Windows::Forms::Button());
			this->ModOp = (gcnew System::Windows::Forms::Panel());
			this->CompraM = (gcnew System::Windows::Forms::Button());
			this->ClienteM = (gcnew System::Windows::Forms::Button());
			this->PaisM = (gcnew System::Windows::Forms::Button());
			this->CiudadM = (gcnew System::Windows::Forms::Button());
			this->RestauranteM = (gcnew System::Windows::Forms::Button());
			this->AdminM = (gcnew System::Windows::Forms::Button());
			this->ProductoM = (gcnew System::Windows::Forms::Button());
			this->MenuM = (gcnew System::Windows::Forms::Button());
			this->PaísC = (gcnew System::Windows::Forms::Button());
			this->ConsOp = (gcnew System::Windows::Forms::Panel());
			this->ClienteC = (gcnew System::Windows::Forms::Button());
			this->RestauranteC = (gcnew System::Windows::Forms::Button());
			this->MenuC = (gcnew System::Windows::Forms::Button());
			this->ProductoC = (gcnew System::Windows::Forms::Button());
			this->AdminC = (gcnew System::Windows::Forms::Button());
			this->CiudadC = (gcnew System::Windows::Forms::Button());
			this->MenuPop->SuspendLayout();
			this->MantOp->SuspendLayout();
			this->InsOp->SuspendLayout();
			this->ModOp->SuspendLayout();
			this->ConsOp->SuspendLayout();
			this->SuspendLayout();
			// 
			// MenuPop
			// 
			this->MenuPop->Controls->Add(this->Contactos);
			this->MenuPop->Controls->Add(this->Mantenimiento);
			this->MenuPop->Controls->Add(this->Info);
			this->MenuPop->Controls->Add(this->FacturacionPop);
			this->MenuPop->Controls->Add(this->Reportes);
			this->MenuPop->Location = System::Drawing::Point(12, 12);
			this->MenuPop->Name = L"MenuPop";
			this->MenuPop->Size = System::Drawing::Size(806, 47);
			this->MenuPop->TabIndex = 0;
			// 
			// Contactos
			// 
			this->Contactos->Location = System::Drawing::Point(647, 3);
			this->Contactos->Name = L"Contactos";
			this->Contactos->Size = System::Drawing::Size(155, 40);
			this->Contactos->TabIndex = 4;
			this->Contactos->Text = L"Contactos";
			this->Contactos->UseVisualStyleBackColor = true;
			// 
			// Mantenimiento
			// 
			this->Mantenimiento->Location = System::Drawing::Point(3, 3);
			this->Mantenimiento->Name = L"Mantenimiento";
			this->Mantenimiento->Size = System::Drawing::Size(155, 40);
			this->Mantenimiento->TabIndex = 0;
			this->Mantenimiento->Text = L"Mantenimiento";
			this->Mantenimiento->UseVisualStyleBackColor = true;
			this->Mantenimiento->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// Info
			// 
			this->Info->Location = System::Drawing::Point(486, 3);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(155, 40);
			this->Info->TabIndex = 3;
			this->Info->Text = L"Acerca de";
			this->Info->UseVisualStyleBackColor = true;
			// 
			// FacturacionPop
			// 
			this->FacturacionPop->Location = System::Drawing::Point(325, 3);
			this->FacturacionPop->Name = L"FacturacionPop";
			this->FacturacionPop->Size = System::Drawing::Size(155, 40);
			this->FacturacionPop->TabIndex = 2;
			this->FacturacionPop->Text = L"Facturación";
			this->FacturacionPop->UseVisualStyleBackColor = true;
			// 
			// Reportes
			// 
			this->Reportes->Location = System::Drawing::Point(164, 3);
			this->Reportes->Name = L"Reportes";
			this->Reportes->Size = System::Drawing::Size(155, 40);
			this->Reportes->TabIndex = 1;
			this->Reportes->Text = L"Reportes";
			this->Reportes->UseVisualStyleBackColor = true;
			this->Reportes->Click += gcnew System::EventHandler(this, &Ventana::Reportes_Click);
			// 
			// MantOp
			// 
			this->MantOp->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MantOp->Controls->Add(this->ModificacionB);
			this->MantOp->Controls->Add(this->InsercionB);
			this->MantOp->Controls->Add(this->ConsultasB);
			this->MantOp->Controls->Add(this->EliminacionB);
			this->MantOp->Location = System::Drawing::Point(12, 61);
			this->MantOp->MinimumSize = System::Drawing::Size(102, 144);
			this->MantOp->Name = L"MantOp";
			this->MantOp->Size = System::Drawing::Size(102, 144);
			this->MantOp->TabIndex = 1;
			this->MantOp->Visible = false;
			// 
			// ModificacionB
			// 
			this->ModificacionB->Location = System::Drawing::Point(3, 111);
			this->ModificacionB->Name = L"ModificacionB";
			this->ModificacionB->Size = System::Drawing::Size(96, 29);
			this->ModificacionB->TabIndex = 5;
			this->ModificacionB->Text = L"Modificación";
			this->ModificacionB->UseVisualStyleBackColor = true;
			this->ModificacionB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// InsercionB
			// 
			this->InsercionB->Location = System::Drawing::Point(3, 3);
			this->InsercionB->Name = L"InsercionB";
			this->InsercionB->Size = System::Drawing::Size(96, 30);
			this->InsercionB->TabIndex = 2;
			this->InsercionB->Text = L"Inserción";
			this->InsercionB->UseVisualStyleBackColor = true;
			this->InsercionB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// ConsultasB
			// 
			this->ConsultasB->Location = System::Drawing::Point(3, 75);
			this->ConsultasB->Name = L"ConsultasB";
			this->ConsultasB->Size = System::Drawing::Size(96, 30);
			this->ConsultasB->TabIndex = 4;
			this->ConsultasB->Text = L"Consultas";
			this->ConsultasB->UseVisualStyleBackColor = true;
			this->ConsultasB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// EliminacionB
			// 
			this->EliminacionB->Location = System::Drawing::Point(3, 39);
			this->EliminacionB->Name = L"EliminacionB";
			this->EliminacionB->Size = System::Drawing::Size(96, 30);
			this->EliminacionB->TabIndex = 3;
			this->EliminacionB->Text = L"Eliminación";
			this->EliminacionB->UseVisualStyleBackColor = true;
			this->EliminacionB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// InsOp
			// 
			this->InsOp->Controls->Add(this->Compras);
			this->InsOp->Controls->Add(this->ClienteI);
			this->InsOp->Controls->Add(this->AdminI);
			this->InsOp->Controls->Add(this->PaisI);
			this->InsOp->Controls->Add(this->ProductoI);
			this->InsOp->Controls->Add(this->CiudadI);
			this->InsOp->Controls->Add(this->MenuI);
			this->InsOp->Controls->Add(this->RestauranteI);
			this->InsOp->Location = System::Drawing::Point(117, 61);
			this->InsOp->Name = L"InsOp";
			this->InsOp->Size = System::Drawing::Size(146, 283);
			this->InsOp->TabIndex = 2;
			this->InsOp->Visible = false;
			// 
			// Compras
			// 
			this->Compras->Location = System::Drawing::Point(3, 248);
			this->Compras->Name = L"Compras";
			this->Compras->Size = System::Drawing::Size(140, 29);
			this->Compras->TabIndex = 4;
			this->Compras->Text = L"Registrar Compra";
			this->Compras->UseVisualStyleBackColor = true;
			// 
			// ClienteI
			// 
			this->ClienteI->Location = System::Drawing::Point(3, 178);
			this->ClienteI->Name = L"ClienteI";
			this->ClienteI->Size = System::Drawing::Size(140, 29);
			this->ClienteI->TabIndex = 8;
			this->ClienteI->Text = L"Cliente";
			this->ClienteI->UseVisualStyleBackColor = true;
			// 
			// AdminI
			// 
			this->AdminI->Location = System::Drawing::Point(3, 213);
			this->AdminI->Name = L"AdminI";
			this->AdminI->Size = System::Drawing::Size(140, 29);
			this->AdminI->TabIndex = 3;
			this->AdminI->Text = L"Administrador";
			this->AdminI->UseVisualStyleBackColor = true;
			// 
			// PaisI
			// 
			this->PaisI->Location = System::Drawing::Point(3, 3);
			this->PaisI->Name = L"PaisI";
			this->PaisI->Size = System::Drawing::Size(140, 29);
			this->PaisI->TabIndex = 3;
			this->PaisI->Text = L"País";
			this->PaisI->UseVisualStyleBackColor = true;
			// 
			// ProductoI
			// 
			this->ProductoI->Location = System::Drawing::Point(3, 143);
			this->ProductoI->Name = L"ProductoI";
			this->ProductoI->Size = System::Drawing::Size(140, 29);
			this->ProductoI->TabIndex = 7;
			this->ProductoI->Text = L"Producto";
			this->ProductoI->UseVisualStyleBackColor = true;
			// 
			// CiudadI
			// 
			this->CiudadI->Location = System::Drawing::Point(3, 38);
			this->CiudadI->Name = L"CiudadI";
			this->CiudadI->Size = System::Drawing::Size(140, 29);
			this->CiudadI->TabIndex = 4;
			this->CiudadI->Text = L"Ciudad";
			this->CiudadI->UseVisualStyleBackColor = true;
			// 
			// MenuI
			// 
			this->MenuI->Location = System::Drawing::Point(3, 108);
			this->MenuI->Name = L"MenuI";
			this->MenuI->Size = System::Drawing::Size(140, 29);
			this->MenuI->TabIndex = 6;
			this->MenuI->Text = L"Menú";
			this->MenuI->UseVisualStyleBackColor = true;
			// 
			// RestauranteI
			// 
			this->RestauranteI->Location = System::Drawing::Point(3, 73);
			this->RestauranteI->Name = L"RestauranteI";
			this->RestauranteI->Size = System::Drawing::Size(140, 29);
			this->RestauranteI->TabIndex = 5;
			this->RestauranteI->Text = L"Restaurante";
			this->RestauranteI->UseVisualStyleBackColor = true;
			// 
			// ModOp
			// 
			this->ModOp->Controls->Add(this->CompraM);
			this->ModOp->Controls->Add(this->ClienteM);
			this->ModOp->Controls->Add(this->PaisM);
			this->ModOp->Controls->Add(this->CiudadM);
			this->ModOp->Controls->Add(this->RestauranteM);
			this->ModOp->Controls->Add(this->AdminM);
			this->ModOp->Controls->Add(this->ProductoM);
			this->ModOp->Controls->Add(this->MenuM);
			this->ModOp->Location = System::Drawing::Point(117, 169);
			this->ModOp->Name = L"ModOp";
			this->ModOp->Size = System::Drawing::Size(146, 291);
			this->ModOp->TabIndex = 4;
			this->ModOp->Visible = false;
			// 
			// CompraM
			// 
			this->CompraM->Location = System::Drawing::Point(3, 255);
			this->CompraM->Name = L"CompraM";
			this->CompraM->Size = System::Drawing::Size(140, 30);
			this->CompraM->TabIndex = 14;
			this->CompraM->Text = L"Compra";
			this->CompraM->UseVisualStyleBackColor = true;
			// 
			// ClienteM
			// 
			this->ClienteM->Location = System::Drawing::Point(4, 183);
			this->ClienteM->Name = L"ClienteM";
			this->ClienteM->Size = System::Drawing::Size(140, 30);
			this->ClienteM->TabIndex = 13;
			this->ClienteM->Text = L"Cliente";
			this->ClienteM->UseVisualStyleBackColor = true;
			// 
			// PaisM
			// 
			this->PaisM->Location = System::Drawing::Point(3, 3);
			this->PaisM->Name = L"PaisM";
			this->PaisM->Size = System::Drawing::Size(140, 30);
			this->PaisM->TabIndex = 7;
			this->PaisM->Text = L"País";
			this->PaisM->UseMnemonic = false;
			this->PaisM->UseVisualStyleBackColor = true;
			// 
			// CiudadM
			// 
			this->CiudadM->Location = System::Drawing::Point(3, 39);
			this->CiudadM->Name = L"CiudadM";
			this->CiudadM->Size = System::Drawing::Size(140, 30);
			this->CiudadM->TabIndex = 8;
			this->CiudadM->Text = L"Ciudad";
			this->CiudadM->UseMnemonic = false;
			this->CiudadM->UseVisualStyleBackColor = true;
			// 
			// RestauranteM
			// 
			this->RestauranteM->Location = System::Drawing::Point(3, 75);
			this->RestauranteM->Name = L"RestauranteM";
			this->RestauranteM->Size = System::Drawing::Size(140, 30);
			this->RestauranteM->TabIndex = 12;
			this->RestauranteM->Text = L"Restaurante";
			this->RestauranteM->UseVisualStyleBackColor = true;
			// 
			// AdminM
			// 
			this->AdminM->Location = System::Drawing::Point(3, 219);
			this->AdminM->Name = L"AdminM";
			this->AdminM->Size = System::Drawing::Size(140, 30);
			this->AdminM->TabIndex = 9;
			this->AdminM->Text = L"Administrador";
			this->AdminM->UseVisualStyleBackColor = true;
			// 
			// ProductoM
			// 
			this->ProductoM->Location = System::Drawing::Point(3, 147);
			this->ProductoM->Name = L"ProductoM";
			this->ProductoM->Size = System::Drawing::Size(140, 30);
			this->ProductoM->TabIndex = 10;
			this->ProductoM->Text = L"Producto";
			this->ProductoM->UseVisualStyleBackColor = true;
			// 
			// MenuM
			// 
			this->MenuM->Location = System::Drawing::Point(3, 111);
			this->MenuM->Name = L"MenuM";
			this->MenuM->Size = System::Drawing::Size(140, 30);
			this->MenuM->TabIndex = 11;
			this->MenuM->Text = L"Menú";
			this->MenuM->UseVisualStyleBackColor = true;
			// 
			// PaísC
			// 
			this->PaísC->Location = System::Drawing::Point(3, 3);
			this->PaísC->Name = L"PaísC";
			this->PaísC->Size = System::Drawing::Size(140, 30);
			this->PaísC->TabIndex = 0;
			this->PaísC->Text = L"País";
			this->PaísC->UseMnemonic = false;
			this->PaísC->UseVisualStyleBackColor = true;
			// 
			// ConsOp
			// 
			this->ConsOp->Controls->Add(this->ClienteC);
			this->ConsOp->Controls->Add(this->RestauranteC);
			this->ConsOp->Controls->Add(this->MenuC);
			this->ConsOp->Controls->Add(this->ProductoC);
			this->ConsOp->Controls->Add(this->AdminC);
			this->ConsOp->Controls->Add(this->CiudadC);
			this->ConsOp->Controls->Add(this->PaísC);
			this->ConsOp->Location = System::Drawing::Point(117, 134);
			this->ConsOp->Name = L"ConsOp";
			this->ConsOp->Size = System::Drawing::Size(146, 253);
			this->ConsOp->TabIndex = 3;
			this->ConsOp->Visible = false;
			// 
			// ClienteC
			// 
			this->ClienteC->Location = System::Drawing::Point(4, 183);
			this->ClienteC->Name = L"ClienteC";
			this->ClienteC->Size = System::Drawing::Size(140, 30);
			this->ClienteC->TabIndex = 6;
			this->ClienteC->Text = L"Cliente";
			this->ClienteC->UseVisualStyleBackColor = true;
			// 
			// RestauranteC
			// 
			this->RestauranteC->Location = System::Drawing::Point(3, 75);
			this->RestauranteC->Name = L"RestauranteC";
			this->RestauranteC->Size = System::Drawing::Size(140, 30);
			this->RestauranteC->TabIndex = 5;
			this->RestauranteC->Text = L"Restaurante";
			this->RestauranteC->UseVisualStyleBackColor = true;
			// 
			// MenuC
			// 
			this->MenuC->Location = System::Drawing::Point(3, 111);
			this->MenuC->Name = L"MenuC";
			this->MenuC->Size = System::Drawing::Size(140, 30);
			this->MenuC->TabIndex = 4;
			this->MenuC->Text = L"Menú";
			this->MenuC->UseVisualStyleBackColor = true;
			// 
			// ProductoC
			// 
			this->ProductoC->Location = System::Drawing::Point(3, 147);
			this->ProductoC->Name = L"ProductoC";
			this->ProductoC->Size = System::Drawing::Size(140, 30);
			this->ProductoC->TabIndex = 3;
			this->ProductoC->Text = L"Producto";
			this->ProductoC->UseVisualStyleBackColor = true;
			// 
			// AdminC
			// 
			this->AdminC->Location = System::Drawing::Point(3, 219);
			this->AdminC->Name = L"AdminC";
			this->AdminC->Size = System::Drawing::Size(140, 30);
			this->AdminC->TabIndex = 2;
			this->AdminC->Text = L"Administrador";
			this->AdminC->UseVisualStyleBackColor = true;
			// 
			// CiudadC
			// 
			this->CiudadC->Location = System::Drawing::Point(3, 39);
			this->CiudadC->Name = L"CiudadC";
			this->CiudadC->Size = System::Drawing::Size(140, 30);
			this->CiudadC->TabIndex = 1;
			this->CiudadC->Text = L"Ciudad";
			this->CiudadC->UseMnemonic = false;
			this->CiudadC->UseVisualStyleBackColor = true;
			// 
			// Ventana
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(836, 479);
			this->Controls->Add(this->ModOp);
			this->Controls->Add(this->ConsOp);
			this->Controls->Add(this->InsOp);
			this->Controls->Add(this->MantOp);
			this->Controls->Add(this->MenuPop);
			this->Name = L"Ventana";
			this->Text = L"Menú";
			this->Load += gcnew System::EventHandler(this, &Ventana::Ventana_Load);
			this->MenuPop->ResumeLayout(false);
			this->MantOp->ResumeLayout(false);
			this->InsOp->ResumeLayout(false);
			this->ModOp->ResumeLayout(false);
			this->ConsOp->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void opcionesPop(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^)sender;

		// Mantenimiento

		if (boton == Mantenimiento) {
			cerrarMantenimiento();
			this->MantOp->Visible = !this->MantOp->Visible;
		}
		else if (boton == InsercionB) {
			cerrarMantenimiento();
			this->InsOp->Visible = !this->InsOp->Visible;
			this->accion = Insercion;
		}
		else if (boton == EliminacionB) {
			cerrarMantenimiento();
			this->accion = Eliminacion;
		}
		else if (boton == ConsultasB) {
			cerrarMantenimiento();
			this->ConsOp->Visible = true;
			this->accion = Consulta;
		}
		else if (boton == ModificacionB) {
			cerrarMantenimiento();
			this->ModOp->Visible = true;
			this->accion = Modificacion;
		}

	}
	private: System::Void cerrarMantenimiento() {
		this->InsOp->Visible = false;
		this->ConsOp->Visible = false;
		this->ModOp->Visible = false;
	}
private: System::Void Ventana_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Reportes_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
