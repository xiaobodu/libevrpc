#include <stdio.h>
#include <unistd.h>

#include <string>
#include <string.h>
#include <errno.h>

#include "test_def.h"
#include "../util/rpc_communication.h"

using namespace libevrpc;
using namespace std;

int main() {
    int32_t conn_fd = TcpConnect(ADDR, PORT, 10000);

    if (conn_fd < 0) {
        printf("Tcp conncect error!\n");
        return 0;
    }

    std::string test_str = "123start12345678901234567890end123";

    int32_t ret = RpcSend(conn_fd, 0, test_str, true);
    printf("ret id is %d, errno is %s\n", ret, strerror(errno));

    return 0;
}
