// Copyright (c) 2017-2018 EXVO developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef EXVO_ZMQ_ZMQCONFIG_H
#define EXVO_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
#include "config/exvo-config.h"
#endif

#include <stdarg.h>
#include <string>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include "primitives/block.h"
#include "primitives/transaction.h"

void zmqError(const char *str);

#endif // EXVO_ZMQ_ZMQCONFIG_H
