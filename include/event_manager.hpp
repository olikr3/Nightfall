#pragma once
#include <queue>
#include <memory>
#include "event.hpp"

class EventManager {
private:
    std::queue<std::unique_ptr<Event>> equeue;

public:
    void add_event(std::unique_ptr<Event> e);
    void process_events();
    bool is_empty() const;
};


