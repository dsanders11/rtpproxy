/* Auto-generated by genfincode.sh - DO NOT EDIT! */
#if !defined(_rtpp_module_if_fin_h)
#define _rtpp_module_if_fin_h
#if !defined(RTPP_AUTOTRAP)
#define RTPP_AUTOTRAP() abort()
#else
extern int _naborts;
#endif
#if defined(RTPP_DEBUG)
void rtpp_module_if_fin(struct rtpp_module_if *);
#else
#define rtpp_module_if_fin(arg) /* nop */
#endif
#if defined(RTPP_FINTEST)
void rtpp_module_if_fintest(void);
#endif /* RTPP_FINTEST */
#endif /* _rtpp_module_if_fin_h */
