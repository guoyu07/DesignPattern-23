#include "inc/File.h"

int main()
{
	File* file = File::getInstance();
	file->write("test log");

	return 0;
}
