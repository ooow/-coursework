// Graf.cpp: главный файл проекта.

#include "stdafx.h"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <array>
#include <math.h>
#include <cmath>
#include <queue>
#include <stack>
#include <ctime>
#include <vector>
#include <stack>
#include "Transform.h"
#include "Form1.h"

using namespace Graf;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew Form1());
	return 0;
}
