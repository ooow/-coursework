#include "stdafx.h"
#include <vector>
typedef float vec[3]; 
typedef float mat[3][3]; 

using namespace std;


value struct point { //�������� ��������� ��� ��������� �����
	float x, y;
	System::String^ name;
};
value struct line { //�������� ��������� ��� ���������� �������
	point start, end; // start � end � ����� ������ � ����� �������
	System::String^ name; // name � �������� �������
};


typedef System::Collections::Generic::List<point> polygon;
extern vector < vector<int> > V;
extern vector<int> T;
extern vector <int> B;
extern vector<int> G;
extern vector < vector<int> > R;