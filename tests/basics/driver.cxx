import std;
import mymodule;

#undef NDEBUG
#include <cassert>

int main ()
{
  using namespace std;
  using namespace mymodule;

  // MyGraph graph; // UNCOMMENT THIS TO TRIGGER THE ICE WITH MSVC

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
