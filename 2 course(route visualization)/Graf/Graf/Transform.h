#include "stdafx.h"
#include <vector>
typedef float vec[3]; 
typedef float mat[3][3]; 

using namespace std;


value struct point { //описание структуры для двумерной точки
	float x, y;
	System::String^ name;
};
value struct line { //описание структуры для двумерного отрезка
	point start, end; // start и end — точки начала и конца отрезка
	System::String^ name; // name — название отрезка
};


typedef System::Collections::Generic::List<point> polygon;
extern vector < vector<int> > V;
extern vector<int> T;
extern vector <int> B;
extern vector<int> G;
extern vector < vector<int> > R;