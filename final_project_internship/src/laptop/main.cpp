#include <QApplication>
#include <iostream>

#include "../include/final_project_internship/laptop/main_window.hpp"

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  return a.exec();
}