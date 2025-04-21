#include <map>

class Faction {
private:
    int id;
    std::string name;
    std::vector<int> owned_provinces_ids;
    std::map<int, int> relation_scores // maps factions ids to opinion scores
    
    float gold;

public:
    Faction(int id, const std::string& name, float starting_gold);

    // economic stuff
    void add_gold(float amount);
    bool spend_gold(float amount);

    // diplomacy
    void set_relation_score(int faction_id, float score);
    float get_relation_to(int faction_id) const;

    // province management
    void add_province(Province p);
    void owns_province(Province p) const;
}

