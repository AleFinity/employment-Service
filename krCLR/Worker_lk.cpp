#include "Worker_lk.h"
#include <iostream>
#include "string.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Work_lk()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	krCLR::Worker_lk form;
	Application::Run(%form);
}


