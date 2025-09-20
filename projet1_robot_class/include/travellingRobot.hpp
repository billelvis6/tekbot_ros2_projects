#ifndef TRAVELLINGROBOT_HPP
#define TRAVELLINGROBOT_HPP

#include "robot.hpp"

enum direction { Stop, Forward, Backward, Left, Right };

class travellingRobot : public robot {
private:
    direction Direction;

public:
    travellingRobot();
    travellingRobot(direction DIRECTION, unsigned int Id, float x, float y);
    travellingRobot(const travellingRobot &rhs);
    travellingRobot &operator=(const travellingRobot &rhs);
    ~travellingRobot();

    void move() override;
    std::string getNameOfRobot() override;

    direction getDirection();
    void setDirection(direction DIRECTION);
};

#endif
