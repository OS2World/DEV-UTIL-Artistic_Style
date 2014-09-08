#ifndef __os2add
#  define __os2add

#  include <os2.h>
#  include <basedef.h>

#ifndef INCL_DOS
#define INCL_DOS
#endif

#ifndef INCL_DOSPROFILE
#define INCL_DOSPROFILE
#endif

#ifndef INCL_DOSERRORS
#define INCL_DOSERRORS
#endif

typedef struct _QSOPENQ {
    USHORT pidOpener;
    USHORT OpenCt;
} QSOPENQ;

typedef struct _QSEVENT {
    ULONG  *pMuxQ;
    USHORT PostCt;
} QSEVENT;

typedef struct _QSMUTEX {
    ULONG  *pMuxQ;
    USHORT ReqCt;
    USHORT SlotNum;
} QSMUTEX;

typedef struct _QSMUX {
    void       *pSemRec;
    USHORT cSemRec;
    USHORT WaitCt;
} QSMUX;

typedef union _QSHUN {
    QSEVENT qsSEvt;
    QSMUTEX qsSMtx;
    QSMUX   qsSMux;
} QSHUN;



#ifndef USAGE
#  define USAGE(ret)    usage(__G__ (ret))    /* used in unzip.c, zipinfo.c */
#endif


#ifndef S_IWUSR
#define S_IWUSR 00200
#endif

#ifndef S_ISDIR
#define S_ISDIR(mode)  (((mode) & S_IFMT) == S_IFDIR)
#endif

#ifndef S_IFMT
#define S_IFMT   0170000  /* Mask for file type */
#define S_IFIFO  0010000  /* Pipe */
#define S_IFSOCK 0140000  /* Socket */

/* S_ISBLK */
#define S_ISCHR(mode)  (((mode) & S_IFMT) == S_IFCHR)
#define S_ISDIR(mode)  (((mode) & S_IFMT) == S_IFDIR)
#define S_ISREG(mode)  (((mode) & S_IFMT) == S_IFREG)
#define S_ISFIFO(mode) (((mode) & S_IFMT) == S_IFIFO)
#define S_ISSOCK(mode) (((mode) & S_IFMT) == S_IFSOCK)
#endif

#ifdef ENOENT
#undef ENOENT
#endif

//#ifndef __ino_t
//typedef long ino_t;
//typedef long off_t;
//#endif

#ifndef ZCONST
#  define ZCONST const
#endif

#define FILNAMSIZ _MAX_PATH

#define EPERM           1   /* Operation not permitted              */
#define ESRCH           3   /* No such process                      */
#define EIO             5   /* I/O error                            */
#define ENXIO           6   /* No such device or address            */
#define EFAULT          14  /* Bad address                          */
#define ENOLCK          15  /* No locks available                   */
#define EBUSY           16  /* Resource busy                        */
#define ENODEV          19  /* No such device                       */
#define ENOTDIR         20  /* Not a directory                      */
#define EISDIR          21  /* Is a directory                       */
#define ENFILE          23  /* Too many open files in system        */
#define ENOENT          23
#define ENOTTY          25  /* Inappropriate ioctl                  */
#define EDEADLK         26  /* Resource deadlock avoided            */
#define EFBIG           27  /* File too large                       */
#define ESPIPE          29  /* Invalid seek                         */
#define EROFS           30  /* Read-only file system                */
#define EMLINK          31  /* Too many links                       */
#define EPIPE           32  /* Broken pipe                          */
#define ENOTEMPTY       35  /* Directory not empty                  */
#define EINPROGRESS     36  /* Operation now in progress            */
#define ENOSYS          37  /* Function not implemented             */
#define ENAMETOOLONG    38  /* File name too long                   */
#define EDESTADDRREQ    39  /* Destination address required         */
#define EMSGSIZE        40  /* Message too long                     */
#define EPROTOTYPE      41  /* Protocol wrong type for socket       */
#define ENOPROTOOPT     42  /* Option not supported by protocol     */
#define EPROTONOSUPPORT 43  /* Protocol not supported               */
#define ESOCKTNOSUPPORT 44  /* Socket type not supported            */
#define EOPNOTSUPP      45  /* Operation not supported on socket    */
#define EPFNOSUPPORT    46  /* Protocol family not supported        */
#define EAFNOSUPPORT    47  /* Address family not supported by protocol family */
#define EADDRINUSE      48  /* Address already in use               */
#define EADDRNOTAVAIL   49  /* Can't assigned requested address     */
#define ENETDOWN        50  /* Network is down                      */
#define ENETUNREACH     51  /* Network is unreachable               */
#define ENETRESET       52  /* Network dropped connection on reset  */
#define ECONNABORTED    53  /* Software caused connection abort     */
#define ECONNRESET      54  /* Connection reset by peer             */
#define ENOBUFS         55  /* No buffer space available            */
#define EISCONN         56  /* Socket is already connected          */
#define ENOTCONN        57  /* Socket is not connected              */
#define ESHUTDOWN       58  /* Can't send after socket shutdown     */
#define ETOOMANYREFS    59  /* Too many references: can't splice    */
#define ETIMEDOUT       60  /* Connection timed out                 */
#define ECONNREFUSED    61  /* Connection refused                   */
#define ELOOP           62  /* Too many levels of symbolic links    */
#define ENOTSOCK        63  /* Socket operation on non-socket       */
#define EHOSTDOWN       64  /* Host is down                         */
#define EHOSTUNREACH    65  /* No route to host                     */
#define EALREADY        66  /* Operation already in progress        */

#endif