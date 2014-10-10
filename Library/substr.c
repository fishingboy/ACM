void substr(char *dest, const char* src, unsigned int start, unsigned int cnt) 
{
    strncpy(dest, src + start, cnt);
    dest[cnt] = 0;
}
