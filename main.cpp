#include <iostream>
#include <iterator>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#include "richelbilderbeekprogram.h"
#include "richelbilderbeekmenudialog.h"
#include "trace.h"
#pragma GCC diagnostic pop

int main(int argc, char * argv[])
{
  START_TRACE();
  const std::vector<std::string> args { ribi::MenuDialog::ConvertArguments(argc,argv) };
  return ribi::ProjectRichelBilderbeekMenuDialog().Execute(args);
}

