#include <stdio.h>
#include <string.h>

typedef struct {
    int day;
    int hour;
    int minute;
    int second;
} Time;

Time parseTime() {
    Time time;
    char dayStr[10];
    scanf(" %s %d", dayStr, &time.day);
    scanf("%d %*c %d %*c %d", &time.hour, &time.minute, &time.second);
    return time;
}

int main() {
    Time startTime = parseTime();
    Time endTime = parseTime();

    int totalSeconds = 0;

    totalSeconds += (endTime.day - startTime.day) * 24 * 60 * 60;
    totalSeconds += (endTime.hour - startTime.hour) * 60 * 60;
    totalSeconds += (endTime.minute - startTime.minute) * 60;
    totalSeconds += (endTime.second - startTime.second);

    int days = totalSeconds / (24 * 60 * 60);
    totalSeconds %= (24 * 60 * 60);

    int hours = totalSeconds / (60 * 60);
    totalSeconds %= (60 * 60);

    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    printf("%d Ngay\n%d Gio\n%d Phut\n%d Giay\n", days, hours, minutes, seconds);

    return 0;
}
