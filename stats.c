#include<stdio.h>
#include "stats.h"
#include<math.h>
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
}
void emailAlerter() {
emailAlertCallCount++ ;}

void ledAlerter(){
ledAlertCallCount++ ;
}
