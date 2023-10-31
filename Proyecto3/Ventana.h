#pragma once

#include "IngresoDatos.h" 

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
		delegate void VentanaCerrada(System::Object^ sender, System::EventArgs^ e);
		event VentanaCerrada^ Cerrado;

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

		void CerrarVentana() {
			this->Close();
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
	private: bool cantidad;

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
	private: System::Windows::Forms::Button^ ComprasI;

	private: System::Windows::Forms::Button^ AdminI;
	private: System::Windows::Forms::Panel^ ModOp;

	private: System::Windows::Forms::Button^ PaisC;
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
	private: System::Windows::Forms::Button^ PaisIcon;
	private: System::Windows::Forms::Panel^ Lugares;

	private: System::Windows::Forms::Label^ LugarLabel;
	private: System::Windows::Forms::Panel^ LugarMenu;

	private: System::Windows::Forms::Button^ ModificaL;




	private: System::Windows::Forms::Button^ InsertaL;
	private: System::Windows::Forms::Button^ ConsultaL;




private: System::Windows::Forms::Button^ EliminaL;
private: System::Windows::Forms::Panel^ LugarOpc;







private: System::Windows::Forms::Button^ LugarP;
private: System::Windows::Forms::Button^ LugarC;



private: System::Windows::Forms::Panel^ Restaurantes;
private: System::Windows::Forms::Panel^ ResMenu;



private: System::Windows::Forms::Button^ ModificaR;

private: System::Windows::Forms::Button^ InsertaR;
private: System::Windows::Forms::Button^ ConsultaR;


private: System::Windows::Forms::Button^ EliminaR;
private: System::Windows::Forms::Panel^ ResOpc;



private: System::Windows::Forms::Button^ ResR;
private: System::Windows::Forms::Button^ ResM;


private: System::Windows::Forms::Label^ ResLabel;
private: System::Windows::Forms::Button^ ResIcon;
private: System::Windows::Forms::Button^ ResP;
private: System::Windows::Forms::Button^ FilaI;
private: System::Windows::Forms::Panel^ ModCompra;

private: System::Windows::Forms::Button^ CompraC;
private: System::Windows::Forms::Button^ CompraP;
private: System::Windows::Forms::Panel^ FacturacionOpc;
private: System::Windows::Forms::Button^ Descuentos;



private: System::Windows::Forms::Button^ Factura;
private: System::Windows::Forms::Button^ Registro;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ventana::typeid));
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
			this->FilaI = (gcnew System::Windows::Forms::Button());
			this->ComprasI = (gcnew System::Windows::Forms::Button());
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
			this->PaisC = (gcnew System::Windows::Forms::Button());
			this->ConsOp = (gcnew System::Windows::Forms::Panel());
			this->ClienteC = (gcnew System::Windows::Forms::Button());
			this->RestauranteC = (gcnew System::Windows::Forms::Button());
			this->MenuC = (gcnew System::Windows::Forms::Button());
			this->ProductoC = (gcnew System::Windows::Forms::Button());
			this->AdminC = (gcnew System::Windows::Forms::Button());
			this->CiudadC = (gcnew System::Windows::Forms::Button());
			this->PaisIcon = (gcnew System::Windows::Forms::Button());
			this->Lugares = (gcnew System::Windows::Forms::Panel());
			this->LugarMenu = (gcnew System::Windows::Forms::Panel());
			this->ModificaL = (gcnew System::Windows::Forms::Button());
			this->InsertaL = (gcnew System::Windows::Forms::Button());
			this->ConsultaL = (gcnew System::Windows::Forms::Button());
			this->EliminaL = (gcnew System::Windows::Forms::Button());
			this->LugarOpc = (gcnew System::Windows::Forms::Panel());
			this->LugarP = (gcnew System::Windows::Forms::Button());
			this->LugarC = (gcnew System::Windows::Forms::Button());
			this->LugarLabel = (gcnew System::Windows::Forms::Label());
			this->Restaurantes = (gcnew System::Windows::Forms::Panel());
			this->ResMenu = (gcnew System::Windows::Forms::Panel());
			this->ModificaR = (gcnew System::Windows::Forms::Button());
			this->InsertaR = (gcnew System::Windows::Forms::Button());
			this->ConsultaR = (gcnew System::Windows::Forms::Button());
			this->EliminaR = (gcnew System::Windows::Forms::Button());
			this->ResOpc = (gcnew System::Windows::Forms::Panel());
			this->ResP = (gcnew System::Windows::Forms::Button());
			this->ResR = (gcnew System::Windows::Forms::Button());
			this->ResM = (gcnew System::Windows::Forms::Button());
			this->ResLabel = (gcnew System::Windows::Forms::Label());
			this->ResIcon = (gcnew System::Windows::Forms::Button());
			this->ModCompra = (gcnew System::Windows::Forms::Panel());
			this->CompraC = (gcnew System::Windows::Forms::Button());
			this->CompraP = (gcnew System::Windows::Forms::Button());
			this->FacturacionOpc = (gcnew System::Windows::Forms::Panel());
			this->Factura = (gcnew System::Windows::Forms::Button());
			this->Descuentos = (gcnew System::Windows::Forms::Button());
			this->Registro = (gcnew System::Windows::Forms::Button());
			this->MenuPop->SuspendLayout();
			this->MantOp->SuspendLayout();
			this->InsOp->SuspendLayout();
			this->ModOp->SuspendLayout();
			this->ConsOp->SuspendLayout();
			this->Lugares->SuspendLayout();
			this->LugarMenu->SuspendLayout();
			this->LugarOpc->SuspendLayout();
			this->Restaurantes->SuspendLayout();
			this->ResMenu->SuspendLayout();
			this->ResOpc->SuspendLayout();
			this->ModCompra->SuspendLayout();
			this->FacturacionOpc->SuspendLayout();
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
			this->FacturacionPop->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// Reportes
			// 
			this->Reportes->Location = System::Drawing::Point(164, 3);
			this->Reportes->Name = L"Reportes";
			this->Reportes->Size = System::Drawing::Size(155, 40);
			this->Reportes->TabIndex = 1;
			this->Reportes->Text = L"Reportes";
			this->Reportes->UseVisualStyleBackColor = true;
			// 
			// MantOp
			// 
			this->MantOp->BackColor = System::Drawing::Color::Transparent;
			this->MantOp->Controls->Add(this->ModificacionB);
			this->MantOp->Controls->Add(this->InsercionB);
			this->MantOp->Controls->Add(this->ConsultasB);
			this->MantOp->Controls->Add(this->EliminacionB);
			this->MantOp->Location = System::Drawing::Point(12, 61);
			this->MantOp->MinimumSize = System::Drawing::Size(102, 144);
			this->MantOp->Name = L"MantOp";
			this->MantOp->Size = System::Drawing::Size(123, 144);
			this->MantOp->TabIndex = 1;
			this->MantOp->Visible = false;
			// 
			// ModificacionB
			// 
			this->ModificacionB->Location = System::Drawing::Point(3, 111);
			this->ModificacionB->Name = L"ModificacionB";
			this->ModificacionB->Size = System::Drawing::Size(117, 29);
			this->ModificacionB->TabIndex = 5;
			this->ModificacionB->Text = L"Modificación";
			this->ModificacionB->UseVisualStyleBackColor = true;
			this->ModificacionB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// InsercionB
			// 
			this->InsercionB->Location = System::Drawing::Point(3, 3);
			this->InsercionB->Name = L"InsercionB";
			this->InsercionB->Size = System::Drawing::Size(117, 30);
			this->InsercionB->TabIndex = 2;
			this->InsercionB->Text = L"Inserción";
			this->InsercionB->UseVisualStyleBackColor = true;
			this->InsercionB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// ConsultasB
			// 
			this->ConsultasB->Location = System::Drawing::Point(3, 75);
			this->ConsultasB->Name = L"ConsultasB";
			this->ConsultasB->Size = System::Drawing::Size(117, 30);
			this->ConsultasB->TabIndex = 4;
			this->ConsultasB->Text = L"Consultas";
			this->ConsultasB->UseVisualStyleBackColor = true;
			this->ConsultasB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// EliminacionB
			// 
			this->EliminacionB->Location = System::Drawing::Point(3, 39);
			this->EliminacionB->Name = L"EliminacionB";
			this->EliminacionB->Size = System::Drawing::Size(117, 30);
			this->EliminacionB->TabIndex = 3;
			this->EliminacionB->Text = L"Eliminación";
			this->EliminacionB->UseVisualStyleBackColor = true;
			this->EliminacionB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// InsOp
			// 
			this->InsOp->BackColor = System::Drawing::Color::Transparent;
			this->InsOp->Controls->Add(this->FilaI);
			this->InsOp->Controls->Add(this->ComprasI);
			this->InsOp->Controls->Add(this->ClienteI);
			this->InsOp->Controls->Add(this->AdminI);
			this->InsOp->Controls->Add(this->PaisI);
			this->InsOp->Controls->Add(this->ProductoI);
			this->InsOp->Controls->Add(this->CiudadI);
			this->InsOp->Controls->Add(this->MenuI);
			this->InsOp->Controls->Add(this->RestauranteI);
			this->InsOp->Location = System::Drawing::Point(141, 61);
			this->InsOp->Name = L"InsOp";
			this->InsOp->Size = System::Drawing::Size(146, 315);
			this->InsOp->TabIndex = 2;
			this->InsOp->Visible = false;
			// 
			// FilaI
			// 
			this->FilaI->Location = System::Drawing::Point(3, 248);
			this->FilaI->Name = L"FilaI";
			this->FilaI->Size = System::Drawing::Size(140, 29);
			this->FilaI->TabIndex = 9;
			this->FilaI->Text = L"Fila";
			this->FilaI->UseVisualStyleBackColor = true;
			this->FilaI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ComprasI
			// 
			this->ComprasI->Location = System::Drawing::Point(3, 282);
			this->ComprasI->Name = L"ComprasI";
			this->ComprasI->Size = System::Drawing::Size(140, 29);
			this->ComprasI->TabIndex = 4;
			this->ComprasI->Text = L"Registrar Compra";
			this->ComprasI->UseVisualStyleBackColor = true;
			this->ComprasI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ClienteI
			// 
			this->ClienteI->Location = System::Drawing::Point(3, 178);
			this->ClienteI->Name = L"ClienteI";
			this->ClienteI->Size = System::Drawing::Size(140, 29);
			this->ClienteI->TabIndex = 8;
			this->ClienteI->Text = L"Cliente";
			this->ClienteI->UseVisualStyleBackColor = true;
			this->ClienteI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// AdminI
			// 
			this->AdminI->Location = System::Drawing::Point(3, 213);
			this->AdminI->Name = L"AdminI";
			this->AdminI->Size = System::Drawing::Size(140, 29);
			this->AdminI->TabIndex = 3;
			this->AdminI->Text = L"Administrador";
			this->AdminI->UseVisualStyleBackColor = true;
			this->AdminI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// PaisI
			// 
			this->PaisI->Location = System::Drawing::Point(3, 3);
			this->PaisI->Name = L"PaisI";
			this->PaisI->Size = System::Drawing::Size(140, 29);
			this->PaisI->TabIndex = 3;
			this->PaisI->Text = L"País";
			this->PaisI->UseVisualStyleBackColor = true;
			this->PaisI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ProductoI
			// 
			this->ProductoI->Location = System::Drawing::Point(3, 143);
			this->ProductoI->Name = L"ProductoI";
			this->ProductoI->Size = System::Drawing::Size(140, 29);
			this->ProductoI->TabIndex = 7;
			this->ProductoI->Text = L"Producto";
			this->ProductoI->UseVisualStyleBackColor = true;
			this->ProductoI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// CiudadI
			// 
			this->CiudadI->Location = System::Drawing::Point(3, 38);
			this->CiudadI->Name = L"CiudadI";
			this->CiudadI->Size = System::Drawing::Size(140, 29);
			this->CiudadI->TabIndex = 4;
			this->CiudadI->Text = L"Ciudad";
			this->CiudadI->UseVisualStyleBackColor = true;
			this->CiudadI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// MenuI
			// 
			this->MenuI->Location = System::Drawing::Point(3, 108);
			this->MenuI->Name = L"MenuI";
			this->MenuI->Size = System::Drawing::Size(140, 29);
			this->MenuI->TabIndex = 6;
			this->MenuI->Text = L"Menú";
			this->MenuI->UseVisualStyleBackColor = true;
			this->MenuI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// RestauranteI
			// 
			this->RestauranteI->Location = System::Drawing::Point(3, 73);
			this->RestauranteI->Name = L"RestauranteI";
			this->RestauranteI->Size = System::Drawing::Size(140, 29);
			this->RestauranteI->TabIndex = 5;
			this->RestauranteI->Text = L"Restaurante";
			this->RestauranteI->UseVisualStyleBackColor = true;
			this->RestauranteI->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ModOp
			// 
			this->ModOp->BackColor = System::Drawing::Color::Transparent;
			this->ModOp->Controls->Add(this->CompraM);
			this->ModOp->Controls->Add(this->ClienteM);
			this->ModOp->Controls->Add(this->PaisM);
			this->ModOp->Controls->Add(this->CiudadM);
			this->ModOp->Controls->Add(this->RestauranteM);
			this->ModOp->Controls->Add(this->AdminM);
			this->ModOp->Controls->Add(this->ProductoM);
			this->ModOp->Controls->Add(this->MenuM);
			this->ModOp->Location = System::Drawing::Point(141, 166);
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
			this->CompraM->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// ClienteM
			// 
			this->ClienteM->Location = System::Drawing::Point(4, 183);
			this->ClienteM->Name = L"ClienteM";
			this->ClienteM->Size = System::Drawing::Size(140, 30);
			this->ClienteM->TabIndex = 13;
			this->ClienteM->Text = L"Cliente";
			this->ClienteM->UseVisualStyleBackColor = true;
			this->ClienteM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
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
			this->PaisM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
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
			this->CiudadM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// RestauranteM
			// 
			this->RestauranteM->Location = System::Drawing::Point(3, 75);
			this->RestauranteM->Name = L"RestauranteM";
			this->RestauranteM->Size = System::Drawing::Size(140, 30);
			this->RestauranteM->TabIndex = 12;
			this->RestauranteM->Text = L"Restaurante";
			this->RestauranteM->UseVisualStyleBackColor = true;
			this->RestauranteM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// AdminM
			// 
			this->AdminM->Location = System::Drawing::Point(3, 219);
			this->AdminM->Name = L"AdminM";
			this->AdminM->Size = System::Drawing::Size(140, 30);
			this->AdminM->TabIndex = 9;
			this->AdminM->Text = L"Administrador";
			this->AdminM->UseVisualStyleBackColor = true;
			this->AdminM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ProductoM
			// 
			this->ProductoM->Location = System::Drawing::Point(3, 147);
			this->ProductoM->Name = L"ProductoM";
			this->ProductoM->Size = System::Drawing::Size(140, 30);
			this->ProductoM->TabIndex = 10;
			this->ProductoM->Text = L"Producto";
			this->ProductoM->UseVisualStyleBackColor = true;
			this->ProductoM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// MenuM
			// 
			this->MenuM->Location = System::Drawing::Point(3, 111);
			this->MenuM->Name = L"MenuM";
			this->MenuM->Size = System::Drawing::Size(140, 30);
			this->MenuM->TabIndex = 11;
			this->MenuM->Text = L"Menú";
			this->MenuM->UseVisualStyleBackColor = true;
			this->MenuM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// PaisC
			// 
			this->PaisC->Location = System::Drawing::Point(3, 3);
			this->PaisC->Name = L"PaisC";
			this->PaisC->Size = System::Drawing::Size(140, 30);
			this->PaisC->TabIndex = 0;
			this->PaisC->Text = L"País";
			this->PaisC->UseMnemonic = false;
			this->PaisC->UseVisualStyleBackColor = true;
			this->PaisC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ConsOp
			// 
			this->ConsOp->BackColor = System::Drawing::Color::Transparent;
			this->ConsOp->Controls->Add(this->ClienteC);
			this->ConsOp->Controls->Add(this->RestauranteC);
			this->ConsOp->Controls->Add(this->MenuC);
			this->ConsOp->Controls->Add(this->ProductoC);
			this->ConsOp->Controls->Add(this->AdminC);
			this->ConsOp->Controls->Add(this->CiudadC);
			this->ConsOp->Controls->Add(this->PaisC);
			this->ConsOp->Location = System::Drawing::Point(141, 131);
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
			this->ClienteC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// RestauranteC
			// 
			this->RestauranteC->Location = System::Drawing::Point(3, 75);
			this->RestauranteC->Name = L"RestauranteC";
			this->RestauranteC->Size = System::Drawing::Size(140, 30);
			this->RestauranteC->TabIndex = 5;
			this->RestauranteC->Text = L"Restaurante";
			this->RestauranteC->UseVisualStyleBackColor = true;
			this->RestauranteC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// MenuC
			// 
			this->MenuC->Location = System::Drawing::Point(3, 111);
			this->MenuC->Name = L"MenuC";
			this->MenuC->Size = System::Drawing::Size(140, 30);
			this->MenuC->TabIndex = 4;
			this->MenuC->Text = L"Menú";
			this->MenuC->UseVisualStyleBackColor = true;
			this->MenuC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ProductoC
			// 
			this->ProductoC->Location = System::Drawing::Point(3, 147);
			this->ProductoC->Name = L"ProductoC";
			this->ProductoC->Size = System::Drawing::Size(140, 30);
			this->ProductoC->TabIndex = 3;
			this->ProductoC->Text = L"Producto";
			this->ProductoC->UseVisualStyleBackColor = true;
			this->ProductoC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// AdminC
			// 
			this->AdminC->Location = System::Drawing::Point(3, 219);
			this->AdminC->Name = L"AdminC";
			this->AdminC->Size = System::Drawing::Size(140, 30);
			this->AdminC->TabIndex = 2;
			this->AdminC->Text = L"Administrador";
			this->AdminC->UseVisualStyleBackColor = true;
			this->AdminC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
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
			this->CiudadC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// PaisIcon
			// 
			this->PaisIcon->BackColor = System::Drawing::Color::Transparent;
			this->PaisIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PaisIcon.BackgroundImage")));
			this->PaisIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->PaisIcon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->PaisIcon->ForeColor = System::Drawing::SystemColors::ControlText;
			this->PaisIcon->Location = System::Drawing::Point(3, 3);
			this->PaisIcon->Name = L"PaisIcon";
			this->PaisIcon->Size = System::Drawing::Size(120, 116);
			this->PaisIcon->TabIndex = 5;
			this->PaisIcon->UseVisualStyleBackColor = false;
			this->PaisIcon->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// Lugares
			// 
			this->Lugares->Controls->Add(this->LugarMenu);
			this->Lugares->Controls->Add(this->LugarOpc);
			this->Lugares->Controls->Add(this->LugarLabel);
			this->Lugares->Controls->Add(this->PaisIcon);
			this->Lugares->Location = System::Drawing::Point(443, 80);
			this->Lugares->Name = L"Lugares";
			this->Lugares->Size = System::Drawing::Size(358, 156);
			this->Lugares->TabIndex = 6;
			// 
			// LugarMenu
			// 
			this->LugarMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->LugarMenu->Controls->Add(this->ModificaL);
			this->LugarMenu->Controls->Add(this->InsertaL);
			this->LugarMenu->Controls->Add(this->ConsultaL);
			this->LugarMenu->Controls->Add(this->EliminaL);
			this->LugarMenu->Location = System::Drawing::Point(252, 3);
			this->LugarMenu->MinimumSize = System::Drawing::Size(102, 144);
			this->LugarMenu->Name = L"LugarMenu";
			this->LugarMenu->Size = System::Drawing::Size(102, 144);
			this->LugarMenu->TabIndex = 6;
			this->LugarMenu->Visible = false;
			// 
			// ModificaL
			// 
			this->ModificaL->Location = System::Drawing::Point(3, 111);
			this->ModificaL->Name = L"ModificaL";
			this->ModificaL->Size = System::Drawing::Size(96, 29);
			this->ModificaL->TabIndex = 5;
			this->ModificaL->Text = L"Modificación";
			this->ModificaL->UseVisualStyleBackColor = true;
			this->ModificaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// InsertaL
			// 
			this->InsertaL->Location = System::Drawing::Point(3, 3);
			this->InsertaL->Name = L"InsertaL";
			this->InsertaL->Size = System::Drawing::Size(96, 30);
			this->InsertaL->TabIndex = 2;
			this->InsertaL->Text = L"Inserción";
			this->InsertaL->UseVisualStyleBackColor = true;
			this->InsertaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// ConsultaL
			// 
			this->ConsultaL->Location = System::Drawing::Point(3, 75);
			this->ConsultaL->Name = L"ConsultaL";
			this->ConsultaL->Size = System::Drawing::Size(96, 30);
			this->ConsultaL->TabIndex = 4;
			this->ConsultaL->Text = L"Consultas";
			this->ConsultaL->UseVisualStyleBackColor = true;
			this->ConsultaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// EliminaL
			// 
			this->EliminaL->Location = System::Drawing::Point(3, 39);
			this->EliminaL->Name = L"EliminaL";
			this->EliminaL->Size = System::Drawing::Size(96, 30);
			this->EliminaL->TabIndex = 3;
			this->EliminaL->Text = L"Eliminación";
			this->EliminaL->UseVisualStyleBackColor = true;
			this->EliminaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// LugarOpc
			// 
			this->LugarOpc->Controls->Add(this->LugarP);
			this->LugarOpc->Controls->Add(this->LugarC);
			this->LugarOpc->Location = System::Drawing::Point(129, 3);
			this->LugarOpc->Name = L"LugarOpc";
			this->LugarOpc->Size = System::Drawing::Size(120, 74);
			this->LugarOpc->TabIndex = 15;
			this->LugarOpc->Visible = false;
			// 
			// LugarP
			// 
			this->LugarP->Location = System::Drawing::Point(3, 3);
			this->LugarP->Name = L"LugarP";
			this->LugarP->Size = System::Drawing::Size(114, 30);
			this->LugarP->TabIndex = 7;
			this->LugarP->Text = L"País";
			this->LugarP->UseMnemonic = false;
			this->LugarP->UseVisualStyleBackColor = true;
			this->LugarP->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// LugarC
			// 
			this->LugarC->Location = System::Drawing::Point(3, 39);
			this->LugarC->Name = L"LugarC";
			this->LugarC->Size = System::Drawing::Size(114, 30);
			this->LugarC->TabIndex = 8;
			this->LugarC->Text = L"Ciudad";
			this->LugarC->UseMnemonic = false;
			this->LugarC->UseVisualStyleBackColor = true;
			this->LugarC->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// LugarLabel
			// 
			this->LugarLabel->AutoSize = true;
			this->LugarLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LugarLabel->Location = System::Drawing::Point(3, 121);
			this->LugarLabel->Name = L"LugarLabel";
			this->LugarLabel->Size = System::Drawing::Size(119, 32);
			this->LugarLabel->TabIndex = 6;
			this->LugarLabel->Text = L"Lugares";
			// 
			// Restaurantes
			// 
			this->Restaurantes->Controls->Add(this->ResMenu);
			this->Restaurantes->Controls->Add(this->ResOpc);
			this->Restaurantes->Controls->Add(this->ResLabel);
			this->Restaurantes->Controls->Add(this->ResIcon);
			this->Restaurantes->Location = System::Drawing::Point(443, 248);
			this->Restaurantes->Name = L"Restaurantes";
			this->Restaurantes->Size = System::Drawing::Size(358, 156);
			this->Restaurantes->TabIndex = 16;
			// 
			// ResMenu
			// 
			this->ResMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ResMenu->Controls->Add(this->ModificaR);
			this->ResMenu->Controls->Add(this->InsertaR);
			this->ResMenu->Controls->Add(this->ConsultaR);
			this->ResMenu->Controls->Add(this->EliminaR);
			this->ResMenu->Location = System::Drawing::Point(252, 3);
			this->ResMenu->MinimumSize = System::Drawing::Size(102, 144);
			this->ResMenu->Name = L"ResMenu";
			this->ResMenu->Size = System::Drawing::Size(102, 144);
			this->ResMenu->TabIndex = 6;
			this->ResMenu->Visible = false;
			// 
			// ModificaR
			// 
			this->ModificaR->Location = System::Drawing::Point(3, 111);
			this->ModificaR->Name = L"ModificaR";
			this->ModificaR->Size = System::Drawing::Size(96, 29);
			this->ModificaR->TabIndex = 5;
			this->ModificaR->Text = L"Modificación";
			this->ModificaR->UseVisualStyleBackColor = true;
			this->ModificaR->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// InsertaR
			// 
			this->InsertaR->Location = System::Drawing::Point(3, 3);
			this->InsertaR->Name = L"InsertaR";
			this->InsertaR->Size = System::Drawing::Size(96, 30);
			this->InsertaR->TabIndex = 2;
			this->InsertaR->Text = L"Inserción";
			this->InsertaR->UseVisualStyleBackColor = true;
			this->InsertaR->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// ConsultaR
			// 
			this->ConsultaR->Location = System::Drawing::Point(3, 75);
			this->ConsultaR->Name = L"ConsultaR";
			this->ConsultaR->Size = System::Drawing::Size(96, 30);
			this->ConsultaR->TabIndex = 4;
			this->ConsultaR->Text = L"Consultas";
			this->ConsultaR->UseVisualStyleBackColor = true;
			this->ConsultaR->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// EliminaR
			// 
			this->EliminaR->Location = System::Drawing::Point(3, 39);
			this->EliminaR->Name = L"EliminaR";
			this->EliminaR->Size = System::Drawing::Size(96, 30);
			this->EliminaR->TabIndex = 3;
			this->EliminaR->Text = L"Eliminación";
			this->EliminaR->UseVisualStyleBackColor = true;
			this->EliminaR->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// ResOpc
			// 
			this->ResOpc->Controls->Add(this->ResP);
			this->ResOpc->Controls->Add(this->ResR);
			this->ResOpc->Controls->Add(this->ResM);
			this->ResOpc->Location = System::Drawing::Point(129, 3);
			this->ResOpc->Name = L"ResOpc";
			this->ResOpc->Size = System::Drawing::Size(120, 108);
			this->ResOpc->TabIndex = 15;
			this->ResOpc->Visible = false;
			// 
			// ResP
			// 
			this->ResP->Location = System::Drawing::Point(3, 75);
			this->ResP->Name = L"ResP";
			this->ResP->Size = System::Drawing::Size(114, 30);
			this->ResP->TabIndex = 17;
			this->ResP->Text = L"Producto";
			this->ResP->UseMnemonic = false;
			this->ResP->UseVisualStyleBackColor = true;
			this->ResP->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// ResR
			// 
			this->ResR->Location = System::Drawing::Point(3, 3);
			this->ResR->Name = L"ResR";
			this->ResR->Size = System::Drawing::Size(114, 30);
			this->ResR->TabIndex = 7;
			this->ResR->Text = L"Restaurante";
			this->ResR->UseMnemonic = false;
			this->ResR->UseVisualStyleBackColor = true;
			this->ResR->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// ResM
			// 
			this->ResM->Location = System::Drawing::Point(3, 39);
			this->ResM->Name = L"ResM";
			this->ResM->Size = System::Drawing::Size(114, 30);
			this->ResM->TabIndex = 8;
			this->ResM->Text = L"Menú";
			this->ResM->UseMnemonic = false;
			this->ResM->UseVisualStyleBackColor = true;
			this->ResM->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// ResLabel
			// 
			this->ResLabel->AutoSize = true;
			this->ResLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResLabel->Location = System::Drawing::Point(5, 124);
			this->ResLabel->Name = L"ResLabel";
			this->ResLabel->Size = System::Drawing::Size(117, 20);
			this->ResLabel->TabIndex = 6;
			this->ResLabel->Text = L"Restaurantes";
			// 
			// ResIcon
			// 
			this->ResIcon->BackColor = System::Drawing::Color::Transparent;
			this->ResIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResIcon.BackgroundImage")));
			this->ResIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ResIcon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ResIcon->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ResIcon->Location = System::Drawing::Point(3, 3);
			this->ResIcon->Name = L"ResIcon";
			this->ResIcon->Size = System::Drawing::Size(120, 116);
			this->ResIcon->TabIndex = 5;
			this->ResIcon->UseVisualStyleBackColor = false;
			this->ResIcon->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// ModCompra
			// 
			this->ModCompra->BackColor = System::Drawing::Color::Transparent;
			this->ModCompra->Controls->Add(this->CompraC);
			this->ModCompra->Controls->Add(this->CompraP);
			this->ModCompra->Location = System::Drawing::Point(290, 382);
			this->ModCompra->Name = L"ModCompra";
			this->ModCompra->Size = System::Drawing::Size(112, 74);
			this->ModCompra->TabIndex = 17;
			this->ModCompra->Visible = false;
			// 
			// CompraC
			// 
			this->CompraC->Location = System::Drawing::Point(3, 39);
			this->CompraC->Name = L"CompraC";
			this->CompraC->Size = System::Drawing::Size(105, 29);
			this->CompraC->TabIndex = 1;
			this->CompraC->Text = L"Cantidad";
			this->CompraC->UseVisualStyleBackColor = true;
			this->CompraC->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// CompraP
			// 
			this->CompraP->Location = System::Drawing::Point(3, 4);
			this->CompraP->Name = L"CompraP";
			this->CompraP->Size = System::Drawing::Size(105, 29);
			this->CompraP->TabIndex = 0;
			this->CompraP->Text = L"Producto";
			this->CompraP->UseVisualStyleBackColor = true;
			this->CompraP->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// FacturacionOpc
			// 
			this->FacturacionOpc->BackColor = System::Drawing::Color::Transparent;
			this->FacturacionOpc->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->FacturacionOpc->Controls->Add(this->Factura);
			this->FacturacionOpc->Controls->Add(this->Descuentos);
			this->FacturacionOpc->Location = System::Drawing::Point(335, 61);
			this->FacturacionOpc->Name = L"FacturacionOpc";
			this->FacturacionOpc->Size = System::Drawing::Size(149, 71);
			this->FacturacionOpc->TabIndex = 18;
			this->FacturacionOpc->Visible = false;
			// 
			// Factura
			// 
			this->Factura->Location = System::Drawing::Point(3, 3);
			this->Factura->Name = L"Factura";
			this->Factura->Size = System::Drawing::Size(141, 29);
			this->Factura->TabIndex = 0;
			this->Factura->Text = L"Factura";
			this->Factura->UseVisualStyleBackColor = true;
			// 
			// Descuentos
			// 
			this->Descuentos->Location = System::Drawing::Point(3, 38);
			this->Descuentos->Name = L"Descuentos";
			this->Descuentos->Size = System::Drawing::Size(141, 29);
			this->Descuentos->TabIndex = 1;
			this->Descuentos->Text = L"Descuentos";
			this->Descuentos->UseVisualStyleBackColor = true;
			// 
			// Registro
			// 
			this->Registro->Location = System::Drawing::Point(665, 424);
			this->Registro->Name = L"Registro";
			this->Registro->Size = System::Drawing::Size(135, 44);
			this->Registro->TabIndex = 19;
			this->Registro->Text = L"Cambiar Registro";
			this->Registro->UseVisualStyleBackColor = true;
			this->Registro->Click += gcnew System::EventHandler(this, &Ventana::cambiarReg);
			// 
			// Ventana
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(828, 479);
			this->Controls->Add(this->Registro);
			this->Controls->Add(this->FacturacionOpc);
			this->Controls->Add(this->ModCompra);
			this->Controls->Add(this->ModOp);
			this->Controls->Add(this->ConsOp);
			this->Controls->Add(this->InsOp);
			this->Controls->Add(this->MantOp);
			this->Controls->Add(this->MenuPop);
			this->Controls->Add(this->Restaurantes);
			this->Controls->Add(this->Lugares);
			this->Name = L"Ventana";
			this->Text = L"Menú";
			this->MenuPop->ResumeLayout(false);
			this->MantOp->ResumeLayout(false);
			this->InsOp->ResumeLayout(false);
			this->ModOp->ResumeLayout(false);
			this->ConsOp->ResumeLayout(false);
			this->Lugares->ResumeLayout(false);
			this->Lugares->PerformLayout();
			this->LugarMenu->ResumeLayout(false);
			this->LugarOpc->ResumeLayout(false);
			this->Restaurantes->ResumeLayout(false);
			this->Restaurantes->PerformLayout();
			this->ResMenu->ResumeLayout(false);
			this->ResOpc->ResumeLayout(false);
			this->ModCompra->ResumeLayout(false);
			this->FacturacionOpc->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void opcionesPop(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^)sender;
		cerrarIcon();

		// Mantenimiento

		if (boton == Mantenimiento) {
			//ingresarPop(); 
			cerrarMantenimiento();
			this->FacturacionOpc->Visible = false;
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
			this->ConsOp->Visible = !this->ConsOp->Visible;
			this->accion = Consulta;
		}
		else if (boton == ModificacionB) {
			cerrarMantenimiento();
			this->ModOp->Visible = !this->ModOp->Visible;
			this->accion = Modificacion;
		}
		else if (boton == CompraM) {
			this->ModCompra->Visible = !this->ModCompra->Visible;
		}


		// Facturacion

		if (boton == FacturacionPop) {
			cerrarMantenimiento();
			this->MantOp->Visible = false;
			this->FacturacionOpc->Visible = !this->FacturacionOpc->Visible;
		}

	}

	private: System::Void cerrarPop() {
		cerrarMantenimiento();
		this->MantOp->Visible = false;
		this->FacturacionOpc->Visible = false;
	}

	private: System::Void cerrarMantenimiento() {
		this->InsOp->Visible = false;
		this->ConsOp->Visible = false;
		this->ModOp->Visible = false;
	}

	private: System::Void ingresarPop(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ boton = (Button^)sender;
		Proyecto3::IngresoDatos^ ingresa = gcnew Proyecto3::IngresoDatos(); 

		if (boton->Text == "País")
			this->arbol = Pais;
		else if (boton->Text == "Ciudad")
			this->arbol = Ciudad;
		else if (boton->Text == "Restaurante")
			this->arbol = Restaurante;
		else if (boton->Text == "Menú")
			this->arbol = Arbol::Menu;
		else if (boton->Text == "Producto")
			this->arbol = Producto;
		else if (boton->Text == "Cliente")
			this->arbol = Cliente;
		else if (boton->Text == "Administrador")
			this->arbol = Admin;
		else if (boton->Text == "Fila")
			this->arbol = Fila;
		else
			this->arbol = Compra;



		ingresa->config(arbol, accion, cantidad);
		ingresa->actualizar();
		
		
		//-----------------------Ingresar-------------------------
		if (boton == PaisI) 
		{
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			String^ codP = ingresa->CodP->Text;
			String^ nombre = ingresa->Nombre->Text;
			
		}
		if (boton == CiudadI) 
		{
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ nombre = ingresa->Nombre->Text;
			
		}
		if (boton == RestauranteI)
		{
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ nombre = ingresa->Nombre->Text; 
		}
		if (boton == MenuI)
		{
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ codM = ingresa->CodM->Text;
			String^ nombre = ingresa->Nombre->Text;
			
		}
		if (boton == ProductoI)
		{
			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ codM = ingresa->CodM->Text;
			String^ codPr = ingresa->CodPr->Text;
			String^ kcal = ingresa->Kcal->Text;
			String^ prec = ingresa->Precio->Text;
			String^ cant = ingresa->Cantidad->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == AdminI)
		{
			ingresa->PPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			ingresa->Ced->Visible = true;
			String^ cedula = ingresa->Ced->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == ClienteI) 
		{ 
			ingresa->PPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			ingresa->Ced->Visible = true;
			String^ cedula = ingresa->Ced->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == FilaI) {
			ingresa->PPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			ingresa->Ced->Visible = true;
			String^ cedula = ingresa->Ced->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == ComprasI) {

		}


		//-------------------------Consultar------------------------
		if (boton == PaisC)
		{
			ingresa->NPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
		}
		if (boton == CiudadC)
		{
			ingresa->NPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;

		}
		if (boton == RestauranteC)
		{
			ingresa->NPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;

		}
		if (boton == MenuC)
		{
			ingresa->NPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ codM = ingresa->CodM->Text;

		}
		if (boton == ProductoC)
		{
			ingresa->NPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ codM = ingresa->CodM->Text;
			String^ codPr = ingresa->CodPr->Text;
		}
		if (boton == AdminC)
		{
			ingresa->PPanel->Visible = false;
			ingresa->NPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			ingresa->Ced->Visible = true;
			String^ cedula = ingresa->Ced->Text;
		}
		if (boton == ClienteC)
		{
			ingresa->PPanel->Visible = false;
			ingresa->NPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			ingresa->Ced->Visible = true;
			String^ cedula = ingresa->Ced->Text;
		}


		//-------------------------Modificar--------------------------
		if (boton == PaisM)
		{
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == CiudadM)
		{
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ nombre = ingresa->Nombre->Text;

		}
		if (boton == RestauranteM)
		{
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == MenuM)
		{
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;

			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ codM = ingresa->CodM->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == ProductoM)
		{
			String^ codP = ingresa->CodP->Text;
			String^ codC = ingresa->CodC->Text;
			String^ codR = ingresa->CodR->Text;
			String^ codM = ingresa->CodM->Text;
			String^ codPr = ingresa->CodPr->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == AdminM)
		{
			ingresa->PPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			ingresa->Ced->Visible = true;

			String^ cedula = ingresa->Ced->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		if (boton == ClienteM)
		{
			ingresa->PPanel->Visible = false;
			ingresa->CPanel->Visible = false;
			ingresa->RPanel->Visible = false;
			ingresa->MPanel->Visible = false;
			ingresa->PrPanel->Visible = false;
			ingresa->KcalPanel->Visible = false;
			ingresa->CaPanel->Visible = false;
			ingresa->PrePanel->Visible = false;
			ingresa->Ced->Visible = true;

			String^ cedula = ingresa->Ced->Text;
			String^ nombre = ingresa->Nombre->Text;
		}
		ingresa->ShowDialog(); 
		
	}

	private: System::Void abrirIcon(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^)sender;


		// Lugares

		if (boton == PaisIcon) {
			cerrarRestaurantes();
			this->LugarMenu->Visible = false;
			this->LugarOpc->Visible = !this->LugarOpc->Visible;
		}
		else if (boton == LugarP) {
			this->LugarMenu->Visible = !this->LugarMenu->Visible;
			this->arbol = Pais;
		}
		else if (boton == LugarC) {
			this->LugarMenu->Visible = !this->LugarMenu->Visible;
			this->arbol = Ciudad;
		}


		// Restaurante

		else if (boton == ResIcon) {
			cerrarLugares();
			this->ResMenu->Visible = false;
			this->ResOpc->Visible = !this->ResOpc->Visible;
		}
		else if (boton == ResR) {
			this->ResMenu->Visible = !this->ResMenu->Visible;
			this->arbol = Restaurante;
		}
		else if (boton == ResM) {
			this->ResMenu->Visible = !this->ResMenu->Visible;
			this->arbol = Arbol::Menu;
		}
		else if (boton == ResP) {
			this->ResMenu->Visible = !this->ResMenu->Visible;
			this->arbol = Producto;
		}
	}

	private: System::Void cerrarIcon() {
		cerrarLugares();
		cerrarRestaurantes();
	}

	private: System::Void cerrarLugares() {
		this->LugarOpc->Visible = false;
		this->LugarMenu->Visible = false;
	}

	private: System::Void cerrarRestaurantes() {
		this->ResOpc->Visible = false;
		this->ResMenu->Visible = false;
	}

	
	private: System::Void ingresarIcon(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^)sender;
		Proyecto3::IngresoDatos^ ingresa = gcnew Proyecto3::IngresoDatos();

		if (boton->Text == "Inserción") {
			this->accion = Insercion;
		}
		if (boton->Text == "Eliminación") {
			this->accion = Eliminacion;
		}
		if (boton->Text == "Consulta") {
			this->accion = Consulta;
		}
		if (boton->Text == "Modificación") {
			this->accion = Modificacion;
		}

		ingresa->config(arbol, accion, cantidad);
		ingresa->actualizar();
		ingresa->ShowDialog();
	}

	private: System::Void cambiarReg(System::Object^ sender, System::EventArgs^ e) {
		Cerrado(this, gcnew EventArgs());
		this->Close();
	}

	public: System::Void ocultarOpciones() {
		cerrarPop();
		cerrarIcon();
	}
};
}
