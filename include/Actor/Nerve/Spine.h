#ifndef SPINE_H
#define SPINE_H

#include "Actor/Nerve/Nerve.h"
#include "Actor/State/ActorStateKeeper.h"
#include "types.h"

class Spine
{
public:
    Spine(void *, const Nerve *);

    void update();
    void setNerve(const Nerve *);
    const Nerve* getCurrentNerve() const;
    void changeNerve();
    void initStateKeeper(s32);

    void* _0;
    const Nerve* mCurState; // _4
    const Nerve* mNextState; // _8
    u32 mNerveStep; // _C
    ActorStateKeeper* mStateKeeper; // _10
};

#endif // SPINE_H