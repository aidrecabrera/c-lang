#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void mergeMarkdownFiles(const char *folderPath, const char *outputFileName)
{
    FILE *outputFile = fopen(outputFileName, "w");

    if (outputFile == NULL)
    {
        perror("Error opening output file");
        exit(EXIT_FAILURE);
    }

    char searchPath[MAX_PATH];
    snprintf(searchPath, sizeof(searchPath), "%s\\*.md", folderPath);

    WIN32_FIND_DATA findFileData;
    HANDLE hFind = FindFirstFile(searchPath, &findFileData);

    if (hFind == INVALID_HANDLE_VALUE)
    {
        perror("Error listing files in the folder");
        exit(EXIT_FAILURE);
    }

    do
    {
        char currentFilePath[MAX_PATH];
        snprintf(currentFilePath, sizeof(currentFilePath), "%s\\%s", folderPath, findFileData.cFileName);

        FILE *currentFile = fopen(currentFilePath, "r");

        if (currentFile == NULL)
        {
            perror("Error opening a file for reading");
            exit(EXIT_FAILURE);
        }

        char fileLine[256];
        while (fgets(fileLine, sizeof(fileLine), currentFile) != NULL)
        {
            fputs(fileLine, outputFile);
        }

        fclose(currentFile);

    } while (FindNextFile(hFind, &findFileData) != 0);

    FindClose(hFind);
    fclose(outputFile);
}

int main()
{
    const char *folderPath = "C:\\Users\\Svene\\.dev\\learning\\c-lang"; // Replace with your actual folder path
    const char *outputFileName = "all-overview.md";

    mergeMarkdownFiles(folderPath, outputFileName);

    printf("Merged Markdown files into %s\n", outputFileName);

    return 0;
}
