#include "Registration_organization.h"
#include <iostream>
#include "string.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Reg_Org()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	krCLR::Registration_organization form;
	Application::Run(%form);
}

