if(NOT "/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/host-cmake-3.22.3/Tests/CMakeTests" MATCHES "^/")
  set(slash /)
endif()
set(url "file://${slash}/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/host-cmake-3.22.3/Tests/CMakeTests/FileDownloadInput.png")
set(dir "/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/host-cmake-3.22.3/Tests/CMakeTests/downloads")

file(DOWNLOAD
  ${url}
  ${dir}/file3.png
  TIMEOUT 2
  STATUS status
  EXPECTED_HASH SHA1=5555555555555555555555555555555555555555
  )
