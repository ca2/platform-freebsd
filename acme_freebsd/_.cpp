#include "framework.h"


#include "acme/library.h"


namespace linux
{


   ::u32 get_current_directory(string& str)
   {

      str = ::str::from_strdup(get_current_dir_name());

      return str.get_length();

   }


} // namespace linux



