#pragma once
#include <string>
#include <memory>

class Event {
public:
    virtual ~Event() = default;
    virtual void execute() = 0;
    virtual std::string getDescription() const = 0;
};

// place holder for now
class Province_Event : public Event {
private:
    int province_id;
    std::string description;

public:
    Province_Event(int province_id, const std::string& desc);
    void execute() override;
    std::string get_description() const override;
};
