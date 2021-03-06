//
// Created by System Administrator on 1/17/18.
//

#ifndef RSOCK_SNETGROUP_H
#define RSOCK_SNETGROUP_H


#include "../conn/INetGroup.h"
class ServerNetManager;

class SNetGroup : public INetGroup {
public:
    SNetGroup(const std::string &groupId, uv_loop_t *loop, ServerNetManager *netManager);

    INetConn *CreateNetConn(IntKeyType key, const ConnInfo *info) override;

private:
    ServerNetManager *mNetManager = nullptr;
};


#endif //RSOCK_SNETGROUP_H
