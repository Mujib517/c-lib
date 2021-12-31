#include <stdio.h>

void write_img(FILE *fp)
{
    for (int y = 0; y < 250; y++)
    {
        for (int x = 0; x < 250; x++)
        {
            char buffer[20];
            int val = (x * y) % 255;
            sprintf(buffer, "%d %d %d\n", val, val, val);
            fputs(buffer, fp);
        }
    }
}

void create_img()
{
    FILE *fp;
    fp = fopen("img.ppm", "w");
    fputs("P3\n", fp);
    fputs("250 250\n", fp);
    fputs("255\n", fp);
    write_img(fp);
    fclose(fp);
}