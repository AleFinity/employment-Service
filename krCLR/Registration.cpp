#include "Registration.h"
#include <iostream>
#include "string.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Reg()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	krCLR::Registration form;
	Application::Run(%form);
}

