cp is used to copy a file and it’s content from one place, to another.

To copy files from one directory to another, the following convention should be used:

cp [source]~/desktop/abc.txt [target]~/document/alphabet

here, a copy of the file abc.txt (source) is being taken from the desktop directory and added to document/alphabet (target).

To copy a directory and all of its contents, a different convention has to be used,

cp -R

the -R (recursive) flag indicates that every subdirectory and file within the directory should be copied
