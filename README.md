# gnu-gettext
A repository forked from http://git.savannah.gnu.org/gitweb/?p=gettext.git, providing recent built release.



## purpose

Repositories [gnu-gettext](http://git.savannah.gnu.org/gitweb/?p=gettext.git) and [gnu-gnulib](http://git.savannah.gnu.org/gitweb/?p=gnulib.git;a=summary) are under maintenance, but updating built releases is suspend. The latest released version is built **2 years ago**, which doesn't even [support java 9/10 compiler](https://bugs.debian.org/cgi-bin/bugreport.cgi?bug=892733). Some Linux distribution, like Debian, has provided [most recent release](https://tracker.debian.org/pkg/gettext), which can be installed by its own package manager, but other systems, like macOS, have not. Since it's hard and frustrating to build binary from source code, this repo tries to provide release built from recent source code of gnu-gettext.



## install

1. Download gzip file from release.
2. Unzip gzip file

  ```bash
  $ tar -xvf <path-to-gzip-file> 
  ```

3. Change diretory to unzipped folder and generate **make** file

   ```shell
   $ ./configure
   ```

4. Install it

   ```bash
   $ make install
   ```
