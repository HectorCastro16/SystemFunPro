#include "Principal1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ProyectoT3_AplicacionVentas::Principal1 principal;
	Application::Run(%principal);
}