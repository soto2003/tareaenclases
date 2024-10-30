#include "TrackSong.h"

TrackSong::TrackSong()
{
	playMin = playSec = 0;
	raeting = 0;
}
TrackSong::TrackSong(int pm, int ps, int r)
{
	playMin = pm;
	playSec = ps;
	raeting = r;
}
float TrackSong::getRaetingPorcent(Song s)
{
	int tdT = s.ToSec();
	int trackTimeS = playMin * 60 + playSec;
	return trackTimeS * 100 / tdT;
}



