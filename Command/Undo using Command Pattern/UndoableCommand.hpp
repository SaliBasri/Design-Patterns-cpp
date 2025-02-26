#pragma once

#include "AbstractCommand.hpp"

class UndoableCommand : public AbstractCommand {
   public:
     virtual void unExecute() = 0;
};