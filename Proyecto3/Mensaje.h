#pragma once

namespace Proyecto3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Mensaje
	/// </summary>
	public ref class Mensaje : public System::Windows::Forms::Form
	{
	public:
		Mensaje(String^ str)
		{
			InitializeComponent();
			
			this->Msj->Text = str;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Mensaje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Msj;
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
			this->Msj = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Msj
			// 
			this->Msj->Location = System::Drawing::Point(46, 29);
			this->Msj->Name = L"Msj";
			this->Msj->Size = System::Drawing::Size(374, 134);
			this->Msj->TabIndex = 0;
			this->Msj->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Mensaje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(470, 208);
			this->Controls->Add(this->Msj);
			this->Name = L"Mensaje";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Mensaje";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
