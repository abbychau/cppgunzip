// include gzip library
#include <zlib.h>

#include <iostream>

int main(int argc, char **argv)
{
    // fopen and gunzip
    FILE *fp = fopen("test.gz", "rb");
    gzFile gzfp = gzdopen(fileno(fp), "rb");
    // read file
    char buf[1024];
    int len;
    while ((len = gzread(gzfp, buf, 1024)) > 0)
    {
        buf[len] = '\0';
        std::cout << buf;
    }
    // close file
    gzclose(gzfp);
    fclose(fp);
}