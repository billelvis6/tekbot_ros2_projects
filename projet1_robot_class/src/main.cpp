#include "deliveryRobot.hpp"
#include "travellingRobot.hpp"
#include "armRobot.hpp"
#include <iostream>

int main() {
    std::cout << "=== TEST DES ROBOTS ===" << std::endl;

    // Robot voyageur
    travellingRobot tr(Forward, 101, 0, 0);
    printNameOfRobot(&tr);
    moveRobot(&tr);
    std::cout << "Position: (" << tr.getPosition().x << ", " << tr.getPosition().y << ")\n";

    // Robot de livraison
    deliveryRobot dr(zone1, 5, 202, 0, 0);
    printNameOfRobot(&dr);
    moveRobot(&dr);
    std::cout << "Position: (" << dr.getPosition().x << ", " << dr.getPosition().y << "), Entités restantes: " << dr.getNbrOfEntities() << "\n";

    // Bras robotique
    armRobot ar(Clockwise, 0, 303, 0, 0);
    printNameOfRobot(&ar);
    moveRobot(&ar);
    std::cout << "Angle: " << ar.getAngle() << "°\n";

    return 0;
}
