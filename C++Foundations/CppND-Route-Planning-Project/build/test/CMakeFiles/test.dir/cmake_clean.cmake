file(REMOVE_RECURSE
  "../../bin/test.pdb"
  "../../bin/test"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/test.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
