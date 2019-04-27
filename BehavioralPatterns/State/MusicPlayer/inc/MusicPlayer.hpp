#ifndef _MUSIC_PLAYER_HPP_
#define _MUSIC_PLAYER_HPP_

class MusicPlayerState;
class MusicPlayer {
public:
    enum class State {
        STOPPED,
        PLAYING,
        PAUSED
    };

    MusicPlayer();
    virtual ~MusicPlayer();

    void Play();
    void Pause();
    void Stop();

    void SetState(State state);

private:
    MusicPlayerState* mState;
};

#endif
