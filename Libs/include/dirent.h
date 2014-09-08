#ifndef DIRENT_H
#define DIRENT_H

/*  Unix style directory(3C) support for OS/2 V2.x                      */

#ifdef __cplusplus
//extern "C" {
#endif

struct dirent
{
    long            d_ino;      /* not used in this implementation      */
    long            d_off;      /* not used in this implementation      */
    unsigned short  d_namlen;
    char            d_name[1];
};


struct S_Dir
{
    char           *dirname;
    int             max_ent;
    int             tot_ent;
    int             cur_ent;
    struct dirent **entp;
};
typedef struct S_Dir            DIR;


DIR *               opendir(char *filename);
struct dirent *     readdir(DIR *dirp);
long                telldir(DIR *dirp);
void                seekdir(DIR *dirp, long loc);
void                rewinddir(DIR *dirp);
void                closedir(DIR *dirp);

#endif      /* DIRENT_H */
//ifdef __cplusplus
//}  /* End of the 'extern "C"' block */
//#endif

