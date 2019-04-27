#include "MusicPlayer.hpp"
#include "StoppedState.hpp"
#include "PlayingState.hpp"
#include "PausedState.hpp"

#include <iostream>

MusicPlayer::MusicPlayer() : mState(new StoppedState()) {
}

MusicPlayer::~MusicPlayer() {
    delete mState;
}

void MusicPlayer::Play() {
    mState->Play(this);
}

void MusicPlayer::Pause() {
    mState->Pause(this);
}

void MusicPlayer::Stop() {
    mState->Stop(this);
}

void MusicPlayer::SetState(State state) {
    std::cout << "changing from " << mState->GetState() << " to ";
    delete mState;

    switch (state) {
        case State::STOPPED:
            mState = new StoppedState();
            break;
        case State::PLAYING:
            mState = new PlayingState();
            break;
        case State::PAUSED:
            mState = new PausedState();
            break;
        default:
            mState = new StoppedState();
            break;
    }

    std::cout << mState->GetState() << " state" << std::endl;
}
