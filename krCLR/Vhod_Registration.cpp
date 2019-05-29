#include "Vhod_Registration.h"
#include <iostream>
#include "string.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() // array<String^>^ args
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	krCLR::Vhod_Registration form;
	Application::Run(%form);
}
