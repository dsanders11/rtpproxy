/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#if !defined(_rtpp_server_fin_h)
#define _rtpp_server_fin_h
#if !defined(RTPP_AUTOTRAP)
#define RTPP_AUTOTRAP() abort()
#else
extern int _naborts;
#endif
#if defined(RTPP_DEBUG)
void rtpp_server_fin(struct rtpp_server *);
#else
#define rtpp_server_fin(arg) /* nop */
#endif
#if defined(RTPP_FINTEST)
void rtpp_server_fintest(void);
#endif /* RTPP_FINTEST */
#endif /* _rtpp_server_fin_h */
