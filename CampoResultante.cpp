//#include "CampoResultante.h"
//
//
//CampoResultante::CampoResultante():C_Matriz()
//{
//	matriz = new bool* [fila];
//	for (int i = 0; i < fila; i++)
//	{
//		matriz[i] = new bool[columna];
//	}
//
//}
//
//
//void CampoResultante::llenarM(Vector<C_Matriz>* vec)
//{
//	for (int k = 0; k < vec->getCantidad(); k++)
//	{
//		for (int j = separador; j < vec->getVecM(k)->getColumna() + separador; j++)
//			for (int i = separador; i < vec->getVecM(k)->getFila()+ separador; i++)
//				matriz[i][j] = 0;
//		separador += vec->getVecM(k)->getColumna() + 1;
//	}
//}
//
//ostream& operator<<(ostream& out, CampoResultante& object)
//{
//	out << object.toString();
//	return out;
//}
//
//bool CampoResultante::add(bool elemento, int fila, int columna)
//{
//	return true;
//}
//
//string CampoResultante::toString()
//{
//	stringstream x;
//
//	for (int i = 0; i < fila; i++) {
//		for (int j = 0; j < separador; j++) {
//			if (matriz[i][j] !=NULL) {
//				x << matriz[i][j];
//			}
//			else {
//				SPACE;
//			}
//			
//		}
//		x<<ENTER;
//	}
//	return x.str();
//}
//
//
//
//void CampoResultante::eligeCampo()
//{
//	int ops;
//	color(5);
//	print("\n");
//	print("\t      *Creador de campos*\n");
//	color(5);
//	print("\t *Seleccione su campo favorito*\n");
//	color(6);
//	print(" \t   xxxxxxxxxxxxxxxxxxxxxxxxx\n");
//	print(" \t   x [1]. Seis Puntos.     x\n");
//	print(" \t   x [2]. Nueve Puntos.    x\n");
//	print(" \t   x [3]. Quince Puntos.   x\n");
//	print(" \t   x [4]. Vizualizar campo x\n");
//	print("\t   xxxxxxxxxxxxxxxxxxxxxxxxx\n");
//
//
//	//switch (ops) {
//
//	//case 1:
//
//	//case 2:
//
//	//case 3:
//
//	//case 4:
//
//
//
//	//}
//}