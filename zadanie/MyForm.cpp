#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(cli::array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	zadanie::MyForm form; 
	Application::Run(% form);
}