
#ifndef IDL_EXPORT_H
#define IDL_EXPORT_H

#ifdef IDL_STATIC_DEFINE
#  define IDL_EXPORT
#  define IDL_NO_EXPORT
#else
#  ifndef IDL_EXPORT
#    ifdef idl_EXPORTS
        /* We are building this library */
#      define IDL_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define IDL_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef IDL_NO_EXPORT
#    define IDL_NO_EXPORT 
#  endif
#endif

#ifndef IDL_DEPRECATED
#  define IDL_DEPRECATED __declspec(deprecated)
#endif

#ifndef IDL_DEPRECATED_EXPORT
#  define IDL_DEPRECATED_EXPORT IDL_EXPORT IDL_DEPRECATED
#endif

#ifndef IDL_DEPRECATED_NO_EXPORT
#  define IDL_DEPRECATED_NO_EXPORT IDL_NO_EXPORT IDL_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef IDL_NO_DEPRECATED
#    define IDL_NO_DEPRECATED
#  endif
#endif

#ifndef IDL_INLINE_EXPORT
#  if __MINGW32__ && (!defined(__clang__) || !defined(idl_EXPORTS))
#    define IDL_INLINE_EXPORT
#  else
#    define IDL_INLINE_EXPORT IDL_EXPORT
#  endif
#endif

#endif /* IDL_EXPORT_H */
