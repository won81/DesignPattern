#ifndef _MUSIC_PLAYER_STATE_HPP_
#define _MUSIC_PLAYER_STATE_HPP_

#include <iostream>

class MusicPlayer;
class MusicPlayerState {
public:
    MusicPlayerState(std::string name);
    virtual ~MusicPlayerState();

    virtual void Play(MusicPlayer* player);
    virtual void Pause(MusicPlayer* player);
    virtual void Stop(MusicPlayer* player);

    const std::string& GetState() { return mName; }

private:
    std::string mName;
};

#endif
