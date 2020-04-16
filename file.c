#include <stdio.h>
#include <cups/cups.h>

int main(int argc, char** argv) {
 
   int num_options = 0;
   cups_option_t* options;
   num_options = cupsAddOption(" media", " Custom.29x90mm", num_options, &options);
   num_options = cupsAddOption(" orientation-requested", " 4", num_options, &options);
  // print
   cupsPrintFile(cupsGetDefault(), "./test.txt", "job name", num_options, options);
  
  return 0;
}
