#ifndef RFID_H
extern "C"
{
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/select.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <errno.h>
#include <time.h>
    int PiccAnticoll(int fd);

    int PiccRequest(int fd);
    void init_tty(int fd);
    int init_fd(void);
    void close_fd(int fd);
    int recv_id(int fd);
}

#endif // RFID_H
