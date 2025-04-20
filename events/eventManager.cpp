#include <queue>

class EventManager {
private:
    std::queue<std::unique_ptr<Event>> eQueue;

public:
    void addEvent(Event e) {
        eQueue.push(std::move(e));
    }

    void processEvents() {
        while(!eQueue.empty()){
            aut& current = eQueue.front();
            event->execute;
            eQueue.pop();
        }
    }

    bool isEmpty() const {
        return eQueue.empty();
    }
}
