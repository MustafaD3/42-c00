unsigned	int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int dest_len;
    int src_len;
	
	dest_len = 0;
	src_len = 0;
    while (dest[dest_len] != '\0' && dest_len < size) {
        dest_len++;
    }

    while (src[src_len] != '\0') {
        src_len++;
    }

    int space_left = size - dest_len;

    if (space_left > 0) {
        int i = 0;
        while (i < space_left - 1 && src[i] != '\0') {
            dest[dest_len + i] = src[i];
            i++;
        }
        dest[dest_len + i] = '\0';
    }

    return dest_len + src_len;
}