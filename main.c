#include "main.h"

int main() {
    DIR *dir;
    struct dirent *entry;

    dir = opendir("/proc");
    if (dir == NULL) {
        perror("Failed to open /proc");
        return EXIT_FAILURE;
    }

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_DIR && atoi(entry->d_name) > 0) {
            check_process(entry->d_name);
        }
    }

    closedir(dir);
    return EXIT_SUCCESS;
}
