class Province {
private:
    int id;
    std::string name;
    std::vector<int> neighborIds;
    float population;
    int ownerId;

public:
    Province(int id, const std::string& name, float population)
        : id(id), name(name), population(population), ownerId(-1) {}

    int getId() const { return id; }
    const std::string& getName() const { return name; }
    float getPopulation() const { return population; }
    int getOwnerId() const { return ownerId; }

    void setOwnerId(int newOwner) { ownerId = newOwner; }
    void addNeighbor(int neighborId) { neighborIds.push_back(neighborId); }

    bool isNeighbor(int provinceId) const {
        return std::find(neighborIds.begin(), neighborIds.end(), provinceId) != neighborIds.end();
    }
};
