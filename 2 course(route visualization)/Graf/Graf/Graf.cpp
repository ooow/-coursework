// Graf.cpp: ������� ���� �������.

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
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}
