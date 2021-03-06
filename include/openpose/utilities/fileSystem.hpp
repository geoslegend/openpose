#ifndef OPENPOSE__UTILITIES__FILE_SYSTEM_HPP
#define OPENPOSE__UTILITIES__FILE_SYSTEM_HPP

#include <string>

namespace op
{
    void mkdir(const std::string& directoryPath);

    bool exist(const std::string& directoryPath);

    bool isDirectory(const std::string& directoryPath);

    /**
     * This function makes sure that the directoryPathString is properly formatted. I.e., it
     * changes all '\' by '/', and it makes sure that the string finishes with '/'.
     * @param directoryPathString std::string with the directory path to be formatted.
     * @return std::string with the formatted directory path.
     */
    std::string formatAsDirectory(const std::string& directoryPathString);

    /**
     * This function extracts the file name and extension from a full path.
     * @param fullPath std::string with the full path.
     * @return std::string with the file name with extension.
     */
    std::string getFileNameAndExtension(const std::string& fullPath);

    /**
     * This function extracts the file name (without extension) from a full path.
     * @param fullPath std::string with the full path.
     * @return std::string with the file name without extension.
     */
    std::string getFileNameNoExtension(const std::string& fullPath);

    /**
     * This function extracts the extension from a full path.
     * @param fullPath std::string with the full path.
     * @return std::string with the file extension.
     */
    std::string getFileExtension(const std::string& fullPath);

    /**
     * This function extracts all the files in a directory path with the desired
     * extensions. If no extensions is specified, then all the file names are returned.
     * @param directoryPath std::string with the directory path.
     * @param extensions std::vector<std::string> with the extensions of the desired files.
     * @return std::vector<std::string> with the existing file names.
     */
    std::vector<std::string> getFilesOnDirectory(const std::string& directoryPath, const std::vector<std::string>& extensions = {});

    /**
     * Analogous to getFilesOnDirectory(const std::string& directoryPath, const std::vector<std::string>& extensions) for 1 specific
     * extension.
     * @param directoryPath std::string with the directory path.
     * @param extension std::string with the extension of the desired files.
     * @return std::vector<std::string> with the existing file names.
     */
    std::vector<std::string> getFilesOnDirectory(const std::string& directoryPath, const std::string& extension);
}

#endif // OPENPOSE__UTILITIES__FILE_SYSTEM_HPP
