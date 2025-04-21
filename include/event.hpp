#include <vector>
#include <string>
#include <memory>

class GameEvent {
public:
    virtual void ~Event() = default;
    virtual void execute() = 0;
    virtual std::string get_description const = 0;
};

class WarDeclarationEvent : public GameEvent {
private:
    int attacker_faction_id;
    int defender_faction_id;
    std::string casus_belli;

public:
    WarDeclarationEvent(int attacker, int defender, const std::string& reason);
    void execute() override;
    std::string get_description() const override;
};

class BattleEvent : public GameEvent {
private:
    int attacker_faction_id;
    int defender_faction_id;
    int province_id; // location of battle
    int attacker_strength;
    int defender_strength;

public:
    BattleEvent(int attacker, int defender, int province, 
                int attStr, int defStr);
    void execute() override;
    std::string get_description() const override;
};

class SiegeEvent : public GameEvent {
private:
    int besieger_faction_id;
    int province_id;
    int siege_days;

public:
    SiegeEvent(int besieger, int province, int days);
    void execute() override;
    std::string get_description() const override;
};

class PeaceTreatyEvent : public GameEvent {
private:
    int winner_faction_id;
    int loser_faction_id;
    std::vector<int> exchanged_provinces;
    float reparations;

public:
    PeaceTreatyEvent(int winner, int loser, 
                    const std::vector<int>& provinces,
                    float gold_reparations);
    void execute() override;
    std::string get_description() const override;
};


