class Province {
private:
    int id;
    std::string name;
    std::vector<int> neighborIds;
    float population;
    int ownerId;

public:
    Province(int id, const std::string& name, float population)

    int getId() const;
    const std::string& getName() const;
    float getPopulation() const;
    int getOwnerId() const;

    void setOwnerId(int newOwner);
    void addNeighbor(int neighborId);

    bool isNeighbor(int provinceId) const;
};

