#include "main.h"

void check_process(const char *pid) {
    char path[512], line[512];
    FILE *fp;

    // Print PID and Command line
    printf("PID: %s, ", pid);

    // Command line path
    snprintf(path, sizeof(path), "/proc/%s/cmdline", pid);
    fp = fopen(path, "r");
    if (fp != NULL) {
        if (fgets(line, sizeof(line), fp) != NULL) {
            // Replace null characters with spaces to make it readable
            for (char *p = line; p < line + sizeof(line); ++p) {
                if (*p == '\0') *p = ' ';
            }
            printf("Command: %s, ", line);
        }
        fclose(fp);
    }

    // Status file path
    snprintf(path, sizeof(path), "/proc/%s/status", pid);
    fp = fopen(path, "r");
    if (fp != NULL) {
        while (fgets(line, sizeof(line), fp) != NULL) {
            if (strncmp(line, "Uid:", 4) == 0 || strncmp(line, "Gid:", 4) == 0) {
                printf("%s", line);
            }
        }
        fclose(fp);
    }

    printf("\n");
}
