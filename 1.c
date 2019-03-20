int lengthOfLongestSubstring(char* s) {
    int i = 0, j = 0;
    char ascii_table[256] = {0};
    int len = 0;
    int max_len = 0;
    int str_len = strlen(s);

    if (s == NULL) {
        return 0;
    }
    while (i < str_len && j < str_len) {
        char now = s[j];

        if (ascii_table[now] == 1) {
            ascii_table[s[i++]] = 0;
        } else {
            len = j - i + 1;
            ascii_table[now] = 1;
            max_len = len > max_len ? len: max_len;
            j++;
        }
    }

    return max_len;
}
