/*
Feel free to use/change this for whatever you like.
Written by Daniel Blood (https://github.com/DanielBlood)
*/
#ifndef __csvpr_H__
#define __csvpr_H__

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class csvpr
{
private:
  std::ifstream csv_file;
  int total_lines();

public:
  csvpr(std::string filename);
  ~csvpr();
  std::string get_line(int line_number);
  int fields(std::string line);
  std::string get_value(int row,int column);
};

#endif
