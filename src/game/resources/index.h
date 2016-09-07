#ifndef _RESOURCES_INDEX_H_
#define _RESOURCES_INDEX_H_

#include "../core/types.h"

typedef struct IndexEntry
{
    int32 lookup;
    int32 length;
    int32 extra;
} IndexEntry;

IndexEntry get_index_entry(char *filepath, int index);

#endif
