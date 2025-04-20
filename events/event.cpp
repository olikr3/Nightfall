#include <memory>
#include <string>
#include <functional>

// Base class for all game events
class GameEvent {
public:
    virtual ~GameEvent() = default;
    virtual void execute() = 0;
    virtual std::string getDescription() const = 0;
};
