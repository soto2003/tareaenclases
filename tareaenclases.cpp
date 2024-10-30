// tareaenclases.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Song.h"
#include "TrackSong.h"
#include "Tracker.h"
using namespace std;
int main()
{
	//llama a la funciones
	Song s1("CancionA", 3, 30);
	Song s2("Cancion2", 3, 30);

	Tracker t1;
	Tracker t2;
	t1.setSong(s1);
	//historia;
	t1.AddHistorical(TrackSong(1, 30, 3));
	t1.AddHistorical(TrackSong(3, 30, 5));
	t1.AddHistorical(TrackSong(3, 0, 4));
	t1.AddHistorical(TrackSong(3, 30, 4));
	t1.AddHistorical(TrackSong(1, 30, 4));
	cout << "PARA LA PRIMERA CANCION  " << endl;
	float np = t1.getNumberSongPlayed(80);
	cout << "Numero de canciones reproducidas  " << np << endl;
	float pro = t1.getAverageRating();
	cout << "Promedio de calificacion  " << pro << endl;

	cout << "Mostrar la calificacion en estrellas  " << endl;
	t1.printStart();
	cout << endl;
	cout << "Mostrar historial con la misma calificacion  " << endl;
	t1.printHistoricalwithReate(4);
	cout << endl;

	cout << "Mostrar en barras el total de la cancion reproducida  " << endl;
	t1.printBarPercent();
	cout << endl;

	cout << "Iliminar el historial  " << endl;
	t1.clearHistorical();
	cout << endl;

	cout << "PARA LA SEGUNDA CANCION  " << endl;
	cout << endl;

	t2.setSong(s2);
	t2.AddHistorical(TrackSong(1, 30, 1));
	t2.AddHistorical(TrackSong(3, 30, 5));
	t2.AddHistorical(TrackSong(3, 0, 4));
	t2.AddHistorical(TrackSong(3, 30, 4));
	t2.AddHistorical(TrackSong(1, 30, 3));
	t2.AddHistorical(TrackSong(3, 30, 5));
	t2.AddHistorical(TrackSong(3, 0, 4));
	t2.AddHistorical(TrackSong(4, 30, 4));

	float mc = t2.getNumberSongPlayed(20);
	cout << "Numero de canciones reproducidas  " << mc << endl;
	cout << endl;
	float pr = t2.getAverageRating();
	cout << "Promedio de calificacion  " << pr << endl;
	cout << endl;
	cout << "Mostrar la calificacion en estrellas  " << endl;
	t2.printStart();
	cout << endl;
	cout << "Mostrar historial con la misma calificacion  " << endl;
	t2.printHistoricalwithReate(5);
	cout << endl;
	cout << "Mostrar en barras el total de la cancion reproducida  " << endl;
	t2.printBarPercent();
	cout << endl;
	cout << "Iliminar el historial  " << endl;
	t2.clearHistorical();
	cout << endl;







	return 0;
}
