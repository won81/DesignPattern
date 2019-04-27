#ifndef _PLAYING_STATE_HPP_
#define _PLAYING_STATE_HPP_

#include "MusicPlayerState.hpp"

class MusicPlayer;
class PlayingState : public MusicPlayerState {
public:
    PlayingState();
    virtual ~PlayingState();

    virtual void Pause(MusicPlayer* player);
    virtual void Stop(MusicPlayer* player);
};

#endif
