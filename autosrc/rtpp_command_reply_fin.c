/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define RTPP_FINCODE
#include "rtpp_types.h"
#include "rtpp_debug.h"
#include "rtpp_command_reply.h"
#include "rtpp_command_reply_fin.h"
static void rtpc_reply_append_fin(void *pub) {
    fprintf(stderr, "Method rtpc_reply@%p::append (rtpc_reply_append) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void rtpc_reply_appendf_fin(void *pub) {
    fprintf(stderr, "Method rtpc_reply@%p::appendf (rtpc_reply_appendf) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void rtpc_reply_commit_fin(void *pub) {
    fprintf(stderr, "Method rtpc_reply@%p::commit (rtpc_reply_commit) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void rtpc_reply_deliver_fin(void *pub) {
    fprintf(stderr, "Method rtpc_reply@%p::deliver (rtpc_reply_deliver) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void rtpc_reply_error_fin(void *pub) {
    fprintf(stderr, "Method rtpc_reply@%p::error (rtpc_reply_error) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void rtpc_reply_number_fin(void *pub) {
    fprintf(stderr, "Method rtpc_reply@%p::number (rtpc_reply_number) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static void rtpc_reply_ok_fin(void *pub) {
    fprintf(stderr, "Method rtpc_reply@%p::ok (rtpc_reply_ok) is invoked after destruction\x0a", pub);
    RTPP_AUTOTRAP();
}
static const struct rtpc_reply_smethods rtpc_reply_smethods_fin = {
    .append = (rtpc_reply_append_t)&rtpc_reply_append_fin,
    .appendf = (rtpc_reply_appendf_t)&rtpc_reply_appendf_fin,
    .commit = (rtpc_reply_commit_t)&rtpc_reply_commit_fin,
    .deliver = (rtpc_reply_deliver_t)&rtpc_reply_deliver_fin,
    .error = (rtpc_reply_error_t)&rtpc_reply_error_fin,
    .number = (rtpc_reply_number_t)&rtpc_reply_number_fin,
    .ok = (rtpc_reply_ok_t)&rtpc_reply_ok_fin,
};
void rtpc_reply_fin(struct rtpc_reply *pub) {
    RTPP_DBG_ASSERT(pub->smethods->append != (rtpc_reply_append_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->appendf != (rtpc_reply_appendf_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->commit != (rtpc_reply_commit_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->deliver != (rtpc_reply_deliver_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->error != (rtpc_reply_error_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->number != (rtpc_reply_number_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods->ok != (rtpc_reply_ok_t)NULL);
    RTPP_DBG_ASSERT(pub->smethods != &rtpc_reply_smethods_fin &&
      pub->smethods != NULL);
    pub->smethods = &rtpc_reply_smethods_fin;
}
#if defined(RTPP_FINTEST)
#include <assert.h>
#include <stddef.h>
#include "rtpp_mallocs.h"
#include "rtpp_refcnt.h"
#include "rtpp_linker_set.h"
#define CALL_TFIN(pub, fn) ((void (*)(typeof(pub)))((pub)->smethods->fn))(pub)

void
rtpc_reply_fintest()
{
    int naborts_s;

    struct {
        struct rtpc_reply pub;
    } *tp;

    naborts_s = _naborts;
    tp = rtpp_rzmalloc(sizeof(*tp), offsetof(typeof(*tp), pub.rcnt));
    assert(tp != NULL);
    assert(tp->pub.rcnt != NULL);
    static const struct rtpc_reply_smethods dummy = {
        .append = (rtpc_reply_append_t)((void *)0x1),
        .appendf = (rtpc_reply_appendf_t)((void *)0x1),
        .commit = (rtpc_reply_commit_t)((void *)0x1),
        .deliver = (rtpc_reply_deliver_t)((void *)0x1),
        .error = (rtpc_reply_error_t)((void *)0x1),
        .number = (rtpc_reply_number_t)((void *)0x1),
        .ok = (rtpc_reply_ok_t)((void *)0x1),
    };
    tp->pub.smethods = &dummy;
    CALL_SMETHOD(tp->pub.rcnt, attach, (rtpp_refcnt_dtor_t)&rtpc_reply_fin,
      &tp->pub);
    RTPP_OBJ_DECREF(&(tp->pub));
    CALL_TFIN(&tp->pub, append);
    CALL_TFIN(&tp->pub, appendf);
    CALL_TFIN(&tp->pub, commit);
    CALL_TFIN(&tp->pub, deliver);
    CALL_TFIN(&tp->pub, error);
    CALL_TFIN(&tp->pub, number);
    CALL_TFIN(&tp->pub, ok);
    assert((_naborts - naborts_s) == 7);
    free(tp);
}
const static void *_rtpc_reply_ftp = (void *)&rtpc_reply_fintest;
DATA_SET(rtpp_fintests, _rtpc_reply_ftp);
#endif /* RTPP_FINTEST */
