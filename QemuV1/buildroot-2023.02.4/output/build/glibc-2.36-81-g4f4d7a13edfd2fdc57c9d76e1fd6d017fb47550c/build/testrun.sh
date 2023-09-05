#!/bin/bash
builddir=`dirname "$0"`
GCONV_PATH="${builddir}/iconvdata"

usage () {
cat << EOF
Usage: $0 [OPTIONS] <program> [ARGUMENTS...]

  --tool=TOOL  Run with the specified TOOL. It can be strace, rpctrace,
               valgrind or container. The container will run within
               support/test-container.  For strace and valgrind,
               additional arguments can be passed after the tool name.
EOF

  exit 1
}

toolname=default
while test $# -gt 0 ; do
  case "$1" in
    --tool=*)
      toolname="${1:7}"
      shift
      ;;
    --*)
      usage
      ;;
    *)
      break
      ;;
  esac
done

if test $# -eq 0 ; then
  usage
fi

case "$toolname" in
  default)
    exec   env GCONV_PATH="${builddir}"/iconvdata LOCPATH="${builddir}"/localedata LC_ALL=C  "${builddir}"/elf/ld-linux.so.3 --library-path "${builddir}":"${builddir}"/math:"${builddir}"/elf:"${builddir}"/dlfcn:"${builddir}"/nss:"${builddir}"/nis:"${builddir}"/rt:"${builddir}"/resolv:"${builddir}"/mathvec:"${builddir}"/support:"${builddir}"/crypt:"${builddir}"/nptl ${1+"$@"}
    ;;
  strace*)
    exec $toolname  -EGCONV_PATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata  -ELOCPATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata  -ELC_ALL=C  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.3 --library-path /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  rpctrace)
    exec rpctrace  -EGCONV_PATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata  -ELOCPATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata  -ELC_ALL=C  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.3 --library-path /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  valgrind*)
    exec env GCONV_PATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata LOCPATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata LC_ALL=C $toolname  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.3 --library-path /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  container)
    exec env GCONV_PATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata LOCPATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata LC_ALL=C  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.3 --library-path /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support/test-container env GCONV_PATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/iconvdata LOCPATH=/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/localedata LC_ALL=C  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf/ld-linux.so.3 --library-path /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/math:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/elf:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/dlfcn:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nss:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nis:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/rt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/resolv:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/mathvec:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/support:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/crypt:/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/build/glibc-2.36-81-g4f4d7a13edfd2fdc57c9d76e1fd6d017fb47550c/build/nptl ${1+"$@"}
    ;;
  *)
    usage
    ;;
esac
