# File-Systems-Driver

Things Supported:
Support for reading files: ospfs_read
Support for reading directories: ospfs_dir_readdir
Free block bitmap bookkeeping: allocate_block, free_block
Support for changing file sizes: change_size
Support for writing files: ospfs_write
Support for creating files: ospfs_create
Support for creating hard links: ospfs_link
Support for creating and deleting symbolic links: ospfs_symlink and ospfs_unlink
Support for conditional symlinks