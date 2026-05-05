#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y){
    robot_status_t res;
    res.direction = direction;
    res.position.x = x;
    res.position.y = y;
    return res;
}


void robot_move(robot_status_t *robot, const char *commands){
    for (; *commands; commands++){
        const char current_command = *commands;
        switch (current_command){
            case 'R':
                robot->direction = (robot->direction + 1) % DIRECTION_MAX;
                break;
            case 'L':
                robot->direction = (robot->direction + 3) % DIRECTION_MAX;
                break;
            case 'A':
                switch (robot->direction){
                    case DIRECTION_SOUTH:
                        robot->position.y--;
                        break;
                    case DIRECTION_NORTH:
                        robot->position.y++;
                        break;
                    case DIRECTION_EAST:
                        robot->position.x++;
                        break;
                    case DIRECTION_WEST:
                        robot->position.x--;
                        break;
                    case DIRECTION_MAX:
                        break;
                }
        }
    }
}

