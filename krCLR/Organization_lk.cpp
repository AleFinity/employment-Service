#include "Organization_lk.h"

#include <iostream>
#include "string.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Org_lk()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	krCLR::Organization_lk form;
	Application::Run(%form);
}