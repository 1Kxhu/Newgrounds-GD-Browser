# 1.0.0
- Initial release

# 1.0.1
- Now shows an alert if there are no results for your search query

# 1.0.2
- Changed textures to more vanilla/natural ones.
- Made alerts more consistent in writing style
- Readjusted some buttons' sizes

# 1.1.0
- Web requests are now made using the geode::utils::web namespace, instead of the previously used 'cpr' library.
  Means that the web requests are now also fully async, so the main thread doesn't lag anymore!
- Now using a better type casting method 'typeinfo_cast' ('dynamic_cast' was being used before)
- Removed some useless subclasses, which this was possible due to how htmlHelper.cpp was restructured.
  (+ it now has a proper header file)
- Turned duplicate code that created the Newgrounds Browser layer into one method 
- Renamed variables for readibility and clarity
- Added a label that says 'Searching..' when the user is searching