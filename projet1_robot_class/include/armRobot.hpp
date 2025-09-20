#ifndef ARMROBOT_HPP
#define ARMROBOT_HPP

#include "robot.hpp"

enum rotate { Clockwise, Anticlockwise };

class armRobot : public robot {
private:
    unsigned short angle;
    rotate rotationalDirection;

public:
    armRobot();
    armRobot(rotate rotationalDirection, unsigned short initAngle, unsigned int id, float x, float y);
    armRobot(const armRobot &rhs);
    armRobot &operator=(const armRobot &rhs);
    ~armRobot();

    void move() override;
    std::string getNameOfRobot() override;

    unsigned short getAngle() const;
    void setAngle(unsigned short angle_);

    rotate getRotationalDirection() const;
    void setRotationalDirection(rotate rotationalDirection_);
};

#endif
