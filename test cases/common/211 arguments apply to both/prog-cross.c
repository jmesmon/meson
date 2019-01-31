#ifndef GLOBAL_BOTH
# error "Missing GLOBAL_BOTH"
#endif

#ifndef GLOBAL_IS_NATIVE
# error "Missing GLOBAL_IS_NATIVE"
#else
# if defined(ARG_NATIVE)
#  if GLOBAL_IS_NATIVE == 0
#   error "Is Cross?"
#  endif
# elif defined(ARG_CROSS)
#  if GLOBAL_IS_NATIVE == 1
#   error "Is Native?"
#  endif
# else
#  error "No ARG_*?"
# endif
#endif


#ifndef PROJECT_BOTH
# error "Missing PROJECT_BOTH"
#endif

#ifndef PROJECT_IS_NATIVE
# error "Missing PROJECT_IS_NATIVE"
#else
# if defined(ARG_NATIVE)
#  if PROJECT_IS_NATIVE == 0
#   error "Is Cross?"
#  endif
# elif defined(ARG_CROSS)
#  if PROJECT_IS_NATIVE == 1
#   error "Is Native?"
#  endif
# else
#  error "No ARG_*?"
# endif
#endif


int main(void)
{
    return 0;
}
