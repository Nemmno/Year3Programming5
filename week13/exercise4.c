#include <stdio.h>
#include <string.h>
struct Processor{
    char model[16];
    int cores;
};
struct Server{
    char hostname[21];
    struct Processor cpu;
};
struct Server createServer(const char *hostname, const char *cpuModel, int cpuCores){
    struct Server newServer;
    memset(&newServer, 0, sizeof(struct Server)); // Initialize the struct to zero

    printf("Enter hostname (max 20 characters): ");
    scanf("%20s", newServer.hostname);
    printf("Enter CPU model (max 15 characters): ");
    scanf("%15s", newServer.cpu.model);
    printf("Enter CPU cores: ");
    scanf("%d", &newServer.cpu.cores);
    return newServer;
};

int main() {
    struct Server myServer = createServer("DefaultHost", "DefaultCPU", 4);
    printf("Server Details:\n");
    printf("Server Hostname: %s\n", myServer.hostname);
    printf("CPU Model: %s\n", myServer.cpu.model);
    printf("CPU Cores: %d\n", myServer.cpu.cores);
    return 0;
}

