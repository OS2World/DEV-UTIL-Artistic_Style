#include <errno.h>
#include <nerrno.h>
#include <stdio.h>
#include <dirent.h>

int main()
{
   DIR *dp;
   dirent* de, dr;
   dp =   opendir("D:\\projects\\vacpp\\astyle\\src");
   de = readdir(dp);

  rewinddir(dp);
}
