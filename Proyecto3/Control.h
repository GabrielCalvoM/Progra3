#ifndef CONTROL_H
#define CONTROL_H

namespace Proyecto3 {

	using namespace System;
	using namespace System::Threading;
	using namespace System::Windows::Forms;

	ref class Inicio;
	ref class Ventana;

	public ref class Control {
	private:
		static Inicio registro;
		static Ventana menu;

	public:
		static void abrirRegistro() {
			registro.Visible = true;
			menu.Visible = false;
		}

		static void abrirMenu(bool admin) {
			menu.ocultarOpciones();
			menu.verificarAdmin(admin);
			registro.Visible = false;
			menu.Visible = true;
		}

		void iniciar() {
			Application::Run(% registro);
		}
	};
}

#endif // CONTROL_H