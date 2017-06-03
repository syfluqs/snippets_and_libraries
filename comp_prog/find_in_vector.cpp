
/* std::find(vector.begin(), vector.end(), item) != vector.end() */
/*     This returns a bool (true if present, false otherwise). With your example: */

#include <algorithm>

    if ( std::find(vector.begin(), vector.end(), item) != vector.end()  )
       do_this();
       else
          do that();
