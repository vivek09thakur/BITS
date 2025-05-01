// 202419tw021 Vivek Kumar
#include <stdio.h>
int main()
{
    /* Insert enum declaration and variable definition here */
//    enum TrafficSignal { RED, YELLOW, GREEN };
//    enum TrafficSignal signal;
//    enum TrafficSignal { RED, YELLOW, GREEN } signal;
//    enum TrafficSignal { RED = 5, YELLOW, GREEN } signal;
//    enum TrafficSignal { RED = 3, YELLOW = 1, GREEN = 1 } signal;
    enum Signal1 { RED, YELLOW, GREEN };
    enum Signal2 { RED, YELLOW, GREEN }; // Same labels reused in
    signal = RED;
    printf("RED: %d\n", signal);
    signal = YELLOW;
    printf("YELLOW: %d\n", signal);
    signal = GREEN;
    printf("GREEN: %d\n", signal);
    return 0;
}
