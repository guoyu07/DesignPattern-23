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

     // C++ 11
     // =======
     // We can use the better technique of deleting the methods
     // we don't want.

     File(File const&)	             = delete;
     void operator=(File const&)     = delete;

     // Note: Scott Meyers mentions in his Effective Modern
     //       C++ book, that deleted functions should generally
     //       be public as it results in better error messages
     //       due to the compilers behavior to check accessibility
     //       before deleted status
 private:
     File();
 };

#endif // _SINGLETON_WRITEFILE_H_
