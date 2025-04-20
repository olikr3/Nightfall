#include <vector>
#include <memory>

class Game {
private:
    std::vector<std::unique_ptr<provinces>> provinces;
    std::vector<std::unqie_ptr<factions>> factions;
    int currentYear;
    bool isPaused;

public:
    Game() : currentYear(1492), isPaused(false) {}

}


