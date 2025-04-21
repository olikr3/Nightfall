class Province {
private:
    int id;
    std::string name;
    std::vector<int> neighbor_ids;
    int owner_id;

    //population-related
    int population_count;
    float population_satisfaction_factor;

    // economy-related
    int mill_count;
    int farm_count;
    float production_factor;

    // units in tons
    float steel_production;
    float coal_production;
    float grain_production;

    // military-related
    int num_soldiers;
    float soldier_strength_factor; // multiply with base strength

public:
    Province(int id, const std::string& name, float population)

    int get_id() const;
    const std::string& get_name() const;
    float get_population() const;
    int get_owner_id() const;

    void set_owner_id(int new_owner);
    void add_neighbor(int neighbor_id);

    bool is_neighbor(int province_id) const;
};

