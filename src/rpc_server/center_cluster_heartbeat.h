/***************************************************************************
 *
 * Copyright (c) 2016 aishuyu, Inc. All Rights Reserved
 *
 **************************************************************************/



/**
 * @file center_cluster_heartbeat.h
 * @author aishuyu(asy5178@163.com)
 * @date 2016/09/07 20:43:13
 * @brief
 *
 **/




#ifndef __CENTER_CLUSTER_HEARTBEAT_H
#define __CENTER_CLUSTER_HEARTBEAT_H


#include "util/thread.h"

namespace libevrpc {

class CenterClusterHeartbeat : public Thread {
    public:
        CenterClusterHeartbeat();

        ~CenterClusterHeartbeat();

        virtual void Run();

    private:
};

}  // end of namespace libevrpc






#endif // __CENTER_CLUSTER_HEARTBEAT_H



/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */