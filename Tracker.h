#pragma once
#include "Song.h"
#include "TrackSong.h"
#include <vector>
class Tracker
{
protected:
	Song trackedSong;
	std::vector<TrackSong> historicalTrack;
public:
	void AddHistorical(TrackSong ts);
	float getBestReating();//me obtiene la mejor calificacion
	float getAverageRating();//me obtiene el promedio de calificiacion
	float getNumberSongPlayed(float porcent);//me devuelve la cantidad de historiaas que se han reproducido en un porcentaje esperado
	void setSong(Song s);
	void clearHistorical();//limpia el historial
	void printStart();//muestra en estrellas  las historias trackeadas
	void printHistoricalwithReate(int reat);//muestra las hoistorial con el mismo reat que ha introducido por el usuario
	void printBarPercent();//imprime en barras el total de la cancion reproducida 
};
