/* Auto-generated by genfincode.sh - DO NOT EDIT! */
#if !defined(_rtpp_command_rcache_fin_h)
#define _rtpp_command_rcache_fin_h
#if !defined(RTPP_AUTOTRAP)
#define RTPP_AUTOTRAP() abort()
#else
extern int _naborts;
#endif
#if defined(RTPP_DEBUG)
void rtpp_cmd_rcache_fin(struct rtpp_cmd_rcache *);
#else
#define rtpp_cmd_rcache_fin(arg) /* nop */
#endif
#if defined(RTPP_FINTEST)
void rtpp_cmd_rcache_fintest(void);
#endif /* RTPP_FINTEST */
#endif /* _rtpp_command_rcache_fin_h */
