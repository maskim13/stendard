// The default layout has 34 keys. Additional keys can be added by pre-setting any of
// the macros defined in this file to one or more keys before sourcing this file.

/* left of left half */
#if !defined X_LT  // top row, left
    #define X_LT &none
#endif
#if !defined X_LM  // middle row, left
    #define X_LM &none
#endif
#if !defined X_LB  // bottom row, left
    #define X_LB &none
#endif
#if !defined X_LH  // thumb row, left
    #define X_LH &none
#endif

/* between left and right half */
#if !defined X_MT  // top row, middle
    #define X_MT
#endif
#if !defined X_MM  // middle row, middle
    #define X_MM
#endif
#if !defined X_MB  // bottom row, middle
    #define X_MB
#endif
#if !defined X_MH  // thumb row, middle
    #define X_MH
#endif

/* right of right half */
#if !defined X_RT  // top row, right
    #define X_RT &none
#endif
#if !defined X_RM  // middle row, right
    #define X_RM &none
#endif
#if !defined X_RB  // bottom row, right
    #define X_RB &none
#endif
#if !defined X_RH  // thumb row, right
    #define X_RH &none
#endif

