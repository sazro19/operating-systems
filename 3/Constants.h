#pragma once
const int BUFF_SIZE = 1024;
const int FILE_NAME_LENGTH = 80;
const char* IMAGE_DIRECTORY = "./img/";
const char* START_DOWNOLOAD_IMAGE_MESSAGE = "%s [INFO] - Thread: %d start downnoload image %s";
const char* LOG_FILE_PATTERN = "%Y-%m-%d %H.%M.log";
const char* ADD_ELEMENT_IN_QUEUE_EXCEPTION_MESSAGE = "Failed to add new element to sync queue";
const char* WSDATA_LOAD_EXCEPTION_MESSAGE = "Can't load WSDATA library";
const char* SOCKET_INITIALIZATION_EXCEPTION_MESSAGE = "Can't initialize socket";
const char* INCORRECT_LINK_EXCEPTION_MESSAGE = "Incorrect link was input";
const char* CONNECTION_EXCEPTION_MESSAGE = "Can't establish connection with socket";
const char* REQUEST_MESSAGE = "GET %s HTTP/1.1\r\nHost: %s\r\nConnection:Close\r\n\r\n";
const int REQUEST_MESSAGE_LENGTH = 70;
const char* SEND_REQUEST_EXCEPTION_MESSAGE = "Error occurred during send request";
const char* TIME_TEMPLATE_IN_FILE = "%Y-%m-%d %H:%M:%S";
const char* RESPONSE_DELIMETER = "\r\n\r\n";
const char* IMAGE_STILL_DOWNLOADING_MESSAGE = "%s[INFO] - Image: %s is still downloading , Bites received: %d";
const char* IMAGE_NOT_DOWNLOADING_MESSAGE = "%s[INFO] - Image: %s don't downoload due to some problems";
const char* IMAGE_DOWNLOAD_SUCCESSFULLY_MESSAGE = "%s[INFO] - Image: %s downoload successfully";
const char* SOCKER_DATA_READ_EXCEPTION_MESSAGE = "Failed to read socket data";
const char* TEST_FILE = "test.txt";
const char* TEST_MODE = "test";
const char* START_PROGRAM_MESSAGE = "Program is starting\n";
const char* NO_FILE_FOR_TEST = "There is no file for tests in current directory";