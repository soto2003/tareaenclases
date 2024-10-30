#include "Tracker.h"
#include <iostream>
using namespace std;

void Tracker::AddHistorical(TrackSong ts)
{
    historicalTrack.push_back(ts);
}

float Tracker::getBestReating()
{
    int mejorCa = 0;
    for (int i = 0; i < historicalTrack.size(); i++)
    {
        float m = historicalTrack[i].getRaetingPorcent(trackedSong);
        if (m > mejorCa) {
            mejorCa = m;
        }
    }
    return mejorCa;



}
float Tracker::getAverageRating()
{
    float sum = 0;
    for (int i = 0; i < historicalTrack.size(); i++)
    {
        sum += historicalTrack[i].raeting;
    }
    return sum / historicalTrack.size();

}

float Tracker::getNumberSongPlayed(float porcent)
{
    int counter = 0;
    for (int i = 0; i < historicalTrack.size(); i++) {
        float p = historicalTrack[i].getRaetingPorcent(trackedSong);
        if (p >= porcent)
        {
            counter++;
        }
    }
    return counter;
}

void Tracker::setSong(Song s)
{
    trackedSong = s;
}

void Tracker::clearHistorical()
{
    //limpia el historial
    historicalTrack.clear();

}

void Tracker::printStart()
{
    //muestra en estrellas  las historias trackeadas 
    for (int i = 0; i < historicalTrack.size(); i++)
    {
        cout << "Calificacion " << historicalTrack[i].raeting << " -> ";
        for (int j = 0; j < historicalTrack[i].raeting; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

void Tracker::printHistoricalwithReate(int reat)
{
    //muestra las historial con el mismo reat que ha introducido por el usuario
    int counter = 0;
    for (int i = 0; i < historicalTrack.size(); i++)
    {
        if (historicalTrack[i].raeting == reat)
        {
            cout << "Calificacion " << historicalTrack[i].raeting << endl;
            counter++;
        }

    }
    cout << "Numero de canciones con la misma calificacion son " << counter << endl;

}

void Tracker::printBarPercent()
{
    // Imprime en barras el total de la canción reproducida
    int tdT = trackedSong.ToSec();
    for (int i = 0; i < historicalTrack.size(); i++)
    {
        int trackTimeS = historicalTrack[i].playMin * 60 + historicalTrack[i].playSec;
        int percent = trackTimeS * 100 / tdT;
        int bars = percent / 10;

        cout << "Historial " << i << " -> ";
        for (int j = 0; j < bars; j++)
        {
            cout << "|";
        }
        cout << "->" << percent << "%" << endl;
    }
}
