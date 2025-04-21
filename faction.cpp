#include <map>

class Faction {
private:
    int id;
    std::string name;
    std::vector<int> owned_provinces_ids;
    std::map<int, int> relation_scores // maps factions ids to opinion scores
    
    float gold;

public:
    Faction(int id, const std::string& name, float starting_gold)
        : id(id), name(name), gold(starting_gold)

    // economic stuff
    void add_gold(float amount) {
        gold += amount;
    }
    bool spend_gold(float amount) {
        if (gold >= amount) {
            gold -= amount;
            return true;
        }
        
        return false;
    }

    // province management
    void add_province(p) {
        owned_provinces_ids.push_back(p);
    }
    


}
