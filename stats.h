//struct Stats compute_statistics(const float* numberset, int setlength);
struct Stats 
{
    double average, min, max ;
};

struct Stats compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
