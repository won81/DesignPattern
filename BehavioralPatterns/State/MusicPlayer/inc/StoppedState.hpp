#ifndef _STOPPED_STATE_HPP_
#define _STOPPED_STATE_HPP_

#include "MusicPlayerState.hpp"

class MusicPlayer;
class StoppedState : public MusicPlayerState {
public:
    StoppedState();
    virtual ~StoppedState();

    virtual void Play(MusicPlayer* player);
};

#endif
