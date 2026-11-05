#include<iostream>
#include "mathx.h"
#include <fcntl.h>    // open(), O_RDONLY
#include <unistd.h>   // read(), write(), close()
#include <cerrno>     // errno
#include <cstdio>     // perror()
#include<poll.h>

using namespace std;

int main(int argc,char* argv[]){
    // int arr[3] = {0};
    // cout << arr[4] << endl;
    // int fd = open("some_file.txt", O_RDONLY);   // O_RDONLY = open for reading only
    // if (fd == -1) {
    //     perror("open");   // prints: "open: <message for current errno>" to fd 2
    //     // errno also holds the number, e.g. compare: if (errno == ENOENT) ...
    // }
    // fd = 99;
    // string s ="yes\n";
    // if(read(fd,&s,4) == -1){
        //     perror("read");
        // }
        // close(fd);
        // int a;
    // cin >> a;
    // cout <<  add(2,3) << endl;
    if(argc <2){
        ssize_t n = write(2,"No filename given!\n",19);
        if(n == -1){
            perror("write");
        }
        return 1;
    }
    
    int fd = open(argv[1], O_RDONLY);
    if(fd == -1){
        perror("open");
        return 1;
    }
    char buf[64];
    ssize_t n = 1;
    struct pollfd pfd;
    pfd.fd     = fd;          // which fd to watch (0 = stdin)
    pfd.events = POLLIN;     // what you care about: "readable" (data to read)
    int r = 1;
    while(r >=0){
        r = poll(&pfd, 1, 3000);
        if(r==-1){
            perror("poll");
            return 1;
        }
        if(r==0){
            ssize_t m = write(1,"Waiting\n",8);
            if(m == -1){
                perror("write");
                return 1;
            }
            continue;
        }

        if(pfd.revents & (POLLHUP | POLLIN)){
            n = read(fd,&buf,64);
            if(n == -1){
                perror("read");
                return 1;
            }
            if(n == 0) break;
            ssize_t m = write(1,&buf,n);
            if(m == -1){
                perror("write");
                return 1;
            }
        }else{
            ssize_t m = write(2,"Something went wrong!\n",22);
            if(m == -1){
                perror("write");
                return 1;
            }
            return 1;
        }
    }
    close(fd);

    return 0;
}