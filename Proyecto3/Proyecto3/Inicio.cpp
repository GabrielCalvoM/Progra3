#include "Inicio.h"

using namespace System;
using namespace System::Windows::Forms;
void main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Proyecto3::Inicio registro;

	Application::Run(% registro);
}