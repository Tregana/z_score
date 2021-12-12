set(target z_score)
add_library(${target} STATIC
  ${PROJECT_SOURCE_DIR}/src/z_score.cpp
)
install(TARGETS ${target} DESTINATION lib)
