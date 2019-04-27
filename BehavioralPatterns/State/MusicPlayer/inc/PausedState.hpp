#ifndef _PAUSED_STATE_HPP_
#define _PAUSED_STATE_HPP_

#include "MusicPlayerState.hpp"

class MusicPlayer;
class PausedState : public MusicPlayerState {
public:
    PausedState();
    virtual ~PausedState();

    virtual void Play(MusicPlayer* player);
    virtual void Stop(MusicPlayer* player);
};

#endif
