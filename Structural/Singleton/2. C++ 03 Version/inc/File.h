#ifndef _SINGLETON_WRITEFILE_H_
#define _SINGLETON_WRITEFILE_H_

#include <mutex>
#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>

class File
{
 public:
     static File& getInstance();
     void write(const std::string& message);
     ~File();

 private:
     File();
     // C++ 03
     // ========
     // Dont forget to declare these two. You want to make sure they
     // are unacceptable otherwise you may accidentally get copies of
     // your singleton appearing.
     File(File const&);              // Don't Implement
     void operator=(File const&);    // Don't implement
 };

#endif // _SINGLETON_WRITEFILE_H_
