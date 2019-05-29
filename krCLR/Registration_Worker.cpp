#include "Registration_Worker.h"
#include <iostream>
#include "string.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Reg_Work()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	krCLR::Registration_Worker form;
	Application::Run(%form);
}

