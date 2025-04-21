#pragma once
#include <vector>
#include <memory>
#include Province.hpp
#include Faction.hpp
#include EventManager.hpp

class Game {
private:
    std::vector<std::unique_ptr<Province>> provinces;
    std::vector<std::unique_ptr<Faction>> factions;
    EventManager event_manager;
    int current_year;
    bool is_paused;

public:
    Game();
    void initialize();
    void update(float deltaTime);
    void set_pause();

    int get_current_year() const;
    bool is_paused() const;
    Province* get_province_by_id(int id);
    Faction* get_faction_by_id(int id);
    EventManager& get_event_manager();
};
