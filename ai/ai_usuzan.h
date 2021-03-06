#ifndef SAKI_AI_USUZAN_H
#define SAKI_AI_USUZAN_H

#include "ai.h"



namespace saki
{



class AiSawaya : public Ai
{
public:
    AI_CTORS(AiSawaya)
    Action forward(const TableView &view) override;
    Action think(const TableView &view, Limits &limits) override;
};



} // namespace saki



#endif // SAKI_AI_USUZAN_H


