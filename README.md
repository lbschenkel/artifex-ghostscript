Upstream distribution of Artifex Ghostscript, buildable as a Debian/Ubuntu package.

* To build: `./build.sh`, package will be put on `build/`  
  (uses `ubuntu-deb-tools` Docker image)

This repository is maintained via `git-buildpackage`:

1. Repository is initialized via `git init`
2. Upstream source tarball is downloaded from https://www.ghostscript.com/download/gsdnld.html
3. Upstream source tarball is imported via `gbp import-orig --pristine-tar ghostscript-X.YY.tar.gz`
4. Initial version `debian/` directory created via `dh_make -p ghostscript_X.YY`
5. Debian files are tweaked
6. Package is built via `gbp buildpackage`
