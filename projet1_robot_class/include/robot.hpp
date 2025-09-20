#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <iostream>
#include <string>
#include <cmath>

// Etat du robot
enum state { OFF, ON };

// Structure pour la position 2D
struct vect2D {
    float x;
    float y;
    vect2D(float X = 0, float Y = 0) : x(X), y(Y) {}
};

class robot {
protected:
    unsigned int ID;
    vect2D position;
    state status;

public:
    robot();
    robot(unsigned int Id, float x, float y);
    robot(const robot &rhs);
    robot &operator=(const robot &rhs);
    virtual ~robot();

    // Méthodes générales
    float distanceFromOrigin() const;
    vect2D getPosition() const;
    void setPosition(const vect2D &currentPosition);

    unsigned int getID() const;
    void setID(int Id);

    state getStatus() const;
    void setStatus(const state &OnOrOff);

    // Méthodes virtuelles (polymorphisme)
    virtual void move() = 0;
    virtual std::string getNameOfRobot() = 0;
};

// Fonctions utilitaires
void printNameOfRobot(robot *p);
void moveRobot(robot *p);

#endif
