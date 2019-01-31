#ifndef GLOBAL_BOTH
# error "Missing GLOBAL_BOTH"
#endif

#ifndef GLOBAL_IS_NATIVE
# error "Missing GLOBAL_IS_NATIVE"
#else
# if GLOBAL_IS_NATIVE == 0
#  error "Is Cross?"
# endif
#endif

#ifndef PROJECT_BOTH
# error "Missing PROJECT_BOTH"
#endif

#ifndef PROJECT_IS_NATIVE
# error "Missing PROJECT_IS_NATIVE"
#else
# if PROJECT_IS_NATIVE == 0
#  error "Is Cross?"
# endif
#endif

int main(void)
{
    return 0;
}
