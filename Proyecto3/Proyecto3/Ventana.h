#pragma once

#include "Mensaje.h"
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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

		System::Void verificarAdmin(bool admin) {
			if (!admin) {
				this->InsercionB->Enabled = false;
				this->EliminacionB->Enabled = false;
				this->ModificacionB->Enabled = false;
				this->InsertaL->Enabled = false;
				this->EliminaL->Enabled = false;
				this->ModificaL->Enabled = false;
				this->UsuarioF->Enabled = false;
			}
		}

		void CerrarVentana() {
			this->Close();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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


	private: System::Windows::Forms::Panel^ ElimOp;
	private: System::Windows::Forms::Button^ CiudadB;
	private: System::Windows::Forms::Button^ ClienteB;
	private: System::Windows::Forms::Button^ RestauranteB;
	private: System::Windows::Forms::Button^ MenuB;
	private: System::Windows::Forms::Button^ ProductoB;
	private: System::Windows::Forms::Button^ AdminB;
	private: System::Windows::Forms::Button^ PaisB;

	private: System::Windows::Forms::Button^ CiudadM;

	private: System::Windows::Forms::Button^ RestauranteM;

	private: System::Windows::Forms::Button^ AdminM;
	private: System::Windows::Forms::Button^ ProductoM;
	private: System::Windows::Forms::Button^ MenuM;
	private: System::Windows::Forms::Button^ PaisIcon;
	private: System::Windows::Forms::Panel^ Lugares;

	private: System::Windows::Forms::Label^ LugarLabel;
private: System::Windows::Forms::Panel^ IconMenu;


	private: System::Windows::Forms::Button^ ModificaL;




	private: System::Windows::Forms::Button^ InsertaL;
	private: System::Windows::Forms::Button^ ConsultaL;




private: System::Windows::Forms::Button^ EliminaL;
private: System::Windows::Forms::Panel^ LugarOpc;







private: System::Windows::Forms::Button^ LugarP;
private: System::Windows::Forms::Button^ LugarC;



private: System::Windows::Forms::Panel^ Restaurantes;











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
private: System::Windows::Forms::Panel^ Usuarios;
private: System::Windows::Forms::Panel^ UsuarioOpc;
private: System::Windows::Forms::Button^ UsuarioF;



private: System::Windows::Forms::Button^ UsuarioC;
private: System::Windows::Forms::Button^ UsuarioA;


private: System::Windows::Forms::Label^ UsuarioLabel;

private: System::Windows::Forms::Button^ UsuarioIcon;

private: System::Windows::Forms::Panel^ Facturaci�n;
private: System::Windows::Forms::Panel^ FacturaOpc;
private: System::Windows::Forms::Button^ FacturaF;
private: System::Windows::Forms::Button^ FacturaD;





private: System::Windows::Forms::Label^ FacturaLabel;
private: System::Windows::Forms::Button^ FacturaIcon;
private: System::Windows::Forms::Panel^ FilaMenu;

private: System::Windows::Forms::Button^ InsCliente;
private: System::Windows::Forms::Button^ ModProd;


private: System::Windows::Forms::Button^ ModCant;

private: System::Windows::Forms::Button^ RegCompra;
private: System::Windows::Forms::Button^ EliminaCompra;



















	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->ElimOp = (gcnew System::Windows::Forms::Panel());
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
			this->ClienteB = (gcnew System::Windows::Forms::Button());
			this->PaisB = (gcnew System::Windows::Forms::Button());
			this->CiudadB = (gcnew System::Windows::Forms::Button());
			this->RestauranteB = (gcnew System::Windows::Forms::Button());
			this->AdminB = (gcnew System::Windows::Forms::Button());
			this->ProductoB = (gcnew System::Windows::Forms::Button());
			this->MenuB = (gcnew System::Windows::Forms::Button());
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
			this->LugarOpc = (gcnew System::Windows::Forms::Panel());
			this->LugarP = (gcnew System::Windows::Forms::Button());
			this->LugarC = (gcnew System::Windows::Forms::Button());
			this->LugarLabel = (gcnew System::Windows::Forms::Label());
			this->IconMenu = (gcnew System::Windows::Forms::Panel());
			this->ModificaL = (gcnew System::Windows::Forms::Button());
			this->InsertaL = (gcnew System::Windows::Forms::Button());
			this->ConsultaL = (gcnew System::Windows::Forms::Button());
			this->EliminaL = (gcnew System::Windows::Forms::Button());
			this->Restaurantes = (gcnew System::Windows::Forms::Panel());
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
			this->Usuarios = (gcnew System::Windows::Forms::Panel());
			this->UsuarioOpc = (gcnew System::Windows::Forms::Panel());
			this->UsuarioF = (gcnew System::Windows::Forms::Button());
			this->UsuarioC = (gcnew System::Windows::Forms::Button());
			this->UsuarioA = (gcnew System::Windows::Forms::Button());
			this->UsuarioLabel = (gcnew System::Windows::Forms::Label());
			this->UsuarioIcon = (gcnew System::Windows::Forms::Button());
			this->Facturaci�n = (gcnew System::Windows::Forms::Panel());
			this->FacturaOpc = (gcnew System::Windows::Forms::Panel());
			this->FacturaF = (gcnew System::Windows::Forms::Button());
			this->FacturaD = (gcnew System::Windows::Forms::Button());
			this->FacturaLabel = (gcnew System::Windows::Forms::Label());
			this->FacturaIcon = (gcnew System::Windows::Forms::Button());
			this->FilaMenu = (gcnew System::Windows::Forms::Panel());
			this->EliminaCompra = (gcnew System::Windows::Forms::Button());
			this->ModProd = (gcnew System::Windows::Forms::Button());
			this->ModCant = (gcnew System::Windows::Forms::Button());
			this->RegCompra = (gcnew System::Windows::Forms::Button());
			this->InsCliente = (gcnew System::Windows::Forms::Button());
			this->MenuPop->SuspendLayout();
			this->MantOp->SuspendLayout();
			this->InsOp->SuspendLayout();
			this->ModOp->SuspendLayout();
			this->ConsOp->SuspendLayout();
			this->ElimOp->SuspendLayout();
			this->Lugares->SuspendLayout();
			this->LugarOpc->SuspendLayout();
			this->IconMenu->SuspendLayout();
			this->Restaurantes->SuspendLayout();
			this->ResOpc->SuspendLayout();
			this->ModCompra->SuspendLayout();
			this->FacturacionOpc->SuspendLayout();
			this->Usuarios->SuspendLayout();
			this->UsuarioOpc->SuspendLayout();
			this->Facturaci�n->SuspendLayout();
			this->FacturaOpc->SuspendLayout();
			this->FilaMenu->SuspendLayout();
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
			this->FacturacionPop->Text = L"Facturaci�n";
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
			this->ModificacionB->Text = L"Modificaci�n";
			this->ModificacionB->UseVisualStyleBackColor = true;
			this->ModificacionB->Click += gcnew System::EventHandler(this, &Ventana::opcionesPop);
			// 
			// InsercionB
			// 
			this->InsercionB->Location = System::Drawing::Point(3, 3);
			this->InsercionB->Name = L"InsercionB";
			this->InsercionB->Size = System::Drawing::Size(117, 30);
			this->InsercionB->TabIndex = 2;
			this->InsercionB->Text = L"Inserci�n";
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
			this->EliminacionB->Text = L"Eliminaci�n";
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
			this->PaisI->Text = L"Pa�s";
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
			this->MenuI->Text = L"Men�";
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
			this->PaisM->Text = L"Pa�s";
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
			this->MenuM->Text = L"Men�";
			this->MenuM->UseVisualStyleBackColor = true;
			this->MenuM->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);

			// 
			// ElimOp
			// 
			this->ElimOp->BackColor = System::Drawing::Color::Transparent;
			this->ElimOp->Controls->Add(this->ClienteB);
			this->ElimOp->Controls->Add(this->PaisB);
			this->ElimOp->Controls->Add(this->CiudadB);
			this->ElimOp->Controls->Add(this->RestauranteB);
			this->ElimOp->Controls->Add(this->AdminB);
			this->ElimOp->Controls->Add(this->ProductoB);
			this->ElimOp->Controls->Add(this->MenuB);
			this->ElimOp->Location = System::Drawing::Point(141, 130);
			this->ElimOp->Name = L"ModOp";
			this->ElimOp->Size = System::Drawing::Size(146, 291);
			this->ElimOp->TabIndex = 4;
			this->ElimOp->Visible = false;
			// 
			// ClienteB
			// 
			this->ClienteB->Location = System::Drawing::Point(4, 183);
			this->ClienteB->Name = L"ClienteM";
			this->ClienteB->Size = System::Drawing::Size(140, 30);
			this->ClienteB->TabIndex = 13;
			this->ClienteB->Text = L"Cliente";
			this->ClienteB->UseVisualStyleBackColor = true;
			this->ClienteB->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// PaisB
			// 
			this->PaisB->Location = System::Drawing::Point(3, 3);
			this->PaisB->Name = L"PaisM";
			this->PaisB->Size = System::Drawing::Size(140, 30);
			this->PaisB->TabIndex = 7;
			this->PaisB->Text = L"Pa�s";
			this->PaisB->UseMnemonic = false;
			this->PaisB->UseVisualStyleBackColor = true;
			this->PaisB->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// CiudadB
			// 
			this->CiudadB->Location = System::Drawing::Point(3, 39);
			this->CiudadB->Name = L"CiudadM";
			this->CiudadB->Size = System::Drawing::Size(140, 30);
			this->CiudadB->TabIndex = 8;
			this->CiudadB->Text = L"Ciudad";
			this->CiudadB->UseMnemonic = false;
			this->CiudadB->UseVisualStyleBackColor = true;
			this->CiudadB->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// RestauranteB
			// 
			this->RestauranteB->Location = System::Drawing::Point(3, 75);
			this->RestauranteB->Name = L"RestauranteM";
			this->RestauranteB->Size = System::Drawing::Size(140, 30);
			this->RestauranteB->TabIndex = 12;
			this->RestauranteB->Text = L"Restaurante";
			this->RestauranteB->UseVisualStyleBackColor = true;
			this->RestauranteB->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// AdminB
			// 
			this->AdminB->Location = System::Drawing::Point(3, 219);
			this->AdminB->Name = L"AdminM";
			this->AdminB->Size = System::Drawing::Size(140, 30);
			this->AdminB->TabIndex = 9;
			this->AdminB->Text = L"Administrador";
			this->AdminB->UseVisualStyleBackColor = true;
			this->AdminB->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// ProductoB
			// 
			this->ProductoB->Location = System::Drawing::Point(3, 147);
			this->ProductoB->Name = L"ProductoM";
			this->ProductoB->Size = System::Drawing::Size(140, 30);
			this->ProductoB->TabIndex = 10;
			this->ProductoB->Text = L"Producto";
			this->ProductoB->UseVisualStyleBackColor = true;
			this->ProductoB->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// MenuB
			// 
			this->MenuB->Location = System::Drawing::Point(3, 111);
			this->MenuB->Name = L"MenuM";
			this->MenuB->Size = System::Drawing::Size(140, 30);
			this->MenuB->TabIndex = 11;
			this->MenuB->Text = L"Men�";
			this->MenuB->UseVisualStyleBackColor = true;
			this->MenuB->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);

			// 
			// PaisC
			// 
			this->PaisC->Location = System::Drawing::Point(3, 3);
			this->PaisC->Name = L"PaisC";
			this->PaisC->Size = System::Drawing::Size(140, 30);
			this->PaisC->TabIndex = 0;
			this->PaisC->Text = L"Pa�s";
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
			this->MenuC->Text = L"Men�";
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
			this->Lugares->Controls->Add(this->LugarOpc);
			this->Lugares->Controls->Add(this->LugarLabel);
			this->Lugares->Controls->Add(this->PaisIcon);
			this->Lugares->Location = System::Drawing::Point(12, 74);
			this->Lugares->Name = L"Lugares";
			this->Lugares->Size = System::Drawing::Size(254, 156);
			this->Lugares->TabIndex = 6;
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
			this->LugarP->Text = L"Pa�s";
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
			this->LugarLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LugarLabel->Location = System::Drawing::Point(3, 121);
			this->LugarLabel->Name = L"LugarLabel";
			this->LugarLabel->Size = System::Drawing::Size(119, 32);
			this->LugarLabel->TabIndex = 6;
			this->LugarLabel->Text = L"Lugares";
			this->LugarLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// IconMenu
			// 
			this->IconMenu->BackColor = System::Drawing::Color::Transparent;
			this->IconMenu->Controls->Add(this->ModificaL);
			this->IconMenu->Controls->Add(this->InsertaL);
			this->IconMenu->Controls->Add(this->ConsultaL);
			this->IconMenu->Controls->Add(this->EliminaL);
			this->IconMenu->Location = System::Drawing::Point(268, 98);
			this->IconMenu->MinimumSize = System::Drawing::Size(102, 144);
			this->IconMenu->Name = L"IconMenu";
			this->IconMenu->Size = System::Drawing::Size(117, 144);
			this->IconMenu->TabIndex = 6;
			this->IconMenu->Visible = false;
			// 
			// ModificaL
			// 
			this->ModificaL->Location = System::Drawing::Point(3, 111);
			this->ModificaL->Name = L"ModificaL";
			this->ModificaL->Size = System::Drawing::Size(111, 29);
			this->ModificaL->TabIndex = 5;
			this->ModificaL->Text = L"Modificaci�n";
			this->ModificaL->UseVisualStyleBackColor = true;
			this->ModificaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// InsertaL
			// 
			this->InsertaL->Location = System::Drawing::Point(3, 3);
			this->InsertaL->Name = L"InsertaL";
			this->InsertaL->Size = System::Drawing::Size(111, 30);
			this->InsertaL->TabIndex = 2;
			this->InsertaL->Text = L"Inserci�n";
			this->InsertaL->UseVisualStyleBackColor = true;
			this->InsertaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// ConsultaL
			// 
			this->ConsultaL->Location = System::Drawing::Point(3, 75);
			this->ConsultaL->Name = L"ConsultaL";
			this->ConsultaL->Size = System::Drawing::Size(111, 30);
			this->ConsultaL->TabIndex = 4;
			this->ConsultaL->Text = L"Consulta";
			this->ConsultaL->UseVisualStyleBackColor = true;
			this->ConsultaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// EliminaL
			// 
			this->EliminaL->Location = System::Drawing::Point(3, 39);
			this->EliminaL->Name = L"EliminaL";
			this->EliminaL->Size = System::Drawing::Size(111, 30);
			this->EliminaL->TabIndex = 3;
			this->EliminaL->Text = L"Eliminaci�n";
			this->EliminaL->UseVisualStyleBackColor = true;
			this->EliminaL->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// Restaurantes
			// 
			this->Restaurantes->Controls->Add(this->ResOpc);
			this->Restaurantes->Controls->Add(this->ResLabel);
			this->Restaurantes->Controls->Add(this->ResIcon);
			this->Restaurantes->Location = System::Drawing::Point(12, 266);
			this->Restaurantes->Name = L"Restaurantes";
			this->Restaurantes->Size = System::Drawing::Size(254, 156);
			this->Restaurantes->TabIndex = 16;
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
			this->ResM->Text = L"Men�";
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
			this->Factura->Click += gcnew System::EventHandler(this, &Ventana::ingresarPop);
			// 
			// Descuentos
			// 
			this->Descuentos->Location = System::Drawing::Point(3, 38);
			this->Descuentos->Name = L"Descuentos";
			this->Descuentos->Size = System::Drawing::Size(141, 29);
			this->Descuentos->TabIndex = 1;
			this->Descuentos->Text = L"Descuentos";
			this->Descuentos->UseVisualStyleBackColor = true;
			this->Descuentos->Click += gcnew System::EventHandler(this, &Ventana::enviarMensaje);
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
			// Usuarios
			// 
			this->Usuarios->BackColor = System::Drawing::Color::Transparent;
			this->Usuarios->Controls->Add(this->UsuarioOpc);
			this->Usuarios->Controls->Add(this->UsuarioLabel);
			this->Usuarios->Controls->Add(this->UsuarioIcon);
			this->Usuarios->Location = System::Drawing::Point(393, 74);
			this->Usuarios->Name = L"Usuarios";
			this->Usuarios->Size = System::Drawing::Size(263, 156);
			this->Usuarios->TabIndex = 17;
			// 
			// UsuarioOpc
			// 
			this->UsuarioOpc->BackColor = System::Drawing::Color::Transparent;
			this->UsuarioOpc->Controls->Add(this->UsuarioF);
			this->UsuarioOpc->Controls->Add(this->UsuarioC);
			this->UsuarioOpc->Controls->Add(this->UsuarioA);
			this->UsuarioOpc->Location = System::Drawing::Point(129, 3);
			this->UsuarioOpc->Name = L"UsuarioOpc";
			this->UsuarioOpc->Size = System::Drawing::Size(131, 111);
			this->UsuarioOpc->TabIndex = 15;
			this->UsuarioOpc->Visible = false;
			// 
			// UsuarioF
			// 
			this->UsuarioF->Location = System::Drawing::Point(3, 75);
			this->UsuarioF->Name = L"UsuarioF";
			this->UsuarioF->Size = System::Drawing::Size(125, 30);
			this->UsuarioF->TabIndex = 17;
			this->UsuarioF->Text = L"Fila";
			this->UsuarioF->UseMnemonic = false;
			this->UsuarioF->UseVisualStyleBackColor = true;
			this->UsuarioF->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// UsuarioC
			// 
			this->UsuarioC->Location = System::Drawing::Point(3, 3);
			this->UsuarioC->Name = L"UsuarioC";
			this->UsuarioC->Size = System::Drawing::Size(125, 30);
			this->UsuarioC->TabIndex = 7;
			this->UsuarioC->Text = L"Clientes";
			this->UsuarioC->UseMnemonic = false;
			this->UsuarioC->UseVisualStyleBackColor = true;
			this->UsuarioC->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// UsuarioA
			// 
			this->UsuarioA->Location = System::Drawing::Point(3, 39);
			this->UsuarioA->Name = L"UsuarioA";
			this->UsuarioA->Size = System::Drawing::Size(125, 30);
			this->UsuarioA->TabIndex = 8;
			this->UsuarioA->Text = L"Administradores";
			this->UsuarioA->UseMnemonic = false;
			this->UsuarioA->UseVisualStyleBackColor = true;
			this->UsuarioA->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// UsuarioLabel
			// 
			this->UsuarioLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsuarioLabel->Location = System::Drawing::Point(5, 124);
			this->UsuarioLabel->Name = L"UsuarioLabel";
			this->UsuarioLabel->Size = System::Drawing::Size(117, 20);
			this->UsuarioLabel->TabIndex = 6;
			this->UsuarioLabel->Text = L"Usuarios";
			this->UsuarioLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UsuarioIcon
			// 
			this->UsuarioIcon->BackColor = System::Drawing::Color::Transparent;
			this->UsuarioIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UsuarioIcon.BackgroundImage")));
			this->UsuarioIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->UsuarioIcon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->UsuarioIcon->ForeColor = System::Drawing::SystemColors::ControlText;
			this->UsuarioIcon->Location = System::Drawing::Point(3, 3);
			this->UsuarioIcon->Name = L"UsuarioIcon";
			this->UsuarioIcon->Size = System::Drawing::Size(120, 116);
			this->UsuarioIcon->TabIndex = 5;
			this->UsuarioIcon->UseVisualStyleBackColor = false;
			this->UsuarioIcon->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// Facturaci�n
			// 
			this->Facturaci�n->BackColor = System::Drawing::Color::Transparent;
			this->Facturaci�n->Controls->Add(this->FacturaOpc);
			this->Facturaci�n->Controls->Add(this->FacturaLabel);
			this->Facturaci�n->Controls->Add(this->FacturaIcon);
			this->Facturaci�n->Location = System::Drawing::Point(393, 260);
			this->Facturaci�n->Name = L"Facturaci�n";
			this->Facturaci�n->Size = System::Drawing::Size(263, 156);
			this->Facturaci�n->TabIndex = 18;
			// 
			// FacturaOpc
			// 
			this->FacturaOpc->BackColor = System::Drawing::Color::Transparent;
			this->FacturaOpc->Controls->Add(this->FacturaF);
			this->FacturaOpc->Controls->Add(this->FacturaD);
			this->FacturaOpc->Location = System::Drawing::Point(129, 3);
			this->FacturaOpc->Name = L"FacturaOpc";
			this->FacturaOpc->Size = System::Drawing::Size(131, 72);
			this->FacturaOpc->TabIndex = 15;
			this->FacturaOpc->Visible = false;
			// 
			// FacturaF
			// 
			this->FacturaF->Location = System::Drawing::Point(3, 3);
			this->FacturaF->Name = L"FacturaF";
			this->FacturaF->Size = System::Drawing::Size(125, 30);
			this->FacturaF->TabIndex = 7;
			this->FacturaF->Text = L"Facturaci�n";
			this->FacturaF->UseMnemonic = false;
			this->FacturaF->UseVisualStyleBackColor = true;
			this->FacturaF->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// FacturaD
			// 
			this->FacturaD->Location = System::Drawing::Point(3, 39);
			this->FacturaD->Name = L"FacturaD";
			this->FacturaD->Size = System::Drawing::Size(125, 30);
			this->FacturaD->TabIndex = 8;
			this->FacturaD->Text = L"Descuentos";
			this->FacturaD->UseMnemonic = false;
			this->FacturaD->UseVisualStyleBackColor = true;
			this->FacturaD->Click += gcnew System::EventHandler(this, &Ventana::enviarMensaje);
			// 
			// FacturaLabel
			// 
			this->FacturaLabel->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FacturaLabel->Location = System::Drawing::Point(5, 124);
			this->FacturaLabel->Name = L"FacturaLabel";
			this->FacturaLabel->Size = System::Drawing::Size(117, 20);
			this->FacturaLabel->TabIndex = 6;
			this->FacturaLabel->Text = L"Facturaci�n";
			this->FacturaLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FacturaIcon
			// 
			this->FacturaIcon->BackColor = System::Drawing::Color::Transparent;
			this->FacturaIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FacturaIcon.BackgroundImage")));
			this->FacturaIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->FacturaIcon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FacturaIcon->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FacturaIcon->Location = System::Drawing::Point(3, 3);
			this->FacturaIcon->Name = L"FacturaIcon";
			this->FacturaIcon->Size = System::Drawing::Size(120, 116);
			this->FacturaIcon->TabIndex = 5;
			this->FacturaIcon->UseVisualStyleBackColor = false;
			this->FacturaIcon->Click += gcnew System::EventHandler(this, &Ventana::abrirIcon);
			// 
			// FilaMenu
			// 
			this->FilaMenu->BackColor = System::Drawing::Color::Transparent;
			this->FilaMenu->Controls->Add(this->EliminaCompra);
			this->FilaMenu->Controls->Add(this->ModProd);
			this->FilaMenu->Controls->Add(this->ModCant);
			this->FilaMenu->Controls->Add(this->RegCompra);
			this->FilaMenu->Controls->Add(this->InsCliente);
			this->FilaMenu->Location = System::Drawing::Point(659, 148);
			this->FilaMenu->Name = L"FilaMenu";
			this->FilaMenu->Size = System::Drawing::Size(155, 181);
			this->FilaMenu->TabIndex = 20;
			this->FilaMenu->Visible = false;
			// 
			// EliminaCompra
			// 
			this->EliminaCompra->Location = System::Drawing::Point(3, 76);
			this->EliminaCompra->Name = L"EliminaCompra";
			this->EliminaCompra->Size = System::Drawing::Size(149, 29);
			this->EliminaCompra->TabIndex = 4;
			this->EliminaCompra->Text = L"Eliminar Compra";
			this->EliminaCompra->UseVisualStyleBackColor = true;
			this->EliminaCompra->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// ModProd
			// 
			this->ModProd->Location = System::Drawing::Point(3, 147);
			this->ModProd->Name = L"ModProd";
			this->ModProd->Size = System::Drawing::Size(149, 29);
			this->ModProd->TabIndex = 3;
			this->ModProd->Text = L"Modificar Producto";
			this->ModProd->UseVisualStyleBackColor = true;
			this->ModProd->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// ModCant
			// 
			this->ModCant->Location = System::Drawing::Point(3, 112);
			this->ModCant->Name = L"ModCant";
			this->ModCant->Size = System::Drawing::Size(149, 29);
			this->ModCant->TabIndex = 2;
			this->ModCant->Text = L"Modificar Cantidad";
			this->ModCant->UseVisualStyleBackColor = true;
			this->ModCant->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// RegCompra
			// 
			this->RegCompra->Location = System::Drawing::Point(3, 40);
			this->RegCompra->Name = L"RegCompra";
			this->RegCompra->Size = System::Drawing::Size(149, 29);
			this->RegCompra->TabIndex = 1;
			this->RegCompra->Text = L"Registra Compra";
			this->RegCompra->UseVisualStyleBackColor = true;
			this->RegCompra->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
			// 
			// InsCliente
			// 
			this->InsCliente->Location = System::Drawing::Point(3, 5);
			this->InsCliente->Name = L"InsCliente";
			this->InsCliente->Size = System::Drawing::Size(149, 29);
			this->InsCliente->TabIndex = 0;
			this->InsCliente->Text = L"Inserta Cliente";
			this->InsCliente->UseVisualStyleBackColor = true;
			this->InsCliente->Click += gcnew System::EventHandler(this, &Ventana::ingresarIcon);
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
			this->Controls->Add(this->IconMenu);
			this->Controls->Add(this->FilaMenu);
			this->Controls->Add(this->Facturaci�n);
			this->Controls->Add(this->Usuarios);
			this->Name = L"Ventana";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Men�";
			this->MenuPop->ResumeLayout(false);
			this->MantOp->ResumeLayout(false);
			this->InsOp->ResumeLayout(false);
			this->ModOp->ResumeLayout(false);
			this->ConsOp->ResumeLayout(false);
			this->Lugares->ResumeLayout(false);
			this->LugarOpc->ResumeLayout(false);
			this->IconMenu->ResumeLayout(false);
			this->Restaurantes->ResumeLayout(false);
			this->Restaurantes->PerformLayout();
			this->ResOpc->ResumeLayout(false);
			this->ModCompra->ResumeLayout(false);
			this->FacturacionOpc->ResumeLayout(false);
			this->Usuarios->ResumeLayout(false);
			this->UsuarioOpc->ResumeLayout(false);
			this->Facturaci�n->ResumeLayout(false);
			this->FacturaOpc->ResumeLayout(false);
			this->FilaMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void opcionesPop(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^)sender;
		cerrarIcon();

		if (boton != UsuarioF) {
			this->FilaMenu->Visible = false;
		}

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
			this->ElimOp->Visible = !this->ElimOp->Visible;
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

		if (boton->Text == "Pa�s")
			this->arbol = Pais;
		else if (boton->Text == "Ciudad")
			this->arbol = Ciudad;
		else if (boton->Text == "Restaurante")
			this->arbol = Restaurante;
		else if (boton->Text == "Men�")
			this->arbol = Arbol::Menu;
		else if (boton->Text == "Producto")
			this->arbol = Producto;
		else if (boton->Text == "Cliente")
			this->arbol = Cliente;
		else if (boton->Text == "Administrador")
			this->arbol = Admin;
		else if (boton->Text == "Fila")
			this->arbol = Fila;
		else if (boton == this->Factura)
			this->arbol = Arbol::Factura;
		else
			this->arbol = Compra;

		if (boton == this->CompraP)
			this->cantidad = false;
		else
			this->cantidad = true;


		ingresa->config(arbol, accion, cantidad);
		ingresa->actualizar();
		ingresa->ShowDialog(); 
	}

	private: System::Void abrirIcon(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^)sender;
		cerrarPop();

		if (boton != UsuarioF) {
			this->FilaMenu->Visible = false;
		}


		// Lugares

		if (boton == PaisIcon) {
			this->IconMenu->Visible = false;
			this->LugarOpc->Visible = !this->LugarOpc->Visible;
			cerrarRestaurantes();
			cerrarUsuarios();
			this->FacturaOpc->Visible = false;
		}
		else if (boton == LugarP) {
			moverPanel(IconMenu, LugarP->Parent->Parent->Right, LugarP->Parent->Parent->Top + LugarP->Top);
			this->arbol = Pais;
		}
		else if (boton == LugarC) {
			moverPanel(IconMenu, LugarC->Parent->Parent->Right, LugarC->Parent->Parent->Top + LugarC->Top);
			this->arbol = Ciudad;
		}


		// Restaurante

		else if (boton == ResIcon) {
			this->IconMenu->Visible = false;
			cerrarLugares();
			this->ResOpc->Visible = !this->ResOpc->Visible;
			cerrarUsuarios();
			this->FacturaOpc->Visible = false;
		}
		else if (boton == ResR) {
			moverPanel(IconMenu, ResR->Parent->Parent->Right, ResR->Parent->Parent->Top + ResR->Top);
			this->arbol = Restaurante;
		}
		else if (boton == ResM) {
			moverPanel(IconMenu, ResM->Parent->Parent->Right, ResM->Parent->Parent->Top + ResM->Top);
			this->arbol = Arbol::Menu;
		}
		else if (boton == ResP) {
			moverPanel(IconMenu, ResP->Parent->Parent->Right, ResP->Parent->Parent->Top + ResP->Top);
			this->arbol = Producto;
		}


		// Usuarios

		else if (boton == UsuarioIcon) {
			this->IconMenu->Visible = false;
			cerrarLugares();
			cerrarRestaurantes();
			this->UsuarioOpc->Visible = !this->ResOpc->Visible;
			this->FacturaOpc->Visible = false;
		}
		else if (boton == UsuarioC) {
			moverPanel(IconMenu, UsuarioC->Parent->Parent->Right, UsuarioC->Parent->Parent->Top + UsuarioC->Top);
			this->arbol = Cliente;
		}
		else if (boton == UsuarioA) {
			moverPanel(IconMenu, UsuarioA->Parent->Parent->Right, UsuarioA->Parent->Parent->Top + UsuarioA->Top);
			this->arbol = Admin;
		}
		else if (boton == UsuarioF) {
			this->IconMenu->Visible = false;
			this->FilaMenu->Visible = !this->FilaMenu->Visible;
			this->arbol = Fila;
		}


		// Facturaci�n
		
		else if (boton == FacturaIcon) {
			this->IconMenu->Visible = false;
			cerrarLugares();
			cerrarRestaurantes();
			cerrarUsuarios();
			this->FacturaOpc->Visible = !this->FacturacionOpc->Visible;
		}
	}

	private: System::Void cerrarIcon() {
		this->IconMenu->Visible = false;
		cerrarLugares();
		cerrarRestaurantes();
		cerrarUsuarios();
		this->FacturaOpc->Visible = false;
	}

	private: System::Void cerrarLugares() {
		this->LugarOpc->Visible = false;
		this->IconMenu->Visible = false;
	}

	private: System::Void cerrarRestaurantes() {
		this->ResOpc->Visible = false;
		this->IconMenu->Visible = false;
	}

	private: System::Void cerrarUsuarios() {
		this->UsuarioOpc->Visible = false;
		this->IconMenu->Visible = false;
		this->FilaMenu->Visible = false;
	}
	
	private: System::Void ingresarIcon(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^)sender;
		Proyecto3::IngresoDatos^ ingresa = gcnew Proyecto3::IngresoDatos();
		this->cantidad = true;

		if (boton->Text == "Inserci�n") {
			this->accion = Insercion;
		}
		else if (boton->Text == "Eliminaci�n") {
			this->accion = Eliminacion;
		}
		else if (boton->Text == "Consulta") {
			this->accion = Consulta;
		}
		else if (boton->Text == "Modificaci�n") {
			this->accion = Modificacion;
		}

		else if (boton == InsCliente) {
			this->arbol = Fila;
			this->accion = Insercion;
		}
		else if (boton == RegCompra) {
			this->arbol = Compra;
			this->accion = Insercion;
		}
		else if (boton == EliminaCompra) {
			this->arbol = Compra;
			this->accion = Eliminacion;
		}
		else if (boton == ModCant) {
			this->arbol = Compra;
			this->accion = Modificacion;
		}
		else if (boton == ModProd) {
			this->arbol = Compra;
			this->accion = Modificacion;
			this->cantidad = false;
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

	private: System::Void enviarMensaje(System::Object^ sender, System::EventArgs^ e) {
		Button^ boton = (Button^) sender;
		String^ msj = "";
		Arboles& arboles = Arboles::getInstance();

		if (boton->Text == "Descuentos") {
			msj = "-Tipo de pedido\n" +
				  "   Para comer: NO HAY\n" +
				  "   Para llevar: 3%\n\n" +
				  "-Modo de pago\n" +
				  "   Efectivo: 1%\n" +
				  "   Tarjeta: 3%\n";
			Mensaje mensaje(msj);
			mensaje.ShowDialog();
		}
	}

	private: void moverPanel(Panel^ panel, int x, int y) {
		if ((panel->Left == x) && (panel->Top == y)) {
			panel->Visible = !panel->Visible;
		}
		else {
			panel->Left = x;
			panel->Top = y;
			panel->Visible = true;
		}
	}



};
}
