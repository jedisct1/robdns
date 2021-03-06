#ifndef ZONEFILE_LOAD_H
#define ZONEFILE_LOAD_H
#include "domainname.h"

void
zonefile_load(
        struct DomainPointer domain,
        struct DomainPointer origin,
	    unsigned type,
        unsigned ttl,
        unsigned rdlength,
        const unsigned char *rdata,
        uint64_t filesize,
	    void *userdata);

#endif