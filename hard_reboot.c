#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef DEBUG
char condition_file[] = "/proc/sys/kernel/sysrq";
char trigger_file[] = "/proc/sysrq-trigger";
#else
char condition_file[] = "condition.txt";
char trigger_file[] = "trigger.txt";
#endif

int main() {
    char one = '1';
    char b = 'b';
    int fd = open(condition_file,O_WRONLY | O_CREAT, 0600);
    write(fd,&one,1);
    close(fd);
    fd = open(trigger_file,O_WRONLY | O_CREAT, 0600);
    write(fd,&b,1);
    close(fd);
    return 0;
}
