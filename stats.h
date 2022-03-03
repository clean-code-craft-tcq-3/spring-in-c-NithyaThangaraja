
void compute_statistics(const float* numberset, int setlength);

struct Stats
{
  int average; 
  int min;
  int max;
}s;
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
