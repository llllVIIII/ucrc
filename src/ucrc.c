#include "ucrc/ucrc.h"

static inline ucrc_desc_t* nonenull_check(ucrc_desc_t* d)
{
    ucrc_desc_t* success = NULL;

    if (NULL != d 
        && NULL != d->api
        && NULL != d->api->init
        && NULL != d->api->update
        && NULL != d->api->complete
        && NULL != d->api->deinit)
    {
        success = d;
    }

    return success;    
}

int ucrc_init(ucrc_desc_t* d)
{
    int success = -1;

    if (NULL != nonenull_check(d))
    {
        success = d->api->init(d);
    }
    
    return success;
}

int ucrc_update(ucrc_desc_t* d, uint8_t const* data, size_t size)
{
    int success = -1;

    if (NULL != nonenull_check(d))
    {
        success = d->api->update(d, data, size);
    }

    return success;
}

int ucrc_complete(ucrc_desc_t* d, ucrc_result_t* r)
{
    int success = -1;

    if (NULL != nonenull_check(d))
    {
        success = d->api->complete(d, r);
    }

    return success;
}

int ucrc_deinit(ucrc_desc_t* d)
{
    int success = -1;

    if (NULL != nonenull_check(d))
    {
        success = d->api->deinit(d);
    }

    return success;
}
