typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
typedef long __time_t;
typedef int __clockid_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef __mode_t mode_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __ssize_t ssize_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef unsigned long size_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
struct stat {
  __dev_t st_dev;
  __ino_t st_ino;
  __nlink_t st_nlink;
  __mode_t st_mode;
  __uid_t st_uid;
  __gid_t st_gid;
  int __pad0;
  __dev_t st_rdev;
  __off_t st_size;
  __blksize_t st_blksize;
  __blkcnt_t st_blocks;
  struct timespec st_atim;
  struct timespec st_mtim;
  struct timespec st_ctim;
  __syscall_slong_t __glibc_reserved[3];
};
struct mtop {
  short mt_op;
  int mt_count;
};
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  int _pos;
};
struct _IO_FILE {
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;
  struct _IO_marker *_markers;
  struct _IO_FILE *_chain;
  int _fileno;
  int _flags2;
  __off_t _old_offset;
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];
  _IO_lock_t *_lock;
  __off64_t _offset;
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;
  int _mode;
  char _unused2[(15UL * sizeof(int) - 4UL * sizeof(void *)) - sizeof(size_t)];
};
typedef unsigned long uintmax_t;
struct posix_header {
  char name[100];
  char mode[8];
  char uid[8];
  char gid[8];
  char size[12];
  char mtime[12];
  char chksum[8];
  char typeflag;
  char linkname[100];
  char magic[6];
  char version[2];
  char uname[32];
  char gname[32];
  char devmajor[8];
  char devminor[8];
  char prefix[155];
};
struct sparse {
  char offset[12];
  char numbytes[12];
};
struct sparse_header {
  struct sparse sp[21];
  char isextended;
};
struct oldgnu_header {
  char unused_pad1[345];
  char atime[12];
  char ctime[12];
  char offset[12];
  char longnames[4];
  char unused_pad2;
  struct sparse sp[4];
  char isextended;
  char realsize[12];
};
struct star_header {
  char name[100];
  char mode[8];
  char uid[8];
  char gid[8];
  char size[12];
  char mtime[12];
  char chksum[8];
  char typeflag;
  char linkname[100];
  char magic[6];
  char version[2];
  char uname[32];
  char gname[32];
  char devmajor[8];
  char devminor[8];
  char prefix[131];
  char atime[12];
  char ctime[12];
};
struct star_in_header {
  char fill[345];
  char prefix[1];
  char fill2;
  char fill3[8];
  char isextended;
  struct sparse sp[4];
  char realsize[12];
  char offset[12];
  char atime[12];
  char ctime[12];
  char mfill[8];
  char xmagic[4];
};
struct star_ext_header {
  struct sparse sp[21];
  char isextended;
};
struct sp_array {
  off_t offset;
  size_t numbytes;
};
struct tar_stat_info {
  char *orig_file_name;
  char *file_name;
  int had_trailing_slash;
  char *link_name;
  unsigned int devminor;
  unsigned int devmajor;
  char *uname;
  char *gname;
  struct stat stat;
  unsigned long atime_nsec;
  unsigned long mtime_nsec;
  unsigned long ctime_nsec;
  off_t archive_file_size;
  _Bool is_sparse;
  size_t sparse_map_avail;
  size_t sparse_map_size;
  struct sp_array *sparse_map;
};
union block {
  char buffer[512];
  struct posix_header header;
  struct star_header star_header;
  struct oldgnu_header oldgnu_header;
  struct sparse_header sparse_header;
  struct star_in_header star_in_header;
  struct star_ext_header star_ext_header;
};
typedef double tarlong;
enum subcommand {
  UNKNOWN_SUBCOMMAND = 0,
  APPEND_SUBCOMMAND = 1,
  CAT_SUBCOMMAND = 2,
  CREATE_SUBCOMMAND = 3,
  DELETE_SUBCOMMAND = 4,
  DIFF_SUBCOMMAND = 5,
  EXTRACT_SUBCOMMAND = 6,
  LIST_SUBCOMMAND = 7,
  UPDATE_SUBCOMMAND = 8
};
enum access_mode { ACCESS_READ = 0, ACCESS_WRITE = 1, ACCESS_UPDATE = 2 };
typedef __dev_t dev_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
struct utimbuf {
  __time_t actime;
  __time_t modtime;
};
enum archive_format {
  DEFAULT_FORMAT = 0,
  V7_FORMAT = 1,
  OLDGNU_FORMAT = 2,
  USTAR_FORMAT = 3,
  POSIX_FORMAT = 4,
  STAR_FORMAT = 5,
  GNU_FORMAT = 6
};
enum read_header {
  HEADER_STILL_UNREAD = 0,
  HEADER_SUCCESS = 1,
  HEADER_SUCCESS_EXTENDED = 2,
  HEADER_ZERO_BLOCK = 3,
  HEADER_END_OF_FILE = 4,
  HEADER_FAILURE = 5
};
typedef __ino_t ino_t;
typedef __gid_t gid_t;
typedef __uid_t uid_t;
struct obstack;
struct obstack;
struct mode_change {
  char op;
  char flags;
  mode_t affected;
  mode_t value;
  struct mode_change *next;
};
struct name {
  struct name *next;
  size_t length;
  uintmax_t found_count;
  int isdir;
  char firstch;
  char regexp;
  int change_dir;
  char const *dir_contents;
  char fake;
  char name[1];
};
enum dump_status {
  dump_status_ok = 0,
  dump_status_short = 1,
  dump_status_fail = 2,
  dump_status_not_implemented = 3
};
struct xheader {
  struct obstack *stk;
  size_t size;
  char *buffer;
};
struct hash_tuning {
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct link {
  dev_t dev;
  ino_t ino;
  size_t nlink;
  char name[1];
};
enum old_files {
  DEFAULT_OLD_FILES = 0,
  NO_OVERWRITE_DIR_OLD_FILES = 1,
  OVERWRITE_OLD_FILES = 2,
  UNLINK_FIRST_OLD_FILES = 3,
  KEEP_OLD_FILES = 4,
  KEEP_NEWER_FILES = 5
};
enum remove_option {
  ORDINARY_REMOVE_OPTION = 0,
  RECURSIVE_REMOVE_OPTION = 1,
  WANT_DIRECTORY_REMOVE_OPTION = 2
};
enum permstatus {
  UNKNOWN_PERMSTATUS = 0,
  ARCHIVED_PERMSTATUS = 1,
  INTERDIR_PERMSTATUS = 2
};
struct delayed_set_stat {
  struct delayed_set_stat *next;
  struct stat stat_info;
  size_t file_name_len;
  mode_t invert_permissions;
  enum permstatus permstatus;
  _Bool after_symlinks;
  char file_name[1];
};
struct string_list;
struct string_list;
struct delayed_symlink {
  struct delayed_symlink *next;
  dev_t dev;
  ino_t ino;
  time_t mtime;
  uid_t uid;
  gid_t gid;
  struct string_list *sources;
  char target[1];
};
struct string_list {
  struct string_list *next;
  char string[1];
};
enum strtol_error {
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct _obstack_chunk {
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
struct obstack {
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  long temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct keyword_list {
  struct keyword_list *next;
  char *pattern;
  char *value;
};
struct xhdr_tab {
  char const *keyword;
  void (*coder)(struct tar_stat_info const *, char const *, struct xheader *,
                void *data);
  void (*decoder)(struct tar_stat_info *, char const *);
  _Bool protect;
};
enum children { NO_CHILDREN = 0, CHANGED_CHILDREN = 1, ALL_CHILDREN = 2 };
struct directory {
  dev_t device_number;
  ino_t inode_number;
  enum children children;
  _Bool nfs;
  _Bool found;
  char name[1];
};
struct tm {
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;
  long tm_gmtoff;
  char const *tm_zone;
};
enum quoting_style {
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  escape_quoting_style = 4,
  locale_quoting_style = 5,
  clocale_quoting_style = 6
};
struct quoting_options;
struct quoting_options;
enum backup_type { none = 0, simple = 1, numbered_existing = 2, numbered = 3 };
struct saved_cwd {
  int desc;
  char *name;
};
struct wd {
  char const *name;
  int saved;
  struct saved_cwd saved_cwd;
};
struct passwd {
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
struct group {
  char *gr_name;
  char *gr_passwd;
  __gid_t gr_gid;
  char **gr_mem;
};
struct exclude;
struct exclude;
typedef int __daddr_t;
typedef void (*__sighandler_t)(int);
struct mtget {
  long mt_type;
  long mt_resid;
  long mt_dsreg;
  long mt_gstat;
  long mt_erreg;
  __daddr_t mt_fileno;
  __daddr_t mt_blkno;
};
struct tar_sparse_file;
struct tar_sparse_file;
enum sparse_scan_state { scan_begin = 0, scan_block = 1, scan_end = 2 };
struct tar_sparse_optab {
  _Bool (*init)(struct tar_sparse_file *);
  _Bool (*done)(struct tar_sparse_file *);
  _Bool (*sparse_member_p)(struct tar_sparse_file *);
  _Bool (*dump_header)(struct tar_sparse_file *);
  _Bool (*fixup_header)(struct tar_sparse_file *);
  _Bool (*decode_header)(struct tar_sparse_file *);
  _Bool (*scan_block)(struct tar_sparse_file *, enum sparse_scan_state, void *);
  _Bool (*dump_region)(struct tar_sparse_file *, size_t);
  _Bool (*extract_region)(struct tar_sparse_file *, size_t);
};
struct tar_sparse_file {
  int fd;
  size_t dumped_size;
  struct tar_stat_info *stat_info;
  struct tar_sparse_optab *optab;
  void *closure;
};
enum oldgnu_add_status { add_ok = 0, add_finish = 1, add_fail = 2 };
union __anonunion_56 {
  int __in;
  int __i;
};
union __anonunion_57 {
  int __in;
  int __i;
};
union __anonunion_58 {
  int __in;
  int __i;
};
union __anonunion_59 {
  int __in;
  int __i;
};
union __anonunion_60 {
  int __in;
  int __i;
};
union __anonunion_61 {
  int __in;
  int __i;
};
union __anonunion_62 {
  int __in;
  int __i;
};
union __anonunion_63 {
  int __in;
  int __i;
};
union __anonunion_64 {
  int __in;
  int __i;
};
union __anonunion_65 {
  int __in;
  int __i;
};
union __anonunion_66 {
  int __in;
  int __i;
};
union __anonunion_67 {
  int __in;
  int __i;
};
struct option {
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
struct fmttab {
  char const *name;
  enum archive_format fmt;
};
typedef void *iconv_t;
struct dirent {
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
struct patopts {
  char const *pattern;
  int options;
};
struct exclude {
  struct patopts *exclude;
  size_t exclude_alloc;
  size_t exclude_count;
};
struct __anonstruct_textint_27 {
  long value;
  size_t digits;
};
typedef struct __anonstruct_textint_27 textint;
struct __anonstruct_table_28 {
  char const *name;
  int type;
  int value;
};
typedef struct __anonstruct_table_28 table;
struct __anonstruct_parser_control_31 {
  char const *input;
  long day_ordinal;
  int day_number;
  int local_isdst;
  long time_zone;
  int meridian;
  textint year;
  long month;
  long day;
  long hour;
  long minutes;
  struct timespec seconds;
  long rel_year;
  long rel_month;
  long rel_day;
  long rel_hour;
  long rel_minutes;
  long rel_seconds;
  long rel_ns;
  _Bool timespec_seen;
  size_t dates_seen;
  size_t days_seen;
  size_t local_zones_seen;
  size_t rels_seen;
  size_t times_seen;
  size_t zones_seen;
  table local_time_zone_table[3];
};
typedef struct __anonstruct_parser_control_31 parser_control;
union __anonunion_YYSTYPE_32 {
  long intval;
  textint textintval;
  struct timespec timespec;
};
typedef union __anonunion_YYSTYPE_32 YYSTYPE;
typedef long __suseconds_t;
struct timeval {
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
typedef struct timezone *__restrict __timezone_ptr_t;
struct hash_entry {
  void *data;
  struct hash_entry *next;
};
typedef long ptrdiff_t;
struct hash_table {
  struct hash_entry *bucket;
  struct hash_entry const *bucket_limit;
  size_t n_buckets;
  size_t n_buckets_used;
  size_t n_entries;
  Hash_tuning const *tuning;
  size_t (*hasher)(void const *, size_t);
  _Bool (*comparator)(void const *, void const *);
  void (*data_freer)(void *);
  struct hash_entry *free_entry_list;
};
struct lconv {
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_p_sign_posn;
  char int_n_sign_posn;
};
typedef int wchar_t;
union __anonunion___value_23 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_22 {
  int __count;
  union __anonunion___value_23 __value;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct quoting_options {
  enum quoting_style style;
  int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
};
struct slotvec {
  size_t size;
  char *val;
};
/* #pragma merger("0","000.buffer.o.i","") */
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern
    __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1),
                                                       __leaf__))
                                        memset)(void *__s, int __c, size_t __n);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1), __leaf__))
    memchr)(void const *__s, int __c, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcat)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strchr)(char const *__s, int __c)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) int *(
    __attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern int(__attribute__((__nonnull__(1))) open)(char const *__file,
                                                 int __oflag, ...);
extern int(__attribute__((__nonnull__(1))) creat)(char const *__file,
                                                  mode_t __mode);
extern __attribute__((__nothrow__))
__off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset,
                                         int __whence);
extern int close(int __fd);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        ioctl)(int __fd,
                                               unsigned long __request, ...);
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__))
                                         free)(void *__ptr);
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           valloc)(size_t __size)
    __attribute__((__malloc__));
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       abort)(void);
extern int system(char const *__command);
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern int fclose(FILE *__stream);
extern int fflush_unlocked(FILE *__stream);
extern FILE *fopen(char const *__restrict __filename,
                   char const *__restrict __modes);
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format,
                   ...);
extern __attribute__((__nothrow__)) int
sprintf(char *__restrict __s, char const *__restrict __format, ...);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format,
                  ...);
extern int fputc_unlocked(int __c, FILE *__stream);
extern char *fgets_unlocked(char *__restrict __s, int __n,
                            FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        ferror_unlocked)(FILE *__stream);
extern __attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) time)(time_t *__timer);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        clock_gettime)(clockid_t __clock_id,
                                                       struct timespec *__tp);
int strip_trailing_slashes(char *path);
extern void error(int __status, int __errnum, char const *__format, ...);
void *xmalloc(size_t n);
char *xstrdup(char const *string);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           gettext)(char const *__msgid)
    __attribute__((__format_arg__(1)));
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           ngettext)(char const *__msgid1,
                                                     char const *__msgid2,
                                                     unsigned long __n)
    __attribute__((__format_arg__(1), __format_arg__(2)));
extern int fnmatch(char const *__pattern, char const *__name, int __flags);
char *human_readable(uintmax_t n, char *buf, int opts,
                     uintmax_t from_block_size, uintmax_t to_block_size);
char *quotearg_colon(char const *arg);
char const *quote_n(int n, char const *name);
char const *quote(char const *name);
size_t safe_read(int fd, void *buf, size_t count);
enum subcommand subcommand_option;
int blocking_factor;
size_t record_size;
                    
                        
                                        
                         
                               
_Bool multi_volume_option;
                               
                               
tarlong tape_length_option;
                       
                    
int verbose_option;
_Bool verify_option;
                              
char const *volume_label_option;
int archive;
_Bool dev_null_output;
struct timespec start_timespec;
struct tar_stat_info current_stat_info;
char const **archive_name_array;
int archive_names;
                                 
char const *index_file_name;
enum access_mode access_mode;
FILE *stdlis;
                
off_t save_sizeleft;
                   
                              
size_t available_space_after(union block *pointer);
off_t current_block_ordinal(void);
void close_archive(void);
void closeout_volume_number(void);
union block *find_next_block(void);
void flush_read(void);
void flush_write(void);
void flush_archive(void);
void init_volume_number(void);
void open_archive(enum access_mode wanted_access);
void print_total_written(void);
void reset_eof(void);
void set_next_block_after(union block *block);
void clear_read_error_count(void);
void xclose(int fd);
__attribute__((__noreturn__)) void archive_write_error(ssize_t status);
void archive_read_error(void);
void finish_header(struct tar_stat_info *st, union block *header,
                   off_t block_ordinal);
void off_to_chars(off_t v, char *p, size_t s);
void time_to_chars(time_t v, char *p, size_t s);
                    
void verify_volume(void);
__attribute__((__noreturn__)) void fatal_exit(void);
char *stringify_uintmax_t_backwards(uintmax_t o___0, char *buf);
off_t off_from_header(char const *p, size_t s);
uintmax_t uintmax_from_header(char const *p, size_t s);
void assign_string(char **string, char const *value);
_Bool maybe_backup_file(char const *path, int this_is_the_archive);
void undo_last_backup(void);
void close_error(char const *name);
void close_warn(char const *name);
void open_error(char const *name);
__attribute__((__noreturn__)) void open_fatal(char const *name);
void open_warn(char const *name);
void read_error(char const *name);
void write_error(char const *name);
__attribute__((__noreturn__)) void
write_fatal_details(char const *name, ssize_t status, size_t size);
char *safer_name_suffix(char const *file_name, _Bool link_target);
void tar_stat_destroy(struct tar_stat_info *st);
char *output_start;
void sys_detect_dev_null_output(void);
void sys_save_archive_dev_ino(void);
void sys_drain_input_pipe(void);
void sys_wait_for_child(pid_t child_pid___0);
void sys_spawn_shell(void);
pid_t sys_child_open_for_compress(void);
pid_t sys_child_open_for_uncompress(void);
size_t sys_write_archive_buffer(void);
_Bool sys_get_archive_stat(void);
char *rmt_path__;
int rmt_open__(char const *path, int open_mode, int bias,
               char const *remote_shell);
int rmt_close__(int handle);
size_t rmt_read__(int handle, char *buffer___2, size_t length);
off_t rmt_lseek__(int handle, off_t offset, int whence);
int rmt_ioctl__(int handle, int operation, char *argument);
                            
                             
union block *record_start;
union block *record_end;
union block *current_block;
off_t records_read;
off_t records_written;
static off_t record_start_block;
static void backspace_output(void);
static _Bool new_volume(enum access_mode mode);
static pid_t child_pid;
static int read_error_count;
                   
                      
                            
                     
                            
                         
                            
                             
                                   
   
                         
           
   
 
                                
                  
                                    
                                                                            
                        
                     
                   
                 
                                                                            
                        
                     
                   
                 
                 
                 
                      
             
              
                
                      
                
                
                    
                    
                    
                    
                    
                    
                    
   
     
                                             
                       
                                       
     
                       
                                                              
                                                                     
            
       
                                
                                                        
       
     
     
                                                
                                                                
     
                              
                                                              
         
                                                                        
                                                                           
                                          
         
              
                      
       
            
                    
     
     
                                                                    
                                                           
                                                                
                                                
                                                                                
     
           
   
 
off_t current_block_ordinal(void) {
     return (record_start_block + (current_block - record_start));  
}
                      
   
                  
                  
                                   
                                                  
                                        
     
           
   
 
union block *find_next_block(void) {
   
    if ((unsigned long)current_block == (unsigned long)record_end) {
                    
                                  
       
            flush_archive();  
                                                                      
                    
                                  
       
    }
    return (current_block);
   
}
void set_next_block_after(union block *block) {
   
    {
                 
                                     ;
                                                                      
                           
         
        current_block++;
       
                                 
    }
                                                                   
       
                
       
     
           
   
}
                                                    
                                                               
 
                     
            
              
                   
   
                                       
                       
       
                                
                                       
       
     
           
   
 
                                                      
               
               
            
              
                 
                
              
                   
                    
   
     
                                                              
                                               
     
               
                        
     
     
               
                                                                              
     
                       
                        
     
                               
                        
     
     
                                            
                                                                    
                               
                                              
                                                                  
                                              
                                                                
               
                                                                               
                                     
                           
     
                    
   
 
void open_archive(enum access_mode wanted_access) {
  int backed_up_flag;
  char *tmp;
  char *tmp___0;
  void *tmp___1;
  void *tmp___2;
  char *tmp___3;
  int tmp___4;
  char *tmp___5;
  int tmp___7;
  int tmp___8;
  void *tmp___9;
  int tmp___11;
  int tmp___12;
  void *tmp___13;
  int tmp___15;
  int tmp___16;
  void *tmp___17;
  int tmp___19;
  int tmp___20;
  void *tmp___21;
  int tmp___22;
  int saved_errno;
  int *tmp___23;
  int *tmp___24;
  _Bool tmp___25;
  union block *label;
  union block *tmp___26;
  char const *tmp___27;
  char *tmp___28;
  char const *tmp___29;
  char const *tmp___30;
  char *tmp___31;
  _Bool tmp___32;
  unsigned int tmp___33;
                    
                    
                    
                    
                    
                    
                    
  {
                       
                          
       
                                                                       
                                                             
       
                    
         
                                      
         
       
           {
                            {
        stdlis = stderr;
      }                                                      
                        
       
    }
                             
       
                                                       
                                       
                     
       
     
                             
       
                                                   
                                           
                     
       
     
     
                                           
                            
                              
     
                              
       
                                               
                                              
       
                         
                          
       
           {
       
        tmp___2 = valloc(record_size);
        record_start = (union block *)tmp___2;
       
    }
                        
       
                                                                           
                                                            
                     
       
     
    current_block = record_start;
                                                
                                            
                    
           {
      tmp___33 = (unsigned int)wanted_access;
    }
    access_mode = (enum access_mode)tmp___33;
                                      
       
                                                
                      
         
                                                
                      
         
                                                
                      
         
                          
                              
       
                                                    
                                            
       
                          
                              
       
                                                  
       
                          
                              
       
                
       
                          
                                    
       
                                              
         
                                                           
         
                           
                          
         
       
           {
      { tmp___22 = strcmp(*(archive_name_array + 0), "-"); }
      if (tmp___22 == 0) {
                                            
                            
           
                                                                    
                                               
                         
           
         
         
                                                  
                            
           
                                                  
                            
           
                                                  
                            
           
                                
                                   
                      
                                
                                   
                      
                          
                                
                                   
                      
                          
                                             
                                
                                          
         
      } else {
                            
                                    
             
                                                                  
             
                             
                                             
                                                             
                 
                                   
                                                                   
                                                                                
                 
                              
                   
                    tmp___8 =
                        open(*(archive_name_array + 0), 66,
                             ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                    archive = tmp___8;
                   
                         
                   
                                                                                
                                                             
                                      
                   
                 
                               
                 
                                                               
                                                                           
                                                                               
                                    
                 
               
                       
               
                                                             
                                                                         
                                                                             
                                  
               
             
                                      
             
                                                           
                                                                       
                                                                           
                                
             
           
                                                  
           
                                                    
                              
             
                                                    
                              
             
                                                    
                              
             
                                  
                                     
                                      
               
                                                                    
               
                               
                                               
                                                               
                   
                              
                                                                            
                                                    
                                                                            
                   
                                 
                     
                                
                                                            
                                                                         
                                                                             
                                         
                     
                          
                     
                                                                         
                                                                         
                                         
                     
                   
                        
                   
                              
                                                          
                                                                       
                                                                           
                                       
                   
                 
                      
                 
                                                               
                                                                            
                                                                                
                                     
                 
               
                    
               
                                                             
                                                                          
                                                                              
                                   
               
             
                                  
                                     
                                
               
                                                                
                                   
               
             
                                      
               
                                                                    
               
                               
                                               
                                                               
                   
                              
                                                                            
                                                    
                                                                            
                   
                                 
                     
                                       
                                                    
                                                                             
                                                                              
                                         
                     
                          
                     
                                                                          
                                                                         
                                         
                     
                   
                        
                   
                                     
                                                  
                                                                           
                                                                            
                                       
                   
                 
                      
                 
                            
                                                      
                                                                               
                                                                                
                                     
                 
               
                    
               
                          
                                                    
                                                                             
                                                                              
                                   
               
             
                                  
                                     
                                      
               
                                                                    
               
                               
                                               
                                                               
                   
                              
                                                                            
                                                    
                                                                            
                   
                                 
                     
                                
                                                             
                                                                         
                                                                             
                                         
                     
                          
                     
                                                                          
                                                                         
                                         
                     
                   
                        
                   
                              
                                                           
                                                                       
                                                                           
                                       
                   
                 
                      
                 
                                                                
                                                                            
                                                                                
                                     
                 
               
                    
               
                                                              
                                                                          
                                                                              
                                   
               
             
                                  
                                            
           
         
      }
    }
                      
              
            
                                  
         
                                            
         
                        
              
                                        
                                  
         
                               
             
                                 
             
           
           
                                          
                                    
                                                  
           
         
       
     
     
                                   
                                 
     
    {
                                              
                        
       
      if ((unsigned int)wanted_access == 0U) {
        goto case_0___2;
      }
                                             {
        goto case_1___2;
      }
                            
                               
                                 
    case_0___2 : /* CIL Label */
    {
                              
      record_end = record_start;
                        
    }
                                
         
                                       
                           
         
                     
           
                                                  
                                                                  
                                                          
                         
           
         
                                                  
                        
           
                                                       
                                                                      
                                                              
                                                                    
                         
           
         
       
                            
    case_1___2: /* CIL Label */
      records_written = (off_t)0;
                                
         
                                                       
         
                                  
           
                                                                          
                                                                   
                                         
           
                
           
                                                                         
                                                                        
           
         
         
                                                     
                                                                   
                                                
                                                                  
                                                    
                                                                          
                                                            
                                                                     
         
       
                            
                                      
    }
           
  }
}
void flush_write(void) {
  int copy_back;
  ssize_t status;
  char *tmp;
  int *tmp___0;
  size_t tmp___1;
  char *tmp___2;
  int *tmp___3;
  int *tmp___4;
  int *tmp___5;
  _Bool tmp___6;
  int tmp___7;
  size_t tmp___8;
  char *tmp___9;
                    
                    
  {
                            
                   
                               
         
                                               
                                                     
         
       
     
                             
                                                
         
                                       
                        
                              
         
              
                    
       
            
                           
                            
                                      
              
         
                                               
                                    
         
       
     
                                        
                                 
         
                                      
         
       
     
                      
                        
                                       
     
                                        
                                
                        
           
                                                                           
                                                               
                                          
                                            
           
                
           
                                                         
                                      
                                       
           
         
       
             
     
                      
       
                                     
       
                           
         
                                       
         
                            
           
                                         
           
                              
             
                                          
             
           
         
       
     
                                                  
                   
             
     
                        
                                    
     
                               
                              
                        
                      
                          
              
                    
       
            
                           
                                
                      
                       
              
                          
                        
                         
                
                        
         
       
     
                              
       
                                                     
                                                                      
                                                                
                                            
                                                                        
                                                          
                                                  
                                                                   
       
     
                      
                                
                       
       
       
                                                     
                                                                     
                                                            
                                                  
                                                                
                                                        
                                                      
                                                        
                                                                 
                                 
                           
                                                                   
                                 
       
                                
                       
       
     
    {
      tmp___8 = sys_write_archive_buffer();
                                
    }
                                        
       
                                    
       
     
                                     
                    
       
                                  
                                                       
                                                
                                                                 
                                          
                                   
       
                                                        
                                                    
              
                                                                         
           
                                                         
           
                
           
                                                                           
                                                               
                                            
                                          
           
         
       
                    
     
           
  }
}
__attribute__((__noreturn__)) void archive_write_error(ssize_t status);
                                          
        
           
               
   
                        
       
                                 
                 
                              
                                     
                     
       
     
                                                                       
   
 
void archive_read_error(void) {
  char *tmp;
  char *tmp___0;
  int tmp___1;
                   
                   
   
                                         
                                   
       
                                                            
                                       
                     
       
     
                               
                       
                       
       
                                                       
                                           
                     
       
     
           
   
}
                                       
              
             
             
                 
                                                                       
                
                
                     
                
                      
                
                    
                    
   
                                         
                                
     
                 
                                      
                                     
                     
                         
                                              
                                 
               
                    
                               
             
                  
                             
           
         
                     
           
                       
                                                
                                       
                 
                                                                    
                               
                 
                      
                 
                                                                   
                                   
                 
               
                                                      
                                     
               
                                       
             
                                           
           
         
                            
           
                                                    
                                   
                                                                             
                             
                                                       
                                                                              
           
                           
         
                                        
           
                                      
                                                                       
                                                                               
                                                     
                         
           
         
                       
                       
       
                                 
     
                                    
                               
                                       
                              
             
                                                   
                                                           
                                                                    
                                                        
             
           
         
       
     
                                                             
                   
           
   
 
void flush_read(void) {
  size_t status;
  char *tmp;
  char *tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  union block *cursor;
  _Bool tmp___3;
  _Bool tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  char const *tmp___7;
  char const *tmp___8;
  char *tmp___9;
  _Bool tmp___10;
  char const *tmp___11;
  char *tmp___12;
  char *tmp___13;
  uintmax_t s1;
  uintmax_t s2;
  char const *tmp___14;
  char *tmp___15;
  int tmp___16;
  char totsizebuf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  char s1buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  char s2buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  char *tmp___17;
  char *tmp___18;
  char *tmp___19;
  char const *tmp___20;
  char *tmp___21;
  char *tmp___22;
  off_t tmp___23;
  int *tmp___24;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
                            
                   
                               
         
                                              
                                                     
         
       
     
                         
                                  
                                     
         
                      
                                              
                      
         
                                    
           
                                                 
           
         
       
     
                              
                      
         
                                                                         
                                                             
                                          
                                        
         
              
         
                                                       
                                    
                                     
         
       
     
  error_loop:
                             
       
                 
                                                                               
                         
       
                                                          {
       
        tmp___2 =
            safe_read(archive, (void *)(record_start->buffer), record_size);
                         
       
    }
                                
                     
             
     
                        
                  
            
                                           
         
                                        
         
                              
               
                                    
                        
                                                        
                          
             
                                                        
                          
             
                                                        
                          
             
                                
                                  
                                  
                                   
            
                                                      
           
                           
                     
             
                              
                                          
           
                                                      
           
                           
                     
             
                              
                                        
           
             
                         
                                              
                                         
                   
                                                             
                                                                            
                                     
                   
                        
                   
                                                                                
                                                     
                                     
                   
                 
                                                        
                                   
                 
                                         
               
                                         
             
                                        
               
                                   
               
             
                                  
                                                     
                                        
                 
                                                         
                 
                                
                   
                                                              
                                                                              
                                                                     
                                                                         
                            
                                   
                   
                                  
                 
               
                                   
                 
                                                                        
                                                     
                                                            
                                                                              
                 
               
                       
                    
                                        
                 
                                                                  
                                                      
                 
               
             
                              
                                                       
                        
                      
                 
                                                                        
                                                               
                 
                               
                      
                                                              
                                                                           
                                                                
                          
                                 
                 
                                  
                 
               
               
                                                                             
                                                                      
                                         
                                                                 
                                                          
               
                                                         
                            
                      
                                   
                                        
                 
                                                           
                         
                                                                              
                                      
                                     
                                                           
                         
                                                                              
                                      
                                     
                                                           
                                              
                                  
                                                                          
                                  
                                 
                                                                        
                                                                             
                                                                         
                                            
                          
                                 
                 
                                  
                 
               
               
                                           
                                                                 
                                                          
               
                                                                 
                 
                                                                       
                                                      
                          
                                 
                 
                                
               
                       
             
                                   
                           
                   
                  
                        
           
                
                      
         
              
             
                                             
           
                                 
           
                          
         
       
     
                           
           
  }
}
void flush_archive(void) {
   
                                                    
                                 
                                                
                                          
                                  
         
                                            
                                           
                             
         
       
     
    {
                                            
                    
       
                                            
                    
       
                                            
                    
       
                        
    case_0 : /* CIL Label */
                                                   {
      flush_read();
    }
                        
    case_1 : /* CIL Label */
                                                   {
      flush_write();
    }
                        
                            
     
              
     
                                  
    }
           
   
}
                                    
                        
          
              
              
               
              
              
              
                 
                
                  
                
                
                 
                   
                 
                    
   
                               
                           
                             
       
                          
                                
                                                                           
                                       
                                               
                                  
                      
       
            
       
                        
                    
                                                                           
                                            
                                  
                          
       
     
                       
             
     
                                     
                        
                               
         
                                
                                  
                                                                             
                                         
                                                 
                                    
                            
         
              
         
                          
                      
                                                                             
                                              
                                    
                            
         
       
                         
               
       
     
                             
       
                                                                
                          
       
            
       
                                              
                          
       
     
                       
                                                       
                        
                          
     
                             
       
                                                                 
                            
       
            
       
                                               
                            
       
     
                               
       
                          
                                                                              
                                           
       
                                                  
                                        
         
                                                   
                                                                
         
       
     
           
   
 
void close_archive(void) {
  int tmp;
  int tmp___0;
  int tmp___1;
  union block *tmp___2;
  {
                                
       
        flush_archive();
       
                                    
                                            
         
                          
         
       
     
                               
                        
       
                        
       
     
                             
       
                                               
                      
       
            
       
                                 
                          
       
     
                       
       
                                         
       
     
     
                                    
                                           
     
                    
       
                                
       
     
                      
       
                                  
       
     
                              
                                 
            
                             
     
                              
           
  }
}
                               
             
            
                
                
              
              
              
               
                   
                    
   
     
                                                                    
                                                        
                 
     
               
       
                                                         
                                                                               
       
                         
         
                                                      
                                                                  
                                                      
                       
         
              
                               
           
                                                        
                                                                    
                                                        
                         
           
         
       
                                          
                    
         
                                        
         
       
                                 
                         
         
                                         
         
       
            
                                       
                          
         
                                        
         
       
     
           
   
 
void closeout_volume_number(void) {
  FILE *file;
  FILE *tmp;
  int tmp___0;
  int tmp___1;
   
     
                                                                    
                                                        
                 
     
               
       
                                                
                                                                       
                                        
       
                    
         
                                         
         
       
                                 
                         
         
                                         
         
       
            
                                         
     
           
   
}
                       
                  
                                                
            
              
              
              
                
                
              
                        
                      
                
                
                
                 
                 
                 
                 
             
               
                 
               
               
                 
               
               
                 
               
               
                 
               
               
                 
               
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
                     
                                
                           
           
                                                                    
                                                              
                            
           
                
                            
         
       
     
                        
                        
     
                        
       
                        
       
     
                             
       
                                                   
                          
       
            
       
                                 
                          
       
     
                       
       
                                         
       
     
                   
                           
       
                                                    
                                           
                     
       
     
            
                          
                                             
                                                              
                                               
                 
     
           
                 
                               
                                
           
                                     
           
         
                                                 
                           
           
                                                      
                                                                   
                         
           
         
              
         
                     
                                          
             
                                           
                                                    
                                                                              
                                                        
                                                                            
                               
                                      
                        
                                                                          
                                                           
                                                                       
             
                                                                        
               
                                                                       
                                                   
               
                                                          
                                                            
                                                              
                     
                                                                          
                                                         
                     
                   
                 
               
                               
             
                                             
                               
                    
                                                
                                 
                      
                                                 
                                   
                 
               
             
             
                                               
                             
               
                                                
                              
               
                                                
                              
               
                                               
                             
               
                                
                                     
             
                                 
                                                                       
                                                                              
                                                                     
                                                        
                                                                
             
                                
                                      
             
                                                              
                                                  
             
                                                          
                                                            
                                                              
                     
                                                                           
                                                          
                     
                   
                 
               
                               
                                     
                                      
                                      
               
                           
                                                    
                                            
                                             
                                           
                     
                   
                         
                 
                                               
               
                            
               
                           
                                                    
                                
                                                
                                           
                     
                          
                                         
                   
                           
                 
                                               
               
               
                                       
                                                       
                                                              
               
                                
                                     
             
                                
             
                                
                                          
             
           
                                     
         
       
     
                                                           
                        
                                          
                  
            
                          
                                  
           
                                                           
           
                           
                                           
                                                      
               
                          
                                                                   
                                                                                
               
                             
                 
                                                           
                                                                            
                                                                                
                                     
                 
                      
                 
                                                                          
                                                            
                                     
                 
               
                    
               
                                                         
                                                                          
                                                                              
                                   
               
             
                  
             
                                                       
                                                                        
                                                                            
                                 
             
           
                
           
                                                     
                                                                      
                                                                          
                               
           
         
              
         
                                         
                        
           
                                         
                        
           
                                         
                        
           
                                
                               
                                    
             
                                                             
             
                             
                                             
                                                        
                 
                                    
                                                              
                                                                           
                 
                               
                   
                              
                                                     
                                                                       
                                                                           
                                       
                   
                        
                   
                                                                           
                                                              
                                       
                   
                 
                      
                 
                                                          
                                                                            
                                                                                
                                     
                 
               
                    
               
                                                        
                                                                          
                                                                              
                                   
               
             
                  
             
                                                      
                                                                        
                                                                            
                                 
             
           
                                
                               
                              
             
                                                         
             
           
                                    
             
                                                             
             
                             
                                             
                                                        
                 
                                    
                                                              
                                                                           
                 
                               
                   
                                     
                                             
                                                                           
                                                                            
                                       
                   
                        
                   
                                                                            
                                                              
                                       
                   
                 
                      
                 
                            
                                                 
                                                                               
                                                                                
                                     
                 
               
                    
               
                          
                                               
                                                                             
                                                                              
                                   
               
             
                  
             
                        
                                             
                                                                           
                                                                            
                                 
             
           
                                
                               
                                    
             
                                                             
             
                             
                                             
                                                        
                 
                                    
                                                              
                                                                           
                 
                               
                   
                              
                                                      
                                                                       
                                                                           
                                       
                   
                        
                   
                                                                            
                                                              
                                       
                   
                 
                      
                 
                                                           
                                                                            
                                                                                
                                     
                 
               
                    
               
                                                         
                                                                          
                                                                              
                                   
               
             
                  
             
                                                       
                                                                        
                                                                            
                                 
             
           
                                
                                          
         
       
     
                      
       
                                        
       
                           
                                       
                              
             
                                 
             
           
         
       
                    
     
                      
   
 
/* #pragma merger("0","001.compare.o.i","") */
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcmp)(void const *__s1, void const *__s2, size_t __n)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncmp)(char const *__s1, char const *__s2, size_t __n)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
ssize_t(__attribute__((__nonnull__(1, 2), __leaf__))
        readlink)(char const *__restrict __path, char *__restrict __buf,
                  size_t __len);
extern int fsync(int __fd);
extern int vfprintf(FILE *__restrict __s, char const *__restrict __format,
                    __gnuc_va_list __arg);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     utime)(char const *__file,
                                            struct utimbuf const *__file_times);
__attribute__((__noreturn__)) void xalloc_die(void);
int exit_status;
                            
_Bool dereference_option;
void diff_archive(void);
void diff_init(void);
char *get_directory_contents(char *path, dev_t device);
union block *current_header;
enum archive_format current_format;
void decode_header(union block *header, struct tar_stat_info *stat_info,
                   enum archive_format *format_pointer, int do_user_group);
void print_header(struct tar_stat_info *st, off_t block_ordinal);
enum read_header read_header(_Bool raw_extended_headers);
void skip_member(void);
int deref_stat(_Bool deref, char const *name, struct stat *buf);
void readlink_error(char const *name);
void readlink_warn(char const *name);
void seek_error_details(char const *name, off_t offset);
void seek_warn(char const *name);
void stat_error(char const *name);
void stat_warn(char const *name);
_Bool sys_compare_uid(struct stat *a, struct stat *b);
_Bool sys_compare_gid(struct stat *a, struct stat *b);
_Bool sys_compare_links(struct stat *link_data, struct stat *stat_data);
void report_difference(struct tar_stat_info *st __attribute__((__unused__)),
                       char const *fmt, ...);
_Bool sparse_diff_file(int fd, struct tar_stat_info *st);
static int diff_handle;
                         
                      
            
   
     
                                
                                
     
                       
       
                     
       
     
           
   
 
                                                                            
                                              
             
            
   
              
       
                                                                        
                                                  
                                                              
                                    
                                                   
                                                          
                             
                                                  
                                                       
       
     
                           
                      
     
           
   
 
                                                                
                                                                 
                  
 
                                                            
                
             
                
                
              
                   
   
     
                                                               
                   
     
                          
                                           
         
                                                                
                                                                           
         
              
         
                                                               
                                                                        
                                                                              
                                   
         
       
                 
     
     
               
                                                                             
     
                  
       
                                             
                                                                     
       
                 
     
               
   
 
                            
                                                            
            
              
                   
   
     
               
                                                                                
     
                  
       
                                         
                                                                 
       
                 
     
                            
               
   
 
                                                                            
                          
                   
            
              
                   
   
                              
                           
     
     
                 
                                      
                    
                           
         
                                           
                          
           
                                                       
                                           
                            
           
                 
         
                                                          
                                       
                                   
         
                                                                  
                       
                                    
         
         
                               
                                                                     
                                                   
         
                                  
                                                                     
         
       
                                 
     
           
   
 
static int get_stat_data(char const *file_name, struct stat *stat_data) {
  int status;
  int tmp;
  int *tmp___0;
  {
     
                                                                 
                   
     
                      
       
                                     
       
                          
         
                               
         
              
                                   
       
                                                                           
                 
     
    return (1);
  }
}
void diff_archive(void) {
  struct stat stat_data;
  int status;
  struct utimbuf restore_times;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  int tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  _Bool tmp___6;
  char *tmp___7;
  _Bool tmp___8;
  char *tmp___9;
  char *tmp___10;
  struct stat file_data;
  struct stat link_data;
  int tmp___11;
  int tmp___12;
  char const *tmp___13;
  char *tmp___14;
  _Bool tmp___15;
  size_t len;
  size_t tmp___16;
  char *linkbuf;
  void *tmp___17;
  ssize_t tmp___18;
  int *tmp___19;
  char *tmp___20;
  int tmp___21;
  int tmp___22;
  char *tmp___23;
  char *tmp___24;
  char *tmp___25;
  char *dumpdir_buffer;
  char *tmp___26;
  int tmp___27;
  char *tmp___28;
  char *tmp___29;
  off_t offset;
  int tmp___30;
  char *tmp___31;
  char *tmp___32;
  __off_t tmp___33;
  int tmp___34;
  int tmp___35;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
     
                                           
                                                                            
     
                         
                          
         
                                   
                                                    
                                                       
         
       
                                                      
     
     
                                                      
                    
       
                                                       
                    
       
                                                       
                    
       
                                                       
                    
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                        
       
                                                       
                     
       
                                                       
                     
       
                          
                                    
     
                                                                          
                                                                               
                                                 
                                                  
                      
     
                            
                            
                             
                             
                                                  
                        
       
       
                                                                          
                                            
       
                     
         
                        
         
                  
       
                                                      
         
                                                 
                                                                       
                        
         
                  
       
                                           
                                
                                                                  
                                                                      
                                                                           
                              
                                
                                                                  
                                                                      
                                                                           
         
                                            
                                                                       
         
       
                                                                         
                     
         
                                           
                                                                       
         
       
                                                                         
                     
         
                                           
                                                                       
         
       
                                                                              
         
                                                
                                                                       
         
       
                                                       
                                                                  
           
                                               
                                                                          
                          
           
                    
         
       
                                                                           
                            
         
                                                                
                        
                                                                           
         
                  
       
                                                      
                                                       
                                        
         
                                                            
         
              
                                  
           
                                     
                                                                     
                                                          
           
         
                                                                               
                                  
           
                                                       
           
         
       
                                      
                        
         
                                                                 
         
       
                                  
         
                                                          
                                                          
         
       
         
                        
                             
     
                
                                                                               
     
                      
                          
       
       
                                                                           
                                             
       
                      
                          
       
                                                               
                      
         
                                                                      
                                                 
                                                                       
                                      
         
       
                        
                             
     
                                                                   
                     
                                             
                                 
                
                                                                               
                                                                 
                             
     
                       
         
                                        
         
                             
           
                                                                     
           
                
                                                                         
         
                                                                             
              
                                    
           
                                                  
                                                                          
           
                
           
                                                                         
                                                           
           
                              
             
                                                    
                                                                            
             
           
         
       
                        
                             
                             
                              
      
                
                                                                               
     
                      
                          
       
                                                       
                                                            
              
                                                         
                                                               
                
                                                              
         
                            
       
                     
         
                                                  
                                                                        
         
                          
       
                                                       
                    
              
                                                         
                               
                                                                    
             
                                                          
                                                                            
             
                              
           
         
       
                                           
                                
                                                                  
                                                                      
                                                                           
                              
                                
                                                                  
                                                                      
                                                                           
         
                                             
                                                                        
         
                          
       
                        
                             
     
                                                                               
                                
     
                                
         
                                                                               
                                                        
         
       
                           
         
                                          
                                                                             
                                       
         
              
                                                                             
       
                                
         
                                                     
         
       
               
                             
      
                
                                                                               
     
                      
                          
       
                                                      
         
                                                  
                                                                        
         
                          
       
                                           
                                
                                                                  
                                                                      
                                                                           
                              
                                
                                                                  
                                                                      
                                                                           
         
                                             
                                                                        
         
                          
       
                        
                            
                        
                            
                                                 
                        
       
       
                                                                           
                                             
       
                      
                          
       
                                                      
         
                                                  
                                                                        
                        
         
                          
       
       
                                 
                                                                 
                                                          
       
                                                                         
         
                                             
                                                                        
                        
         
                          
       
                                                                           
                            
         
                                                                
                                                                           
                        
         
                          
       
                                                   
                          
         
                                                                                
                                                                           
         
                          
       
                                
         
                                                                               
                                           
         
       
                                                                             
                                
         
                                                     
         
       
                                      
                        
         
                                                                 
         
       
                        
                                  
     
           
   
}
void verify_volume(void) {
  struct mtop operation;
  int status;
  off_t tmp;
  __off_t tmp___0;
  off_t tmp___1;
  int *tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  enum read_header status___0;
  enum read_header tmp___7;
  int counter;
  char *tmp___8;
   
                       
       
                    
       
     
     
                     
                                                                    
                                 
                             
     
                             
       
                              
                                
                                                                           
                                       
                                               
                                  
                         
       
            
       
                        
                    
                                                                           
                                            
                                  
                         
       
     
                     
       
                                     
       
                          
                
              
                                 
           
                                  
                                    
                                                                               
                                           
                                                   
                                      
                             
           
                
           
                            
                        
                                                                               
                                                
                                      
                             
           
         
                         
           
                                   
             
                                                                  
                            
             
                  
             
                                                    
                                
             
           
                              
             
                                                   
             
                   
           
         
       
     
     
                                        
                               
                   
     
     
                 
                                      
         
                                          
                               
         
                                             
                      
           
                       
                                                
               
                          
                                                   
               
                                                      
                                     
               
             
                                           
           
           
                                                                            
                                                                             
                                                       
                                                        
                            
           
         
                                             
                           
                
                                               
                             
           
         
                           
       
                                 
     
                                      
                             
           
   
}
/* #pragma merger("0","002.create.o.i","") */
extern __attribute__((__nothrow__)) unsigned int(
    __attribute__((__leaf__)) gnu_dev_major)(unsigned long long __dev)
    __attribute__((__const__));
extern __attribute__((__nothrow__)) unsigned int(
    __attribute__((__leaf__)) gnu_dev_minor)(unsigned long long __dev)
    __attribute__((__const__));
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncpy)(char *__restrict __dest, char const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strdup)(char const *__s)
    __attribute__((__malloc__));
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fstat)(int __fd, struct stat *__buf);
extern __attribute__((__nothrow__))
__uid_t(__attribute__((__leaf__)) getuid)(void);
extern __attribute__((__nothrow__))
__gid_t(__attribute__((__leaf__)) getgid)(void);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     unlink)(char const *__name);
char *savedir(char const *dir);
void *xrealloc(void *p, size_t n);
mode_t mode_adjust(mode_t oldmode, struct mode_change const *changes);
                                   
                      
                   
                                
                         
                         
char const *listed_incremental_option;
struct mode_change *mode_option;
                                   
int recursion_option;
                           
                             
                   
                          
                    
_Bool file_dumpable_p(struct tar_stat_info *st);
void create_archive(void);
void pad_archive(off_t size_left);
void dump_file(char *p, int top_level, dev_t parent_device);
union block *start_header(struct tar_stat_info *st);
void simple_finish_header(union block *header);
union block *start_private_header(char const *name, size_t size);
void write_eot(void);
void check_links(void);
void gid_to_chars(gid_t v, char *p, size_t s);
void major_to_chars(int v, char *p, size_t s);
void minor_to_chars(int v, char *p, size_t s);
void mode_to_chars(mode_t v, char *p, size_t s);
void size_to_chars(size_t v, char *p, size_t s);
void uid_to_chars(uid_t v, char *p, size_t s);
void uintmax_to_chars(uintmax_t v, char *p, size_t s);
void string_to_chars(char *str, char *p, size_t s);
void write_directory_file(void);
                               
void close_diag(char const *name);
void open_diag(char const *name);
void read_diag_details(char const *name, off_t offset, size_t size);
void readlink_diag(char const *name);
void savedir_diag(char const *name);
void stat_diag(char const *name);
void unlink_error(char const *name);
struct name *gnu_list_name;
void gid_to_gname(gid_t gid, char **gname);
int gname_to_gid(char const *gname, gid_t *gidp);
void uid_to_uname(uid_t uid, char **uname);
int uname_to_uid(char const *uname, uid_t *uidp);
char *name_next(int change_dirs);
void collect_and_sort_names(void);
char *name_from_list(void);
void blank_name_list(void);
_Bool excluded_name(char const *name);
_Bool is_avoided_name(char const *name);
int confirm(char const *message_action, char const *message_name);
void tar_stat_init(struct tar_stat_info *st);
void xheader_store(char const *keyword, struct tar_stat_info const *st,
                   void *data);
void xheader_write(char type, char *name, struct xheader *xhdr);
void xheader_write_global(void);
void xheader_finish(struct xheader *xhdr);
char *xheader_xhdr_name(struct tar_stat_info *st);
void sys_stat_nanoseconds(struct tar_stat_info *st);
_Bool sys_file_is_archive(struct tar_stat_info *p);
_Bool sparse_file_p(struct tar_stat_info *st);
enum dump_status sparse_dump_file(int fd, struct tar_stat_info *st);
_Bool string_ascii_p(char const *str);
void *hash_lookup(Hash_table const *table___0, void const *entry);
void *hash_get_first(Hash_table const *table___0);
void *hash_get_next(Hash_table const *table___0, void const *entry);
Hash_table *hash_initialize(size_t candidate, Hash_tuning const *tuning,
                            size_t (*hasher)(void const *, size_t),
                            _Bool (*comparator)(void const *, void const *),
                            void (*data_freer)(void *));
void *hash_insert(Hash_table *table___0, void const *entry);
static void to_octal(uintmax_t value, char *where, size_t size) {
  uintmax_t v;
  size_t i;
  {
    v = value;
    i = size;
    {
      while (1) {
                                     ;
        i--;
        *(where + i) = (char)(48UL + (v & (unsigned long)((1 << 3) - 1)));
        v >>= 3;
        if (!i) {
          goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
           
  }
}
                                                                  
                                     
              
                                 
           
   
              
                                                                             
             
     
                 
                                      
            
                                                                 
                                            
                 
                           
         
       
                                 
     
           
   
 
                       
static void to_chars(int negative, uintmax_t value, size_t valsize,
                     uintmax_t (*substitute)(int *), char *where, size_t size,
                     char const *type) {
  int base256_allowed;
  char *tmp;
  uintmax_t maxval;
  char valbuf[((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL) +
              1UL];
  char maxbuf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  char minbuf[((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL) +
              1UL];
  char const *minval_string;
  char const *maxval_string;
  char *tmp___0;
  char const *value_string;
  uintmax_t m;
  char *p;
  char *tmp___1;
  char *p___0;
  char *tmp___2;
  char *tmp___3;
  int negsub;
  uintmax_t sub;
  uintmax_t tmp___4;
  uintmax_t s;
  char subbuf[((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL) +
              1UL];
  char *sub_string;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  int tmp___8;
  int tmp___9;
  unsigned long tmp___10;
  unsigned long tmp___11;
  unsigned long tmp___12;
  unsigned long tmp___13;
  unsigned long tmp___14;
  unsigned long tmp___15;
                    
                    
                    
                    
                    
                    
                    
                    
  {
                                             
                  
            
                                               
                    
              
                    
       
     
                              
    if (!negative) {
                                                         
                                                     
              
                                 
       
                             {
         
                                                 
          to_octal(value, where, size - 1UL);
         
      }                                            
                    
       
    } else {
    _L___5: /* CIL Label */
                                                                   {
                                                
      }       
                         
       
                                                         
                                                     
              
                                 
       
                                 
                              
                         
                         
                  
                             
           
           
                                         
                                                               
           
                
                      
         
              
                             
                       
                                                    
                               
               
                                
                                                                   
                                               
               
             
                                                   
                                                          
                                                      
                    
                                       
             
                                                              
                  
                        
           
                
                               
                                
                                                               
                                                           
                    
                                       
             
                              
                  
                                                               
                                                           
                    
                                       
             
                              
           
           
                                                    
                       
                                                                                
                                
                                                  
           
                                
                               
                               
                    
                                     
             
             
                                                      
                                   
                                                                                
                                
                          
                  
                             
                                              
             
                  
                                
           
                         
             
                                                      
                         
                                
                                                                             
                             
                              
                      
                                 
                                                 
             
                  
             
                                                      
                        
                          
                                                                             
                             
                                                   
             
           
                           
             
                                               
                                     
                                                           
             
                         
                       
                    
                      
             
             
                                                      
                                   
                                                                                
                                
                                   
             
                         
                           
                                      
             
             
                       
                                                                              
                                                                    
                                                              
                                                                               
                             
             
                  
             
                                                                   
                                                                    
                                                  
                              
             
           
         
       
    }
           
  }
}
static gid_t gid_nobody;
                                                
          
          
                   
   
                      
       
                                                  
       
                 
                               
       
     
                   
                       
                          
   
 
void gid_to_chars(gid_t v, char *p, size_t s) {
                   
   
     
                                                                                
     
           
   
}
                                               
                   
   
     
                                                                            
                          
     
           
   
 
void minor_to_chars(int v, char *p, size_t s) {
                   
   
     
                                                                            
                          
     
           
   
}
                                                 
               
              
          
              
              
              
              
              
              
              
              
              
              
               
                    
   
                         
                           
                           
                                     
                                       
                                        
                                                         
                                                           
                                                             
                                        
                                       
                            
                                   
                     
                          
                                 
                   
                        
                               
                 
                      
                             
               
                    
                           
             
                  
                         
           
                
                       
         
              
                     
       
            
                            
                   
                      
                   
              
                
       
                      
                       
              
                    
       
                     
                      
              
                    
       
                     
                      
              
                    
       
                     
                      
              
                    
       
                    
                     
              
                    
       
                                         
                     
              
                    
       
                                         
                     
              
                    
       
                                        
                    
              
                    
       
                                                
                    
              
                    
       
                                                
                    
              
                    
       
                                               
                     
              
                     
       
                      
                                                                                
                         
                        
                       
                      
                     
                    
     
     
                                                                               
     
           
   
 
void off_to_chars(off_t v, char *p, size_t s) {
                   
   
    {
      to_chars(v < 0L, (uintmax_t)v, sizeof(v), (uintmax_t(*)(int *))0, p, s,
               "off_t");
    }
           
   
}
                                                 
                   
   
                                                                          
           
   
 
                                                 
                   
   
     
                                                                             
                         
     
           
   
 
                        
                                                
          
          
                   
   
                      
       
                                                  
       
                 
                               
       
     
                   
                       
                          
   
 
                                               
                   
   
     
                                                                                
     
           
   
 
                                                       
                   
   
                                                                                                       
           
   
 
                                                    
   
     
                                                                               
                 
                                 
     
           
   
 
                                                 
          
   
                          
              
            
                                        
                               
                                                                       
                                                                     
                  
                
                  
         
              
                
       
     
                        
   
 
                      
                       
                   
                 
   
     
                              
                    
                                                        
                                    
                                  
                                               
                                                    
                                    
     
           
   
 
static void tar_copy_str(char *dst, char const *src, size_t len) {
   
    {
                                     
      strncpy((char * /* __restrict  */)dst,
              (char const * /* __restrict  */)src, len);
    }
           
   
}
                                                                  
           
                      
                   
                  
                  
                   
                   
   
     
                              
                   
                                                               
                                                           
                                                    
                                                
               
                                                                           
                                                                       
                                                                      
                         
                                                                            
                         
                                                                            
                                                
                                                      
                                                
                                                      
                                                               
                                                                   
                                                                 
                                                                
     
                    
   
 
static union block *write_short_name(struct tar_stat_info *st) {
  union block *header;
  union block *tmp;
  {
    {
      tmp = find_next_block();
      header = tmp;
                                                               
      tar_copy_str(header->header.name, (char const *)st->file_name,
                   (size_t)100);
    }
    return (header);
  }
}
static void write_gnu_long_link(struct tar_stat_info *st, char const *p,
                                char type) {
  size_t size;
  size_t tmp;
  size_t bufsize;
  union block *header;
                   
                   
   
     
                      
                       
                                                           
                                                              
                                                         
                                     
                                           
                                 
                                              
     
     
                 
                                      
                                
                           
         
         
                                                            
                                                             
                       
                          
                                                                 
                                     
                                                  
         
       
                                 
     
     
                                                        
                                                      
                                                                 
                                                          
     
           
   
}
                                                                
           
   
                         
                           
     
                     
     
                 
                                      
                         
                           
         
                                             
                           
         
            
       
                                 
     
               
   
 
static union block *write_ustar_long_name(char const *name) {
  size_t length;
  size_t tmp;
  size_t i;
  union block *header;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
                    
                    
                    
  {
    {
      tmp = strlen(name);
                   
    }
                        {
       
                                       
                                                                            
                                                         
                        
       
      return ((union block *)((void *)0));
    }
                                          
                   
       
                                       
                 
                                                                               
                                                    
                        
       
                                          
            
                                       
         
                                         
                            
                                                                         
                                                      
                          
         
                                            
       
     
     
                                 
                                                                  
                                                               
                                                      
                                                             
                                                              
                                 
     
                    
  }
}
                                                       
            
                
                   
                   
   
     
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                          
                            
     
                                                                             
     
                        
                            
                            
                             
      
                                                        
                                                                 
                                              
                      
     
                        
                            
                            
      
                                                                      
     
                        
                                    
     
              
     
                                  
     
           
   
 
                                                               
            
                
                 
                       
                       
                   
                   
   
     
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                          
                            
     
                                                                         
     
                        
                            
     
                                                    
     
                           
         
                                                            
                                                                              
                                                      
                          
         
                                            
       
                        
                            
                            
                                                 
                                                                   
     
                       
                            
                            
      
                                                                      
     
                        
                                    
     
              
     
                                  
     
                                       
                     
   
 
                                                            
                                                             
                      
                 
          
                   
                   
                   
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                  
                    
                    
                    
                    
                  
                    
                    
                    
                    
                    
                    
                  
                    
                    
                    
                    
                    
                    
                    
                    
                    
                  
                    
                    
   
                                 
                          
                     
                                                                             
                            
       
     
     
                                       
                                                   
                                                                     
                                
                                                    
                      
                                 
                                              
                                                                              
     
                    
   
 
static union block *write_header_name(struct tar_stat_info *st) {
  union block *tmp;
  union block *tmp___0;
  union block *tmp___1;
  size_t tmp___2;
  _Bool tmp___3;
                   
  {
                                             
       
                                                              
       
                    
                
              
         
                                                                             
                                     
         
                     
       
            
    _L :                                                {                                                }
                            
         
                                        
         
                         
             {
        { tmp___1 = write_short_name(st); }
        return (tmp___1);
      }
     
  }
}
union block *start_header(struct tar_stat_info *st) {
  union block *header;
  mode_t tmp;
  size_t tmp___0;
  _Bool tmp___1;
  size_t tmp___2;
  _Bool tmp___3;
  int tmp___4;
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    { header = write_header_name(st); }
                  
                                          
     
                                      
                                     
     
                                      
                                     
     
                      
       
                                           
                                                                   
                          
                               
                                    
                                                                      
                                                                          
                                                                               
                
       
     
                                             
       
                      
                              
                                     
                                                                       
                                                                           
                                                                             
                                                              
       
            
                                               
         
                        
                                
                                       
                                                                         
                                                                             
                                                                               
                                                                
         
              
         
                                                              
                                                     
         
       
     
                                     
                                               
         
                                                                            
         
              
         
                                                           
                                                   
         
       
            
       
                                                         
                                                 
       
     
                                     
                                               
         
                                                                            
         
              
         
                                                           
                                                   
         
       
            
       
                                                         
                                                 
       
     
                                        {
                                               
         
                                                                             
         
              
         
          off_to_chars(st->stat.st_size, header->header.size,
                       sizeof(header->header.size));
         
       
    }       
       
                                                           
                                                  
       
     
     
                                                                  
                                                  
     
                                               
                  
            
                                                  
                              
       
                                                                           
                                                                           
       
                                      
                                                   
             
                                                                         
                                       
             
                  
             
                                                                        
                                                              
             
           
                
           
                                                                      
                                                            
           
         
                                      
                                                   
             
                                                                         
                                       
             
                  
             
                                                                        
                                                              
             
           
                
           
                                                                      
                                                            
           
         
              
         
                                                    
                                                          
                                                    
                                                          
         
       
     
                                             
       
                                                                            
                                                                            
       
            
                               
                                                 
           
                                                                               
                                                               
                                                                               
                                                               
           
                
                                                   
             
                                                    
                                                        
                                                                 
                                                    
                                                        
                                                                 
             
           
         
       
     
                                             
                       
            
                    
     
                                            
     
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                          
                           
                        
                            
                            
      
                                                              
                                                         
     
                        
                            
                            
      
                                                               
                                                                   
                                                                 
                                                                
     
                        
                                    
     
              
     
                                  
     
                                                
                                  
         
                                                    
                                                    
         
                                                 
           
                                                      
           
                               
             
                                                                      
                                       
             
                  
                                                                  
                          
               
                                                                
                                                              
               
                    
               
                                                                        
                                         
               
             
           
                
           
                                                            
                                                          
           
         
                                                 
           
                                                      
           
                               
             
                                                                      
                                       
             
                  
                                                                  
                          
               
                                                                
                                                              
               
                    
               
                                                                        
                                         
               
             
           
                
           
                                                            
                                                          
           
         
       
     
    return (header);
  }
}
void simple_finish_header(union block *header) {
  size_t i;
  int sum;
  char *p;
  char *tmp;
  size_t tmp___0;
                   
  {
    {
                                                               
                                                         
                                            
              
                         
                          
    }
     
                 
                                      
                    
            
                                
                           
         
                
            
                               
       
                                 
     
    {
                                                                         
      set_next_block_after(header);
    }
           
  }
}
void finish_header(struct tar_stat_info *st, union block *header,
                   off_t block_ordinal) {
   
                         
                                               
                                                 
                                                    
                                                      
               
                                        
                                                
                                                
               
             
           
         
       
     
    {
                                          
      simple_finish_header(header);
    }
           
   
}
                                   
                   
   
     
                 
                                      
                                
                           
         
         
                                    
                                  
                                                        
                                    
                            
         
       
                                 
     
           
   
 
static enum dump_status dump_regular_file(int fd, struct tar_stat_info *st) {
  off_t size_left;
  off_t block_ordinal;
  union block *blk;
  size_t bufsize;
  size_t count;
  size_t tmp;
  char buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
                    
  {
    {
      size_left = st->stat.st_size;
      block_ordinal = current_block_ordinal();
      blk = start_header(st);
    }
               
                                   
     
                                             
     
    { finish_header(st, blk, block_ordinal); }
    {
                {
                                     ;
        if (!(size_left > 0L)) {
          goto while_break;
        }
                                  
           
                                                                   
                                      
                                            
           
         
        {
          blk = find_next_block();
                                               
        }
                                         {
          bufsize = (size_t)size_left;
                                  
                      
             
                                                                          
             
           
        }
                     
                          
               {
           
            tmp = safe_read(fd, (void *)(blk->buffer), bufsize);
            count = tmp;
           
        }
                                            
           
                                                               
                                                                     
                                   
           
                                       
         
        {
                                                         
          set_next_block_after(blk + (bufsize - 1UL) / 512UL);
        }
                              {
           
                                                                      
                                                    
                                     
                                                                             
                             
                                                                       
                     
                                                                          
                                                                           
                                                   
                                                                 
           
                                           
                            
           
                                     
          return ((enum dump_status)1);
        }
      }
    while_break: /* CIL Label */;
    }
                                 
  }
}
static void dump_regular_finish(int fd, struct tar_stat_info *st,
                                time_t original_ctime) {
  struct stat final_stat;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
                    
                    
   
                  
       
                                         
       
                         
         
                                                      
         
              
                                                          
           
                                                                   
                                                                
                                                    
           
         
       
                              
                         
         
                                                       
         
       
     
                              
       
                                                           
       
                          
         
                                                         
         
       
     
           
   
}
static void dump_dir0(char *directory, struct tar_stat_info *st, int top_level,
                      dev_t parent_device) {
  dev_t our_device;
  union block *blk;
  off_t block_ordinal;
  off_t tmp;
  off_t size_left;
  off_t totsize;
  size_t bufsize;
  ssize_t count;
  char const *buffer___2;
  char const *p_buffer;
  size_t size;
  size_t tmp___0;
  _Bool tmp___1;
  char *tmp___2;
  char *tmp___3;
  char const *entry;
  size_t entry_len;
  char *name_buf;
  char *tmp___4;
  size_t name_size;
  size_t tmp___5;
  size_t name_len;
  void *tmp___6;
  _Bool tmp___7;
                    
  {
     
                                   
                                                                  
     
                   
       
                                         
                                      
                            
                                      
                               
       
                 
               
       
                               
                                         
              
                                         
       
                                
         
                                                
         
              
                                          
           
                                                    
                                                     
                               
           
                           
                                  
             
                         
                                              
                                 
                                   
                 
                 
                                             
                                       
                                                            
                                   
                 
               
                                         
             
           
           
                      
                                                                              
                                                  
                                  
                                
           
           
                       
                                                
                                      
                                     
               
                                        
                 
                                                                              
                                            
                                         
                 
               
               
                                        
                                                     
               
                                                
                                            
                                                   
                            
                   
                                                                
                                                   
                   
                 
               
               
                                                               
                                                                          
                                                                 
                                    
                                                                    
               
             
                                           
           
                                    
             
                                                         
             
           
                 
         
       
     
                            
             
     
                                 
                       
                                               
                               
             
                                                                         
                       
                                                                               
                                                          
             
           
                 
         
       
     
     
      tmp___4 = strdup((char const *)st->orig_file_name);
      name_buf = tmp___4;
                                               
                          
                           
                                      
     
     
                 
                                          
                                      
                                  
                               
         
                                               
           
                                             
                                                                  
                                       
           
         
         
                                                                 
                                                        
                                                          
         
                       
           
                                               
           
         
                                 
       
                                     
     
                               
           
  }
}
static void ensure_slash(char **pstr) {
  size_t len;
  size_t tmp;
  void *tmp___0;
  size_t tmp___1;
   
     
                                        
                
     
     
                 
                                      
                         
                                                     
                             
           
                
                           
         
              
       
                                 
     
                                       
       
                                                     
                                
       
     
                  
          
                                   
                                  
           
   
}
static _Bool dump_dir(struct tar_stat_info *st, int top_level,
                      dev_t parent_device) {
  char *directory;
  {
                                                              
                     
       
                                                       
       
                        
     
    {
                                        
      ensure_slash(&st->file_name);
                                                         
                              
    }
    return ((_Bool)1);
  }
}
void create_archive(void) {
  char *p;
  size_t buffer_size;
  char *buffer___2;
  void *tmp;
  char const *q;
  _Bool tmp___0;
  size_t plen;
  size_t tmp___1;
  void *tmp___2;
  size_t tmp___3;
  size_t qlen;
  size_t tmp___4;
  void *tmp___5;
  _Bool tmp___6;
  _Bool tmp___7;
  {
    {
      open_archive((enum access_mode)1);
                             
    }
                            {
      {
                                   
                                   
                                 
        collect_and_sort_names();
      }
      {
        while (1) {
                                       ;
          { p = name_from_list(); }
          if (!((unsigned long)p != (unsigned long)((void *)0))) {
            goto while_break;
          }
          {                                           }
                        {
             
              dump_file(p, -1, (dev_t)0);
             
          }
        }
      while_break: /* CIL Label */;
      }
                            
       
                   
                                            
                                   
                                                                  
                                 
           
                                                       
                         
             
                                                
                             
             
                                      
               
                           
                                                    
                                     
                                               
                                         
                   
                                          
                 
                                               
               
               
                                                                    
                                             
               
             
             
                                                          
                                                              
             
                                                             
                             
                     
                                                  
             
                                            
                    
               
                           
                                                    
                            
                                         
                   
                   
                                        
                                   
                   
                                              
                                                    
                       
                                   
                                                            
                                             
                                                             
                                                 
                           
                                                  
                         
                                                       
                       
                       
                                                                            
                                                     
                       
                     
                     
                                                                           
                                                                      
                                                          
                     
                   
                                  
                 
                                               
               
             
           
         
                                       
       
                                   
    }       
       
                   
                                            
                               
                                                                  
                                 
           
                                                       
                         
             
                                        
             
           
         
                                       
       
     
    {
                  
      close_archive();
    }
                                    
       
                               
       
     
           
  }
}
static unsigned int hash_link(void const *entry, unsigned int n_buckets) {
  struct link const *l;
  uintmax_t num;
  {
    l = (struct link const *)entry;
    num = (uintmax_t)(l->dev ^ l->ino);
    return ((unsigned int)(num % (unsigned long)n_buckets));
  }
}
static _Bool compare_links(void const *entry1, void const *entry2) {
  struct link const *link1;
  struct link const *link2;
  {
    link1 = (struct link const *)entry1;
    link2 = (struct link const *)entry2;
    return ((_Bool)(((link1->dev ^ link2->dev) | (link1->ino ^ link2->ino)) ==
                    0UL));
  }
}
                                         
            
                
                   
   
     
                                            
                                                               
                                              
     
                                     
                      
     
           
   
 
                              
                                                       
                 
                         
                      
                   
                        
            
                 
              
                
                    
   
                     
                                    
         
                                   
                                   
                   
                                                                               
                                             
         
                        
           
                                                                               
                                          
                                 
                                                    
                                                     
                                        
           
                                
             
                                  
             
           
           
                                          
                                   
           
                     
                              
           
           
                                                                       
                                             
                                                  
           
                                    
             
                                                                 
             
                               
               
                                                               
               
             
           
                            
         
       
     
                      
   
 
                                                        
                         
                  
             
                
                
   
                                  
       
                                                       
                 
                                                                              
                                    
                                  
                                  
                                      
                                                    
                                                                   
       
                       
                
              
         
                      
                                                                
                                                                            
                                                                   
         
                         
              
                                                              
                                             
         
                           
             
                           
             
           
                
                            
         
       
                                                          
         
                  
         
       
                    
     
           
   
 
void check_links(void) {
  struct link *lp;
  void *tmp;
  void *tmp___0;
  char *tmp___1;
                   
   
                      
             
     
     
                                                           
                              
     
     
                 
                                      
                  
                           
         
                        
           
                                                            
                                                         
           
         
         
                   
                                                                              
                                      
         
       
                                 
     
           
   
}
static void dump_file0(struct tar_stat_info *st, char *p, int top_level,
                       dev_t parent_device) {
  union block *header;
  char type;
  time_t original_ctime;
  struct utimbuf restore_times;
  off_t block_ordinal;
  int tmp;
  char *tmp___0;
  int tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  _Bool tmp___6;
  _Bool tmp___7;
  int fd;
  enum dump_status status;
  char *tmp___8;
  char *tmp___9;
  int *tmp___10;
  _Bool tmp___11;
  _Bool tmp___12;
  char *buffer___2;
  int size;
  size_t linklen;
  void *tmp___13;
  ssize_t tmp___14;
  int tmp___15;
  char *tmp___16;
  char *tmp___17;
  _Bool tmp___20;
  unsigned int tmp___21;
  unsigned int tmp___22;
  int tmp___23;
                    
                    
                    
                    
                    
  {
                              
                             
       
                                              
       
                 
               
       
     
    {
      assign_string(&st->orig_file_name, (char const *)p);
      tmp___0 = safer_name_suffix((char const *)p, (_Bool)0);
      assign_string(&st->file_name, (char const *)tmp___0);
      tmp___1 = deref_stat(dereference_option, (char const *)p, &st->stat);
    }
                       
       
                                   
       
             
     
    {
                                               
                               
                                               
                                                     
                                                      
    }
                                                   
                                                                
                    
              
                                                                   
                                                                      
                                 
                                     
                          
                    
                                                                        
                            
                      
                                                                           
                                                                              
                                         
                                        
                       
                                                                  
                                                                               
                                                                    
                       
                     
                           
                   
                 
               
             
           
         
       
     
                                          
                  
       
                                                  
                                                                 
                                                    
       
             
     
    if ((st->stat.st_mode & 61440U) == 16384U) {
       
        dump_dir(st, top_level, parent_device);
       
                                  
         
                                                                           
         
       
             
    } else {
                                                      
                     
               
             {
                                         
                      
                 
         
                                                    
                      
                
                 {
                                  
                           
                                           
           
                          {
               
                fd = open((char const *)st->orig_file_name, 0);
               
                           
                                 
                   
                                                  
                   
                                       
                     
                               
                                                                           
                                                                              
                                                                  
                     
                          
                                                                     
                   
                        
                                                                   
                 
                       
               
            }       
                      
             
                               {
               
                                             
               
                             
                 
                                                    
                 
                                                 
                   
                                                       
                   
                 
                     {
                   status = dump_regular_file(fd, st);  
              }
            }       
                                                      
             
             
                                               
                            
               
                                               
                            
               
                                               
                            
               
                                               
                            
               
                                
                                   
                                        
                 
                                                             
                 
               
                                                              
                                
                                   
                                        
                 
                                                             
                 
               
                            
                                
                                    
             
                        
             
                     
                                    
             
                      
             
                                          
             
                                        
               
                                                       
                                                                
               
             
                                     
                   
          }                                                      
                                                        
                                                 
                                                        
                 
                               
                 
                      
                                           
                   
                                 
                   
                 
               
               
                                                           
                                              
                                                                      
                                                                         
                                                   
                                     
               
                             
                 
                                                 
                 
                       
               
               
                                                    
                                                                        
               
                               
                 
                                      
                 
               
               
                                                        
                                              
                                          
               
                            
                       
               
               
                                                                               
                                          
                                                    
                                                         
               
                                        
                 
                                                     
                 
                                     
                   
                                                  
                   
                 
               
                                       
                     
                    
                                                         
                                 
                      
                                                            
                                   
                        
                                                             
                                     
                          
                                                                
                       
                                                                   
                                                                 
                                                                      
                       
                             
                            
                                                
                             
                     
                   
                 
               
             
           
         
      }
    }
                                             
       
                              
       
             
     
     
                                              
                                    
                                
     
                  
             
     
                                   
                          
       
                                                                       
                                                              
                                                        
                                                                       
                                                              
                                                        
       
     
                                                 
                              
       
                                           
       
                           
         
                                        
         
       
     
           
  }
}
void dump_file(char *p, int top_level, dev_t parent_device) {
  struct tar_stat_info st;
                   
  {
    {
      tar_stat_init(&st);
      dump_file0(&st, p, top_level, parent_device);
                            
    }
           
  }
}
/* #pragma merger("0","003.delete.o.i","") */
                          
                            
void delete_archive_members(void);
size_t recent_long_name_blocks;
size_t recent_long_link_blocks;
void truncate_warn(char const *name);
void name_gather(void);
void names_notfound(void);
struct name *name_scan(char const *path);
void xheader_decode(struct tar_stat_info *st);
int sys_truncate(int fd);
                               
                      
                              
                              
                              
                             
                                       
                        
          
              
              
               
              
              
              
              
                  
                
                  
                
                  
                 
                 
                   
                 
   
                      
             
     
                     
                                 
                                         
                                                    
            
                                 
                                      
                                                   
     
                  
                               
         
                            
                                  
                                                                             
                                         
                                                 
                                    
                        
         
              
         
                          
                      
                                                                             
                                              
                                    
                            
         
       
                         
               
       
                                       
                          
                                 
           
                                  
                                    
                                                                               
                                           
                                                   
                                      
                              
           
                
           
                            
                        
                                                                               
                                                
                                      
                              
           
         
                           
                 
         
       
     
                             
       
                                                                
                          
       
            
       
                                              
                          
       
     
                        
                                                     
                                     
                                                     
       
                                                                
       
            
                                                       
         
                                                                  
         
              
                            
                              
                
                              
         
                                 
           
                                                                     
                                
           
                
           
                                                   
                                
           
         
                                   
           
                                                                    
           
         
       
     
           
   
 
                                              
                           
   
                               
                              
                           
       
                    
                      
                    
       
            
       
                                                                         
                      
       
     
                               
                         
                              
         
                                                                           
         
       
     
                   
           
   
 
                                                                
           
          
   
                  
     
                 
                                      
                            
                           
         
                         
                     
                                       
                                            
           
                            
           
         
            
       
                                 
     
           
   
 
                                                          
                
              
   
     
                             
                                    
                                                       
                                                                           
                                                                            
     
                       
       
                                                                     
                             
       
     
                 
                                        
       
                        
       
     
           
   
 
                                   
                                  
                                   
                    
                       
                       
                            
          
                          
                           
                
                
                
                              
                
            
                        
                  
              
                    
                    
                    
                    
                    
   
     
                                           
                                            
                                
                                
                    
                                        
                                                   
                                           
     
     
                 
                                      
         
                                          
                           
         
         
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                            
                                
         
                  
         
                                
         
                                                                      
         
                                                                  
             
                            
             
                              
           
                                
                                         
                                        
                  
                                                                          
           
                         
             
                            
             
                              
           
                               
                                  
                            
                               
                                    
             
                                                   
             
                              
           
                               
                                               
                            
                                
         
                                               
         
           
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                  
                                      
           
                                                                       
                                               
           
                                      
                                      
                                       
            
                                                         
                                               
                            
           
                                     
                                  
                                      
           
                    
           
                                            
           
                            
                                      
         
                                 
                                                    
                           
         
       
                                 
     
     
                                          
                                     
                                          
     
                                             
                  
            
                                               
                             
                                           
                                                         
                         
           
                                                        
                                                                
                                               
           
         
                                                 
                                               
                          
         
         
                     
                                              
                                                                            
               
                                
               
             
             
                                                 
                                                 
             
                                                 
                                        
                 
                                                       
                 
                                        
               
             
                                                 
                                                   
                                   
                    
                                                   
                                                     
                                     
               
             
                                                 
               
                                                                      
                                                   
                                
                                                     
               
                                      
             
                                                                            
                                                                    
                                    
                                             
                                            
                      
                                                                              
               
                            
                            
                                                     
                                
                                                                          
               
                 
                             
                                                      
                                                                          
                                           
                     
                     
                                                                   
                                      
                     
                   
                                                 
                 
                                                
                                          
                                        
               
             
                                       
               
                                                          
                                                         
               
                    
               
                                                                               
                                                                               
               
             
             
                                                           
                           
                              
                                                                        
                                                   
             
                                                
               
                                
               
             
                                                                      
                                                                
                                                          
             
             
                         
                                                  
                                      
                                       
                 
                                                                                
                   
                                 
                                                 
                                                            
                   
                                                                      
                                                                
                   
                 
                                              
                                                           
                                                       
                 
                             
                   
                            
                   
                 
                 
                                                                             
                                                                       
                                                
                                      
                                         
                                                 
                                                 
                 
                                                    
                   
                                    
                   
                 
               
                                             
             
           
                                         
         
       
     
                                             
                            
       
                   
                                            
           
                                                       
                                                        
                                                
                                             
                                                
           
                                         
                                 
           
         
                                       
       
     
                                 
                            
                                  
         
                                          
         
                      
           
                                                     
           
         
       
     
     
                      
                       
     
           
   
 
/* #pragma merger("0","004.extract.o.i","") */
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    lstat)(char const *__restrict __file, struct stat *__restrict __buf);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     chmod)(char const *__file,
                                            __mode_t __mode);
extern __attribute__((__nothrow__))
__mode_t(__attribute__((__leaf__)) umask)(__mode_t __mask);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     mkdir)(char const *__path,
                                            __mode_t __mode);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     mknod)(char const *__path, __mode_t __mode,
                                            __dev_t __dev);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     mkfifo)(char const *__path,
                                             __mode_t __mode);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     access)(char const *__name, int __type);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     chown)(char const *__file, __uid_t __owner,
                                            __gid_t __group);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     lchown)(char const *__file,
                                             __uid_t __owner, __gid_t __group);
extern __attribute__((__nothrow__))
__uid_t(__attribute__((__leaf__)) geteuid)(void);
extern __attribute__((__nothrow__)) int(__attribute__((
    __nonnull__(1, 2), __leaf__)) link)(char const *__from, char const *__to);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    symlink)(char const *__from, char const *__to);
char *base_name(char const *name);
void (*xalloc_fail_func)(void);
size_t full_write(int fd, void const *buf, size_t count);
_Bool absolute_names_option;
enum old_files old_files_option;
_Bool recursive_unlink_option;
int same_owner_option;
int same_permissions_option;
size_t strip_path_elements;
                   
                  
void extr_init(void);
void extract_archive(void);
void extract_finish(void);
void gnu_restore(char const *directory_name);
char const *tartime(time_t t);
void print_for_mkdir(char *pathname, int length, mode_t mode);
void skip_file(off_t size);
void extract_mangle(void);
int remove_any_file(char const *path, enum remove_option option);
void chmod_error_details(char const *name, mode_t mode);
void chown_error_details(char const *name, uid_t uid, gid_t gid);
void link_error(char const *target, char const *source);
void mkdir_error(char const *name);
void mkfifo_error(char const *name);
void mknod_error(char const *name);
void symlink_error(char const *contents, char const *name);
void utime_error(char const *name);
void write_error_details(char const *name, size_t status, size_t size);
size_t stripped_prefix_len(char const *file_name, size_t num);
_Bool contains_dot_dot(char const *name);
_Bool sparse_member_p(struct tar_stat_info *st);
enum dump_status sparse_extract_file(int fd, struct tar_stat_info *st,
                                     off_t *size);
static mode_t newdir_umask;
static mode_t current_umask;
static struct delayed_set_stat *delayed_set_stat_head;
                                                    
void extr_init(void) {
  __uid_t tmp;
   
     
                      
                                       
                                                  
                                            
                                         
                                        
     
                                      
                                
            
       
                            
                                     
       
     
           
   
}
                                                                         
                                                                            
                                                                 
              
                 
          
              
                    
   
                                      
                                           
                                          
                                             
                                        
                                                                  
                                                                      
                                                                           
                                      
                                        
                       
               
             
           
         
              
                    
       
            
                           
                                
               
              
                        
           
                                                                 
                                                               
           
                         
             
                                    
             
                   
           
                                                
         
                                           
                                                                
       
     
                                         
                       
       
                                             
       
     
           
   
 
                                                         
             
                  
                
                      
                
                   
                   
   
                  
       
                         
                                                               
                                                           
       
            
                                      
         
                                  
         
                      
           
                                 
                                                                          
                                                                  
                                            
           
         
       
     
           
   
 
                                                                         
                                                                            
                                                                 
                         
          
              
              
   
                              
                          
                                             
                                   
                                                                 
                  
                                                   
           
           
                                                                  
                                                                       
           
                        
             
                                     
             
                  
             
                                                    
                                                     
             
           
         
       
       
                                                                                
                           
       
     
                                
                                           
                                  
           
                                                                   
                                                         
           
                            
             
                                                                      
                                                            
             
           
                
           
                                                                  
                                                        
           
                            
             
                                                                      
                                                            
             
           
                                           
             
                                                                    
                                                                 
             
           
         
       
     
           
   
 
                                                                               
                                                     
                                                        
                       
             
                                
                
   
     
                              
                          
               
                                                                                
                                   
                       
                                                
                                          
                                                         
                                                        
                                                    
                                    
                                      
                                                  
                                         
                                   
     
           
   
 
                                                    
                                                                       
                                
                 
          
                
                
                   
                   
   
                                 
     
                 
                                      
                    
                           
         
         
                                                                       
                                                             
         
                       
           
                                                        
           
                 
         
                                                          
                                                            
                                                     
                                      
                                                                      
                                                                          
                                                                            
                                                              
                                                  
                   
           
         
                          
       
                                 
     
     
                                    
                                                                              
                                                  
                      
     
           
   
 
                                              
                
               
                    
           
                         
             
           
              
               
   
                            
                      
                     
     
                 
                                      
                       
                           
         
                                    
                      
         
                                                              
                      
                
                                          
                        
           
         
                                        
                                                                      
                        
                  
                                            
                          
                    
                                              
                                                                            
                              
                        
                                                  
                                
                   
                 
               
             
           
         
                               
              
                                                                        
                                                                            
                                                                              
                                 
                          
                                 
                
                                           
         
         
                                                 
                                                                
         
                          
           
                                                   
                                                                          
                                                                           
                                                                                
                              
                                
           
                      
         
         
                              
                                       
         
                             
                      
                
                                       
                           
                        
                  
                    
                                    
             
                                                           
             
                                 
                            
               
             
           
         
                         
             
                  
       
                                 
     
                           
   
 
                                                
                                                           
                 
          
                   
   
     
                                                           
                                                         
     
              
       
                             
       
                        
     
                                             
                                                               
                          
       
     
                      
   
 
                                                      
          
               
               
                
                
                   
   
                           
                 
     
     
                                                 
                    
       
                                                 
                    
       
                          
                            
     
                                      
                                                                         
     
                 
         
                                       
         
                       
           
                                         
           
                              
             
                                      
             
                       
           
         
       
                        
                            
     
                                                            
     
                    
         
                                                      
                                                        
         
                   
       
                        
                                   
                        
                                  
     
               
   
 
                                                                   
        
           
               
               
                
        
              
               
               
              
   
     
                               
               
     
                         
                 
     
                                     
     
                           
                     
       
                          
                        
       
                          
                             
                                
                                                 
                    
       
                                                 
                    
       
                                                 
                    
       
                                                 
                    
       
                                                 
                    
       
                                                 
                    
       
                            
                           
                 
                            
     
                                                                          
     
                    
         
                                       
                       
         
                   
       
                            
                            
                             
                                 
                                                                                
                  
                                   
                    
     
                 
                           
                            
                                      
     
                                
     
                                            
     
                     
         
                                       
                       
         
                   
       
                         
                 
                                   
                 
                                  
     
   
 
static void apply_nonancestor_delayed_set_stat(char const *file_name,
                                               _Bool after_symlinks) {
  size_t file_name_len;
  size_t tmp;
  _Bool check_for_renamed_directories;
  struct delayed_set_stat *data;
  _Bool skip_this_one;
  struct stat st;
  struct stat const *cur_info;
  int tmp___0;
  char *tmp___1;
  char *tmp___2;
  int tmp___3;
                    
                    
                    
   
     
                              
                          
                                               
     
     
                 
                                      
                                     
                           
         
                                     
                                 
                                          
                                                
                                                                            
                                                              
                           
                
                                                    
                                                     
                                                                          
                            
                      
                                                                              
                         
                                        
                 
                                                           
                                                                   
                                                        
                 
                                     
                                     
                   
                 
               
             
           
         
                                            
           
                                                  
                                                                             
                                                                   
           
                             
             
                                                          
                                       
             
                  
                                                      
                                                           
                 
                                                                            
                                                                              
                                                          
                                                              
                                  
                                           
                 
               
                    
               
                                                                          
                                                                            
                                                        
                                                            
                                
                                         
               
             
           
         
                             
           
                                                     
                                                                       
                                                                            
           
         
         
                                             
                             
         
       
                                 
     
           
   
}
                              
void extract_archive(void) {
  union block *data_block;
  int fd;
  int status;
  size_t count;
  size_t written;
  int openflag;
  mode_t mode;
  off_t size;
  int interdir_made;
  char typeflag;
  char *file_name;
  int tmp;
  size_t prefix_len;
  size_t tmp___0;
  int e;
  int *tmp___1;
  char *tmp___2;
  char *tmp___3;
  _Bool tmp___4;
  _Bool tmp___5;
  int tmp___6;
  char *tmp___7;
  int tmp___8;
  char *tmp___9;
  int *tmp___10;
  int tmp___11;
  int tmp___12;
  struct stat st;
  int tmp___13;
  struct delayed_set_stat *h;
  struct delayed_symlink *p;
  size_t tmp___14;
  void *tmp___15;
  size_t tmp___16;
  void *tmp___17;
  int tmp___18;
  int tmp___19;
  char *tmp___20;
  int tmp___21;
  int tmp___22;
  _Bool tmp___23;
  int tmp___24;
  char const *link_name;
  char *tmp___25;
  struct stat st1;
  struct stat st2;
  int e___0;
  struct delayed_symlink *ds;
  struct string_list *p___0;
  size_t tmp___26;
  void *tmp___27;
  int tmp___28;
  int tmp___29;
  int *tmp___30;
  int *tmp___31;
  int tmp___32;
  int tmp___33;
  int tmp___34;
  int tmp___35;
  int tmp___36;
  int tmp___37;
  struct stat st___0;
  int tmp___38;
  int *tmp___39;
  int *tmp___40;
  int tmp___41;
  int *tmp___42;
  char const *tmp___43;
  char *tmp___44;
  char *tmp___45;
  char *tmp___46;
  char *tmp___47;
  char *tmp___48;
  char *tmp___49;
  int tmp___50;
  int tmp___51;
  int tmp___52;
  int tmp___53;
  int tmp___54;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    {
                        
      set_next_block_after(current_header);
                                                                            
    }
                             
       
                                                                            
       
                 
         
                        
         
               
       
     
                         
       
                                                    
       
     
    {
      file_name = safer_name_suffix((char const *)current_stat_info.file_name,
                                    (_Bool)0);
    }
                              
       
                 
                                                                              
                             
       
                                               
         
                        
         
               
       
                              
     
                                                                              
                        
                              
         
                                                                  
         
                       
           
                                         
                         
                                                              
                                                                    
                                                        
                            
                          
           
                 
         
       
     
                                                      
                  
                     
            
                                                      
     
                              
    {
                                
                     
       
                               
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                        
       
                                
                        
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                          
    case_83: /* CIL Label */
                            
                             
                             
                                                      if (current_stat_info.had_trailing_slash) {
        goto really_dir;
      }
    again_file:
                                                                                               {
        tmp___51 = 512;
      }       
                       
       
      openflag = 65 | tmp___51;
      mode = (current_stat_info.stat.st_mode &
              (unsigned int)(((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                             (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                              ((256 | (256 >> 3)) | ((256 >> 3) >> 3))))) &
             ~current_umask;
                             
               
                          
       
                                                                
                     
         
                        
         
                            
           
                               
           
         
                          
       
                                
                                  
           
                                   
                                                                              
                                               
           
         
       
      { fd = open((char const *)file_name, openflag, mode); }
                   
         
                                                                 
         
                      
                          
         
         
                                              
                        
         
                            
           
                               
           
         
                          
       
    extract_file:
                                        
         
                                                             
         
                                              {
        size = current_stat_info.stat.st_size;
        {
                    {
                                         ;
                               
                               
             
                                      
               
                                         
                                                                         
                                                              
                                     
               
             
            { data_block = find_next_block(); }
                              
               
                                                               
                                                   
                                
               
                               
             
                                                            
                                        {
              written = (size_t)size;
            }
            {
                                            
                            
              count =
                  full_write(fd, (void const *)(data_block->buffer), written);
                                                   
                                   
                                                                       
            }
                                   
               
                                                                             
               
                               
             
          }
        while_break: /* CIL Label */;
        }
      }
                          
                                
         
                                                     
         
       
                             
                          
       
                             
                       
         
                                               
         
                            
           
                               
           
         
       
                                                 
                     
              
                     
       
       
                                         
                                                                
                                                                              
                           
       
                        
                             
     
                                                             
     
                      
                          
       
                                  
                
              
                                                            
                      
                
           
                      
                                                                            
           
                         
                    
                       
                                                
                                                             
                              
                                     
               
                                                                          
                              
                                     
               
             
                                           
           
                        
                         
               
                                                    
               
                    
                                            
                                  
                 
                                                      
                            
                 
                      
                                         
                                    
                   
                                                         
                   
                        
                   
                              
                                                                          
                              
                                                                               
                                                                 
                                            
                                     
                                                           
                                                   
                                             
                                       
                                       
                                                 
                                                           
                                                           
                                                               
                                       
                                                                              
                                    
                             
                                                                
                                                                 
                                                                            
                                                                      
                                                                 
                                                           
                                                            
                                              
                   
                          
                                             
                       
                                                                   
                                                                        
                                                             
                       
                                          
                                                                         
                           
                                                                          
                           
                                                        
                                                                              
                                                   
                             
                                         
                                                                  
                                 
                                                               
                                                  
                                                                       
                                                        
                                                                              
                                 
                                                    
                                   
                                                                             
                                   
                                        
                                                                  
                                                                  
                                 
                                            
                                        
                                                              
                                                         
                                   
                                        
                                                       
                                 
                               
                                                             
                             
                           
                         
                       
                     
                   
                             
                 
               
             
                  
                
                       
                                                
               
                                                                           
                                                          
               
                                   
                                     
               
                                                                          
                              
                                     
               
             
                                           
           
                              
               
                                                 
                                                                        
                                                                               
                                    
               
                    
               
                                                                        
                                                       
               
             
           
         
       
                        
                            
           
                               
           
         
       
                        
                             
     
                                                             
     
                      
                          
       
                  
                                                                             
                                             
                                         
                                                        
     
                        
                                  
                 
           
                                                                      
                                                                     
           
                              
             
                         
                                                  
                          
                                       
                 
                                            
                                              
                                                          
                       
                                                                   
                                  
                                                                               
                                                                     
                                                
                                         
                                                               
                                                                         
                                                                          
                                                  
                                            
                       
                                           
                     
                   
                 
                              
               
                                             
             
           
         
                          
       
                                                                  
                     
                        
       
                               
         
                                        
         
                              
                            
         
       
       
                                      
                          
                                                                  
                                                                 
       
                          
         
                                                                    
                                                                   
         
                            
                                         
                                           
                                
             
           
         
       
                                                         
                          
         
                             
         
       
                        
                            
                                              
                     
                            
                                               
                                                                           
                      
                          
       
       
                                                                               
                                                       
       
                        
         
                                                                  
         
                       
                         
         
                                                 
                            
           
                               
           
         
                          
       
       
                                         
                                                                
                                                                       
                           
       
                        
                             
     
                                                             
     
                      
                          
       
       
                   
                                            
           
                    
                                                                                
           
                               
                                 
           
                                                                      
                          
                                 
           
         
                                       
       
                        
         
                                           
                                                                  
                                                               
                                                 
         
              
                                                  
                            
           
                               
           
         
       
                        
    really_dir:
                            
                             
                                
         
                                               
         
             {
                                  
           
                          
           
         
      }
                        
                     
              
                       
       
       
                                                                          
                                                                     
                                                                         
                                                                          
                                                             
       
                        
                          
       
                       
                              
       
    again_dir :                                                { status = mkdir((char const *)file_name, mode); }
                        
         
                                        
         
                              
                              
                        
                  
                                                       
                          
                    
                                                         
                                      
               
                                                                          
                                                                            
               
                                    
                                      
                     
                                                                      
                                                                              
                     
                                      
                   
                                                            
                                                           
                                          
                   
                 
                 
                                                
                                 
                 
               
             
           
         
                                                                    
                       
                         
         
                                          
                              
           
                                                 
           
                              
             
                                 
             
           
                            
         
       
                     
                        
                    
              
                                                   
                      
                
                                                     
                                 
                              
                           
                    
                           
             
             
                             
                                          
                                                                 
                                                                        
                                                                            
                                                                              
                                                              
                                             
             
           
         
       
                        
                            
                           
         
                                                                      
                                             
                                                    
                                                                      
         
       
                        
                             
     
                       
     
                        
                             
     
                                                                           
                         
                                                                         
                                                    
                      
                    
     
                          
         
                             
         
       
                        
                             
                             
      
                                                    
                                          
                      
                    
     
                          
         
                             
         
       
                        
                                    
     
                                                         
                
                                                                            
                                                                   
     
                      
                                  
    }
           
  }
}
                                          
                             
                              
                           
                     
                 
          
              
              
              
                           
                                   
                    
   
                              
     
                 
                                      
                  
                           
         
                              
                                       
                              
         
                     
                                              
                           
                                   
             
             
                                                       
                                                                     
                                                                      
             
                               
                                         
                                           
                                                       
                     
                                               
                     
                                       
                       
                                             
                       
                            
                                         
                         
                                                               
                         
                                              
                                  
                         
                              
                            
                                                                          
                       
                                       
                           
                                                                              
                           
                                
                           
                                                  
                                                
                                                
                                                                        
                                                                       
                                                                    
                           
                         
                       
                     
                   
                 
               
             
                                    
           
                                         
         
                              
         
                     
                                              
                           
                                   
             
             
                                   
                                    
                             
             
           
                                         
         
         
                              
                           
                        
         
       
                                 
     
                                                       
           
   
 
                           
                   
                   
   
     
                                                       
                               
                                                       
     
           
   
 
__attribute__((__noreturn__)) void fatal_exit(void);
                       
            
                   
   
     
                       
                                                             
                                     
              
     
   
 
/* #pragma merger("0","005.xheader.o.i","") */
extern __attribute__((__nothrow__)) unsigned short const **(
    __attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(2), __leaf__))
    strtok)(char *__restrict __s, char const *__restrict __delim);
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stpcpy)(char *__restrict __dest, char const *__restrict __src);
extern __attribute__((__nothrow__))
__pid_t(__attribute__((__leaf__)) getpid)(void);
extern __attribute__((__nothrow__)) unsigned long(__attribute__((
    __nonnull__(1), __leaf__)) strtoul)(char const *__restrict __nptr,
                                        char **__restrict __endptr, int __base);
extern
    __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                        calloc)(size_t __nmemb, size_t __size)
        __attribute__((__malloc__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           getenv)(char const *__name);
char *dir_name(char const *path);
strtol_error xstrtoumax(char const *s, char **ptr, int strtol_base,
                        uintmax_t *val, char const *valid_suffixes);
__attribute__((__noreturn__)) void usage(int status);
void xheader_decode_global(void);
void xheader_read(union block *p, size_t size);
void xheader_destroy(struct xheader *xhdr);
char *xheader_ghdr_name(void);
void xheader_set_option(char *string);
_Bool utf8_convert(_Bool to_utf, char const *input, char **output);
extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long),
                          void (*)(void *));
extern void obstack_free(struct obstack *obstack, void *block);
static _Bool xheader_protected_pattern_p(char const *pattern);
static _Bool xheader_protected_keyword_p(char const *keyword);
static __attribute__((__noreturn__)) void xheader_set_single_keyword(char *kw);
static void code_string(char const *string, char const *keyword,
                        struct xheader *xhdr);
static void extended_header_init(void);
                                  
                                                 
                                                         
                                                  
                                                        
                         
                             
                                                        
                          
          
   
                              
     
                 
                                      
                  
                           
         
                                                            
                       
                            
         
                      
       
                                 
     
                      
   
 
                                                              
                          
          
   
                               
     
                 
                                      
                  
                           
         
                                                             
                       
                            
         
                      
       
                                 
     
                      
   
 
                                                                           
                                                    
                          
            
                
   
     
                                 
                                      
                                
     
                
       
                                 
                            
       
            
                                      
     
                     
               
           
   
 
static void xheader_list_destroy(struct keyword_list **root) {
  struct keyword_list *kw;
  struct keyword_list *next;
   
               
                 
       
                   
                                        
                    
                             
           
           
                            
                                      
                                    
                             
                      
           
         
                                   
       
                                                 
     
           
   
}
static __attribute__((__noreturn__)) void xheader_set_single_keyword(char *kw);
                                                  
            
                   
   
     
                                                                   
                                         
               
     
   
 
                                                           
               
          
                             
                                 
                
                
                
                
              
              
              
                    
                    
   
                      
           
                                
          
                        
     
     
                 
                                      
                                                   
           
                                  
           
                                                         
                             
           
                
                           
         
            
       
                                 
     
                 
               
     
                 
                                          
                 
           
                                      
           
                                                             
                                 
           
                
                               
         
            
       
                                     
     
                                                     
                       
       
                                                               
       
                    
         
                                                         
                                                
                   
         
       
       
                                                                   
                                                       
       
            
                                                            
                         
         
                                                       
         
              
                                                                  
                           
           
                                                             
           
                
                                                                      
                        
             
                                                                   
                                                     
                       
             
           
                       
             
                                                                
                                                                     
             
                  
             
                                                                           
                                                   
             
           
         
       
     
           
   
 
                                       
              
          
            
   
     
                                                      
                                                           
     
     
                 
                                      
                     
                           
         
         
                                                 
                  
         
                 
           
                                              
           
                
                                                   
         
         
                                                               
                                                               
         
       
                                 
     
           
   
 
                                                                   
           
           
             
                 
         
   
                  
            
        
                             
     
                 
                                      
                    
            
                                                         
                      
                       
                       
                             
           
                
                           
         
       
                                 
     
                  
        
     
                 
                                          
                       
                               
         
                         
                                    
                         
            
            
       
                                     
     
           
   
 
                                                                           
                                                 
            
             
             
          
                
            
             
                  
                
                
                 
                 
                  
                 
                 
                
                
                
                      
                 
                       
                 
                       
                 
                       
                    
                    
   
     
                        
                
                                
                                 
              
     
     
                 
                                      
                 
           
                                     
                                      
           
                   
                             
           
                
                           
         
         
                                            
                         
           
                                             
                          
           
                                             
                          
           
                                             
                          
           
                                             
                          
           
                            
                                
                
                            
                                 
                   
             
                                                                   
                                                                       
                                                  
                                   
             
           
                            
                                 
                   
             
                                                                 
                                                   
                                   
             
           
                            
                                  
         
                             
                                                                 
                                                   
                               
         
                            
                                 
                                                       
             
                                                                            
                                                     
                                   
             
           
                            
                                      
         
            
       
                                 
     
     
                                   
                            
              
              
     
     
                 
                                          
                  
                               
         
                                    
           
                                              
                               
             
                                               
                                
             
                                               
                                
             
                                               
                                
             
                                               
                                
             
                                
                                      
                        
                
                        
                
                                      
                
                                  
                                       
                      
               
                                                       
                                                                
               
             
                   
                                  
                                       
                       
               
                                                       
                                                                 
               
             
                   
                                  
                                        
           
                                                   
                                                                 
                   
           
                                  
                                       
                          
               
                                                       
                                                                   
                       
               
             
                                         
                         
                
                         
                
                                        
                     
                           
                  
                           
                  
                                          
             
                                            
           
                
                       
              
                       
              
                                      
         
       
                                     
     
     
                 
                                          
                                                    
                                        
                                 
           
                
                               
         
            
       
                                     
     
                 
                 
   
 
                                                   
            
                   
   
                       
       
                                                           
       
     
                                                                           
                 
   
 
                               
             
                  
                
                 
                
                
                   
                   
                   
                    
   
                           
       
                                   
                                    
       
                 
                     
       
       
                              
                                                    
                               
                                          
                                                         
                                                    
                                                         
                                                                     
       
     
     
                                                                        
                                                                             
     
                     
   
 
                                                                 
                      
              
          
             
   
     
                        
                                                              
                                     
                                   
                       
     
     
                 
                                      
         
                                     
                            
         
                         
                     
         
         
                                                            
                                                         
         
                          
           
                                                                   
           
         
         
                   
                      
                                       
         
                            
                           
         
       
                                 
     
                              
           
   
 
void xheader_write_global(void) {
  char *name;
  struct keyword_list *kp;
   
                                        
             
     
     
                             
                                        
     
     
                 
                                      
                  
                           
         
         
                                                                         
                                        
                        
         
       
                                 
     
     
                                       
                                 
                                                       
                         
                            
     
           
   
}
                                   
                                                                   
                           
          
   
                 
     
                 
                                      
                          
                           
         
                                                            
                       
                     
         
            
       
                                 
     
                                                  
   
 
                                                               
                           
          
   
                 
     
                 
                                      
                          
                           
         
                         
           
                                                                
           
                         
                              
           
         
            
       
                                 
     
                      
   
 
                                                               
                           
          
   
                 
     
                 
                                      
                          
                           
         
                         
           
                                                            
           
                         
                              
           
         
            
       
                                 
     
                      
   
 
                                    
                                                                               
                                        
             
                      
              
            
            
                
                    
                    
   
               
                          
                        
     
     
                                                         
                                                      
     
                           
       
                      
                                                                              
                                       
                        
       
                        
     
           
                               
     
                 
                                      
                                                                  
                           
         
                               
                           
         
               
       
                                 
     
                           
       
                                                                           
                                           
                        
       
                        
     
     
                      
                                    
                                       
                                                        
                                    
                        
                       
     
                      
   
 
                                                      
                                                         
                           
                             
   
     
                 
                                      
                  
                           
         
         
                                                          
                  
         
                
           
                                                         
           
         
                      
       
                                 
     
           
   
 
                                                                      
                           
                           
            
                
   
     
                                        
                                               
     
              
             
            
                                                        
                    
               
       
     
                                    
            
       
                                   
       
     
           
   
 
                                               
          
             
            
   
     
                                                          
                                                         
     
                               
                                       
                                                                   
       
                   
                                        
                                                          
                             
           
                                                         
                     
                             
           
         
                                   
       
     
                                                     
           
   
 
                                                                      
                            
   
     
                                         
                                               
     
           
   
 
                                  
          
             
            
   
                               
       
                                         
                                                                     
                                                           
       
       
                   
                                        
                                                          
                             
           
           
                                          
                                                                        
           
                     
                             
           
         
                                   
       
     
           
   
 
                                        
            
   
                               
       
                                                      
                                                    
                                                                              
                                                  
       
     
           
   
 
                                                                       
                                
                           
            
                
   
                                 
             
     
                                    
             
             
     
                                                 
              
             
            
                                                        
                    
               
       
     
     
                             
                                                         
     
           
   
 
                                                
           
                 
            
             
   
     
                    
                                           
                    
                                  
                                               
                                
                                           
     
     
                 
                                      
                   
                          
                            
         
         
                                                                        
                                                                   
                                  
                                
                   
                      
         
                            
                           
         
       
                                 
     
           
   
 
                                                                  
          
            
                
   
               
                    
       
                   
                                        
              
                      
                              
                             
           
         
                                   
       
            
                        
       
                   
                                            
                  
              
                                           
                      
                              
                                 
           
         
                                       
       
       
                   
                                            
                                                          
                                 
           
                      
              
                               
         
                                       
       
     
               
   
 
                                                                    
                                              
             
             
                 
           
           
                 
                      
            
                          
                
                          
                
                 
                          
                
                          
                
                 
                          
                
                    
   
     
                            
                              
                                  
                    
     
     
                 
                                      
         
                
                                                                      
         
                        
                           
         
       
                                 
     
     
                                       
                      
                     
     
                                                 
                                          
       
                                      
       
     
     
                                                      
                                                                    
                              
                          
     
                                                 
                                              
       
                                      
       
     
     
                                   
                             
                           
                          
                                
                               
     
                                                         
                                              
       
                                              
       
     
     
                                                          
                                                                         
                                      
                          
     
                                                 
                                              
       
                                      
       
     
     
                                   
                             
                           
                          
                              
                               
     
                                                         
                                              
       
                                              
       
     
     
                                                          
                                                                       
                                      
                          
     
                                                 
                                              
       
                                      
       
     
                                 
                           
                          
           
   
 
                                           
                          
                      
            
                       
              
   
                               
     
                 
                                      
                  
                           
         
         
                                                                                
                        
         
       
                                 
     
                    
                                                                                
       
                                  
       
     
                         
                       
                   
                     
                                      
                                                                 
                                    
     
                     
                   
                                                                       
                                        
                                               
                                                  
                                          
     
     
                                          
                                   
                                                      
     
           
   
 
                                            
                      
              
            
   
                    
                      
                        
                                                                       
                                                                               
                              
                                 
                               
                
                                        
         
              
                                      
       
       
                                
                                                  
       
            
                                      
     
                             
                           
           
   
 
                                                                
                                               
               
            
   
                                                      
               
       
                                 
       
     
     
                                                         
                           
     
           
   
 
                                                           
            
   
                  
       
                              
                                      
       
     
                                                  
               
       
                                   
       
     
           
   
 
                                                                        
                                             
                 
           
             
                 
                 
                    
   
     
                                                                         
              
     
                                   
             
     
     
                                            
                  
          
                                
                                                          
                   
                        
                                                         
     
           
   
 
                                                                              
              
          
                   
                       
                   
                   
   
                                                  
                                      
                        
                          
         
                                                                               
                               
         
                                      
                     
         
       
     
           
   
 
                                                          
                                            
                 
           
             
                   
   
     
                                                                  
              
                                     
                        
                                                         
     
           
   
 
                                                      
                                                    
                                                                        
                                                                         
                                                                 
              
 
                                                                               
                                                                        
              
 
                                                                            
                                             
                                                                 
   
     
                                                                               
                               
     
           
   
 
                                                                      
   
                                                                    
           
   
 
                                                                          
                                           
                                                               
   
                                                            
           
   
 
static void gid_decoder(struct tar_stat_info *st, char const *arg) {
  uintmax_t u;
  strtol_error tmp;
                   
   
                                                                
                                  
                                   
     
           
   
}
                                                                            
                                             
                                                                 
   
                                                            
           
   
 
                                                                      
   
                                       
           
   
 
                                                                               
                                                
                                                                    
   
                                                                
           
   
 
                                                                         
   
                                           
           
   
 
                                                                            
                                             
                                                                 
   
     
                                                                               
                               
     
           
   
 
                                                                      
   
                                                                    
           
   
 
                                                                            
                                             
                                                                 
   
     
                                                                               
                               
     
           
   
 
                                                                      
   
                                                                    
           
   
 
                                                                           
                                            
                                                                
   
                                                                
           
   
 
                                                                     
   
     
                                              
                                         
                                                                     
     
           
   
 
                                                                           
                                            
                                                                
   
                                                             
           
   
 
                                                                     
              
              
                       
                   
   
                                                                    
                                      
                       
                             
                                  
     
           
   
 
                                                                          
                                           
                                                               
   
                                                            
           
   
 
                                                                    
              
                   
                   
   
                                                                
                                  
                                   
     
           
   
 
                                                                            
                                             
                                                                 
   
                                                            
           
   
 
                                                                      
   
                                       
           
   
 
                                                             
                                                                        
                                           
   
                                            
           
   
 
                                                                            
              
                   
                   
   
                                                                
                                  
                                    
     
           
   
 
                                                                  
                                                                             
                                                                            
   
                                                                 
           
   
 
                                                              
                                                       
              
            
                       
                   
   
                                                                    
                                      
       
                                
                                                                         
                                                
                                         
       
     
           
   
 
                                                               
                                                                          
                                             
           
   
     
                            
                                                                       
     
           
   
 
                                                                              
              
                   
                   
   
                                                                
                                  
                                                                 
     
           
   
 
                                                                 
                                                                            
                                               
           
   
     
                            
                                                              
     
           
   
 
                                                                                
              
            
                 
                       
                   
   
                                                                    
                                      
                                                        
         
                                     
                                                
                                                                              
                                                  
         
       
                                     
                               
                                               
     
           
   
 
                                      
                                                      
                                                        
                                                        
                                                      
                                                
                                                      
                                                               
                                                      
                                                   
                                                   
                                                
                                                      
                                                                            
                                                                                
               
                                                                       
               
                                                                             
               
                               
                                                                            
                                       
                                                                             
/* #pragma merger("0","006.incremen.o.i","") */
extern void(__attribute__((__nonnull__(1, 4)))
            qsort)(void *__base, size_t __nmemb, size_t __size,
                   int (*__compar)(void const *, void const *));
extern __attribute__((__nothrow__))
FILE *(__attribute__((__leaf__)) fdopen)(int __fd, char const *__modes);
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n,
                         FILE *__restrict __stream);
extern int fseek(FILE *__stream, long __off, int __whence);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fileno)(FILE *__stream);
size_t hash_do_for_each(Hash_table const *table___0,
                        _Bool (*processor)(void *, void *),
                        void *processor_data);
size_t hash_string(char const *string, size_t n_buckets);
char const *program_name;
void read_directory_file(void);
char *quote_copy_string(char const *string);
int unquote_string(char *string);
void savedir_error(char const *name);
void seek_error(char const *name);
void truncate_error(char const *name);
char *new_name(char const *path, char const *name);
                                   
                                                                               
                                    
             
   
     
                                                  
                                                                            
     
                               
   
 
                                                                          
                                     
                                     
          
   
     
                                                    
                                                    
                                                    
                                                     
     
                               
   
 
static struct directory *note_directory(char const *name, dev_t dev, ino_t ino,
                                        _Bool nfs, _Bool found) {
  size_t size;
  size_t tmp;
  struct directory *directory;
  void *tmp___0;
  void *tmp___1;
  {
    {
      tmp = strlen(name);
      size = ((unsigned long)(&((struct directory *)0)->name) + tmp) + 1UL;
      tmp___0 = xmalloc(size);
      directory = (struct directory *)tmp___0;
                                     
                                    
                                             
                           
                               
                                                         
                                                   
    }
                          
              
            
       
                         
                                                              
                                                                               
                                                                       
       
                            
                                                                               
                       
           
                         
           
         
              
                          
       
     
    return (directory);
  }
}
                                                     
              
             
                        
                
                
   
                           
                                     
              
       
                                         
                                                                             
                                         
                                          
                                                     
                                                     
                 
                                                                                
       
                                           
     
   
 
                                                                   
          
   
     
                                                               
                                                                 
     
                 
   
 
                                                                      
             
            
                    
                  
                        
                          
                     
                              
                         
               
                 
                
                 
                
                      
                
                        
              
            
                
                
                
                 
                          
                 
                          
                 
                          
                 
                          
                 
                 
                          
            
                          
                
                        
               
                    
                    
                    
                    
                    
   
     
                                        
                 
     
                
       
                                          
       
     
     
                                   
                   
                                           
                                         
                                                
                                        
                                                       
                                                   
                                           
     
                                                  
       
                                                         
                                                     
       
     
     
                                                          
                                       
     
                    
                                                   
            
                    
     
                                       
               
                                         
                                   
         
                     
                                          
                                         
                                     
                               
             
                                                             
               
                           
                                                    
                                            
                                                                      
                                         
                   
                 
                                               
               
               
                         
                                                                              
                                                  
               
             
             
                                                                               
                                                            
                                                                      
             
                           
                        
                                                       
                                                    
                 
                                            
                 
               
                                       
                                 
                                   
                    
               
                                                        
                                                                                
               
                            
                 
                                                           
                 
                            
               
                                                           
                 
                                                   
                                                      
                                                                                
                                     
                                                              
                 
                                                                             
                                                       
                                
                          
                                                                       
                                           
                                                                           
                                    
                       
                            
                                           
                                           
                         
                                   
                                                                            
                                                                              
                                                                      
                         
                       
                                                             
                                           
                                                                  
                                                                 
                     
                   
                                              
                        
                                       
                     
                                                                              
                                                                 
                                                                   
                     
                   
                   
                                                                             
                                                                
                                                                                
                   
                                                  
                                 
                          
                                                                               
                                   
                            
                                                     
                                                      
                                                       
                                                         
                                       
                                
                                      
                         
                              
                                             
                                                
                                                        
                                                          
                                         
                                  
                                                           
                                                            
                                                             
                                                               
                                             
                                      
                                             
                               
                                    
                                           
                             
                           
                                
                                       
                         
                       
                     
                   
                                                                
                 
                                             
                                                   
                                                           
                          
                                
                   
                        
                                       
                                                     
                                                           
                   
                 
                              
                                                             
                                                          
                   
                                                  
                   
                 
                                              
                                       
                                      
                      
                                             
                                                   
                                  
                                                                 
                                                              
                       
                                                      
                       
                     
                                                  
                                           
                                          
                          
                                 
                   
                        
                                        
                                                     
                                                                               
                                   
                            
                                                     
                                                      
                                                       
                                                         
                                                
                                                   
                                        
                                  
                                                          
                                                            
                                          
                                    
                                                             
                                                              
                                                               
                                                                 
                                                       
                                                
                                                                               
                                                                            
                                     
                                                                    
                                     
                                   
                                                                
                                                         
                                                        
                                        
                                               
                                 
                                      
                                             
                               
                             
                           
                                
                                       
                         
                              
                                     
                       
                     
                          
                                          
                                  
                                                                 
                                                              
                       
                                                      
                       
                     
                                                  
                                           
                                          
                   
                 
               
             
                          
                                          
                                                             
                                                      
               
                                                  
               
             
             
                                                                  
                                                                           
                                          
             
                 
                                    
           
                                     
         
       
     
                  
                  
                                                         
                                              
       
                                              
       
     
     
                                                          
                                                                             
                                      
                                    
     
               
       
                           
       
     
           
   
 
                                                
                
                       
              
                 
               
                   
               
                      
             
                      
                      
            
                           
                  
                 
                 
                
               
                
               
                
   
               
                                      
                                                                 
                                    
     
                     
                   
                                                                       
                                        
                                               
                                                  
                                          
     
                                        
                            
                        
                     
     
                 
                                      
                       
                           
         
         
                    
                                             
                              
         
       
                                 
     
                   
                                   
     
              
              
                                                    
                                                          
       
                                      
       
     
                            
                   
                                              
                                                                         
                                        
     
                         
                   
                                                                               
                                            
                                                       
                                                          
                                                  
     
                                                
                               
                         
                     
     
                 
                                          
                       
                               
         
         
                                 
                         
                            
                                                 
                                  
         
       
                                     
     
     
                                
                                                                      
                                                           
                                   
                          
                           
     
     
                 
                                          
                             
                               
         
                               
         
                     
                                              
                             
                     
                             
                     
                               
                               
                           
                                   
             
                                    
           
                                         
         
                       
       
                                     
     
                           
                        
   
 
                                                        
                     
                   
                      
              
            
   
     
                                                             
                                                
                                    
                                      
                 
                        
     
                                                                     
                                                                             
                            
                               
                             
              
                                      
       
            
                                    
     
                        
   
 
                                       
                                
         
           
            
                 
             
        
              
                  
           
                        
           
                
                
                
                
               
               
            
            
            
             
               
                
                
                 
                 
                
                
                
                 
                 
                 
                 
                
                
                     
                     
               
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
     
                      
                                              
                                                          
                                                              
     
                 
       
                                              
       
             
     
                              
              
       
                                              
                  
       
             
     
     
                                     
                                                           
                                                                
                                                        
     
                        
       
                    
                                 
                 
                                                              
                                                                  
                    
                      
       
                                                      
         
                                                  
                                                              
                                                    
                          
         
              
                       
           
                                         
           
                               
             
                                                      
                                                                  
                                                        
                              
             
                  
                    
           
                
           
                                      
             
                                                           
                                                                  
                                                        
                              
             
                  
                                            
               
                                             
               
                                   
                 
                                                               
                                                                      
                                                            
                                  
                 
                      
                                              
                                                                  
               
                    
                                            
                                                                
             
           
         
       
       
                   
                                        
           
                                                                 
                                                                      
                                                              
                              
           
                         
                             
           
                                               
                                
                   
                                            
                                            
           
           
                                         
                         
                                                             
                                                                
                    
           
                                                           
             
                                                         
                                                                  
                                                                  
                              
             
                  
                           
               
                                              
               
                                    
                 
                                                             
                                                                      
                                                                      
                                  
                 
                      
                            
               
                    
                   
                             
                 
                                                                   
                                                                       
                                                                        
                                  
                 
                      
                                                
                   
                                                  
                   
                                        
                     
                                                                       
                                                                           
                                                                            
                                      
                     
                   
                 
               
             
           
           
                        
                                          
                          
                                                             
                                                                
                    
           
                                                           
             
                                                         
                                                                   
                                                                    
                              
             
                  
                           
               
                                              
               
                                    
                 
                                                             
                                                                       
                                                                        
                                  
                 
                      
                            
               
                    
                   
                             
                 
                                                                  
                                                                       
                                                                        
                                  
                 
                      
                                                
                   
                                                  
                   
                                        
                     
                                                                      
                                                                           
                                                                            
                                      
                     
                   
                 
               
             
           
           
                        
                   
                                 
                                                                        
           
         
                                   
       
     
                                       
                   
       
                                              
       
     
              
       
                          
       
     
           
   
 
                                                                  
                                    
           
        
            
            
               
               
              
              
                
   
                                                
                      
                           
       
                                                                 
                  
       
                
                                           
              
                                  
       
       
                
                                          
                                                                                
                                                    
                                                             
                                     
                     
       
                
         
                            
         
       
       
                                     
                     
       
     
                                      
                  
                  
            
                  
     
                            
   
 
                                 
           
          
              
              
              
              
              
   
                                   
              
             
     
                               
                   
       
                                              
       
     
     
                           
                                      
     
                       
       
                                                  
       
     
     
                                            
                                                       
                                                    
                                    
     
                   
                            
         
                                                               
                                                                    
         
       
     
                                      
                  
       
                                               
       
     
                             
                       
       
                                               
       
     
           
   
 
                                              
                    
                    
            
            
              
                
                          
           
            
                
                 
                 
              
          
                
                      
                
        
               
                
                
               
               
                    
                    
                    
                    
   
                                              
                       
       
                      
       
             
     
                                                  
                                                         
       
                     
       
     
     
                          
                                
                       
     
     
                 
                                      
                            
                           
         
                                           
                          
           
                                                           
                                               
                            
           
                           
         
                                                       
                            
                        
         
         
                                              
                                                                               
                       
                               
                                                                  
                         
         
       
                                 
     
                      
     
                 
                                          
                    
                               
         
                          
         
                     
                                              
                        
                                   
             
             
                    
                                                                     
             
                           
                                   
             
             
                                                  
                                   
             
           
                                         
         
                             
           
                                                                  
                        
           
                                    
                    
                  
                                                              
                           
               
                                   
                 
                                                   
                                                         
                                                            
                                                                                
                                   
                 
               
               
                          
                                                                            
               
                              
                 
                                               
                               
                                                            
                                                         
                                                              
                                  
                 
               
             
           
                              
         
         
                                              
                               
         
       
                                     
     
     
                                
                                
     
           
   
 
/* #pragma merger("0","007.list.o.i","") */
extern __attribute__((__nothrow__)) unsigned long long(__attribute__((__leaf__))
                                                       gnu_dev_makedev)(
    unsigned int __major, unsigned int __minor) __attribute__((__const__));
extern int putc_unlocked(int __c, FILE *__stream);
extern size_t fwrite_unlocked(void const *__restrict __ptr, size_t __size,
                              size_t __n, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) struct tm *(__attribute__((__leaf__))
                                                gmtime)(time_t const *__timer);
extern
    __attribute__((__nothrow__)) struct tm *(__attribute__((__leaf__))
                                             localtime)(time_t const *__timer);
struct quoting_options *clone_quoting_options(struct quoting_options *o___0);
void set_quoting_style(struct quoting_options *o___0, enum quoting_style s);
size_t quotearg_buffer(char *buffer___2, size_t buffersize, char const *arg,
                       size_t argsize, struct quoting_options const *o___0);
char *quotearg(char const *arg);
                 
                          
                               
gid_t gid_from_header(char const *p, size_t s);
int major_from_header(char const *p, size_t s);
int minor_from_header(char const *p, size_t s);
mode_t mode_from_header(char const *p, size_t s);
size_t size_from_header(char const *p, size_t s);
time_t time_from_header(char const *p, size_t s);
uid_t uid_from_header(char const *p, size_t s);
void list_archive(void);
void read_and(void (*do_something)(void));
void decode_mode(mode_t mode, char *string);
int name_match(char const *path);
_Bool all_names_found(struct tar_stat_info *p);
_Bool sparse_fixup_header(struct tar_stat_info *st);
enum dump_status sparse_skip_file(struct tar_stat_info *st);
static uintmax_t from_header(char const *where0, size_t digs, char const *type,
                             uintmax_t minus_minval, uintmax_t maxval);
                                        
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                        
                            
                               
        
   
     
                                                           
            
     
     
                 
                                      
                        
                           
         
                                                     
            
       
                                 
     
           
   
 
void read_and(void (*do_something)(void)) {
  enum read_header status;
  enum read_header prev_status;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  _Bool tmp___2;
  char buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  off_t tmp___3;
  char *tmp___4;
  char *tmp___5;
  char buf___0[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  off_t tmp___6;
  char *tmp___7;
  char *tmp___8;
  char buf___1[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  off_t tmp___9;
  char *tmp___10;
  char *tmp___11;
  char *tmp___12;
  char buf___2[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  off_t block_ordinal;
  off_t tmp___13;
  char *tmp___14;
  char *tmp___15;
  char *tmp___16;
  _Bool tmp___17;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    {
                                   
                    
      name_gather();
      open_archive((enum access_mode)0);
    }
    {
      while (1) {
                                     ;
        {
                               
                                               
                                            
          status = read_header((_Bool)0);
        }
        {
                                           
                        
           
                                           
                        
           
          if ((unsigned int)status == 1U) {
            goto case_1;
          }
                                           
                        
           
                                           
                        
           
                                           
                        
           
          goto switch_break;
                                
                                
          
                  
         
        case_1 : /* CIL Label */
        {
          tmp___1 = name_match((char const *)current_stat_info.file_name);
        }
          if (tmp___1) {
                                                   
               
                                                                         
                                                                 
                                                          
                                                                              
               
                                                         
                                              
                        
                      
                                                            
                                                
                                                              
                                                   
                            
                          
                                
                   
                        
                              
                 
               
                   {
            _L___0 :                                                {
              tmp___2 =
                  excluded_name((char const *)current_stat_info.file_name);
            }
              if (tmp___2) {
              _L : {
                                                                 
                               
                 
                                                                 
                               
                 
                                                                 
                               
                 
                                                                 
                               
                 
                                    
                                      
                                      
                                       
                                       
                                      
                                               
                   
                                         
                                                                   
                                                      
                                                            
                   
                 
              switch_default : /* CIL Label */
                                                             {
                skip_member();
              }
                goto __Cont;
                                                
              }
              }
            }
          } else {
            goto _L;
          }
          { (*do_something)(); }
          goto __Cont;
                               
                                    
             
                                                
                                                      
                                     
                                                                               
                               
                                                                   
                                                        
                                                                        
             
           
                                                   
                                     
             
                                             
             
                                             
                                
             
             
                                                
                                                      
                                     
                           
                                                                             
                             
                                                           
                                                          
             
                              
           
                               
                      
                               
                                    
             
                                                
                                                       
                                     
                           
                                                                             
                             
                                                                  
                                                        
                                                                          
             
           
                            
                                
         
                                               
         
           
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                  
                                      
           
                                                                        
                                                
                            
           
                                     
                                     
                                       
               
                                                   
                                         
                               
                                                                             
                               
                                                                             
                                                         
                                             
                             
                                                                               
                               
                                                 
                                                          
                                                                            
               
             
             
                                                            
                                                  
                              
             
                                  
                                     
                                     
                                   
                                      
           
                    
           
                                            
           
                      
        switch_break: /* CIL Label */;
        }
        goto while_break;
      __Cont : {                                                 }
                       
                           
         
      }
    while_break: /* CIL Label */;
    }
    {
                      
      names_notfound();
    }
           
  }
}
void list_archive(void) {
  off_t size;
  size_t written;
  size_t check;
  union block *data_block;
  char *tmp;
  int *tmp___0;
                   
   
                                                                              
                         
       
                                                    
       
     
                             
                                                       
         
                                               
         
                                  
           
                                     
                                                                     
                                                          
           
         
                                              
         
                     
                                          
                               
                               
             
                                      
                                   
             
                                               
                              
               
                                                           
                                               
                                
               
                               
             
                                                            
                                         
                                     
             
             
                                           
                           
                                      
                                                                       
                                                                            
                                   
                                                                       
             
                                   
               
                                                                              
                                                    
                                                           
               
                               
             
                                                   
           
                                     
         
                                  
           
                                                       
           
         
         
                                       
                                  
         
               
       
     
                              
       
                                                                             
       
     
                      
                              
       
                                                   
       
     
           
   
}
enum read_header read_header(_Bool raw_extended_headers) {
  size_t i;
  int unsigned_sum;
  int signed_sum;
  int recorded_sum;
  uintmax_t parsed_sum;
  char *p;
  union block *header;
  union block *header_copy;
  char *bp;
  union block *data_block;
  size_t size;
  size_t written;
  union block *next_long_name;
  union block *next_long_link;
  size_t next_long_name_blocks;
  size_t next_long_link_blocks;
  char *tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t name_size;
  void *tmp___2;
  char *tmp___3;
  off_t tmp___4;
  off_t tmp___5;
  char const *name;
  struct posix_header const *h;
  char namebuf[((sizeof(h->prefix) + 1UL) + 100UL) + 1UL];
  char *np;
  size_t tmp___6;
  char *tmp___7;
  int tmp___8;
                    
                    
  {
                                      
                                      
     
                {
                                     ;
        {
          header = find_next_block();
          current_header = header;
        }
                      
                                       
         
        unsigned_sum = 0;
                       
        p = header->buffer;
                            
        {
                     
                                             ;
                        
                
                                    
                                   
             
            unsigned_sum += (int)((unsigned char)*p);
                    
                
                                                   
           
                                         
        }
        if (unsigned_sum == 0) {
          return ((enum read_header)3);
        }
                                          
         
                     
                                              
                        
                
                                    
                                   
             
                                                                           
                                                                       
           
                                         
         
         
                                                            
                                                                     
                                                        
                                                                   
                                   
                                                    
                                                                           
                                                                   
         
                                                 
                                       
         
                                       
                                           
                                           
                                         
           
         
                                                 
                                                      
               {
           
            current_stat_info.stat.st_size =
                off_from_header((char const *)(header->header.size),
                                sizeof(header->header.size));
           
        }
                                                 
                      
               {
                                                   
                        
                  
                                                      
                          
                   {
                                                        
                                     
                                           
                                               
                        
                                                           
                                
                          
                                                             
                                           
                                                                         
                                                                      
                                                                                
                         
                                       
                         
                              
                                               
                           
                                         
                           
                         
                       
                       
                                                      
                                                             
                       
                                                               
                                             
                           
                                                         
                           
                         
                                                     
                                                             
                              
                                             
                           
                                                         
                           
                         
                                                     
                                                             
                       
                       
                                                     
                                               
                                                       
                                      
                       
                       
                                   
                                                            
                                              
                                                 
                           
                                                             
                                            
                             
                                                                             
                                                                 
                                              
                             
                                                 
                           
                                                                          
                                               
                                           
                           
                           
                                                                
                                                                    
                                                           
                                            
                                          
                                                 
                                                                                
                                                    
                                            
                           
                         
                                                       
                       
                                         
                            
                                                                
                         
                                                    
                                                                  
                                                           
                                                                
                         
                              
                                                                  
                           
                                                      
                                                                    
                                                             
                                                                  
                                                    
                           
                         
                       
                     
                   
                 
                      
                h = (struct posix_header const *)(&current_header->header);
                                       
                   
                                                   
                   
                 
                                     
                                                                      
                                                    
                                                                  
                       {
                  np = namebuf;
                                     
                     
                                                                          
                     
                                       
                       
                                                            
                                                                           
                                                  
                                                                 
                                                           
                                      
                                     
                             
                                             
                                                                           
                       
                     
                   
                  {
                    memcpy((void * /* __restrict  */)np,
                           (void const * /* __restrict  */)(h->name),
                           sizeof(h->name));
                                                           
                    name = (char const *)(namebuf);
                                                        
                                                        
                  }
                }
                {
                                                                         
                  assign_string(&current_stat_info.file_name, name);
                  current_stat_info.had_trailing_slash =
                      strip_trailing_slashes(current_stat_info.file_name);
                }
                                       
                   
                                                   
                   
                 
                                     
                                                                      
                                                    
                                                                  
                        
                   
                                                               
                                                                         
                                                
                                                                
                                                   
                                                        
                                                        
                   
                 
                {                                                    }
                return ((enum read_header)1);
               
            }
           
        }
      }
                                ;
     
  }
}
                                                                        
                                                                            
                             
          
              
              
              
              
              
                             
                
   
                                                                        
                       
                                                      
                                                      
                                                        
                                                           
                                                            
                                                              
                                                                 
                                                    
                          
                                
                   
                        
                              
                 
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
                             
                                   
                                          
                
                                          
         
       
            
                                                                        
                     
                                        
              
                                        
       
     
     
                               
                                                 
                                                                            
                                                        
                                                                              
                                                                             
                                                                             
                                                                          
                                                                   
                                                  
                                                                          
                                                                   
                                                  
                                                             
                                                             
     
                                     
                               
         
                                          
                                                                           
                                                                    
                                          
                                                                           
                                                                    
         
       
     
                                     
       
                                                 
                                                                            
                                                 
                                                                            
                                             
       
            
                                       
         
                                          
                                                                         
                                                                  
                                          
                                                                         
                                                                  
         
       
                          
                                   
           
                                                     
                                                                                
           
                
                                         
             
                                      
                                                                     
                                                              
             
                  
             
                                                                          
                                                              
             
                           
               
                                        
                                                                       
                                                                
               
             
           
         
                                   
           
                                                     
                                                                                
           
                
                                         
             
                                      
                                                                     
                                                              
             
                  
             
                                                                          
                                                              
             
                           
               
                                        
                                                                       
                                                                
               
             
           
         
       
       
                                                 
                       
         
                                                 
                       
         
                            
                               
                               
        
                                                                            
                                                   
       
                          
                                     
                                             
                                    
       
     
     
                                                             
                                
                                           
     
                  
       
                                       
                                        
       
     
           
   
 
                           
                                 
static uintmax_t from_header(char const *where0, size_t digs, char const *type,
                             uintmax_t minus_minval, uintmax_t maxval) {
  uintmax_t value;
  char const *where;
  char const *lim;
  int negative;
  char *tmp;
  unsigned short const **tmp___0;
  char const *where1;
  uintmax_t overflow;
  char const *tmp___1;
  int digit;
  char *tmp___2;
  char *tmp___3;
  int dig;
  char *tmp___4;
  char const *tmp___5;
  char *string;
  void *tmp___6;
  char const *tmp___7;
  char *tmp___8;
  int signbit;
  uintmax_t topbits;
  char const *tmp___9;
  char const *tmp___10;
  char *tmp___11;
  char buf[1000];
  char *tmp___12;
  unsigned short const **tmp___13;
  char minval_buf[((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL) +
                  1UL];
  char maxval_buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  char value_buf[((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL) +
                 1UL];
  char *minval_string;
  char *tmp___14;
  char *value_string;
  char *tmp___15;
  char *tmp___16;
  char *tmp___17;
  uintmax_t tmp___18;
  uintmax_t tmp___19;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    where = where0;
                       
                 
                     
     
                 
                                      
                                                         
                     
             
                                                                                
                                                   
                              
             
           
                                 
         
                                      
                                                                                
                           
         
                
       
                                 
     
    value = (uintmax_t)0;
                                          {
                     
                              
       
        while (1) {
                                           ;
          tmp___1 = where;
          where++;
          value += (uintmax_t)((int const) * tmp___1 - 48);
                                                           
                                 
                 {
            if (!((unsigned int)*where - 48U <= 7U)) {
              goto while_break___0;
            }
          }
                                                  
          value <<= 3;
        }
      while_break___0: /* CIL Label */;
       
                     
                    
              
                             
                               
                                   
                       
                                                             
                                      
                                   
                             
               
                           
                                                    
                                                  
                          
                                                                   
                                         
                          
                                                              
                                           
                     
                   
                                                          
                                                          
                              
                 
                                               
               
                      
                                                  
                              
                                            
                   
                                                                              
                                                                           
                                                                             
                                        
                                 
                   
                 
               
             
           
         
       
                     
                   
           
                                                                             
                                                                             
                        
                            
           
         
                               
       
    }       
                                      
                    
              
                                        
                               
                                 
             
                                  
                                                                                
                                                 
             
           
                          
                  
                                                 
           
                       
                                                
                                                               
                                                             
                                  
                                       
                 
                      
                                     
               
                                               
                 
                                                         
                                           
                                                          
                                                                       
                                                  
                 
                           
                   
                                                          
                                      
                                                                               
                                                                      
                                    
                   
                 
                                       
               
                                                        
                      
             
                                           
           
                
                                            
                        
                  
                                            
                                   
                                                                         
                                             
                                                                   
                              
                      
                                  
                                                                       
                                      
               
                           
                                                    
                                   
                          
                                                                               
                                                                   
                                         
                   
                                                                 
                               
                       
                                           
                                                                         
                                                                  
                                        
                       
                     
                                           
                   
                 
                                               
               
                                 
                             
                               
               
             
           
         
       
     
                                                     
                   
         
                                     
         
                                                                        
                      
                     
                     
               
                                                                       
                                                            
               
             
             
                         
                                                  
                                                                  
                                        
                                         
                   
                        
                                       
                 
                      
               
                                             
             
             
                                                                              
                                                                 
                                 
                                                                           
                                                                               
                              
             
           
                                 
         
       
     
                   
                              
           {
                        
    }
                           {
                     
                          
             {
        tmp___18 = value;
      }
      return (tmp___18);
    }
               
       
                                                 
                         
                              
                                                                              
                                 
                                                 
                  
                             
                                                                              
                                
       
                     
                       
                                  
       
                         
                        
                                   
       
       
                                                 
                   
                        
                                                                              
                                                                        
                                                                              
                        
                        
       
     
                           
  }
}
                                                
                
                   
   
     
                                                                
                                                
     
                        
   
 
int major_from_header(char const *p, size_t s) {
  uintmax_t tmp;
                   
  {
    {
      tmp = from_header(p, s, "major_t",
                        -((uintmax_t)(-1 << (sizeof(int) * 8UL - 1UL))),
                        (uintmax_t)(-1 - (-1 << (sizeof(int) * 8UL - 1UL))));
    }
    return ((int)tmp);
  }
}
int minor_from_header(char const *p, size_t s) {
  uintmax_t tmp;
                   
  {
    {
      tmp = from_header(p, s, "minor_t",
                        -((uintmax_t)(-1 << (sizeof(int) * 8UL - 1UL))),
                        (uintmax_t)(-1 - (-1 << (sizeof(int) * 8UL - 1UL))));
    }
    return ((int)tmp);
  }
}
mode_t mode_from_header(char const *p, size_t s) {
  unsigned int u;
  uintmax_t tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
                    
  {
     
                                                                  
                                              
                            
     
                   {
      tmp___0 = 2048;
    }       
                  
     
                   {
      tmp___1 = 1024;
    }       
                  
     
                  {
      tmp___2 = 512;
    }       
                  
     
                  {
      tmp___3 = 256;
    }       
                  
     
                  {
      tmp___4 = 128;
    }       
                  
     
                 {
      tmp___5 = 64;
    }       
                  
     
                 {
      tmp___6 = 256 >> 3;
    }       
                  
     
                 {
      tmp___7 = 128 >> 3;
    }       
                  
     
                {
      tmp___8 = 64 >> 3;
    }       
                  
     
                {
      tmp___9 = (256 >> 3) >> 3;
    }       
                  
     
                {
      tmp___10 = (128 >> 3) >> 3;
    }       
                   
     
                {
      tmp___11 = (64 >> 3) >> 3;
    }       
                   
     
    return (
        (mode_t)(((((((((((tmp___0 | tmp___1) | tmp___2) | tmp___3) | tmp___4) |
                       tmp___5) |
                      tmp___6) |
                     tmp___7) |
                    tmp___8) |
                   tmp___9) |
                  tmp___10) |
                 tmp___11));
  }
}
off_t off_from_header(char const *p, size_t s) {
  uintmax_t tmp;
                   
  {
    {
      tmp =
          from_header(p, s, "off_t", (uintmax_t)0,
                      (uintmax_t)(-1L - (-1L << (sizeof(off_t) * 8UL - 1UL))));
    }
    return ((off_t)tmp);
  }
}
                                                  
                
                   
   
                                                                              
                 
   
 
                                                  
                
                   
   
     
                        
                                                                              
                                                                    
     
                         
   
 
                                                
                
                   
   
     
                                                                
                                                
     
                        
   
 
                                                        
                
                   
   
     
                                                                               
     
                 
   
 
                                                                 
   
          
                        
     
                 
                                      
              
                                                
                      
                              
                           
         
       
                                 
     
                 
   
 
static char buffer[27UL];
char const *tartime(time_t t) {
  char *p;
  struct tm *tm;
  struct tm *tmp;
  struct tm *tmp___0;
  struct tm *tmp___1;
  uintmax_t tmp___2;
                   
  {
                     
       
                                           
                      
       
            
       
                                                  
                          
       
     
                 
             
       
                
                                               
                                                                              
                                                                                
                                    
       
      return ((char const *)(buffer));
     
                 
                                
            
                             
     
                                                                            
                 
          
                     
     
     
                 
                                      
                                                                     
                                  
                           
         
            
                       
       
                                 
     
                             
  }
}
                         
                                                                  
                 
                         
                  
                                                                         
                                                                         
             
              
                                                                                
                                                                           
          
                                                                       
            
                
                
                
                 
              
                    
                
              
                    
                
                       
                
                        
                 
                 
                  
                  
                  
                 
                 
                 
                 
                      
                       
                 
                 
                 
                 
                     
                 
                 
                 
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
                             
                                     
            
                                
     
                              
                               
         
                                                  
         
       
       
                       
                                                                     
                       
                                                                     
                                            
                                     
                                                                                
                                        
                                                  
                                                              
       
     
                              
       
                                                    
                                                  
                                                                  
       
            
                           
       
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                        
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                               
                               
        
                             
                                                    
                                           
                        
       
                          
                              
                              
                               
        
                             
                                                  
       
                                                        
                               
         
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                                    
       
       
                                                 
                                                      
       
                      
                                                 
                                      
                             
                  
                        
           
                
                      
         
              
                              
       
                 
                                                                   
                                                                            
                                                            
                    
       
                                        
           
                                                 
                  
                                                                               
                               
           
                
           
                     
                                                                           
                                                                    
                                                      
                                                                           
                         
           
         
       
                      
                                                 
                                      
                              
                  
                        
           
                
                      
         
              
                              
       
                 
                                                                   
                                                                            
                                                            
                    
       
                                        
           
                                                  
                  
                                                                               
                               
           
                
           
                     
                                                                           
                                                                    
                                                      
                                                                           
                          
           
         
       
       
                                                         
                           
         
                                                         
                           
         
                            
                                   
                                   
        
                                                                      
                                                
                               
                     
                                                                              
                                                
                                                        
                                                
                                                     
                                                                       
                                                 
                                
                     
                                                                              
                                                
                                                         
       
                              
                                      
       
                                                 
                                        
                     
                                                                              
                                                
                                                         
       
                              
                                        
       
       
                                              
                                               
                                                
                                                              
       
                           
                       
       
       
                                                  
                                                                            
                                                                   
                                                     
                                                  
                                                                  
       
       
                                                         
                           
         
                                                         
                           
         
                                                        
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                           
         
                                                         
                           
         
                                                         
                           
         
                                                         
                           
         
                                                         
                           
         
                                
                                   
       
                                                         
                                                  
                                                                       
       
                              
                                   
       
                                                         
                                            
                                                  
                                                                    
       
                              
                                          
       
                                                         
                                      
                                                      
                                                      
                                                  
                                                                    
       
                              
                                   
                                   
                                    
                                    
                                    
                                    
                                    
                                    
                                    
        
                                    
       
                              
                                   
       
                                              
                                                  
                                                          
       
                              
                                   
       
                                              
                                                  
                                                          
       
                              
                                   
       
                                                  
                                                  
                                                          
       
                              
                                   
       
                                       
                                                                 
                                                          
                                                 
                     
                     
                                                                              
                                                
                                                         
                                                         
                                                  
                                                                
       
                              
                                   
       
                                                       
                                                  
                                                          
       
                              
                                        
       
     
                                
           
   
 
                                                               
                 
                                                                       
            
                
                
                
                
                    
                    
                    
                    
   
                             
       
                             
                                     
       
                                
         
                                        
                                                  
                             
                   
                                                                                
                                          
                                                    
                                                                    
         
       
       
                                                   
                                                 
                                                  
                                                                        
                                                         
       
     
           
   
 
                            
                 
            
                   
   
                              
                          
                           
     
     
                 
                                      
                           
                           
         
                                  
                 
           
                                                       
                                           
                         
           
         
         
                                  
                       
         
                                  
                                
         
       
                                 
     
           
   
 
void skip_member(void) {
  char save_typeflag;
  _Bool tmp;
  {
     
                                                      
      set_next_block_after(current_header);
                                                                           
                                                
     
              
       
                                             
       
            
                                     
         
                                                    
         
       
     
           
  }
}
/* #pragma merger("0","008.mangle.o.i","") */
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        rename)(char const *__old,
                                                char const *__new);
                           
             
                   
            
             
               
                     
                       
                   
                
                    
             
                 
                
              
                      
                
                
               
                
              
               
                       
                 
                 
                
                 
               
               
               
                 
               
               
                    
                    
                    
                    
                    
                    
   
     
                                            
                                         
                               
                        
                          
     
                                       
       
                     
       
            
                                                 
         
                       
         
       
     
                                        
     
                 
                                      
                           
                           
         
         
                                      
                          
         
                     
           
                                                                 
                                               
                            
           
                 
         
                                                     
                                       
                                   
         
         
                                                
                                                                             
                            
                                                   
                               
                                                                
         
       
                                 
     
     
                 
                                          
                       
                               
         
         
                                                           
                                
                        
                                  
                                                                         
         
                       
           
                                                                            
           
                         
             
                                                                  
                                                          
                              
             
                  
             
                                
                                                         
             
             
                         
                                                  
                 
                                                                                
                 
                                
                                       
                 
                 
                             
                                                                 
                 
               
                                             
             
             
                                       
                                   
                                           
                        
                                                                            
             
                           
               
                                                                
               
                             
                            
                      
                 
                            
                                                                                
                 
                               
                          
                                                                      
                                                                
                                                                 
                                                
                                                                       
                                  
                                  
                 
                        
                          
                 
               
                    
               
                                   
                 
                                                           
                                                                          
                 
               
             
           
                
           
                              
                                                       
           
           
                       
                                                
                                                                               
                             
                                     
               
               
                           
                                                               
               
             
                                           
           
                                   
                                               
                                               
           
           
                                         
                                                                               
           
                        
             
                                                                 
                                                           
                                                           
                                           
                                                                          
                              
             
                  
                                 
               
                                                      
                                                                       
               
             
           
         
                             
       
                                     
     
           
   
 
/* #pragma merger("0","009.misc.o.i","") */
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        pipe)(int *__pipedes);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     chdir)(char const *__path);
extern __attribute__((__nothrow__)) __pid_t fork(void);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     rmdir)(char const *__path);
char *find_backup_file_name(char const *file, enum backup_type backup_type___0);
                             
int chdir_arg(char const *dir);
void chdir_do(int i);
__attribute__((__noreturn__)) void chdir_fatal(char const *name);
__attribute__((__noreturn__)) void exec_fatal(char const *name);
void read_error_details(char const *name, off_t offset, size_t size);
__attribute__((__noreturn__)) void read_fatal(char const *name);
__attribute__((__noreturn__)) void
read_fatal_details(char const *name, off_t offset, size_t size);
void read_warn_details(char const *name, off_t offset, size_t size);
void savedir_warn(char const *name);
void seek_warn_details(char const *name, off_t offset);
void seek_diag_details(char const *name, off_t offset);
void waitpid_error(char const *name);
pid_t xfork(void);
void xpipe(int *fd);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
int save_cwd(struct saved_cwd *cwd);
int restore_cwd(struct saved_cwd const *cwd);
static __attribute__((__noreturn__)) void call_arg_fatal(char const *call,
                                                         char const *name);
void assign_string(char **string, char const *value) {
  char *tmp;
  {
                  
       
                              
       
     
                
       
        tmp = xstrdup(value);
        *string = tmp;
       
                                               
                          
     
           
  }
}
                                             
                     
                    
                   
              
                
                  
                
                 
                
                
                
                
              
   
                    
                            
                           
                
     
                 
                                      
                       
                           
         
                     
                 
                              
         
                                
                         
           
                                
                         
           
                              
                                
                                
                          
             
                                                        
                          
                                       
                                                                        
                                           
                                                          
                                                                     
                                                
             
           
                                
                        
                                
                                
                        
                                
                           
                  
                          
           
                                   
                            
                                       
                        
                                  
                          
                                       
           
                            
                                      
         
       
                                 
     
                  
                                  
                          
     
                       
   
 
                                  
             
               
                    
            
                
                
                
                
                
                
            
                
                
                
                
                 
                 
                 
                 
                 
                 
                 
   
               
                    
                         
     
                 
                                      
                       
                           
         
                                 
                   
           
                                     
                           
             
                                      
                            
             
                                      
                            
             
                                      
                            
             
                                     
                           
             
                                      
                            
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                
                                  
                              
                          
                              
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                  
                                  
                          
                                  
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                  
                                  
                          
                                 
                     
                              
                                  
                                  
                                   
                                   
                                   
                                   
                                   
                                   
                              
                     
                                       
                                    
                                    
                            
                                     
                                
                    
                                      
                                      
                              
                                       
                                  
               
             
                             
                     
                                                     
                                    
                                    
                            
                                     
                                
                    
                                      
                                      
                              
                                       
                                  
               
             
                              
                     
                                                      
                                   
                          
                                    
                              
                                         
                       
                                   
                          
                                   
                          
                                     
                            
                                
                       
                                    
             
                              
                                        
           
                
                                                                    
                                   
                          
                              
                     
                                  
                  
                     
                          
           
         
       
                                 
     
                                                              
                                  
     
                    
   
 
                                
                               
                                                     
          
   
              
                                         
       
                   
                                        
                                               
                   
                  
                                                 
                               
                                                                        
                       
                                                             
                      
                                               
               
                    
                                             
             
           
         
                                   
       
                       
       
                   
                                            
                                               
                                                    
                                   
             
                  
                                 
           
                    
           
                       
                                                
                                                
                                     
               
                     
             
                                           
           
         
                                       
       
                         
                
              
                                             
                             
                    
                  
                    
           
                
                  
         
       
                          
     
   
 
                                          
           
                
              
   
                                             
                  
       
                                 
                 
       
                  
     
                              
                     
   
 
                                                                  
          
               
               
              
               
              
              
                  
                
                    
                  
                    
                
        
              
        
               
                
               
   
                       
       
                           
       
                     
                   
       
                                       
                          
         
                                       
         
                             
                     
         
       
     
                                    
                       
                 
     
                                     
     
                           
                     
       
                          
                    
       
                           
                    
       
                           
                    
       
                        
                            
                        
         
                                 
         
                           
                      
                
                      
         
              
                    
       
                       
                             
                             
                              
      
                                       
                        
       
                                       
                    
       
                                       
                    
       
                            
                               
                            
                           
                  
                            
     
                              
                          
     
                       
                   
       
                                      
       
                   
                                        
                                       
                                   
                             
           
           
                                            
                                  
                                                                
                                                             
                        
                                         
                         
                                      
           
                   
             
                                      
                                            
                            
             
                       
           
                                  
         
                                   
       
       
                                
                                     
       
                             
                                      
     
                        
                                  
     
               
   
 
                                                                    
                        
            
               
              
                      
                      
                
        
               
                      
                
                
              
                    
                    
                    
   
                              
                                
         
                                         
         
                         
                                                                
             
                                                   
                                                                
             
                       
                                
             
           
         
       
     
     
                                                          
                                                                    
     
                  
       
                                     
       
                          
                          
       
                           
                        
     
                                                 
                        
     
                              
                                                   
                          
              
                                                    
                            
         
       
     
     
                                               
                                                         
                                                                   
     
                             
       
                     
       
     
     
                                                        
                                                        
     
                       
                           
         
                                                                
                                                                 
                                                   
                                                    
                                                                             
         
       
                        
            
       
                                     
                     
                                                              
                                                                   
                                                     
                                                             
                        
                                                           
       
                        
     
   
 
                             
        
           
                      
                
                
              
                      
                      
                
                    
                    
   
                            
       
                                                         
                                                           
       
                         
         
                                   
                   
                                                                 
                                                                    
                                                       
                                                               
                          
         
       
                           
         
                                                                 
                                                                
                                                        
                                                    
                                                                             
         
       
                                                             
     
           
   
 
int deref_stat(_Bool deref, char const *name, struct stat *buf) {
  int tmp;
  int tmp___0;
  int tmp___1;
  {
               {
       
        tmp = stat((char const * /* __restrict  */)name,
                   (struct stat * /* __restrict  */) buf);
        tmp___1 = tmp;
       
    }       
       
                                                             
                                                               
                          
       
     
    return (tmp___1);
  }
}
static struct wd *wd;
                  
                       
                                
            
                 
                   
   
                          
       
                                          
                                                           
                              
       
                 
                               
                              
              
       
     
                     
       
                   
                                        
                                              
                                                   
                               
             
                  
                             
           
                   
           
                       
                                                
                                               
                                     
               
                          
                   
                    
             
                                           
           
         
                                   
       
                                                      
                                  
       
     
                           
                          
                  
          
                          
   
 
                    
void chdir_do(int i) {
  struct wd *prev;
  struct wd *curr;
  char *tmp;
  int tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
                   
                    
   
                        
                           
                    
                         
         
                          
                                               
         
                           
           
                                                           
                                           
                         
           
         
       
                        
         
                                                                              
         
                      
           
                                                                 
                                               
                         
           
         
              
                
                                                        
             
                              
             
           
         
                                                    
                           
           
                                    
           
         
       
                   
     
           
   
}
void decode_mode(mode_t mode, char *string) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
   
                 
             
                      
                    
            
                    
     
                         
                     
             
                      
                    
            
                    
     
                             
                     
             
                       
                       
                       
              
                       
       
                          
            
                       
                       
              
                       
       
                          
     
                              
                     
             
                                          
                     
            
                     
     
                              
                     
             
                                          
                     
            
                     
     
                              
                     
             
                       
                                           
                       
              
                       
       
                          
            
                                           
                       
              
                       
       
                          
     
                              
                     
             
                                                 
                     
            
                     
     
                              
                     
             
                                                 
                     
            
                     
     
                              
                     
             
                      
                                                  
                       
              
                       
       
                          
            
                                                  
                       
              
                       
       
                          
     
                              
                           
           
   
}
                                                                
        
           
                
                
                   
   
     
                               
               
                                     
                                         
                                                        
                      
     
           
   
 
static __attribute__((__noreturn__)) void call_arg_fatal(char const *call,
                                                         char const *name);
                                                                
        
           
                
                
                   
   
     
                               
               
                                     
                                         
                                                        
                   
     
   
 
                                                               
        
           
                
                
                   
   
     
                               
               
                                     
                                                  
                                                        
     
           
   
 
__attribute__((__noreturn__)) void chdir_fatal(char const *name);
void chdir_fatal(char const *name) {
                   
   
                                       
   
}
                                                         
        
           
               
                
                
                   
                   
   
     
                               
               
                             
                                     
                                                        
                                                       
                      
     
           
   
 
                                                                  
        
           
                
                
                   
   
     
                               
               
                                     
                                                                           
                                                                     
                                
                      
     
           
   
 
                                    
                   
   
                                      
           
   
 
                                   
                   
   
                                     
           
   
 
void close_diag(char const *name) {
   
                                    
       
                         
       
            
                             
     
           
   
}
__attribute__((__noreturn__)) void exec_fatal(char const *name);
                                   
                   
   
                                      
   
 
                                                         
        
           
                      
                
                
                   
   
     
                               
               
                                   
                                       
                                                      
                                                           
                      
     
           
   
 
                                    
                   
   
                                      
           
   
 
                                     
                   
   
                                       
           
   
 
                                    
                   
   
                                      
           
   
 
                                   
                   
   
                                     
           
   
 
__attribute__((__noreturn__)) void open_fatal(char const *name);
                                   
                   
   
                                      
   
 
                                  
                   
   
                                    
           
   
 
                                  
   
                                    
       
                        
       
            
                            
     
           
   
 
                                   
                   
   
                                     
           
   
 
void read_error_details(char const *name, off_t offset, size_t size) {
  char buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  int e;
  int *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
                    
   
     
                               
               
                                              
                            
                                                                              
                                     
                                                                       
                                                                               
                                                                 
                      
     
           
   
}
                                                                     
                                                                       
        
           
                
                
                
                    
   
     
                               
               
                                              
                            
                                                                              
                                     
                         
                                                                 
                                                                         
                                                                 
     
           
   
 
                                                                     
   
                                    
       
                                              
       
            
                                                  
     
           
   
 
__attribute__((__noreturn__)) void read_fatal(char const *name);
void read_fatal(char const *name) {
                   
   
                                      
   
}
__attribute__((__noreturn__)) void
read_fatal_details(char const *name, off_t offset, size_t size);
                                                                      
                                                                       
        
           
                
                
                
                    
   
     
                               
               
                                              
                            
                                                                              
                                     
                                                                       
                                                                               
                                                                 
                   
     
   
 
                                       
                   
   
                                         
           
   
 
                                      
                   
   
                                        
           
   
 
void readlink_diag(char const *name) {
   
                                    
       
                            
       
            
                                
     
           
   
}
                                      
                   
   
                                        
           
   
 
                                     
                   
   
                                       
           
   
 
                                     
   
                                    
       
                           
       
            
                               
     
           
   
 
                                   
                   
   
                                     
           
   
 
                                                         
                                                                       
        
           
                
                
                
                   
                    
   
     
                               
               
                                              
                            
                                                                              
                                     
                                                 
                                                           
                      
     
           
   
 
                                  
                   
   
                                    
           
   
 
                                                        
                                                                       
        
           
                
                
                
                   
                    
   
     
                               
               
                                              
                            
                                                                              
                                     
                                                          
                                                           
     
           
   
 
                                                        
   
                                    
       
                                        
       
            
                                            
     
           
   
 
                                                            
        
           
                      
                
                
                   
   
     
                               
               
                                     
                                     
                                                           
                                                           
                      
     
           
   
 
                                   
                   
   
                                     
           
   
 
                                  
                   
   
                                    
           
   
 
                                  
   
                                    
       
                        
       
            
                            
     
           
   
 
                                       
                   
   
                                         
           
   
 
                                      
                   
   
                                        
           
   
 
                                     
                   
   
                                       
           
   
 
                                    
                   
   
                                      
           
   
 
                                      
                   
   
                                        
           
   
 
                                    
                   
   
                                      
           
   
 
                                                                        
            
   
                        
       
                          
       
            
       
                                                        
                                                                
                                                           
                        
       
     
           
   
 
__attribute__((__noreturn__)) void
write_fatal_details(char const *name, ssize_t status, size_t size);
                                                                         
   
     
                                                      
                   
     
   
 
pid_t xfork(void) {
  pid_t p;
  __pid_t tmp;
  char *tmp___0;
                   
                   
  {
    {
      tmp = fork();
      p = tmp;
    }
                  
       
                                           
                                                      
       
     
    return (p);
  }
}
                     
            
              
                   
                   
   
                           
                      
       
                                              
                                                  
       
     
           
   
 
                                              
            
   
                                                               
                               
   
 
                                     
                  
   
                               
                 
   
 
/* #pragma merger("0","00a.names.o.i","") */
extern int getc_unlocked(FILE *__stream);
extern struct passwd *getpwuid(__uid_t __uid);
extern struct passwd *getpwnam(char const *__name);
extern struct group *getgrgid(__gid_t __gid);
extern struct group *getgrnam(char const *__name);
_Bool excluded_filename(struct exclude const *ex, char const *f);
char filename_terminator;
struct exclude *excluded;
char const *files_from_option;
                        
_Bool starting_file_option;
void init_names(void);
void name_add(char const *name);
void name_init(void);
void name_term(void);
void name_close(void);
struct name *addname(char const *string, int change_dir___0);
void add_avoided_name(char const *name);
void request_stdin(char const *option);
                          
                          
                        
                        
                                  
                                  
                                
static gid_t cached_no_such_gid;
                                            
                        
                   
                   
   
                    
                                      
         
                              
         
               
       
     
                        
                  
            
                              
                              
       
                               
       
                     
           
                             
                                                                        
           
                
           
                                     
                                
           
                 
         
       
     
                                                    
           
   
 
                                            
                      
                   
                   
   
                    
                                      
         
                              
         
               
       
     
                        
                  
            
                              
                              
       
                              
       
                    
           
                             
                                                                       
           
                
           
                                     
                                
           
                 
         
       
     
                                                    
           
   
 
                                                  
                        
          
              
   
                               
       
                                                                
       
                     
                   
       
     
                        
              
            
                                                                          
                
              
                                                                
                           
                                          
                       
             
                                          
                                                                          
             
                  
                                                            
                       
           
         
       
     
                       
               
   
 
                                                  
                      
          
              
   
                               
       
                                                                
       
                     
                   
       
     
                        
              
            
                                                                          
                
              
                                                                
                           
                                         
                      
             
                                         
                                                  
             
                  
                                                            
                       
           
         
       
     
                       
               
   
 
static struct name *namelist;
static struct name **nametail = &namelist;
static char const **name_array;
static int allocated_names;
static int names;
static int name_index;
void init_names(void) {
  void *tmp;
   
     
                           
                                                                           
                                      
                
     
           
   
}
void name_add(char const *name) {
  void *tmp;
  int tmp___0;
  {
    if (names == allocated_names) {
       
                             
        tmp = xrealloc((void *)name_array,
                       sizeof(char const *) * (unsigned long)allocated_names);
        name_array = (char const **)tmp;
       
    }
    tmp___0 = names;
    names++;
    *(name_array + tmp___0) = name;
           
  }
}
                       
static char *name_buffer;
                                 
                                                    
            
                
                
              
   
                                  
              
                  
            
                                        
                    
                    
              
                                          
                      
                      
                
                      
         
       
     
                     
   
 
void name_init(void) {
  void *tmp;
  int tmp___0;
                   
  {
    {
      tmp = xmalloc((size_t)102);
      name_buffer = (char *)tmp;
                                       
    }
                            
       
                                                 
       
                    
         
                                                                              
                                                                  
         
                         
           
                                          
           
         
              
         
                              
                            
         
       
     
           
  }
}
void name_term(void) {
   
     
                                
                               
     
           
   
}
static int read_name_from_file(void) {
  int character;
  size_t counter;
  void *tmp;
  size_t tmp___0;
  void *tmp___1;
  {
                        
     
                 
                                      
                                                 
                              
                                                         
                             
           
                
                           
         
                                            
                                                              
             
                           
             
           
           
                                      
                                                                          
                                      
           
         
                          
                  
                                                   
       
                                 
     
                         
                            
                   
       
     
                                        
                                                          
         
                       
         
       
       
                                  
                                                                          
                                      
       
     
                                            
    return (1);
  }
}
char *name_next(int change_dirs) {
  char const *source;
  char *cursor;
  int chdir_flag;
  int tmp;
  size_t source_len;
  int tmp___0;
  void *tmp___1;
  size_t tmp___2;
  char *tmp___3;
  int tmp___4;
  int tmp___5;
  char *tmp___6;
                    
  {
                   
                                        
                      
     
    {
                {
                                     ;
        if (name_index == names) {
                           
            goto while_break;
           
                                          
                     
                             
           
        } else {
          {
            tmp___0 = name_index;
            name_index++;
            source = *(name_array + tmp___0);
                                        
          }
                                                
             
                         
                                                  
                                          
                                          
                   
                                 
                   
                 
                                                         
                                       
                 
               
                                             
             
             
                                        
                                                          
                                            
             
           
          {
            strcpy((char * /* __restrict  */)name_buffer,
                   (char const * /* __restrict  */)source);
          }
        }
         
                                                      
                                               
         
         
                     
                                              
                                                                     
                                          
                                     
               
                    
                                   
             
                             
                     
                                    
           
                                         
         
                         
           
                                                       
           
                            
             
                                                     
             
           
                         
               {
                           {
             
                                                                
             
                               
                             
                    
                                              
              return (name_buffer);
             
          }                                                      
                                            
                                 
           
        }
      }
    while_break: /* CIL Label */;
    }
                    
                       
         
                                                          
                                             
                       
         
       
     
    return ((char *)0);
  }
}
void name_close(void) {
  int tmp;
   
                    
                                                             
         
                                  
         
                       
           
                                                   
           
         
       
     
           
   
}
                               
                             
                      
void name_gather(void) {
  char const *name;
  void *tmp;
  char const *dir;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  int tmp___4;
  size_t needed_size;
  void *tmp___5;
  int change_dir___0;
  int change_dir0;
  char const *dir___0;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  int tmp___10;
                    
                    
  {
                            
                                  
         
                          
                                                                         
                                        
                                          
                                                        
         
       
       
                   
                                        
           
                                   
                                         
           
                     
             
                                           
             
                                  
                               
             
                  
                             
           
           
                                   
                                        
           
                     
             
                                                              
                                                 
                           
             
           
           
                                   
                                                          
           
         
                                   
       
                 
         
                                            
                                                                     
                                              
                            
         
                                           
           
                       
                                                
                                    
                                    
                 
                               
                 
               
                                                    
                                     
               
             
                                           
           
           
                                                                   
                                                
           
         
         
                                              
                                                              
                                                       
                                              
                                                 
                                
                                     
         
              
                         
           
                                                 
           
         
       
            
      change_dir___0 = 0;
      {
        while (1) {
                                           ;
          change_dir0 = change_dir___0;
          {
                      {
                                               ;
              {
                tmp___9 = name_next(0);
                name = (char const *)tmp___9;
              }
                         
                 
                                                
                 
                                       
                                       
                 
                      
                                     
               
               
                                       
                                                
               
                             
                 
                                                                  
                                                     
                               
                 
               
               
                                           
                                                                  
               
            }
                                           
          }
          if (name) {
             
              addname(name, change_dir___0);
             
          } else {
                                                
               
                                                         
               
             
            goto while_break___1;
          }
        }
      while_break___1: /* CIL Label */;
      }
     
           
  }
}
struct name *addname(char const *string, int change_dir___0) {
  size_t length;
  size_t tmp;
  size_t tmp___0;
  struct name *name;
  void *tmp___1;
  int tmp___2;
  {
                {
       
        tmp = strlen(string);
        tmp___0 = tmp;
       
    }       
                          
     
    {
      length = tmp___0;
      tmp___1 =
          xmalloc(((unsigned long)(&((struct name *)0)->name) + length) + 1UL);
      name = (struct name *)tmp___1;
    }
                {
       
                             
        strcpy((char * /* __restrict  */)(name->name),
               (char const * /* __restrict  */)string);
       
    }       
                           
                              
     
                                  
                          
                                     
                           
                            
    name->change_dir = change_dir___0;
                                         
                 
       
                                     
       
                    
                               
                                               
                                  
                
                                                 
                                    
                  
                                                   
                                      
             
           
         
       
     
    *nametail = name;
    nametail = &name->next;
    return (name);
  }
}
static struct name *namelist_match(char const *path, size_t length) {
  struct name *p;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  {
    p = namelist;
    {
      while (1) {
                                     ;
        if (!p) {
          goto while_break;
        }
                         
                                                    
                        
           
         
                       {
           
            tmp = fnmatch((char const *)(p->name), path, recursion_option);
            tmp___2 = tmp == 0;
           
        }       
                                    
                                                        
                          
                    
                                                           
                                       
                                        
                 
                                                                               
                                              
                 
                                     
                                
                          
                                
                   
                        
                              
                 
                      
                            
               
             
                  
                        
           
                            
         
        if (tmp___2) {
          return (p);
        }
      __Cont:
                                                       p = p->next;
      }
    while_break: /* CIL Label */;
    }
    return ((struct name *)0);
  }
}
int name_match(char const *path) {
  size_t length;
  size_t tmp;
  struct name *cursor;
  uintmax_t tmp___0;
  {
    {
      tmp = strlen(path);
      length = tmp;
    }
    {
                {
                                     ;
        cursor = namelist;
        if (!cursor) {
          return (!files_from_option);
        }
                           
           
                                         
                                        
                                 
           
                                      
         
        { cursor = namelist_match(path, length); }
        if (cursor) {
                                                           {
                                   
                                              {
                (cursor->found_count)++;
              }
                     
                                      
             
          }       
                                    
           
                                     
             
                                     
                                          
                                   
             
           
                                           
                                        {
            tmp___0 = cursor->found_count;
          }       
                                                                            
           
          return ((int)tmp___0);
        }
                               {
                                      
             
                            
             
                                        
              return (0);
             
                                      
                       
           
        }       
                     
         
      }
                                ;
    }
  }
}
_Bool all_names_found(struct tar_stat_info *p) {
  struct name const *cursor;
  size_t len;
  uintmax_t tmp;
  {
                       {
      return ((_Bool)0);
    }                                                      
                                     
                          
              
                                    
                            
         
       
     
     
                                               
                                             
     
     
                 
                                      
                      
                           
         
                             
                            
                
                                         
                                      
                  
                                                          
                                                                        
           
                    
                                 
                                                
                                                                
                                  
               
             
                  
                                
                                
                    
                          
             
           
         
                                                   
       
                                 
     
                      
  }
}
void names_notfound(void) {
  struct name const *cursor;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *name;
  char *tmp___3;
  char *tmp___4;
  uintmax_t tmp___5;
                    
                    
                    
  {
    cursor = (struct name const *)namelist;
    {
                {
                                     ;
        if (!cursor) {
          goto while_break;
        }
                                      {
          tmp___5 = cursor->found_count;
        }       
                                                            
                                                                          
         
        if (!tmp___5) {
                             {
                                            {
               
                                                                   
                                                              
                                                        
                exit_status = 2;
               
            }                                                      
               
                                                                       
                         
                                                                            
                                                            
                                
               
             
          }
        }
                                                   
      }
    while_break: /* CIL Label */;
    }
                                
                         
                            
       
                   
                                            
                                  
                                                                     
                                 
           
           
                                                         
                                                          
                                                        
                            
           
         
                                       
       
     
           
  }
}
                                                             
                                                                  
                                                                     
                          
                           
                   
                    
                      
                            
                      
              
          
              
   
                      
                    
     
                      
       
                                                   
                                                          
       
                    
                            
                            
                                      
                        
       
                    
     
                      
                                    
                               
                  
                               
     
                 
                                      
                       
                           
         
                    
             
                              
                  
       
                                 
     
     
                                 
                                      
                                                                 
                                                                    
                            
     
     
                 
                                          
                         
                             
                                 
           
                
                               
         
         
                                                               
                                                                 
         
                          
                                    
                                    
                                          
                              
                
                                     
                                     
                                           
                               
         
       
                                     
     
                     
                                
            
                                 
     
                    
   
 
                                                                        
                 
          
              
                    
                    
   
                                   
                                
            
                                                    
                                                                      
     
                                   
                                
            
                                                    
                                                                      
     
                                          
                     
                           
            
       
                                                                         
                      
       
     
                     
   
 
                                                                        
             
                   
            
                     
                          
                
                
               
                       
                     
                 
                
                       
                    
   
     
                        
                                                 
                       
     
                      
                                              
            
                                 
                                 
                                               
              
                                       
       
       
                                                  
                                  
                                          
                                                      
                                                 
                                                     
       
                                                           
                              
                      
                                         
                                                
       
                          
       
                   
                                        
                         
                             
           
                                                           
                                   
                                                                  
               
                           
                                                    
                                          
                                          
                     
                                   
                     
                   
                                                                           
                                         
                   
                 
                                               
               
               
                                                                            
                                          
               
             
             
                                                                       
                                                                   
                                                                       
                                                         
             
           
                                        
         
                                   
       
                                
     
           
   
 
void collect_and_sort_names(void) {
  struct name *name;
  struct name *next_name;
  int num_names;
  struct stat statbuf;
  int tmp;
                   
                   
  {
    { name_gather(); }
                                    
       
                              
       
     
                    
       
                        
       
     
                    
     
                 
                                      
                    
                           
         
                               
                                
                      
                
                                   
                        
           
         
                           
                      
         
                                       
                         
                      
         
         
                                                                          
                                     
         
                       
           
                                                  
           
                      
         
                                                   
           
                                  
                                                            
           
         
             
                         
       
                                 
     
                  
    name = namelist;
     
                 
                                          
                    
                               
         
                    
                          
       
                                     
     
     
                                                                 
                      
     
    {
                {
                                         ;
                    
                               
         
        name->found_count = (uintmax_t)0;
                          
      }
    while_break___1: /* CIL Label */;
    }
           
  }
}
                                          
                
             
                      
                       
   
     
                         
                   
     
     
                 
                                      
         
                                                 
                           
         
                     
                          
         
                                
                         
                                        
               
                              
               
                                          
                                          
               
                        
                                        
             
                      
                                      
           
                
                                    
         
       
                                 
     
   
 
char *name_from_list(void) {
   
                        {
      gnu_list_name = namelist;
    }
    {
      while (1) {
                                     ;
        if (gnu_list_name) {
          if (!gnu_list_name->found_count) {
                                      {
              goto while_break;
            }
          }
        } else {
          goto while_break;
        }
        gnu_list_name = gnu_list_name->next;
      }
    while_break: /* CIL Label */;
    }
    if (gnu_list_name) {
      {
        (gnu_list_name->found_count)++;
                                            
      }
      return (gnu_list_name->name);
    }
    return ((char *)0);
   
}
                            
                    
   
                                     
                    
     
                 
                                      
                    
                           
         
                                         
                          
       
                                 
     
           
   
 
                                                    
                 
             
                  
                 
            
                   
                
              
   
     
                         
                    
                             
                               
     
                  
                                                            
                    
              
                    
       
            
                  
     
     
                      
                                                              
                                   
                                                  
                                                            
                                          
                                                                        
                                                             
     
                        
   
 
_Bool excluded_name(char const *name) {
  _Bool tmp;
  {
    { tmp = excluded_filename((struct exclude const *)excluded, name + 0); }
    return (tmp);
  }
}
static unsigned int hash_string_hasher(void const *name,
                                       unsigned int n_buckets) {
  size_t tmp;
  {
    { tmp = hash_string((char const *)name, (size_t)n_buckets); }
    return ((unsigned int)tmp);
  }
}
                                                                        
          
   
                                                               
                               
   
 
                                                                             
                
          
            
          
                      
                
   
     
                     
                            
              
     
            
              
            
       
                            
                                              
                                                                   
                                                       
                    
                             
       
                    
            
                                                  
                            
       
                 
           
                         
           
         
              
                          
       
     
                                               
                        
            
                          
                        
     
   
 
static _Bool hash_string_lookup(Hash_table const *table___0,
                                char const *string) {
  void *tmp;
  int tmp___0;
  {
                    
       
                                                           
       
                
                    
              
                    
       
           {
      tmp___0 = 0;
    }
    return ((_Bool)tmp___0);
  }
}
static Hash_table *avoided_name_table;
                                         
   
                                                      
           
   
 
                                         
            
   
                                                                               
                 
   
 
                                   
                                          
                                                                           
               
                                                                          
                                              
                                                                          
                                                                                
char *safer_name_suffix(char const *file_name, _Bool link_target) {
  char const *p;
  size_t prefix_len;
  char c;
  char const *tmp;
  char *prefix;
  void *tmp___0;
  char *tmp___1;
  _Bool tmp___2;
  char *tmp___3;
                    
  {
                               {
      p = file_name;
    }       
                             
                                 
       
                   
                                        
                    
                             
           
                                            
                                              
                                                
                                                           
                      
                                
                                                             
                 
               
             
           
           
                       
                                                
                      
                  
                             
                                 
                                     
               
                        
                                     
               
             
                                           
           
         
                                   
       
                                 
       
                   
                                            
                                         
                                 
           
                      
               
              
         
                                       
       
                                           
                       
         
                                                       
                                   
                                                  
                                                                        
                                                
                                                                  
                                                             
         
                      
           
                                                                     
                                                       
           
         
       
     
              
                                                         
         
                                                                       
                                             
         
       
              
     
    return ((char *)p);
  }
}
size_t stripped_prefix_len(char const *file_name, size_t num) {
  char const *p;
  _Bool slash;
  {
                      
     
                 
                                      
                                       
                           
         
            
       
                                 
     
     
                 
                                          
                  
                               
         
                                               
            
                    
                
                           
                                             
           
           
                       
                                                
                                             
                                     
               
                  
             
                                           
           
         
       
                                     
     
    return ((size_t)-1);
  }
}
                                          
                
                  
   
                 
     
                 
                                      
                                          
                                            
                                              
                                
                    
                              
                                  
               
             
           
         
         
                     
                                              
                    
                
                        
                                
             
                                              
                                   
             
           
                                         
         
            
       
                                 
     
   
 
/* #pragma merger("0","00b.rtapelib.o.i","") */
extern
    __attribute__((__nothrow__)) int(__attribute__((__leaf__)) dup)(int __fd);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    execl)(char const *__path, char const *__arg, ...);
extern __attribute__((__nothrow__))
__sighandler_t(__attribute__((__leaf__)) signal)(int __sig,
                                                 void (*__handler)(int));
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     atoi)(char const *__nptr)
        __attribute__((__pure__));
extern
    __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__))
                                      atol)(char const *__nptr)
        __attribute__((__pure__));
                               
void sys_reset_uid_gid(void);
size_t rmt_write__(int handle, char *buffer___2, size_t length);
                                                                        
                                                                      
                                                        
           
   
     
                                    
                                  
                                  
                                
                               
                         
     
           
   
 
                                                           
                
             
                         
                       
                  
                 
   
     
                               
                   
                                             
                                         
               
                                                                             
                                 
                                              
     
                                    
                 
     
                                 
                
   
 
                                                                  
               
              
             
                 
                 
               
               
   
                
                            
     
                 
                                      
                              
                           
         
                                                                               
                         
           
                                     
           
                             
         
                                 
                                 
                           
         
                  
                 
       
                                 
     
                        
       
                                 
       
                         
     
                            
     
                 
                                          
                       
                               
         
                                 
                               
         
                 
       
                                     
     
                             
                  
            
                               
                              
       
                   
                                            
           
                                                                             
                                           
           
                                  
                                 
           
                                     
                                 
           
         
                                       
       
         
                                       
                                                      
         
                                 
           
                                         
                                            
           
         
                           
       
     
                             
       
                                 
       
                         
     
                        
   
 
                                    
                          
                     
            
              
               
               
                   
   
     
                                                      
                                 
     
                 
       
                               
                         
       
                         
                        
       
       
                                     
                     
       
     
                 
   
 
                                         
                          
                     
            
              
               
            
                      
            
           
              
              
                    
   
     
                                                      
                                 
     
                  
                         
                           
                       
       
                   
                                        
                                              
                                               
                               
             
           
                      
               
                   
         
                                   
       
                                            
                     
                    
              
                                         
                      
                
                      
         
       
                        
       
                   
                                            
                           
                   
                                                    
                                         
                                 
                  
                              
                           
                                      
                    
                                      
             
                                     
                                 
                    
                             
                                   
                      
                                   
               
                            
                                   
               
             
                       
           
         
                                       
       
                     
     
   
 
                                                
                   
                   
                   
                   
                   
                   
                   
                    
                    
                    
                    
                    
                    
   
     
                                            
                                                             
     
     
                             
                    
       
                             
                    
       
                             
                    
       
                          
                            
     
                                           
                                                          
     
                        
                            
     
                                           
                                                        
     
                        
                            
     
                                           
                                                          
     
                        
                                    
     
              
     
                                  
     
                       
       
                                             
                                                             
       
     
                     
       
                                             
                                                            
       
     
                       
       
                                             
                                                            
       
     
                      
       
                                             
                                                           
       
     
                      
       
                                             
                                                             
       
     
                       
       
                                             
                                                               
       
     
                          
       
                                             
                                                            
       
     
                          
       
                                             
                                                           
       
     
                      
       
                                             
                                                            
       
     
           
   
 
                                                         
                                          
                         
                  
                    
                    
                    
           
               
               
                                    
               
                
        
               
               
              
              
            
               
               
                
               
                         
                  
                       
                 
            
                
               
                
                       
                       
                    
                    
                    
                    
                    
                    
   
                           
     
                 
                                      
                                        
                           
         
                                                       
                                                       
                             
           
         
                             
       
                                 
     
                                  
       
                                 
                  
       
                  
     
     
                                
                              
                              
                              
                         
     
     
                 
                                          
                       
                               
         
         
                                   
                         
           
                                   
                         
           
                                   
                         
           
                              
                                       
                            
                                 
         
                                  
                                       
                       
         
                      
                                
                             
                                      
                                   
                                     
           
                            
                                
                             
                                   
                                     
           
                            
                                      
         
                 
       
                                     
     
                      
                                   
                                
       
     
                        
                                    
     
     
                                        
                                                    
                                                    
     
                        
              
            
                                                          
                          
            
                                     
                     
                                
                                     
                     
       
                    
       
     
                        
                       
       
                                     
                         
                                
                                     
                         
       
                  
     
                      
       
                 
                                              
                                                
                                                
                 
                                                
                                                  
                                                  
                            
       
                        
                                 
                                        
                
                                
         
         
                                                                       
                                                  
         
              
                                 
                                        
                
                                
         
         
                                                                           
                           
         
       
       
                                                         
                                     
                                                    
       
     
     
                                                
                                              
                                                   
                                 
                                                   
                                        
                                                       
                                                                     
                                                                      
                                                      
                                                    
                                                                              
     
                         
                  
            
                                                    
                            
                
                                      
                          
                                     
                                
                                                 
       
                    
       
     
     
                                   
                              
     
                                       
   
 
                             
              
          
               
                   
   
                                        
                    
                  
     
     
                                  
                                   
                                      
     
                         
   
 
                                                                
                          
                
              
                 
          
               
                    
                    
   
     
                                                         
                                                                 
                                                               
     
                    
                          
            
       
                                     
                                 
       
                                           
                            
       
     
                        
     
                 
                                      
                                  
                           
         
         
                                                                      
                                             
         
                                           
           
                                     
           
                              
                
                            
             
                                       
             
                                
           
         
                        
                           
       
                                 
     
                    
   
 
                                                                 
                          
                         
                 
          
                       
         
               
                    
                    
   
     
                                                         
                                                                 
                                                               
     
                    
                         
     
     
                                             
                                         
               
                                                                             
                                              
     
                            
       
                                     
                    
       
                   
                           
       
                                
                        
       
                          
     
                                 
                     
   
 
                                                         
                          
                                                                            
                           
              
          
          
                
                    
                    
                    
   
                      
                               
            
                            
     
                                                
        
                 
     
                 
                                      
            
                                          
                  
                          
                           
         
       
                                 
     
                      
          
                     
     
     
                        
                    
       
                        
                    
       
                        
                    
       
                          
                           
                 
                        
                           
                 
                        
                           
                 
                        
                                    
     
              
     
                                  
     
     
                                                         
                                                                       
                                                               
     
                    
                         
     
                                         
                     
   
 
                                                            
           
                          
                                                                            
                           
              
          
              
               
                 
                 
              
            
                    
                    
                    
                    
   
     
                      
                                                                               
                                               
                      
       
                      
                                                                               
                                                
                          
       
                          
                                    
     
                               
                
     
                  
                             
                                                    
                                                              
              
                                                           
       
                                                  
          
                   
       
                   
                                        
              
                                            
                    
                            
                             
           
         
                                   
       
                                                    
            
                       
       
       
                                                           
                                                             
                                                          
                                                                     
       
                          
                    
       
                                       
                            
                                  
     
                                        
     
                          
                    
              
                                        
                            
                      
         
       
       
                   
                                            
                               
                                 
           
           
                                                                         
                                                
           
                                                
             
                                       
             
                        
                  
                                 
               
                                         
               
                          
             
           
                                                       
                              
         
                                       
       
                                                       
                   
       
                          
       
                   
                                            
                                            
                                 
           
                                       
                                                                
                                               
                         
         
                                       
       
                 
                                  
     
   
 
/* #pragma merger("0","00c.sparse.o.i","") */
                                                                
            
   
                                         
       
                                                        
       
                   
     
                      
   
 
                                                            
            
   
                                  
                              
       
                                             
       
                   
     
                      
   
 
                                                            
            
   
                              
       
                                             
       
                   
     
                      
   
 
                                                          
                                                                         
            
   
                                    
       
                                                                 
       
                   
     
                      
   
 
                                                                             
            
   
                                     
       
                                                       
       
                   
     
                      
   
 
                                                                                
            
   
                                        
       
                                                          
       
                   
     
                      
   
 
                                                                   
            
   
                                     
       
                                                    
       
                   
     
                      
   
 
                                                                     
            
   
                                       
       
                                                      
       
                   
     
                      
   
 
                                                                    
            
   
                                      
       
                                                     
       
                   
     
                      
   
 
                                                                       
                                         
              
   
                                              
                   
       
                                                                          
                                  
       
                        
     
                      
   
 
                                                          
            
                 
   
     
                 
                                      
                       
               
                       
                           
         
                         
                     
                   
                            
         
       
                                 
     
                      
   
 
                                                                               
            
                
                 
   
                                                       
                                     
       
                                                                           
                                                               
                                                        
       
            
                                                
                                               
         
                                                    
                                                                   
                                                                 
                                                                               
                                                                     
         
       
     
                                                  
                                            
                                                     
           
   
 
                            
                                                             
               
                
                     
            
                
                
                
                
                
   
     
                         
                           
                              
                                              
     
               
                        
     
     
                                                   
                                                     
                                                      
                                                                            
     
                   
                        
     
     
                 
                                      
         
                                                                                
         
                           
                                                 
                             
           
                
                           
         
                                                      
                      
                            
             
                                        
                                      
                       
                                                                              
             
                           
                                
             
           
                
                                   
                                      
           
           
                                 
                                                  
                                                                              
                                                                      
                                                            
           
                         
                              
           
         
         
                          
                                                       
         
       
                                 
     
                             
                                
     
     
                                
                                            
                                                                        
                                                                            
     
                     
   
 
                                            
                                          
                                         
                                                                
                   
   
                                             
                                         
            
                                         
     
     
                      
                    
       
                      
                    
       
                      
                    
       
                      
                    
       
                      
                    
       
                      
                    
       
                          
                           
                           
                         
                           
                           
                                   
                        
                           
                               
                        
                           
                                
                        
                                   
                        
                                  
     
                      
   
 
                                                                         
                   
                   
            
                 
                    
                
   
     
                                                                        
           
                                                                               
     
               
                        
     
     
                 
                                      
                                 
                           
         
                                
                               
                
                               
         
         
                                    
                                  
                                                        
                                                                           
         
                                                 
           
                              
                                                                
                                                                              
                                                                         
                                            
                         
           
                            
         
         
                                                                
                                          
                                    
         
       
                                 
     
                      
   
 
                                                                            
                    
            
              
               
                 
                   
                       
                
                    
   
     
           
                                                                               
     
               
                        
     
                                                               
                            
       
                                         
       
                    
         
                                                                         
         
       
            
       
                   
                                        
                                    
                             
           
                                   
                                  
                  
                                 
           
           
                                        
                          
           
                     
             
                                                             
                                                 
                              
             
                              
           
           
                                      
                                                                               
                                
                                       
           
                                 
             
                                  
                                                                         
                           
             
                              
           
         
                                   
       
     
                      
   
 
                                                                     
               
                              
            
                
           
                
              
   
     
                          
                   
                                       
     
              
       
                                         
       
                     
                                     
       
            
                                   
     
                                         
                 
                                      
         
                                        
         
                      
                        
           
                       
                                            
                           
                                                                
                                   
                 
                      
                                 
               
               
                                                          
                    
               
             
                                       
           
         
       
     
     
                                                                       
                                             
                                       
     
                  
                   
                    
                 
                    
       
            
                  
     
                                       
   
 
                                               
   
                                        
                                             
                                                                   
   
 
                                                 
                              
            
                
   
                                         
               
                        
     
     
                          
                                           
     
                     
   
 
                                                     
                              
            
                
   
                                         
               
                        
     
     
                          
                                               
     
                     
   
 
                                                                      
                                                   
               
                              
           
            
                
                
              
   
     
                        
                          
                   
                                       
     
              
       
                                         
       
                     
                                     
       
            
                                   
     
     
                                               
                    
     
     
                 
                                      
                     
                                                          
                             
           
                
                           
         
         
                                                       
              
         
       
                                 
     
     
                                                                   
                                        
                                       
     
                  
                   
                    
                 
                    
       
            
                  
     
                                       
   
 
                                                             
               
                              
            
                
                
              
   
     
                        
                          
                   
                                       
     
              
       
                                         
       
                     
                                     
       
            
                                   
     
     
                                               
                                                     
                                       
     
                  
                   
                    
                 
                    
       
            
                  
     
                                       
   
 
                                 
                                                                         
                                             
            
                    
                
                
                
                   
   
                                           
               
                        
     
     
                 
                                      
                           
                           
         
                                     
                             
                               
         
         
                                                            
                                                                              
         
                                                 
           
                                                                              
                                           
           
                            
         
                                                                
                       
           
                                                                    
                                                                           
           
                            
         
                                                
       
                                 
     
                      
   
 
                                                                        
                   
            
                    
                
                   
                       
                
                
              
                    
                    
   
     
           
                                                                               
     
               
                        
     
                                                              
     
                 
                                      
                                 
                           
         
                                
                               
                
                             
         
         
                                      
                        
         
                   
           
                                                           
                                               
                            
           
                            
         
         
                                    
                                                                              
         
                                                 
           
                              
                                                                
                                                                              
                                                                         
                                   
                        
           
                            
         
         
                                          
                                  
                                                       
                                                                    
         
                      
           
                                                 
                                                                      
           
                            
         
       
                                 
     
                      
   
 
                                                          
               
                              
           
               
            
                
                
                
              
   
     
                        
                        
                          
                   
                                       
     
              
       
                                         
       
                     
                          
       
              
                        
     
     
                                               
                    
     
     
                 
                                      
                     
                                                          
                             
           
                
                           
         
         
                                        
                                                                         
         
                      
           
                                                  
           
                        
                        
                  
                        
           
                
                      
         
                                
                                                                             
                                                                       
            
       
                                 
     
                  
       
                                                                       
                                             
       
     
                               
                    
   
 
                                                                
                                                                  
                                                                    
 
                                                                             
                                                                   
                     
   
                                   
                                         
     
     
                                                                                
                   
                                                                             
     
                         
                                         
            
                                                   
                                            
                                           
              
                                                        
                                             
         
       
     
                                  
                                       
   
 
                                                                
   
     
                                                                             
                                                        
                                                                 
                                                          
     
                      
   
 
                                 
                                                                   
           
                 
            
            
                
                   
                   
   
                       
                                                   
                  
     
                 
                                      
                         
                           
         
                                                                  
                                     
                           
         
            
       
                                 
     
                                             
     
                 
                                          
                                     
                       
                                 
           
                
                               
         
                                  
                 
           
                                                       
                                           
                            
           
                            
         
         
                                  
                        
         
         
                     
                                              
                           
                                              
                                     
               
                    
                                   
             
             
                                                                    
                  
             
           
                                         
         
                                                 
       
                                     
     
                                 
       
                                                               
                                                                              
                        
       
                        
     
                      
   
 
                                                                  
                                                                       
                                                          
   
     
                 
                                      
                                                            
                                     
                             
           
                
                           
         
         
                                                                         
                                                       
                                                                            
                                                            
                        
               
                      
         
       
                                 
     
           
   
 
                                                               
                      
            
                   
           
   
     
                                    
                          
                                          
                                       
     
                                                    
                                              
     
     
                                                                                
                                                        
                                                                          
                                             
                    
                                                                           
                                     
                                                          
                                                         
     
     
                 
                                      
                                                         
                           
         
         
                                  
                                                        
                                                                                
                                    
         
                                                      
                                                  
                
                           
         
       
                                 
     
                      
   
 
                                               
                                                    
                                                    
                            
                        
                         
                            
                                                                         
                   
                        
                            
                                                              
                                                                
                                                                    
 
                                                              
   
     
                                                                             
                                                        
                                                                  
                                                           
     
                      
   
 
                                     
                                                                 
           
                 
            
            
                
                   
                   
   
                       
                                                   
                                                
                                                         
                      
         
                     
                                          
                             
                               
             
                                                                           
                                             
                               
             
                
           
                                     
         
                                                  
              
                  
       
            
                
     
     
                 
                                          
                                         
                       
                                 
           
                
                               
         
                                  
                 
           
                                                       
                                           
                            
           
                            
         
         
                                  
                        
         
         
                     
                                              
                           
                                                  
                                     
               
                    
                                   
             
             
                                                                          
                  
             
           
                                         
         
                                                   
       
                                     
     
                                     
       
                                                               
                                                                              
                        
       
                        
     
                      
   
 
                                             
                                                    
                                                    
                          
                                                    
                       
                          
                                                                         
                   
                                                            
                            
                                                                
   
                                                           
                                                      
   
 
                                                            
                      
            
                   
           
                   
                   
                   
                   
   
     
                                    
                          
                                      
                                                                              
                                           
                                                                              
                    
     
     
                 
                                      
                                                         
                           
         
         
                                            
                                                                      
                                      
                                              
                                                                      
                                      
              
         
       
                                 
     
     
                                          
                                                                          
                                             
                                                         
     
                      
   
 
                                            
                                                    
                                                    
                         
                     
                                                    
                                                    
                                                                         
                   
                        
                            
/* #pragma merger("0","00d.system.o.i","") */
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    execlp)(char const *__file, char const *__arg, ...);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        setuid)(__uid_t __uid);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        setgid)(__gid_t __gid);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        ftruncate)(int __fd, __off_t __length);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        kill)(__pid_t __pid, int __sig);
extern __pid_t waitpid(__pid_t __pid, int *__stat_loc, int __options);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       exit)(int __status);
dev_t ar_dev;
             
                                                     
   
                                                             
                                                             
                                                             
           
   
 
                                
                                  
          
   
                                            
                               
   
 
                                                    
          
   
                 
                                     
                                       
                  
                                     
                  
         
                                   
                
       
            
              
     
                        
   
 
                                     
   
                                
                                                      
                                     
                                     
              
                          
       
            
                        
     
           
   
 
                                  
                                                                         
                                                                         
                                         
                                       
                            
          
              
              
                   
   
                                                          
                   
                  
            
                                  
                                                       
           
                                                                      
                                                                              
           
                             
                                                              
                                                                
                            
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
                    
       
     
                                     
           
   
 
                                 
           
             
                 
   
                                          
                                  
                                                       
                      
                
                                                          
                                  
           
                       
                                            
                                       
                 
                                                                             
                                                
                          
                 
                      
                 
                                                                              
                                                   
                              
                 
               
                             
                                                   
                                   
                 
                      
                                 
               
                                  
             
                                       
           
           
         
       
     
           
   
 
                                              
                  
           
                  
                                       
                
                                       
                
                                       
                                       
                    
                    
   
                        
       
                   
                                        
                                                                
                                 
                             
           
                                       
                          
             
                                                         
             
                             
           
         
                                   
       
                                         
                                                                           
         
                                             
                                                         
                                                                        
                          
         
              
                                           
                                                      
           
                                               
                                                          
                                              
                                                      
                            
           
         
       
     
           
   
 
                            
              
                    
            
                  
               
                  
                   
                   
   
     
                            
                                
     
                 
                        
     
                        
                     
       
                                              
                          
       
            
       
                   
                                        
                                                        
                                 
                             
           
                                           
                              
             
                                   
             
                             
           
         
                                   
       
     
           
   
 
                                                       
                                                
 
                                                       
                                                
 
                                                                         
          
   
                                                 
                                                   
                
                       
                
       
            
              
     
                        
   
 
                          
            
              
              
              
   
     
                                   
                
     
                   
                   
            
       
                                     
                          
       
     
                     
   
 
                              
              
                  
   
     
                     
                  
                         
                      
     
           
   
 
                                              
                    
           
              
                   
   
     
                                                          
                                                                
     
                       
                                                  
            
                                   
                         
     
   
 
size_t sys_write_archive_buffer(void) {
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  {
                             
       
             
                                                                                
                      
       
           {
       
        tmp___0 = full_write(archive, (void const *)(record_start->buffer),
                             record_size);
        tmp___1 = tmp___0;
       
    }
    return (tmp___1);
  }
}
                                       
             
          
        
               
                
               
            
               
                
                    
                    
   
                       
       
                          
                     
       
                        
         
                                       
         
                            
           
                                         
                         
                                              
                                               
                         
           
         
       
                             
                           
                         
           
                                         
                             
                                            
                                                   
                         
           
         
                    
       
                       
     
           
   
 
                                         
                     
                    
                       
                      
                  
            
                  
               
               
              
                
              
                
              
              
                
               
                
               
                
              
                
                   
                                       
                                       
                                       
                                       
                    
                    
                    
                    
   
     
                         
                              
     
                            
       
                                 
                               
       
                             
     
     
                                   
                                       
                               
                             
                                                       
     
                       
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
                          
             
                  
                        
           
                
                      
         
              
                                                                        
                      
                              
             
                                                              
             
           
           
                                                      
                                                                               
                                                                                
           
                            
             
                                           
                                     
             
                                
               
                                   
               
             
             
                                           
                                     
                                                    
             
           
           
                              
                                                                            
                              
                                                    
           
         
       
     
     
                        
                               
     
                              
       
                                              
                                             
                                
                              
                                                                        
                          
                                                
       
     
     
                              
                            
                                                        
     
                        
                  
            
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
               
                         
                                                    
                                                                             
                                                                              
                                  
               
                    
               
                                                                            
                                                         
                                  
               
             
                  
             
                       
                                                  
                                                                           
                                                                            
                                
             
           
                
           
                                                      
                                                                               
                                                                                
                              
           
         
              
         
                                                    
                                                                             
                                                                              
                            
         
       
                        
         
                                                
         
       
     
     
                 
                                      
                           
                           
                                      
         
                     
                                              
                                          
                                   
             
             
                                          
                                                          
             
                                                 
               
                                                        
               
             
                                
                                   
             
                             
                             
           
                                         
         
                            
                             
             
                                                                
                                           
                                                  
             
                                        
               
                                                     
               
             
           
                           
         
                                                
                                    
           
                                                 
           
         
       
                                 
     
     
                 
                                          
                                                                
                                
                               
         
                                          
                             
           
                                                       
           
                               
         
       
                                     
     
                                       
                                                                         
       
                                           
                                                       
                        
       
            
                                         
                                                    
                                           
                                                         
       
     
                          
   
 
                                           
                     
                    
                       
                      
                  
            
              
                
              
                
              
              
                
              
               
                 
               
                
                 
                  
                  
                
                   
                                       
                                       
                                        
                                        
                    
                    
                    
                    
   
     
                         
                              
     
                            
       
                                            
                                 
                               
       
                             
     
     
                                   
                                       
                               
                             
                                                       
     
                       
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
                          
             
                  
                        
           
                
                      
         
              
                                                                        
                      
           
                                                        
                                                                     
                                                                         
           
                            
             
                                                    
             
           
           
                              
                                                                            
                                    
                                                    
           
         
       
     
     
                        
                               
     
                              
       
                                              
                                             
                                
                              
                                                                              
                          
                                                
       
     
     
                              
                            
                                                       
     
                       
                  
            
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
               
                                                            
                                                                         
                                                                             
                                  
               
                    
               
                                                                           
                                                         
                                  
               
             
                  
             
                                                          
                                                                       
                                                                           
                                
             
           
                
           
                                                        
                                                                     
                                                                         
                              
           
         
              
         
                                                      
                                                                   
                                                                       
                            
         
       
     
                      
       
                                              
       
     
     
                 
                                      
                                     
                 
                                 
           
                                                                           
                                              
                             
           
                
           
                      
                                                                                
                              
           
         
                                             
           
                                 
           
                          
         
                            
                           
         
                                      
                         
         
                     
                                              
                           
                                   
             
                                  
                              
                    
                                  
             
                                                                      
                                    
               
                                                         
               
             
                            
                             
           
                                         
         
       
                                 
     
                  
     
                 
                                          
                                                                
                                
                               
         
                                          
                             
           
                                                       
           
                               
         
       
                                     
     
                                        
                                                                          
       
                                           
                                                       
                        
       
            
                                          
                                                     
                                           
                                                         
       
     
                          
   
 
/* #pragma merger("0","00e.tar.o.i","") */
extern char *optarg;
                  
extern int printf(char const *__restrict __format, ...);
extern int puts(char const *__s);
extern int fputs_unlocked(char const *__restrict __s,
                          FILE *__restrict __stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           setlocale)(int __category,
                                                      char const *__locale);
extern
    __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                        textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((
    __leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getopt_long)(
    int ___argc, char *const *___argv, char const *__shortopts,
    struct option const *__longopts, int *__longind);
                                 
enum backup_type xget_version(char const *context, char const *version);
struct exclude *new_exclude(void);
void add_exclude(struct exclude *ex, char const *pattern, int options);
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int),
                     struct exclude *ex, char const *filename, int options,
                     char line_end);
struct mode_change *mode_compile(char const *mode_string,
                                 unsigned int masked_ops);
int check_links_option;
int allocated_archive_names;
void update_archive(void);
_Bool get_date(struct timespec *result, char const *p,
               struct timespec const *now);
void prepend_default_options(char const *options, int *pargc, char ***pargv);
                                 
                                        
            
                   
   
                        
       
                                                                            
                                                              
                 
       
     
                           
           
   
 
                          
                            
                                                                   
                  
            
              
              
                
              
                   
                    
   
                        
                         
                    
              
                            
                                
         
                                                                           
                                                                     
         
                              
             
                                     
             
           
                
           
                                
                                 
           
         
       
     
     
                                
                                                
                                                                              
                              
     
                           
                   
            
       
                                              
                          
       
     
                    
                      
     
                 
                                      
                                 
                           
         
                              
           
                                 
                                         
                                    
           
                           
         
                                                    
       
                                 
     
                       
                  
            
                        
                    
              
                    
       
     
                     
   
 
                                        
                                   
                                       
                                      
                                      
                                    
                                                         
                                                  
                         
            
                
              
                   
   
               
     
                 
                                      
                                                          
                              
                           
         
            
                       
           
                                       
                                                            
                                                    
                     
           
         
       
                                 
     
                                                 
           
   
 
                                                                   
                         
                   
   
               
     
                 
                                      
                       
                           
         
                                                                    
                                         
         
            
       
                                 
     
                        
   
 
                                                  
            
                   
   
                                                                               
       
                                                                            
                                       
                 
       
     
           
   
 
static int show_help;
static int show_version;
static struct option long_options[104] = {
    {"absolute-names", 0, (int *)0, 'P'},
    {"after-date", 1, (int *)0, 'N'},
    {"anchored", 0, (int *)0, 128},
    {"append", 0, (int *)0, 'r'},
    {"atime-preserve", 0, (int *)0, 129},
    {"backup", 2, (int *)0, 130},
    {"block-number", 0, (int *)0, 'R'},
    {"blocking-factor", 1, (int *)0, 'b'},
    {"bzip2", 0, (int *)0, 'j'},
    {"catenate", 0, (int *)0, 'A'},
    {"checkpoint", 0, (int *)0, 131},
    {"check-links", 0, &check_links_option, 1},
    {"compare", 0, (int *)0, 'd'},
    {"compress", 0, (int *)0, 'Z'},
    {"concatenate", 0, (int *)0, 'A'},
    {"confirmation", 0, (int *)0, 'w'},
    {"create", 0, (int *)0, 'c'},
    {"delete", 0, (int *)0, 132},
    {"dereference", 0, (int *)0, 'h'},
    {"diff", 0, (int *)0, 'd'},
    {"directory", 1, (int *)0, 'C'},
    {"exclude", 1, (int *)0, 133},
    {"exclude-from", 1, (int *)0, 'X'},
    {"extract", 0, (int *)0, 'x'},
    {"file", 1, (int *)0, 'f'},
    {"files-from", 1, (int *)0, 'T'},
    {"force-local", 0, (int *)0, 134},
    {"format", 1, (int *)0, 135},
    {"get", 0, (int *)0, 'x'},
    {"group", 1, (int *)0, 136},
    {"gunzip", 0, (int *)0, 'z'},
    {"gzip", 0, (int *)0, 'z'},
    {"help", 0, &show_help, 1},
    {"ignore-case", 0, (int *)0, 137},
    {"ignore-failed-read", 0, (int *)0, 138},
    {"ignore-zeros", 0, (int *)0, 'i'},
    {"incremental", 0, (int *)0, 'G'},
    {"index-file", 1, (int *)0, 139},
    {"info-script", 1, (int *)0, 'F'},
    {"interactive", 0, (int *)0, 'w'},
    {"keep-newer-files", 0, (int *)0, 140},
    {"keep-old-files", 0, (int *)0, 'k'},
    {"label", 1, (int *)0, 'V'},
    {"list", 0, (int *)0, 't'},
    {"listed-incremental", 1, (int *)0, 'g'},
    {"mode", 1, (int *)0, 141},
    {"multi-volume", 0, (int *)0, 'M'},
    {"new-volume-script", 1, (int *)0, 'F'},
    {"newer", 1, (int *)0, 'N'},
    {"newer-mtime", 1, (int *)0, 142},
    {"null", 0, (int *)0, 148},
    {"no-anchored", 0, (int *)0, 143},
    {"no-ignore-case", 0, (int *)0, 144},
    {"no-overwrite-dir", 0, (int *)0, 145},
    {"no-wildcards", 0, (int *)0, 146},
    {"no-wildcards-match-slash", 0, (int *)0, 147},
    {"no-recursion", 0, &recursion_option, 0},
    {"no-same-owner", 0, &same_owner_option, -1},
    {"no-same-permissions", 0, &same_permissions_option, -1},
    {"numeric-owner", 0, (int *)0, 149},
    {"occurrence", 2, (int *)0, 150},
    {"old-archive", 0, (int *)0, 'o'},
    {"one-file-system", 0, (int *)0, 'l'},
    {"overwrite", 0, (int *)0, 151},
    {"owner", 1, (int *)0, 152},
    {"pax-option", 1, (int *)0, 153},
    {"portability", 0, (int *)0, 'o'},
    {"posix", 0, (int *)0, 154},
    {"preserve", 0, (int *)0, 155},
    {"preserve-order", 0, (int *)0, 's'},
    {"preserve-permissions", 0, (int *)0, 'p'},
    {"recursion", 0, &recursion_option, 1 << 3},
    {"recursive-unlink", 0, (int *)0, 157},
    {"read-full-records", 0, (int *)0, 'B'},
    {"record-size", 1, (int *)0, 156},
    {"remove-files", 0, (int *)0, 158},
    {"rmt-command", 1, (int *)0, 159},
    {"rsh-command", 1, (int *)0, 160},
    {"same-order", 0, (int *)0, 's'},
    {"same-owner", 0, &same_owner_option, 1},
    {"same-permissions", 0, (int *)0, 'p'},
    {"show-defaults", 0, (int *)0, 161},
    {"show-omitted-dirs", 0, (int *)0, 162},
    {"sparse", 0, (int *)0, 'S'},
    {"starting-file", 1, (int *)0, 'K'},
    {"strip-path", 1, (int *)0, 163},
    {"suffix", 1, (int *)0, 164},
    {"tape-length", 1, (int *)0, 'L'},
    {"to-stdout", 0, (int *)0, 'O'},
    {"totals", 0, (int *)0, 165},
    {"touch", 0, (int *)0, 'm'},
    {"uncompress", 0, (int *)0, 'Z'},
    {"ungzip", 0, (int *)0, 'z'},
    {"unlink-first", 0, (int *)0, 'U'},
    {"update", 0, (int *)0, 'u'},
    {"utc", 0, (int *)0, 167},
    {"use-compress-program", 1, (int *)0, 166},
    {"verbose", 0, (int *)0, 'v'},
    {"verify", 0, (int *)0, 'W'},
    {"version", 0, &show_version, 1},
    {"volno-file", 1, (int *)0, 168},
    {"wildcards", 0, (int *)0, 169},
    {"wildcards-match-slash", 0, (int *)0, 170},
    {(char const *)0, 0, (int *)0, 0}};
__attribute__((__noreturn__)) void usage(int status);
void usage(int status) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;
  char *tmp___11;
  char *tmp___12;
  char *tmp___13;
  char *tmp___14;
  char const *tmp___15;
  char *tmp___16;
  char *tmp___17;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
                      
       
                                                                  
                                                  
                                                                   
       
            
       
                          
                                                                              
                                                                              
                                                               
                                                          
                 
                                                                               
                                                                               
                                                                               
                                                                               
                                                               
                                                                     
                                                         
                                                                               
                                                                           
                                                                               
                                                               
                                                          
                          
                                                                         
                                                                              
                                                                                
                                                                            
                                                                                
                                                                            
                                                                               
                                                                         
                                                                      
                         
                                                               
                                                          
                          
                                                                              
                                                                                
                                                                   
                                                                        
                                                                               
                                                                            
                                                                              
                                                                           
                                                                             
                                                                  
                                                                           
                                                                          
                                                                         
                                                                       
                                                                                
                                                                           
                                                                               
                                                                              
                                                                             
                                                                                
                                                                                
                                                                              
                                                                            
                                                                                
                                                             
                                                               
                                                          
                          
                                                                             
                                                                                
                                                                                
                                                                       
                                                                            
                                                                        
                                                                           
                                                                            
                                                                               
                                                                               
                                                                              
                                                            
                                                                                
                                                                                
                                                                                
                        
                                                               
                                                          
                          
                                                                                
                                                                                
                                                                    
                                                                          
                                                                            
                                                                             
                                                                                
                                                                            
                                                                                
                                                                     
                                                                
                                                                         
                      
                                                               
                                                          
                          
                                                                                
                                                                                
                                                                               
                                                                                
                                                            
                                                               
                                                          
                          
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                             
                                                                           
                                                                             
                                                                                
                                             
                                                                                
                                                                                
                                                                            
                                                                                
                                                                             
                                                                             
                                                                            
                                                                             
                                                      
                                                               
                                                          
                          
                                                                                
                                                                         
                                                                               
                                                                
                                                                                
                                                                              
                                                                              
                                                                               
                                                                            
                                                                               
                                                                             
                                                                          
                                                                         
                                                                     
                                                                                
                                                                               
                                                                               
                                                                            
                                                                                
                                                                           
                                                                                
                                                                              
                                                                         
                                                               
                                                          
                                                                             
                                                                                
                                                                          
                                                                                
                                                                
                                                          
                  
                                                                            
                                                                             
                                                                      
                                                                
                                                          
                           
                                                                              
                                                                           
                                                                              
                                                                             
                                                                              
                                                                            
                                                                            
                                                                              
                                                                            
                                                                               
                                                                             
                            
                                                                
                                                          
                           
                                                                             
                                                                                
                                                                   
                                                                
                                                          
                  
                                                                               
                                                                            
                                                                            
                                                                            
                                                                              
                                                                    
                                                                
                                                          
                                                                 
                  
                                                                               
                                                                               
                                                                               
                                                                      
                                                                            
                                                       
                                                                            
       
     
                     
   
}
static void set_subcommand_option(enum subcommand subcommand) {
  char *tmp;
                   
  {
    if ((unsigned int)subcommand_option != 0U) {
                                                                        
         
                                                                                
                                         
          usage(2);
         
       
    }
    subcommand_option = subcommand;
           
  }
}
                                                                 
            
              
                   
   
                                      
       
                                                              
       
                         
         
                                                           
                                         
                   
         
       
     
                                         
           
   
 
static void decode_options(int argc, char **argv) {
  int optchar;
  int input_files;
  char const *textual_date_option;
  char const *backup_suffix_string;
  char const *version_control_string;
  int exclude_options;
  _Bool o_option;
  int pax_option;
  char *tmp;
  int new_argc;
  char **new_argv;
  char *const *in;
  char **out;
  char const *letter;
  char buffer___2[3];
  char const *cursor;
  size_t tmp___0;
  void *tmp___1;
  char **tmp___2;
  char *const *tmp___3;
  char *const *tmp___4;
  char **tmp___5;
  char *tmp___6;
  char **tmp___7;
  char *const *tmp___8;
  char *tmp___9;
  char **tmp___10;
  char *const *tmp___11;
  char *tmp___12;
  uintmax_t u;
  char *tmp___13;
  char *tmp___14;
  strtol_error tmp___15;
  void *tmp___16;
  int tmp___17;
  char *tmp___18;
  uintmax_t u___0;
  char *tmp___19;
  char *tmp___20;
  strtol_error tmp___21;
  char *tmp___22;
  struct stat st;
  char *tmp___23;
  int tmp___24;
  char const *tmp___25;
  char const *tmp___26;
  char *tmp___27;
  _Bool tmp___28;
  int e;
  int *tmp___29;
  char *tmp___30;
  int tmp___31;
  char *tmp___32;
  uintmax_t g;
  char *tmp___33;
  char *tmp___34;
  strtol_error tmp___35;
  size_t tmp___36;
  int tmp___37;
  char *tmp___38;
  uintmax_t u___1;
  char *tmp___39;
  char *tmp___40;
  strtol_error tmp___41;
  uintmax_t u___2;
  char *tmp___42;
  char *tmp___43;
  strtol_error tmp___44;
  size_t tmp___45;
  int tmp___46;
  uintmax_t u___3;
  char *tmp___47;
  char *tmp___48;
  strtol_error tmp___49;
  char *tmp___50;
  char const *tmp___51;
  uintmax_t u___4;
  char *tmp___52;
  char *tmp___53;
  strtol_error tmp___54;
  char *tmp___55;
  char *tmp___56;
  char *tmp___57;
  char *tmp___58;
  char *tmp___59;
  char *tmp___60;
  char *tmp___61;
  char *tmp___62;
  size_t volume_label_max_len;
  char *tmp___63;
  char *tmp___64;
  size_t tmp___65;
  char *tmp___66;
  char *tmp___67;
  char *tmp___68;
  char *tmp___69;
  char *tmp___70;
  char *tmp___71;
  int tmp___72;
  char *tmp___73;
  int tmp___74;
  char *tmp___75;
  char const *treated_as;
  char const *tmp___76;
  char *tmp___77;
  int tmp___78;
  unsigned long tmp___79;
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
  {
    {
                                            
                                               
                                
                          
                     
                                             
                                              
      blocking_factor = 20;
      record_size = (size_t)10240;
      excluded = new_exclude();
                                                                      
                                                         
                                
                               
                               
                                           
                                               
    }
                  {
      if ((int)*(*(argv + 1) + 0) != 45) {
        {
          buffer___2[0] = (char)'-';
          buffer___2[2] = (char)'\000';
          tmp___0 = strlen((char const *)*(argv + 1));
          new_argc = (int)((size_t)(argc - 1) + tmp___0);
          tmp___1 = xmalloc((unsigned long)(new_argc + 1) * sizeof(char *));
          new_argv = (char **)tmp___1;
          in = (char *const *)argv;
          out = new_argv;
          tmp___2 = out;
          out++;
                       
          in++;
                                      
          tmp___4 = in;
          in++;
          letter = (char const *)*tmp___4;
        }
        {
          while (1) {
                                         ;
            if (!*letter) {
              goto while_break;
            }
            {
              buffer___2[1] = (char)*letter;
              tmp___5 = out;
              out++;
              *tmp___5 = xstrdup((char const *)(buffer___2));
              tmp___6 = strchr("-01234567ABC:F:GIK:L:MN:OPRST:UV:WX:Zb:cdf:g:"
                               "hijklmoprstuvwxyz",
                               (int)*letter);
              cursor = (char const *)tmp___6;
            }
                         
                                                     
                                                                       
                                
                        
                               
                       
                                              
                        
                   
                                                                                
                                                                             
                             
                   
                 
               
             
            letter++;
          }
        while_break: /* CIL Label */;
        }
        {
          while (1) {
                                             ;
            if (!((unsigned long)in < (unsigned long)(argv + argc))) {
              goto while_break___0;
            }
            tmp___10 = out;
            out++;
            tmp___11 = in;
            in++;
            *tmp___10 = (char *)*tmp___11;
          }
        while_break___0: /* CIL Label */;
        }
                         
        argc = new_argc;
        argv = new_argv;
      }
    }
     
                      
                                       
                                                                    
     
    {
      while (1) {
                                         ;
        {
          optchar = getopt_long(
              argc, (char *const *)argv,
              "-01234567ABC:F:GIK:L:MN:OPRST:UV:WX:Zb:cdf:g:hijklmoprstuvwxyz",
              (struct option const *)(long_options), (int *)0);
        }
        if (!(optchar != -1)) {
          goto while_break___1;
        }
        {
                              
                         
           
          if (optchar == 0) {
                        
          }
          if (optchar == 1) {
            goto case_1;
          }
                              
                         
           
                              
                         
           
                              
                         
           
          if (optchar == 99) {
            goto case_99;
          }
          if (optchar == 67) {
            goto case_67;
          }
                               
                          
           
          if (optchar == 102) {
            goto case_102;
          }
                              
                         
           
                               
                          
           
                              
                         
           
                               
                          
           
                               
                          
           
                              
                         
           
                               
                          
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
                              
                         
           
                               
                          
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
          if (optchar == 116) {
            goto case_116;
          }
                              
                         
           
                               
                          
           
                              
                         
           
                               
                          
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
          if (optchar == 120) {
            goto case_120;
          }
          if (optchar == 88) {
            goto case_88;
          }
                               
                          
           
                               
                          
           
                              
                         
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                            
        case_63 : /* CIL Label */
                                            {
                   
        }
        case_0: /* CIL Label */
                                                       goto switch_break;
        case_1 : /* CIL Label */
        {
          name_add((char const *)optarg);
          input_files++;
        }
                            
                                 
           
                                                    
         
          goto switch_break;
        case_98 : /* CIL Label */
                                                       {
          tmp___15 = xstrtoumax((char const *)optarg, (char **)0, 10, &u, "");
        }
                                             
                                     
                                                  
                                        
                                        
                                                  
                   
                                                                  
                                                                    
                                                              
                             
                   
                 
                      
                 
                                                                
                                                                  
                                                            
                           
                 
               
                    
               
                                                              
                                                                
                                                          
                         
               
             
                  
             
                                                            
                                                              
                                                        
                       
             
           
                            
                                
                                              
                            
        case_99 : /* CIL Label */
        {
                                                    
        }
          goto switch_break;
        case_67 : /* CIL Label */
        {
          name_add("-C");
                                         
        }
          goto switch_break;
                                  
            
                                                    
         
                            
        case_102: /* CIL Label */
                                                        {
             
                                           
              tmp___16 = xrealloc((void *)archive_name_array,
                                  sizeof(char const *) *
                                      (unsigned long)allocated_archive_names);
              archive_name_array = (char const **)tmp___16;
             
          }
          tmp___17 = archive_names;
          archive_names++;
          *(archive_name_array + tmp___17) = (char const *)optarg;
          goto switch_break;
                                
                                                     
                                         
                            
        case_103: /* CIL Label */
                                                         listed_incremental_option = (char const *)optarg;
                                
                                
                                        
                            
                                 
                                        
                            
                                 
                                         
                            
                                 
         
                                                                                
                                                    
                                              
                   
         
                            
                                  
         
                                                   
         
                            
                                 
                                               
                            
                                 
         
                                          
                                           
         
                            
                                 
                                            
                            
                                 
         
                    
                                                                           
         
                                             
             
                                                        
                                                              
                                                        
                       
             
           
                                                              
                                         
                            
                                 
                                  
                            
                                
                                         
                            
                                
                                
                                 
                                                 
             
                                                                 
                                                  
                       
             
           
                                   
                        
                  
                                     
                                    
             
                        
                                                                            
             
                                  
                 
                                                   
                                                            
                                                      
                           
                 
               
                                                            
                                                              
                    
               
                                                                              
                                                                          
               
                             
                                                           
                      
                 
                                                         
                                                                
                            
                                                                            
                                                                          
                                                                    
                 
               
             
           
                            
                                 
                              
                            
                                
                                                
                            
                                 
                                      
                            
                                
                                           
                            
                                  
         
                                                    
         
                            
                                
                                                  
                            
                                 
                                       
                            
                                
                                            
                            
        case_116 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)7);
                           
        }
                            
                                
                                                           
                            
                                  
                                    
                                                    
         
                            
        case_85: /* CIL Label */
                                           old_files_option = (enum old_files)3;
                            
                                 
                                
                            
                                 
                           
                            
                                
                                                     
                            
                                 
                                        
                            
                                
                                   
                            
        case_120 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)6);
        }
          goto switch_break;
        case_88 : /* CIL Label */
        {
          tmp___31 =
              add_exclude_file(&add_exclude, excluded, (char const *)optarg,
                               exclude_options | recursion_option, (char)'\n');
        }
                              
             
                                            
                            
                                                              
                                          
                           
             
           
                            
                                  
         
                             
                                                                                
                                              
                   
         
                            
                                  
         
                                                  
         
                            
                                 
         
                                                      
         
                            
                                 
                                     
                            
                                 
                                           
                            
                                 
                                       
                            
                                 
                                   
                       
                                                          
           
                            
                                  
         
                                                    
         
                            
                                  
         
                                                     
                                                          
         
                            
                                 
                                        
                            
                                  
         
                                                   
         
                            
                                 
                                                 
                            
                                 
                                    
                            
                                 
                                               
                            
                                 
                                               
                            
                                  
         
                                                  
         
                                
             
                                                                           
             
                            
                      
             
                  
                
                                                                                
           
                                               
                                               
                                        
                      
                 
                                                          
                                                                  
                                                            
                               
                 
               
                    
               
                                                        
                                                                
                                                          
                             
               
             
           
                            
                                  
         
                                                               
         
                                           
                                                         
             
                                                                 
                                                  
                           
             
           
                                           
                                                         
             
                           
             
           
                            
                                 
                                        
                            
                                 
                                       
                            
                                 
                                               
                            
                                 
                                        
                            
                                 
                               
                            
                                 
                                             
                            
                                 
                                          
                            
                                 
                        
                                             
                  
             
                        
                                                                               
             
                                               
                                        
                    
               
                                                     
                                                                
                                                          
                             
               
             
           
                            
                                 
                                               
                            
                                  
         
                                                  
         
                                
             
                                                                           
             
                            
                          
             
                  
                    
                      
                                                                             
           
                                               
                                                       
                                            
                      
                 
                                                      
                                                                  
                                                            
                               
                 
               
                    
               
                                                    
                                                                
                                                          
                             
               
             
           
                            
                                  
         
                       
                                     
         
                            
                                  
         
                                      
         
                            
                                 
                                      
                                       
                            
                                  
         
                    
                                                                           
         
                                             
                                    
               
                                                          
                                                                
                                                          
                         
               
             
                  
             
                                                        
                                                              
                                                        
                       
             
           
                              
                                           
             
                                                                          
                                                       
                       
             
           
                                                       
                            
                                 
                                             
                            
                                 
                                         
                            
                                 
                                                    
                            
                                 
                                                    
                            
                                  
         
                                                                   
                                                                            
                                    
                  
         
                                  
         
                    
                                                                           
         
                                             
                                    
               
                                                                 
                                                                
                                                          
                         
               
             
                  
             
                                                               
                                                              
                                                        
                       
             
           
                                      
                            
                                 
                                   
                                                      
                            
                                 
                                   
                            
                                  
         
                                                                
         
                            
                                 
                                                   
                            
                                 
                                     
                            
        case_170: /* CIL Label */
                                                         exclude_options &= -2;
                            
                                 
                                 
                                  
                                  
                                  
                                  
                                  
                                  
                                    
                    
                                                                            
                                              
                   
         
        switch_break: /* CIL Label */;
        }
      }
    while_break___1: /* CIL Label */;
    }
                   
                                                  
         
                                   
         
              
                              
       
     
     
                 
                                          
                               
                               
         
         
                                                   
                        
                   
         
       
                                     
     
                       
       
                                                                               
                                                                            
                           
                                                                              
                                                                               
                                                                        
                                     
                                                                        
                                     
                
       
     
                    
       
                 
       
     
                                             
                       
                                                
              
                                                
       
     
                              
                                                  
         
                                                             
         
       
     
                             
       
                                                           
       
            
                                
         
                                                             
         
       
     
                        
       
                                                                        
       
     
                            
                         
                                 
           
                      
                                                                           
                                                
                     
           
         
       
                                                  
                                                    
                                                      
                                                        
               
                                                                        
                                                               
                                                    
                         
               
             
           
         
       
     
    if (archive_names == 0) {
       
                          
                                  
                                                           
       
                                      {
        *(archive_name_array + 0) = "-";
      }
    }
                            
                                 
         
                                                                            
                                              
                   
         
       
     
                                    
                                             
         
                    
                                                                          
                                              
                   
         
       
     
                              
                                
                  
                                         
                                                                            
                
              
                       
       
       
                              
                                                                   
                                               
       
                                            
         
                                                         
                    
                                                                          
                                                                           
                                             
                                                                              
                   
         
       
     
                        
                                
         
                                                                    
                                              
                   
         
       
                                        
         
                                                                  
                                              
                   
         
       
     
                                      
                                
         
                                                                            
                                              
                   
         
       
                                                  
         
                                                                  
                                              
                   
         
       
     
                     
                                               
                                                    
           
                      
                                                                           
                                                
                     
           
                
                                                      
             
                        
                                                                             
                                                  
                       
             
                  
                                                        
               
                          
                                                                               
                                                    
                         
               
             
           
         
       
     
                                  
                                           
     
                     
                         
     
                              
                                                    
     
     
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                          
                           
                             
                                 
           
                                                                               
                                                
                     
           
         
       
                            
                           
                           
                            
                                                
       
                   
                                            
                                                    
                                                                       
                                 
           
                                                           
                          
             
                                  
             
           
                                
         
                                       
       
                            
                               
                               
                                
                                                
       
                   
                                            
                                                    
                                                                       
                                 
           
                                                           
                          
             
                        
                                                                           
                                                  
                       
             
           
                                
         
                                       
       
                                   
                            
                                      
     
                                             
                               
       
                                                 
                                                      
       
     
                        
       
                                                                       
       
     
                         
                                
         
                                                        
                                
                                                             
         
                            
           
                                                                              
                                                                                
                                              
           
         
       
     
           
  }
}
int main(int argc, char **argv) {
  int tmp;
  void *tmp___0;
  char *tmp___1;
  char *tmp___2;
  int tmp___3;
  int tmp___4;
  char *tmp___5;
  int tmp___6;
  int tmp___7;
                    
                    
                    
                    
  {
    { tmp = clock_gettime(0, &start_timespec); }
                   
       
                                                  
       
     
    {
      program_name = (char const *)*(argv + 0);
      setlocale(6, "");
                                                       
                        
                      
                                       
                                                                            
      allocated_archive_names = 10;
      tmp___0 = xmalloc(sizeof(char const *) *
                        (unsigned long)allocated_archive_names);
      archive_name_array = (char const **)tmp___0;
      archive_names = 0;
                                   
                   
      decode_options(argc, argv);
      name_init();
    }
                            
       
                             
       
     
    {
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
      if ((unsigned int)subcommand_option == 3U) {
        goto case_3;
      }
      if ((unsigned int)subcommand_option == 6U) {
        goto case_6;
      }
                                                  
                    
       
                                                  
                    
       
                        
                            
                      
                                                                           
                                         
               
     
                            
                            
                             
                             
                       
     
                        
                            
                 
                               
     
                        
    case_3 : /* CIL Label */
    {
      create_archive();
                   
    }
                          
         
                                
         
       
      goto switch_break;
    case_6 : /* CIL Label */
    {
                  
      read_and(&extract_archive);
                       
    }
      goto switch_break;
                            
                
                              
     
                        
                            
                      
                  
                              
     
                        
    switch_break: /* CIL Label */;
    }
                             
       
                      
       
     
                           {
       
        closeout_volume_number();
       
    }
    {
                                       
      name_term();
    }
                                                        {
      {
        tmp___3 = ferror_unlocked(stdlis);
      }
                    
         
                                                                   
                                             
                       
         
              
                                     
                           
           
                                                                     
                                               
                         
           
         
       
    }
                           
       
                                                                     
                                           
       
     
    { tmp___6 = ferror_unlocked(stderr); }
    if (tmp___6) {
                      
    } else {
      { tmp___7 = fclose(stderr); }
      if (tmp___7 != 0) {
                        
      }
    }
    return (exit_status);
  }
}
void tar_stat_init(struct tar_stat_info *st) {
   
    { memset((void *)st, 0, sizeof(*st)); }
    return;
   
}
                                                 
   
     
                                       
                                  
                                  
                              
                              
                                   
                                         
     
           
   
 
/* #pragma merger("0","00f.update.o.i","") */
                                     
             
          
                        
                   
                     
                       
                     
                 
                
                                                                       
                
                
                
              
              
                    
                    
   
     
                                        
                   
     
                     
       
                                       
       
             
     
                                            
                       
       
                                       
       
            
                                     
       
                   
                                        
                                   
                             
           
           
                                        
                            
                                                   
                                  
           
                                                 
                                             
                                         
                         
               
                                                                                
               
             
           
                                                                               
                                               
             
                                                    
                                                                              
             
           
                              
             
                                                      
                                        
                                                                               
                               
                                                           
                                                              
                                                               
                                                            
                                                                   
                           
             
           
           
                                                              
                                                                 
           
         
                                   
       
     
                                
                       
       
                                        
       
     
           
   
 
void update_archive(void) {
  enum read_header previous_status;
  int found_end;
  enum read_header status;
  enum read_header tmp;
  struct name *name;
  struct stat s;
  enum archive_format unused;
  int tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *path;
  _Bool tmp___3;
  int tmp___4;
                    
                    
                    
                    
   
     
                                            
                    
                    
                                        
                             
     
     
                 
                                      
                            
                           
         
         
                                      
                       
         
         
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                            
                                
                                
          
                  
         
                               
                                                      
             
                                                                          
             
                                                                    
               
                                                                              
                                           
                         
                                                  
                                                                              
               
                                 
                                                                                
                   
                                                                                
                   
                 
               
             
           
                            
                            
                               
                                         
                        
                            
                               
                        
                            
                                
         
                                               
         
           
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                  
                                      
           
                                                                       
                                               
           
                                      
                                      
            
                                                         
                                               
                            
           
                                     
                                  
                                      
                                      
            
                    
           
                                            
           
                            
                                      
         
                                 
       
                                 
     
     
                  
                                       
                                           
     
     
                 
                                          
                                    
                                                                   
                               
         
                                                        
                      
                                  
         
                                 
           
                                                         
           
                         
                                    
           
         
                                                    
           
                              
           
                
                                            
         
       
                                     
     
     
                  
                      
                       
     
           
   
}
/* #pragma merger("0","010.utf8.o.i","") */
static iconv_t conv_desc[2] = {(iconv_t)-1, (iconv_t)-1};
                                        
   
                                                                                
                   
                                             
                  
                                             
       
     
                                    
   
 
                                                                    
           
           
               
                
                
             
              
                 
                
                
   
     
                              
               
     
                                                           
       
                                 
       
                        
            
                                                              
                          
       
     
     
                              
                            
                                  
                                
                                
                        
                   
                         
                         
                    
     
                                                     
   
 
                                       
                         
   
                                   
     
                 
                                      
                  
                           
         
                                    
                            
         
            
       
                                 
     
                      
   
 
/* #pragma merger("0","011.addext.o.i","") */
extern
    __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__))
                                      pathconf)(char const *__path, int __name);
void addext(char *filename, char const *ext, int e);
size_t base_len(char const *name);
void addext(char *filename, char const *ext, int e) {
  char *s;
  char *tmp;
  size_t slen;
  size_t tmp___0;
  size_t extlen;
  size_t tmp___1;
  size_t slen_max;
  long name_max;
  int *tmp___2;
  char c;
  long size;
  int *tmp___3;
  {
     
                                              
              
                                          
                     
                            
                       
                             
     
                               
                  
            
              
                              
       
                                     
                     
       
                                                          
           
                                        
           
                
                 
                                
                         
           
           
                                                           
                   
           
         
                             
                  
                
                                           
                              
             
                                        
                                  
                                   
                                    
             
           
         
       
     
                                    
       
                                                    
                                                    
       
            
                             
                              
       
                            
                                    
     
    return;
  }
}
/* #pragma merger("0","012.argmatch.o.i","") */
int argmatch(char const *arg, char const *const *arglist, char const *vallist,
             size_t valsize);
                           
void argmatch_invalid(char const *context, char const *value, int problem);
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize);
int __xargmatch_internal(char const *context, char const *arg,
                         char const *const *arglist, char const *vallist,
                         size_t valsize, void (*exit_fn)(void));
int volatile exit_failure;
static void __argmatch_die(void) {
   
                                 
   
}
                                             
int argmatch(char const *arg, char const *const *arglist, char const *vallist,
             size_t valsize) {
  int i;
  size_t arglen;
  int matchind;
  int ambiguous;
  int tmp;
  size_t tmp___0;
  int tmp___1;
  {
    {
      matchind = -1;
                    
                           
      i = 0;
    }
     
                 
                                      
                              
                           
         
                                                                         
                       
           
                                                           
           
                                  
                       
                  
                                 
                           
                    
                                                                         
                              
                      
                 
                               
                                                                           
                                                                              
                 
                          
                                
                 
               
             
           
         
            
       
                                 
     
                    
                  
           {
      return (matchind);
    }
  }
}
                                                                            
                     
            
                
                
                      
                
                    
                    
   
                        
       
                                                    
                      
       
            
       
                                                          
                          
       
     
     
                                     
                                    
                                                                  
                                            
     
           
   
 
                                                                    
                                     
        
                       
            
              
                   
   
     
                                           
                                            
                                                
                                                   
            
     
     
                 
                                      
                              
                           
         
                     
           
                                                      
                                                                   
                                    
                                                     
           
                
           
                     
                                              
                                                                               
           
                        
             
                                                        
                                                                     
                                      
                                                       
             
                  
             
                                                        
                                                                 
                                      
             
           
         
            
       
                                 
     
                                    
           
   
 
                                                              
                                                                         
                                                                 
          
          
   
     
                                                     
                
     
                   
                   
     
     
                                          
                                                
                   
     
                
   
 
/* #pragma merger("0","013.backupfile.o.i","") */
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           malloc)(size_t __size)
    __attribute__((__malloc__));
enum backup_type get_version(char const *context, char const *version);
size_t dir_len(char const *path);
char const *simple_backup_suffix = "~";
static int max_backup_version(char const *file, char const *dir);
static int version_number(char const *base, char const *backup,
                          size_t base_length);
                                             
                                                               
                                
                  
             
                                  
          
                     
                 
                
                     
                
                 
                 
                
                        
                    
                    
   
     
                         
                     
                                
                                                                     
                                    
                                             
                                             
     
                                                            
                                                        
     
     
                                                                    
                                                 
                          
     
            
                                                
         
                                  
                           
                                             
                                                               
         
                            
                           
                   
                                     
         
         
                                       
                                    
                          
                                                                         
         
                                                  
                                       
             
                                                                        
                                                                
                                                               
                                          
                                                     
             
           
                
           
                                                                      
                                                              
                                                             
                                        
                                                   
           
         
       
       
                                           
                                                     
                               
       
     
               
   
 
                                                                  
            
                    
                      
                   
                          
             
              
   
                            
                
                 
     
     
                          
                                        
     
     
                 
                                      
                               
                                                                          
                           
         
                                  
                              
                
                                                       
                                             
                                
           
         
         
                                                                         
                                                          
         
                                             
                                         
         
       
                                 
     
                                 
                  
                 
     
                             
   
 
                                                               
                                               
              
                
          
   
     
                  
                                               
     
                   
                                                       
                                                                  
                                           
           
                       
                                            
                                                    
                                 
               
                                                      
                  
             
                                       
           
                                             
                        
                  
                           
                          
             
           
         
       
     
                     
   
 
                                           
                                       
                                      
                                         
                                        
                                           
                                      
                                           
                                    
                                  
                                                 
                                                         
                                                         
                                                         
                                                          
                                                                        
          
   
                                                                     
                                   
                          
                                       
                                     
              
         
                                                                   
                                                                  
                                                                            
         
                                                     
       
     
   
 
                                                                         
                       
                
                           
                   
                   
                   
                   
   
                  
                     
         
                                              
         
                     
              
         
                                              
                                                                           
         
                         
       
            
       
                                            
                                                                         
       
                       
     
   
 
/* #pragma merger("0","014.basename.o.i","") */
char *base_name(char const *name) {
  char const *base;
  char const *p;
  {
    base = name + 0;
             
    {
                 
                                     ;
                  
                           
         
                                    
           
                       
                                                
                  
                                             
                                     
               
             
                                           
           
                    
                                           
                           
             
                             
           
                   
         
            
       
                                 
    }
    return ((char *)base);
  }
}
size_t base_len(char const *name) {
  size_t len;
  {
    { len = strlen(name); }
    {
                {
                                     ;
                       {
          if (!((int const) * (name + (len - 1UL)) == 47)) {
            goto while_break;
          }
        }       
                           
         
        goto __Cont;
      __Cont:
        len--;
      }
    while_break: /* CIL Label */;
    }
    return (len);
  }
}
/* #pragma merger("0","015.dirname.o.i","") */
                                  
                       
                
            
   
     
                                
                            
                                            
     
     
                 
                                      
                                        
                           
         
                                                             
                          
         
                 
       
                                 
     
                           
                                                                  
   
 
                                  
                
             
                 
                
                
                 
   
     
                          
                   
                                 
                                                             
                                
                                               
                                                           
     
                     
                       
               
                                       
     
                                  
                     
   
 
/* #pragma merger("0","016.exclude.o.i","") */
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcasecmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncasecmp)(char const *__s1, char const *__s2, size_t __n)
    __attribute__((__pure__));
void *xzalloc(size_t s);
void *x2realloc(void *p, size_t *pn);
void *x2nrealloc(void *p, size_t *pn, size_t s);
__inline static _Bool is_space(unsigned char c) {
  unsigned short const **tmp;
  {
    { tmp = __ctype_b_loc(); }
    return ((_Bool)(((int const) * (*tmp + (int)c) & 8192) != 0));
  }
}
struct exclude *new_exclude(void) {
  struct exclude *tmp;
  void *tmp___0;
  {
    { tmp___0 = xzalloc(sizeof(*tmp)); }
    return ((struct exclude *)tmp___0);
  }
}
static int fnmatch_no_wildcards(char const *pattern, char const *f,
                                int options) {
  int tmp;
  int tmp___0;
  int tmp___1;
  size_t patlen;
  size_t tmp___2;
  int r;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  {
                                
      if (options & (1 << 4)) {
         
          tmp = strcasecmp(pattern, f);
                        
         
      } else {
         
          tmp___0 = strcmp(pattern, f);
          tmp___1 = tmp___0;
         
      }
      return (tmp___1);
                          
       
                                  
                         
       
                               
         
                                                    
                            
         
              
         
                                                
                            
         
       
                  
               
                               
                      
                
         
       
                 
     
  }
}
_Bool excluded_filename(struct exclude const *ex, char const *f) {
  size_t exclude_count;
  struct patopts const *exclude;
  size_t i;
  _Bool excluded___0;
  char const *pattern;
  int options;
  int (*matcher)(char const *, char const *, int);
  _Bool matched;
  int tmp;
  char const *p;
  int tmp___0;
  {
    exclude_count = (size_t)ex->exclude_count;
                               
                        
           {
      exclude = (struct patopts const *)ex->exclude;
                    
                                                                       
      i = (size_t)0;
      {
        while (1) {
                                       ;
          if (!(i < exclude_count)) {
            goto while_break;
          }
          pattern = (char const *)(exclude + i)->pattern;
          options = (int)(exclude + i)->options;
          if ((int)excluded___0 == !(!(options & (1 << 29)))) {
            if (options & (1 << 28)) {
                                 
            } else {
              matcher = &fnmatch_no_wildcards;
            }
            {
              tmp = (*matcher)(pattern, f, options);
              matched = (_Bool)(tmp == 0);
            }
                                         
                    
               
                           
                                                    
                           
                                      
                                           
                     
                          
                                         
                   
                                              
                                                      
                       
                                                                      
                                                        
                       
                     
                   
                      
                 
                                               
               
             
            excluded___0 = (_Bool)((int)excluded___0 ^ (int)matched);
          }
          i++;
        }
      while_break: /* CIL Label */;
      }
      return (excluded___0);
    }
  }
}
void add_exclude(struct exclude *ex, char const *pattern, int options) {
  struct patopts *patopts;
  void *tmp;
  size_t tmp___0;
  {
    if (ex->exclude_count == ex->exclude_alloc) {
       
        tmp = x2nrealloc((void *)ex->exclude, &ex->exclude_alloc,
                         sizeof(*(ex->exclude)));
        ex->exclude = (struct patopts *)tmp;
       
    }
    tmp___0 = ex->exclude_count;
    (ex->exclude_count)++;
    patopts = ex->exclude + tmp___0;
    patopts->pattern = pattern;
    patopts->options = options;
           
  }
}
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int),
                     struct exclude *ex, char const *filename, int options,
                     char line_end) {
  _Bool use_stdin;
  FILE *in;
  char *buf;
  char *p;
  char const *pattern;
  char const *lim;
  size_t buf_alloc;
  size_t buf_count;
  int c;
  int e;
  void *tmp;
  size_t tmp___0;
  int *tmp___1;
  int tmp___2;
  int *tmp___3;
  int tmp___4;
  void *tmp___5;
  char *pattern_end;
  _Bool tmp___6;
  _Bool tmp___7;
  int *tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  {
                                            {
                             
                    
              
                    
       
    }       
                  
     
                               
    buf = (char *)((void *)0);
    buf_alloc = (size_t)0;
    buf_count = (size_t)0;
          
    if (use_stdin) {
      in = stdin;
    } else {
      {
        in = fopen((char const * /* __restrict  */)filename,
                   (char const * /* __restrict  */) "r");
      }
      if (!in) {
        return (-1);
      }
    }
    {
      while (1) {
                                     ;
        { c = getc_unlocked(in); }
        if (!(c != -1)) {
          goto while_break;
        }
        if (buf_count == buf_alloc) {
           
            tmp = x2realloc((void *)buf, &buf_alloc);
            buf = (char *)tmp;
           
        }
        tmp___0 = buf_count;
        buf_count++;
        *(buf + tmp___0) = (char)c;
      }
    while_break: /* CIL Label */;
    }
                                      
                  
       
                                     
                     
       
     
                     
       
                             
       
                         
         
                                       
                       
         
       
     
     
                                                       
                            
                                    
     
                          {
      tmp___10 = 0;
    }       
                                                             
                     
              
                     
       
     
    lim = (char const *)((buf + buf_count) + tmp___10);
    pattern = (char const *)buf;
    p = buf;
    {
      while (1) {
                                         ;
        if (!((unsigned long)p < (unsigned long)lim)) {
          goto while_break___0;
        }
        if ((int)*p == (int)line_end) {
          {
            pattern_end = p;
                                                        
          }
          if (tmp___7) {
             
                        {
                                                 ;
                                                                           
                                    
                        
                                                                             
                                 
                                         
                   
                 
                              
              }
            while_break___1: /* CIL Label */;
             
          }
          {
            *pattern_end = (char)'\000';
            (*add_func)(ex, pattern, options);
          }
        next_pattern:
                                    pattern = (char const *)(p + 1);
        }
        p++;
      }
    while_break___0: /* CIL Label */;
    }
     
                                   
                   
     
            
                    
            
                   
     
                      
  }
}
/* #pragma merger("0","017.exitfail.o.i","") */
int volatile exit_failure = (int volatile)1;
/* #pragma merger("0","018.full-write.o.i","") */
size_t safe_write(int fd, void const *buf, size_t count);
size_t full_write(int fd, void const *buf, size_t count) {
  size_t total;
  char const *ptr;
  size_t n_rw;
  size_t tmp;
  int *tmp___0;
  {
    total = (size_t)0;
    ptr = (char const *)buf;
    {
                {
                                     ;
                             
                           
         
        {
          tmp = safe_write(fd, (void const *)ptr, count);
          n_rw = tmp;
        }
        if (n_rw == 0xffffffffffffffffUL) {
          goto while_break;
        }
                          
           
                                         
                          
           
                           
         
                      
                    
                      
      }
    while_break: /* CIL Label */;
    }
    return (total);
  }
}
/* #pragma merger("0","019.getdate.o.i","") */
__attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) rpl_mktime)(struct tm *tp);
int gettime(struct timespec *ts);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        toupper)(int __c);
static int yyerror(char *s __attribute__((__unused__)));
static int yylex(YYSTYPE *lvalp, parser_control *pc);
                                      
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                   
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                   
                                                                   
                                                    
static short const yyr1[66] = {
    (short const)0,  (short const)25, (short const)25, (short const)26,
    (short const)27, (short const)27, (short const)28, (short const)28,
    (short const)28, (short const)28, (short const)28, (short const)28,
    (short const)28, (short const)29, (short const)29, (short const)29,
    (short const)29, (short const)29, (short const)30, (short const)30,
    (short const)31, (short const)31, (short const)31, (short const)32,
    (short const)32, (short const)32, (short const)33, (short const)33,
    (short const)33, (short const)33, (short const)33, (short const)33,
    (short const)33, (short const)33, (short const)33, (short const)34,
    (short const)34, (short const)35, (short const)35, (short const)35,
    (short const)35, (short const)35, (short const)35, (short const)35,
    (short const)35, (short const)35, (short const)35, (short const)35,
    (short const)35, (short const)35, (short const)35, (short const)35,
    (short const)35, (short const)35, (short const)35, (short const)35,
    (short const)35, (short const)36, (short const)36, (short const)37,
    (short const)37, (short const)38, (short const)38, (short const)39,
    (short const)40, (short const)40};
                               
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                    
                                   
                                                                      
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                                      
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                                       
                                                                       
                                                                       
                                                                      
                                                                       
                                                                      
                    
                                    
                                                                       
                                                                       
                                                                      
                                                                        
                                 
                                                                        
                                                                        
                                                                        
                                                                    
                                                                        
                                                                    
                                                                        
                                                                    
                                                                        
                                                                        
                                                                        
                                                                        
                                                                  
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                  
                                                                        
                                                                  
                                                                        
                                                                        
                                                                  
                                                                 
                                                                        
                                                                         
static short const yypgoto[16] = {
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 11,    (short const) - 32768,
    (short const) - 10};
                                  
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                                       
                                                                      
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                       
                                  
                                                                            
                                                                             
                                                                             
                                                                             
                                                                             
                                                                            
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                               
                                                           
int yyparse(void *parm);
int yyparse(void *parm) {
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;
  int yychar1;
  short yyssa[200];
  YYSTYPE yyvsa[200];
  short *yyss;
  YYSTYPE *yyvs;
  int yystacksize;
  int yyfree_stacks;
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
  YYSTYPE yyval;
  int yylen;
  YYSTYPE *yyvs1;
  short *yyss1;
  int size;
  void *tmp;
  void *tmp___0;
  int tmp___1;
  long tmp___2;
                    
                    
                  
                    
                    
  {
                
                 
                 
                      
                      
                
                    
                
                
                     
                 
             
            
                            
                                                                            
                   
                   
                                        
                                 
         
                                                   
         
                            
           
                               
                               
           
         
                   
       
                       
                                
                            
       
       
                                                                            
                            
                         
                                                                  
                                                                                
                                                                                
                                  
                         
                                                                  
                                                                                
                                  
                                  
       
                                                                              
                        
       
     
                  
           
                               
                        
                     
     
                       
       
                                                        
       
     
                      
                  
                 
            
                                         
                                                 
              
                                
       
                             
     
                   
                  
                     
            
                     
                       
              
                                                            
                         
         
       
     
                            
                  
                          
                      
       
                 
                    
            
                     
                      
       
     
                    
                       
     
                      
                  
     
            
                    
                      
                    
     
                  
                    
            
                                 
                   
                    
     
           
                           
                    
                                     
     
     
                     
                    
       
                     
                    
       
                     
                    
       
                     
                    
       
                     
                    
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                        
                           
                                                                
                                                         
                        
                           
                                               
                        
                           
                                                     
                        
                           
                                               
                        
                           
                                               
                        
                            
                                              
                        
                            
                                              
                        
                            
                                                                      
                                             
                                                             
                                                                       
                                                                    
                        
                            
                                                                      
                                                                         
                                                             
                                                                       
                                                                    
                        
                            
                                                                      
                                                                         
                                                             
                                                                       
                                             
                                               
                                           
                                                
                                                       
                        
                            
                                                                      
                                                                         
                                                                 
                                                                    
                        
                            
                                                                      
                                                                         
                                                                 
                                             
                                               
                                           
                                                
                                                       
                        
                            
                                                                       
                        
                            
                                      
                     
              
                                            
       
                                                           
                        
                            
                                                                
                        
                            
                                                                      
                        
                            
                                                                       
                        
                            
                                                 
                                                                      
                        
                            
                                                 
                                                                       
                        
                            
                                                                             
                                                                      
                        
                            
                                                                       
                                                                    
                        
                            
                                                   
                                                                  
                                                                         
                                                                      
              
                                                                         
                                                                       
                                                                 
       
                        
                            
                                                                
                                                                        
                                                                     
                        
                            
                                                                     
                                                             
                                                                            
                                                                             
                        
                            
                                                             
                                                                      
                                                                            
                                                                             
                        
                            
                                                             
                                                                    
                        
                            
                                                             
                                                                     
                                                               
                        
                            
                                                                     
                                                            
                        
                            
                                                                     
                                                             
                                                               
                        
                            
                                                                           
                                             
                                                 
                                             
                                                 
                                                                               
                                                                             
                                           
                                               
                                                                               
                        
                            
                                           
                                                               
                        
                            
                                           
                                                               
                        
                            
                                                                
                        
                            
                                            
                                                               
                        
                            
                                            
                                                               
                        
                            
                                                                 
                        
                            
                                          
                                                               
                        
                            
                                          
                                                               
                        
                            
                                                               
                        
                            
                                           
                                                               
                        
                            
                                           
                                                               
                        
                            
                                                                
                        
                            
                                              
                                                               
                        
                            
                                              
                                                               
                        
                            
                                                                   
                        
                            
                                              
                                                               
                        
                            
                                              
                                                               
                        
                            
                                              
                                                              
                                         
                                                               
                        
                            
                                              
                                                              
                                         
                                                               
                        
                            
                                                                   
                        
                            
                                                            
                                                    
                        
                            
                                                            
                                                    
                        
                            
                                                 
                                                   
                                                     
                                                                     
                  
                                                       
                                                                       
                    
                          
             
           
                
                      
         
              
                             
                                                   
                                                   
                                                                               
                                           
                                                            
                                                
                                                     
                                                 
                                                   
                
                                                   
                                                      
                                                                           
                                                   
                  
                                            
                                                     
                                               
                                                     
           
                                                                 
                                                                           
                                                 
         
       
                        
                            
                        
                        
                            
                                         
                        
                                  
     
                   
                   
            
                   
                         
                                                                        
                       
                          
                                                                 
                                          
                
                                             
         
              
                                           
       
            
                                         
     
                    
           
                       
       
                  
                                       
       
     
                   
            
                           
                        
                        
       
                  
     
                    
                     
               
                                                      
                      
     
            
            
                          
              
                               
                        
                        
     
          
                  
                        
            
                     
                          
              
                                           
                            
         
       
     
                            
                  
                          
                          
       
                 
                    
            
                     
                          
       
     
                    
                       
     
            
                    
                  
                    
              
                        
       
                           
                           
       
     
               
             
                        
       
                           
                           
       
     
    return (1);
  }
}
static table const meridian_table[5] = {{"AM", 264, 0},
                                        {"A.M.", 264, 0},
                                        {"PM", 264, 1},
                                        {"P.M.", 264, 1},
                                        {(char const *)0, 0, 0}};
                                                    
                                              
                                                                    
                                                                   
                                                                        
                                                                        
                                                                     
                                                                        
                                                                   
                                                                       
                             
                                           
                                                                       
                                                                 
                                                                   
                                                 
                                              
                                                                    
                                                                   
                                                                    
                                                                    
                                                                    
                                                                       
                                                   
                                          
                                                             
                                                             
                                                                 
                                                                
                                                                 
                                                                
                                                                
                                                                 
                                                                 
                                                              
                                                              
                                                               
                                                               
                                                               
                                                               
                                                               
                                                                      
                                         
                                                               
                                                               
                                                               
                                                               
                                                              
                                                              
                                                              
                                                              
                                               
                                              
           
              
               
              
               
   
     
                          
                    
       
                          
                    
       
                          
                    
       
                          
                           
                                                       
                          
                      
                
                    
         
              
                  
       
                        
                           
                                            
                          
                          
                             
                      
         
                
                             
                                          
                      
                
                       
         
                                
       
                            
                           
                        
                          
                                
                
                      
         
              
                             
                           
                       
                
                       
         
                                
       
                            
                                    
     
              
     
                                  
     
   
 
                                       
            
          
   
                          
                    
                   
            
                                   
                         
                     
                
                     
         
                          
       
     
                  
   
 
                                                                             
                  
          
              
   
                                                    
     
                 
                                      
                        
                           
         
                                                       
                       
                      
         
             
       
                                 
     
                         
     
                 
                                          
                        
                               
         
                                                           
                           
                      
         
             
       
                                     
     
                              
   
 
                                                                       
          
          
                 
                  
                     
               
          
                                 
              
              
              
              
              
              
              
              
               
               
   
             
     
                 
                                      
                  
                           
         
                                      
                                                                        
           
                                                    
                           
           
         
            
       
                                 
     
                        
     
                 
                                          
                        
                               
         
                                                                         
                           
                      
         
             
       
                                     
     
                                             
                         
                   
            
                           
                                     
                       
                
                       
         
              
                     
       
     
                             
                             
     
                 
                                          
                        
                               
         
                     
           
                     
                                                                               
                              
           
                
           
                                                                         
                              
           
         
                           
                      
         
             
       
                                     
     
                                                 
             
                  
     
                                                                              
                       
                         
     
                          
     
                 
                                          
                        
                               
         
                                                                         
                           
                      
         
             
       
                                     
     
                                               
                                               
                            
       
                   
                                            
                          
                                 
           
                                                                           
                             
                        
           
               
         
                                       
       
                                            
     
                             
     
                 
                                          
                        
                               
         
                                                                         
                           
                      
         
             
       
                                     
     
                         
                          
       
                   
                                            
                          
                                 
           
                                                         
                        
           
               
         
                                       
       
     
                            
             
          
     
                 
                                          
                     
                     
                       
                               
         
                            
                                  
                
              
         
            
       
                                     
     
                       
       
                                                 
       
               
                    
       
     
                              
   
 
                                                      
                  
               
                             
                
           
                      
                       
           
         
             
                           
                      
                      
                
              
                  
                
                                 
                                 
                      
                      
              
              
                    
   
     
                 
                                      
         
                     
                                              
             
                                              
                                    
             
                                                                 
                                   
             
                          
           
                                         
         
                                          
                      
                
                             
                        
                  
                               
                                   
                                 
                            
                      
                                   
                                       
                                     
                              
                          
                             
                   
                                
                                                  
                                                       
                                
                   
                                 
                           
                 
               
                            
                          
               
                           
                                                    
                                                                
                                       
                                 
                   
                                 
                      
                                        
                                                       
                                         
                   
                                                      
                                 
                   
                                
                 
                                               
               
                                 
                            
                      
                                   
                                       
                                                                    
                                   
                                           
                                   
                                     
                       
                                                       
                            
                                        
                                   
                                     
                       
                                                    
                     
                                              
                                   
                     
                        
                                
                        
                                                           
                               
                     
                                 
                                                          
                                             
                                               
                         
                                 
                                                           
                                      
                              
                                                                  
                         
                                 
                       
                                                     
                     
                                   
                       
                                   
                                                            
                                                                
                                                 
                           
                                                      
                                 
                                                 
                           
                              
                         
                                                       
                       
                     
                     
                                 
                                                          
                                                              
                                               
                         
                            
                       
                                                     
                     
                                   
                               
                            
                                        
                                       
                         
                                             
                       
                     
                                               
                                                                    
                                  
                               
                                    
                            
                                    
                     
                                     
                          
                                
                   
                        
                                       
                                 
                                                             
                                                       
                                   
                     
                          
                                                          
                                                       
                                   
                     
                   
                                                                     
                                
                             
                                  
                          
                                  
                   
                                   
                 
               
             
           
         
                                      
                                                       
                       
           
                       
                                                
                                        
                                                               
                                
                        
                                   
               
               
                              
                                                
                                          
               
                                                                
                                      
                                       
                 
               
             
                                           
           
           
                                  
                                                               
           
                    
                         
           
                                          
                                 
         
                           
                              
                        
                                 
         
                          
         
                     
                                              
                                
                          
                                        
                              
                              
             
                               
                      
                    
                                 
                        
               
             
                                  
                                   
             
           
                                         
         
              
       
                                 
     
   
 
                                                         
                  
 
                                                      
                                            
               
                
                       
               
                
                    
                                 
              
                     
              
               
                            
                     
              
              
               
             
            
              
                     
            
          
                
          
            
          
            
          
            
                    
                  
   
               
       
                                           
       
                         
                          
       
                                                       
     
     
                                  
                                    
                                        
                                       
     
               
                        
     
                 
                                       
                           
                               
                                       
                                
                                 
                                   
                                              
                                  
                                     
                    
                   
                        
                        
                     
                    
                      
                     
                                
                              
                             
                             
                              
                                    
                              
                                                                  
                                           
                                                           
                                                       
                
     
                 
                                      
                              
                           
         
         
                                                      
                                                        
                                                
         
                       
                                  
                                     
                                                               
                                                
                                                  
                                                     
                                                                          
                                                                 
                               
             
           
         
                  
       
                                 
     
                                           
                                             
         
                                                            
                                                             
         
                       
                                                 
                                                             
         
       
     
                                         
                       
                        
     
                           
                           
                        
     
                              
                        
            
                                
                          
              
                                 
                            
                
                                                          
                              
                  
                                      
                                       
                                  
               
             
           
         
       
     
     
                                 
                                                          
                                                        
                                              
     
                        
                  
            
                         
                             
                              
                                  
           
                                                       
           
                                 
                                
             
                                        
                                               
                  
                          
                                  
                                   
                                                      
           
                
                        
                                
                                 
                                                    
         
              
                      
                              
                               
                                                  
       
     
                                                            
                                      
                                       
                                     
                       
     
                              
                                   
     
     
               
                              
     
                       
                          
                 
                               
                         
                                
                
                         
                                
         
                                    
       
                         
                          
       
     
                       
                           
         
                      
                                      
                                                                     
                                                                           
                           
                                  
         
                           
                            
         
       
     
                        
                                 
                            
                         
                                         
                          
       
                 
     
                                            
                                                                       
               
                             
                     
                              
                     
                        
                 
                                                
                 
                                                                       
                                               
                                              
                                         
                                        
                        
     
                        
                                    
                      
   
 
/* #pragma merger("0","01a.getopt1.o.i","") */
/* #pragma merger("0","01b.getopt.o.i","") */
/* #pragma merger("0","01c.gettime.o.i","") */
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1), __leaf__))
    gettimeofday)(struct timeval *__restrict __tv, __timezone_ptr_t __tz);
int gettime(struct timespec *ts) {
  int tmp;
  struct timeval tv;
  int r;
  int tmp___0;
  {
    {                             }
                   
                 
     
    {
      tmp___0 = gettimeofday((struct timeval * /* __restrict  */)(&tv),
                             (__timezone_ptr_t)0);
      r = tmp___0;
    }
                 
                             
                                       
     
    return (r);
  }
}
/* #pragma merger("0","01d.hash.o.i","") */
_Bool hash_rehash(Hash_table *table___0, size_t candidate);
static struct hash_tuning const default_tuning = {
    (float)0.0, (float)1.0, (float)0.8, (float)1.414, (_Bool)0};
                                                                   
                                  
             
                                  
                
   
     
                                                                        
                                                                    
     
                                                                            
       
                
       
     
                                                                    
                         
     
                    
     
                 
                                      
                      
                           
         
         
                   
                                                                            
         
                      
                                        
         
                                                         
       
                                 
     
                       
   
 
                                                   
                                  
   
                                      
                         
     
                                                          
     
                 
                                      
                                                                                
           
                    
           
                
                             
                                          
           
         
                 
       
                                 
     
   
 
                                                                     
                                  
             
                                  
   
     
                                                                        
                                                                    
     
                                                                            
       
                
       
     
                    
     
                 
                                      
                      
                           
         
                                                                  
                             
                                          
           
         
                                                         
       
                                 
     
     
                 
                                          
                 
                                                                                
                               
         
                           
                                        
         
       
                                     
     
                       
   
 
                                                    
                                                           
                                               
                 
                                  
                                  
            
   
                        
                                                          
     
                 
                                      
                                                                                
                           
         
                           
                          
           
                       
                                                
                            
                                     
               
                                                                           
                         
                                 
               
                        
                                                               
             
                                           
           
         
                 
       
                                 
     
                     
   
 
size_t hash_string(char const *string, size_t n_buckets) {
  size_t value;
  char const *tmp;
  {
    value = (size_t)0;
    {
                 
                                      
                       
                           
         
                     
                 
                                                                           
       
    while_break: /* CIL Label */;
    }
    return (value);
  }
}
                                         
                 
                
          
   
                        
                               
     
                 
                                      
                                 
                                       
                             
           
                
                           
         
                  
                                
                  
       
                                 
     
                              
              
            
              
     
                        
   
 
                                            
            
   
                           
                             
     
                     
     
                 
                                      
                                      
                  
                           
         
                         
       
                                 
     
                       
   
 
static _Bool check_tuning(Hash_table *table___0) {
  Hash_tuning const *tuning;
  float epsilon;
  {
    tuning = table___0->tuning;
    epsilon = 0.1f;
    if (epsilon < (float)tuning->growth_threshold) {
      if (tuning->growth_threshold < (float const)((float)1 - epsilon)) {
                                                               {
                                                           
                                                                 
                                       {
              if (tuning->shrink_factor <= (float const)1) {
                if (tuning->shrink_threshold + (float const)epsilon <
                    tuning->growth_threshold) {
                  return ((_Bool)1);
                }
              }
            }
           
        }
      }
    }
    table___0->tuning = &default_tuning;
                      
  }
}
Hash_table *hash_initialize(size_t candidate, Hash_tuning const *tuning,
                            size_t (*hasher)(void const *, size_t),
                            _Bool (*comparator)(void const *, void const *),
                            void (*data_freer)(void *)) {
  Hash_table *table___0;
  void *tmp;
  _Bool tmp___0;
  float new_candidate;
  void *tmp___1;
  int tmp___2;
  int tmp___3;
  {
                                                              
                                         
            
                                                                    
                                           
       
     
     
                                       
                                    
     
                                                                 
                                         
     
                  
                               
     
     
                                 
                                        
     
                   
                
     
                                
                     
                                                                     
                                                         
                  
       
                                        
     
                                              
                   
            
                   
     
                                                                     
                
     
                                                     
                                              
                   
            
                   
     
                                                                                
                
     
     
                                                                           
                                                       
                               
                                                                                
                                            
                                       
                                 
                                         
                                         
                                                                    
     
                       
                                        
    return ((Hash_table *)((void *)0));
  }
}
                                                                 
                         
            
   
                                     
                                       
                                             
            
       
                                   
                                       
       
     
                 
   
 
                                                                         
   
                            
                                             
                                       
           
   
 
                                                                      
                                                                             
                            
             
                            
             
                          
                
                 
                              
                
   
     
                                                                
                                       
     
                                                                            
       
                
       
     
                          
                                                                    
                         
     
                                                                                
                  
                          
                   
                           
           
                                
                            
                                        
           
                
                                   
         
       
                    
     
                    
     
                 
                                      
                            
                           
         
         
                                               
                                                         
         
                      
                                          
                       
             
                                      
                                            
                                              
             
           
                            
         
                              
       
                                 
     
                       
   
 
                                                            
                        
                            
                            
                          
             
                                
             
                               
                             
   
     
                 
                                                                          
                                                                        
     
                                                                 
                        
     
                                                            
                               
     
                 
                                      
                                                                                
                           
         
                           
                          
           
                       
                                                
                            
                                     
               
               
                                    
                                                                
                                                                   
                                                     
               
                                               
                                                              
                 
                          
                 
               
                                  
                                     
                                                                     
                   
                                                        
                                        
                   
                                                                               
                                      
                   
                                         
                                                     
                                               
                        
                                                  
                                            
                 
                      
                                        
                                              
                                                                     
                   
                                                  
                   
                 
               
                            
             
                                           
           
         
                 
       
                                 
     
     
                                      
                                            
                                                        
                                                  
                                                            
                                                              
                              
     
                      
   
 
                                                             
             
                            
                               
                         
                            
                  
                
                
   
                 
       
                
       
     
                                                                    
                                                            
                    
     
                       
       
                                        
                        
       
                                                                   
                           
       
                                      
                                     
                               
                               
                             
     
                                 
                             
                                  
                                                
                                               
                                                
       
                                
       
                                                  
                                                 
                                                  
                                   
                                   
                                                                              
                
                   
                                                                           
                                       
         
                                   
                                                       
                             
         
                                                                
                       
                                            
         
       
     
                           
   
 
/* #pragma merger("0","01e.human.o.i","") */
extern __attribute__((__nothrow__)) struct lconv *(__attribute__((__leaf__))
                                                   localeconv)(void);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memmove)(void *__dest, void const *__src, size_t __n);
static char const power_letter[9] = {
    (char const)0,   (char const)'K', (char const)'M',
    (char const)'G', (char const)'T', (char const)'P',
    (char const)'E', (char const)'Z', (char const)'Y'};
                                                                       
              
          
   
                             
                                                      
                             
                                 
                                        
                    
                                 
                    
           
                
                  
         
                                                  
       
     
                   
   
 
static char *group_number(char *number, size_t numberlen, char const *grouping,
                          char const *thousands_sep) {
  register char *d;
  size_t grouplen;
  size_t thousands_seplen;
  size_t tmp;
  size_t i;
  char buf[(((2UL * sizeof(uintmax_t)) * 8UL) * 302UL) / 1000UL + 1UL];
  unsigned char g;
                    
  {
    {
      grouplen = 0xffffffffffffffffUL;
      tmp = strlen(thousands_sep);
      thousands_seplen = tmp;
      i = numberlen;
                                             
                                                                
                             
    }
    {
                {
                                     ;
                                     
                
                             
                                 
                  
                         
           
                     
         
                           
                       
         
         
                        
                        
                                             
                                                                      
         
                      {
          return (d);
        }
        {
          d -= thousands_seplen;
                                             
                                                               
                                   
        }
      }
                                ;
    }
  }
}
char *human_readable(uintmax_t n, char *buf, int opts,
                     uintmax_t from_block_size, uintmax_t to_block_size) {
  int inexact_style;
  unsigned int base;
  uintmax_t amt;
  int tenths;
  int exponent;
  int exponent_max;
  char *p;
  char *psuffix;
  char const *integerlim;
  int rounding;
  char const *decimal_point;
  size_t decimal_pointlen;
  char const *grouping;
  char const *thousands_sep;
  struct lconv const *l;
  struct lconv *tmp;
  size_t pointlen;
  size_t tmp___0;
  size_t tmp___1;
  uintmax_t multiplier;
  uintmax_t divisor;
  uintmax_t r10;
  uintmax_t r2;
  long double dto_block_size;
  long double damt;
  size_t buflen;
  size_t nonintegerlen;
  long double tmp___2;
  long double e;
  long double tmp___3;
  long double tmp___4;
  unsigned int r10___0;
  unsigned int r2___0;
  int digit;
  uintmax_t power;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
                    
                    
                    
                    
                    
                    
                    
  {
                             
                   {
      tmp___8 = 1024;
    }       
                     
     
    {
      base = (unsigned int)tmp___8;
                    
                                                       
                          
                                   
                    
      thousands_sep = "";
      tmp = localeconv();
      l = (struct lconv const *)tmp;
      tmp___0 = strlen((char const *)l->decimal_point);
      pointlen = tmp___0;
    }
                        {
      if (pointlen <= 16UL) {
        decimal_point = (char const *)l->decimal_point;
        decimal_pointlen = pointlen;
      }
    }
    {
      grouping = (char const *)l->grouping;
      tmp___1 = strlen((char const *)l->thousands_sep);
    }
                          
                                                     
     
             
              
                                                                                
                  
                 
          
                
                                           
                                                   
                                                     
                             
                                    
                     
                       
                                      
         
       
            
                                   
                                                     
                                                    
                                     
                                     
                            
                                        
                             
                                
                  
                                          
           
                                      
         
       
     
    dto_block_size = (long double)to_block_size;
                                                                            
                       
       
                                                    
                                              
                                                                   
                                           
                                  
       
           {
                         
                   
       
                   
                                        
                                 
                     
                                              
                                             
                               
             
                  
                             
           
         
                                   
       
       
                  
                                                    
                                              
                                                                   
        buflen = strlen((char const *)buf);
        nonintegerlen = decimal_pointlen + 1UL;
       
                                                                    
         
                                                                        
                                                
                                                           
                                             
                                             
                                    
         
              
                       
                                                   
             
                                                                            
                                                    
                                                               
                                                 
                                                 
                                        
             
           
         
       
    }
    {
      p = psuffix - buflen;
                                                    
      integerlim = (char const *)((p + buflen) - nonintegerlen);
    }
    goto do_grouping;
  use_integer_arithmetic:
                                                          {
                   
                                  {
         
                     
                                              
                                                                         
                                                            
                                                                           
                                   
                                           
                                
                                                               
                    
                                                                      
             
                       
                                         
                                               
                                     
               
                    
                                   
             
           
                                         
         
                        {
                                  {
                                                   
          }       
                                     
                                 
                            
                      
                            
               
                    
                          
             
                               
           
                        {
                     
                         
                               
                    
                         
             
          }
                          {
                         
                          
                   {
                               {
              _L___3 : /* CIL Label */
                        {
                    
                                         
                                      
                memcpy((void * /* __restrict  */)p,
                       (void const * /* __restrict  */)decimal_point,
                       decimal_pointlen);
                rounding = 0;
                                  
              }
              }
            }
          }
        }
      }
    }
                             
                                                                            
            
                               
                                    
                       
                
                       
         
              
                     
       
                          
     
                   
            
                      
                                     
                                        
                       
                              
               
                    
                               
                                      
                                                   
                                                                     
                                         
               
             
                               
           
         
       
     
                                 
    {
                 
                                          
                                  
            
                                
                    
                            
                               
         
       
    while_break___1: /* CIL Label */;
    }
  do_grouping:
    if (opts & 4) {
       
                                                                             
                                        
       
    }
                    
                         
                     
                             
         
                     
                                              
                                           
                                   
             
                       
                                           
                                   
             
                                     
           
                                         
         
       
                     
                          
                  
                           
                              
                           
                  
                                                   
           
                
                                                 
         
                                  
       
                       
                        
                         
                              
                      
                                 
           
         
                          
                  
                             
       
     
    *psuffix = (char)'\000';
    return (p);
  }
}
                                               
                                                 
                                                                    
                                                                      
/* #pragma merger("0","01f.mktime.o.i","") */
extern __attribute__((__nothrow__)) struct tm *(
    __attribute__((__leaf__))
    localtime_r)(time_t const *__restrict __timer, struct tm *__restrict __tp);
__inline static int leapyear(int year) {
  int tmp;
  {
                          
                            
                
              
                                    
                  
                
                  
         
       
           {
              
    }
    return (tmp);
  }
}
                                                 
                                                       
                                                        
                                                          
                                                          
                                                          
                                                          
                                
                                                       
                                                        
                                                          
                                                          
                                                          
                                                          
                                 
__inline static time_t ydhms_diff(long year1, long yday1, int hour1, int min1,
                                  int sec1, int year0, int yday0, int hour0,
                                  int min0, int sec0) {
  int a4;
  int b4;
  int a100;
  int b100;
  int a400;
  int b400;
  int intervening_leap_days;
  time_t tyear1;
  time_t years;
  time_t days;
  time_t hours;
  time_t minutes;
  time_t seconds;
  {
    a4 = (int)(((year1 >> 2) + (long)(1900 >> 2)) - (long)(!(year1 & 3L)));
    b4 = ((year0 >> 2) + (1900 >> 2)) - !(year0 & 3);
    a100 = a4 / 25 - (a4 % 25 < 0);
    b100 = b4 / 25 - (b4 % 25 < 0);
    a400 = a100 >> 2;
    b400 = b100 >> 2;
    intervening_leap_days = ((a4 - b4) - (a100 - b100)) + (a400 - b400);
    tyear1 = year1;
    years = tyear1 - (time_t)year0;
    days = ((365L * years + yday1) - (time_t)yday0) +
           (time_t)intervening_leap_days;
    hours = (24L * days + (time_t)hour1) - (time_t)hour0;
    minutes = (60L * hours + (time_t)min1) - (time_t)min0;
    seconds = (60L * minutes + (time_t)sec1) - (time_t)sec0;
    return (seconds);
  }
}
                                                                             
                                                                   
           
             
            
               
   
             
       
                                                                      
                                                                             
                                          
                
                                            
       
                                          
                    
       
     
                                                                     
                                                                               
                                 
                                  
               
                                                 
                                                                              
            
               
                                                         
                        
                                                                                
     
                     
   
 
                                                                      
                                                                    
                                                            
               
             
            
               
             
             
              
   
                                              
             
               
                 
                       
         
                     
                                          
                           
                           
                    
                          
             
                                                 
                               
             
                           
                                            
                    
                                           
             
             
                       
                        
                                                    
             
                    
                      
                       
                    
                        
             
           
                                     
         
                 
                   
                    
                     
                   
           
         
       
     
               
   
 
                                     
                                                                          
                                        
           
            
            
            
            
               
                       
          
          
           
           
          
                     
            
           
                    
                             
                
                       
            
               
          
             
            
                        
                    
                                 
                                 
                               
                              
                              
                               
                     
           
               
                    
                    
                            
                     
                     
             
                   
                  
            
                
            
                
                     
                     
              
              
              
   
     
                           
                       
                       
                         
                         
                       
                                   
                           
                               
                                                 
                                                    
                                             
                                               
                                
                                                                 
                                                                                
                          
                         
                                    
                               
                          
     
                  
              
     
                   
               
     
     
                                                              
                                              
     
                                                                          
                  
                
               
                 
             
                                      
                                      
                                    
                                   
                                  
                                
                                                          
                                               
                                                
                                                
                                              
                                                               
                                                       
                     
                         
              
                        
       
                                                               
                                                       
                          
                                                                            
                                                  
                               
                                                                          
                                                         
                       
                           
                
                          
         
                                                    
                              
         
                                           
                         
       
     
            
            
           
             
     
                 
                                      
         
                                                     
                                                                              
                                                         
         
                         
                           
         
                      
                        
                                  
                                
                    
                              
                                                     
                      
                                                             
               
                            
                                  
                      
                            
               
             
                  
                        
           
                
                               
                              
                                      
                                
           
         
                
               
               
                                
       
                                 
     
                               
                       
                               
                          
                                   
                                                  
                         
           
                       
                                                
                                           
                                     
               
                             
               
                           
                                                    
                                          
                                         
                   
                                                       
                                                    
                     
                                                         
                     
                                                
                       
                                                                     
                                                                
                                                                     
                                                         
                       
                                        
                     
                   
                                 
                 
                                               
               
                              
             
                                           
           
         
       
     
               
                                                   
                                     
                     
                              
                      
                            
                      
         
              
                    
       
       
                                       
                                       
                                         
                                                        
       
                    
                    
              
                    
       
                                              
                                                 
                    
                            
       
     
             
               
   
 
                               
__attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) rpl_mktime)(struct tm *tp);
                                                             
             
   
     
                            
                                                                           
                             
     
                 
   
 
/* #pragma merger("0","020.modechange.o.i","") */
void mode_free(struct mode_change *changes);
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes);
                                                                 
                        
            
   
     
                                               
                                    
     
                                                         
                 
     
                                                
                      
                       
                        
                                                                    
               
   
 
                                                        
                                                        
                                                      
                          
   
                                                             
              
                  
                  
            
                        
                
     
           
   
 
                                                         
                                                           
                           
                           
                            
                     
                        
              
                   
                       
                         
                           
                      
                             
                
                            
                              
              
              
              
              
              
              
              
              
               
               
               
               
                         
               
               
               
                    
   
     
                                               
                                                                             
     
                                  
                                                  
                                         
       
                           
                             
                             
                                       
                                         
                                          
                                         
                        
                              
                 
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
                             
                                    
                         
                
                      
         
                                   
                         
                
                      
         
                                  
                        
                
                      
         
                                  
                        
                
                      
         
                                  
                        
                
                      
         
                                 
                       
                
                      
         
                                 
                             
                
                      
         
                                 
                             
                
                      
         
                                
                             
                
                       
         
                                
                                     
                
                       
         
                                
                                     
                
                       
         
                                
                                    
                
                       
         
                                            
                                                                           
                            
                           
                          
                          
                         
                        
                       
       
       
                                
                                      
       
                                                           
                                         
       
                                             
                    
     
     
                                       
                         
                    
     
     
                 
                                      
                                  
                         
                                  
                         
                      
         
                     
                                              
             
                                                     
                              
               
                                                     
                              
               
                                                     
                              
               
                                                    
                             
               
                                  
                                     
                                     
                                
                                     
                                                                 
                                
                                     
                                                                        
                                
                                    
                                        
                                                                          
                                
                                           
                                              
                                          
             
                          
           
                                         
         
                       
                            
                              
                
                              
                                                                            
                                   
         
         
                     
                                              
                                                     
                                                       
                                                         
                                       
                 
               
             
             
                                                           
                                                     
             
                                                                      
               
                                
               
                                               
             
                                                             
                                            
                                            
                                   
                                                    
                             
                      
                             
               
                                                         
                 
                                                           
                                  
                 
                                                                         
                                                   
                 
                                                           
               
             
                                                  
                           
                    
                                                    
                             
                      
                             
               
                                  
             
                                                       
                                              
             
             
                                                 
                                        
                                      
                                                      
                            
             
             
                         
                                                  
                 
                                                         
                                  
                   
                                                         
                                  
                   
                                                        
                                 
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                      
                   
                                                         
                                      
                   
                                                         
                                      
                   
                                          
                                         
                                  
                                                                              
                                      
                                        
                                         
                                  
                                                                              
                                      
                                        
                                        
                                                                 
                                         
                                  
                                                                           
                                      
                                        
                                         
                                                           
                                        
                                         
                                                          
                                        
                                             
                                      
                                 
                   
                                              
                                                                 
                                        
                                             
                                      
                                 
                   
                                                     
                                                                 
                                        
                                             
                                      
                                 
                   
                                                            
                                                                 
                                        
                                                   
                                      
                                                  
                 
                              
               
                                             
             
                          
           
                                         
         
                                                 
                           
         
       
                                 
     
                                         
                    
     
                                  
                                     
   
 
                                                                       
                 
               
          
              
              
              
              
              
              
              
              
   
                                                                                
     
                 
                                      
                       
                           
         
                                            
                                                         
                                      
                               
                                                   
                    
                      
             
                               
                                                       
                    
                          
             
                              
                                                     
                    
                          
             
                                                               
                  
                                                                  
                                                     
                                                  
                      
                            
               
                                                     
                                                  
                      
                            
               
                                                    
                                                
                      
                            
               
                                                                     
                    
                                                            
                                           
                      
                            
               
                                                            
                                           
                      
                            
               
                                                           
                                         
                      
                            
               
                                                                     
             
           
                                                   
                
                                         
                                              
                                                  
                            
                                                                                
                                                                                
               
             
           
         
         
                                             
                         
           
                                             
                         
           
                                             
                         
           
                            
                                
                                                                                   
                            
                                
                           
                            
                                
                            
                            
                                      
         
                                                            
       
                                 
     
                     
   
 
                                             
                                    
   
     
                 
                                      
                       
                           
         
         
                               
                                
                         
         
       
                                 
     
           
   
 
/* #pragma merger("0","021.prepargs.o.i","") */
static int prepend_args(char const *options, char *buf, char **argv) {
  char const *o___0;
  char *b;
  int n;
  unsigned short const **tmp;
  char const *tmp___0;
  char *tmp___1;
  char tmp___2;
  char const *tmp___3;
  unsigned short const **tmp___4;
  char *tmp___5;
  {
                    
            
    n = 0;
    {
      while (1) {
                                     ;
        {
                     
                                              
                                      
                                                                                
                                   
             
                    
           
                                         
        }
                     {
          return (n);
        }
                   
                          
         
            
         
                     
                                              
                        
                
                            
                    
                                     
                               
                                     
                           
                                
                        
                                           
               
             
                         
               
                                          
               
                                                                           
                         
                                     
               
                    
                                   
             
           
                                         
         
                    
        b++;
                                
      }
                                ;
    }
  }
}
                                                                              
            
             
                
                
              
           
                    
            
                
                 
                       
              
                 
                
                       
   
                  
       
                              
                                     
                              
                                                         
                            
                      
                                     
                 
                                                                           
                              
                                  
                    
                     
             
                       
               
                                    
                                                 
                      
       
       
                   
                                        
                       
               
                         
                 
                                     
                             
                         
                             
           
                              
         
                                   
       
     
           
   
 
/* #pragma merger("0","022.quotearg.o.i","") */
                                        
                                               
int set_char_quoting(struct quoting_options *o___0, char c, int i);
char *quotearg_n(int n, char const *arg);
char *quotearg_char(char const *arg, char ch);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        mbsinit)(mbstate_t const *__ps)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__))
       mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s,
                size_t __n, mbstate_t *__restrict __p);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        iswprint)(wint_t __wc);
                                           
                                          
                                        
                                               
                                    
                                         
                                         
                                          
                                  
                                                  
                                                             
                                                             
                                                             
                                 
static struct quoting_options default_quoting_options;
                                                                              
        
           
                            
                
               
                                  
   
     
                               
               
                                    
                                            
     
                
                      
            
                                         
     
     
                    
                                   
                   
     
               
   
 
                                                                             
                              
   
                
                  
            
                                     
     
                   
           
   
 
                                                                    
                   
         
            
        
                              
   
                          
                
                  
            
                                     
     
                                                                       
                                                           
                          
                                 
               
   
 
                                                                           
                          
            
                   
   
     
                           
                                      
     
                                                             
                                  
                           
       
     
                         
   
 
static size_t quotearg_buffer_restyled(char *buffer___2, size_t buffersize,
                                       char const *arg, size_t argsize,
                                       enum quoting_style quoting_style,
                                       struct quoting_options const *o___0) {
  size_t i;
  size_t len;
  char const *quote_string;
  size_t quote_string_len;
  int backslash_escapes;
  int unibyte_locale;
  size_t tmp;
  char const *left;
  char const *tmp___0;
  char const *right;
  char const *tmp___1;
  unsigned char c;
  unsigned char esc;
  int tmp___2;
  size_t m;
  int printable;
  unsigned short const **tmp___3;
  mbstate_t mbstate;
  wchar_t w;
  size_t bytes;
  size_t tmp___4;
  size_t j;
  int tmp___5;
  int tmp___6;
  size_t ilim;
  size_t tmp___7;
  int tmp___8;
  int tmp___9;
                    
                    
                    
                    
                    
  {
     
                      
                                     
                                   
                            
                                     
                                  
     
     
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                          
                            
     
                 
                                      
                               
                                           
         
              
                         
       
                                 
     
                            
                          
                                   
                        
                           
                            
                        
                            
                            
      
                                                  
                     
                                                   
                      
                          
     
       
                   
                                            
                               
                                 
           
           
                       
                                                
                                     
                                                          
               
                    
                                   
             
                                           
           
                         
         
                                       
       
       
                              
                             
                                                
       
                        
                            
     
                 
                                          
                               
                                           
         
              
                             
       
                                     
     
                          
                                   
                        
                                   
                        
                                  
     
                  
     
                 
                                          
                                              
                                                 
                
                                 
         
                      
                               
         
                                
                                 
                                                  
               
                                                         
                                                                               
               
                                 
                 
                             
                                                      
                                           
                                                       
                     
                          
                                         
                   
                                                 
                 
               
             
           
         
                                      
         
                            
                        
           
                             
                         
           
                            
                        
           
                            
                        
           
                             
                         
           
                             
                         
           
                             
                         
           
                            
                        
           
                             
                         
           
                             
                         
           
                              
                          
           
                              
                          
           
                             
                         
           
                              
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                              
                         
           
                             
                             
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                             
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                                  
                               
                                  
             
                         
                                                  
                                       
                                                   
                 
                      
                                     
               
                                             
             
             
                         
                                                  
                                       
                                                  
                 
                      
                                     
               
                                             
             
             
                         
                                                  
                                       
                                                  
                 
                      
                                     
               
                                             
             
                                   
           
                                
                                 
         
                                                  
                        
           
                                                  
                            
           
                                  
                               
                                              
                                   
                                  
                                                        
               
                                                            
                               
                 
                                                            
                               
                 
                                                            
                               
                 
                                                            
                               
                 
                                                            
                               
                 
                                                            
                               
                 
                                                            
                               
                 
                                                            
                               
                 
                                                            
                               
                 
                                      
                                      
                                      
                                       
                                       
                                       
                                       
                                       
                                       
                                       
                                                       
                         
                 
                             
                                                      
                                           
                                                      
                     
                          
                                         
                   
                                                 
                 
                 
                             
                                                      
                                           
                                                       
                     
                          
                                         
                   
                                                 
                 
                 
                             
                                                       
                                           
                                                      
                     
                          
                                          
                   
                                                  
                 
                                      
                                                
               
             
           
                                
                                           
                                
                                          
         
                                
                               
                                   
                        
                               
                                   
                        
                                
                                   
                        
                                
                                   
                                  
                                
                                   
                                  
                               
                                   
                                  
                                
                                   
                        
                                
                  
                                  
                           
                                                  
                                                
           
                 
                                  
                    
                              
           
                                
                                 
                                 
                                                 
                                                   
                  
                                     
           
                         
                                  
           
                                 
                                 
                          
                                  
           
                                    
                                    
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                                   
                                                
           
                                
                                     
         
                                                  
                            
           
                                                  
                            
           
                                  
                                   
                                              
                                    
         
                     
                                               
                                   
                                               
             
                  
                                  
           
                                          
         
           
                       
                                                 
                                     
                                                 
               
                    
                                    
             
                                            
           
           
                       
                                                 
                                     
                                                 
               
                    
                                    
             
                                            
           
                                
                                           
                                
                                          
         
                                
                                    
                                    
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                     
                                 
                                           
                               
             
                            
                                        
                                                                           
             
                  
             
                                                             
                            
                            
             
                                                  
               
                                      
               
             
             
                         
                                                   
                 
                           
                                                                
                                                                              
                                                
                                                                         
                                  
                 
                                   
                                        
                        
                                                      
                                  
                                          
                          
                                                        
                                    
                       
                                   
                                                             
                                                
                                                    
                                                    
                             
                                  
                                                  
                           
                              
                         
                                                        
                       
                                            
                            
                                                              
                                      
                         
                                     
                                                               
                                               
                                                    
                             
                             
                                                                              
                                                 
                               
                                                                              
                                                 
                               
                                                                              
                                                 
                               
                                                                              
                                                 
                               
                                                                               
                                                 
                               
                                                    
                                                         
                                                         
                                                          
                                                          
                                                          
                                                                   
                                                              
                             
                                
                           
                                                          
                         
                       
                                                        
                                     
                                      
                       
                                 
                     
                   
                 
                                                                     
                              
                                        
                 
               
                                              
             
           
                        
                        
                  
                                    
                               
                                     
                             
                 
                             
                                                       
                                            
                                       
                         
                                     
                                                               
                                                   
                                                               
                             
                                  
                                                  
                           
                                                          
                         
                         
                                     
                                                               
                                                   
                                                                               
                             
                                  
                                                  
                           
                                                          
                         
                         
                                     
                                                               
                                                   
                                                   
                                                                   
                             
                                  
                                                  
                           
                                                          
                         
                                                               
                       
                     
                                          
                                            
                     
                     
                                 
                                                           
                                               
                                                        
                         
                              
                                              
                       
                                                      
                     
                        
                                                  
                   
                                                  
                 
                             
               
             
           
                                          
         
                                
                                                                                
                                                                 
                         
           
                
                       
         
                       
                   
                                             
                                 
                                             
           
                
                                
         
                                        
       
                  
                   
                                             
                                 
                                          
           
                
                                
         
                                        
       
            
       
                                     
     
                   
                                              
                                            
       
     
                       
       
                   
                                             
                               
                                  
           
           
                       
                                                 
                                     
                                                          
               
                    
                                    
             
                                            
           
                         
         
                                        
       
     
    if (len < buffersize) {
      *(buffer___2 + len) = (char)'\000';
    }
    return (len);
  use_shell_always_quoting_style :                                               {
    tmp___7 = quotearg_buffer_restyled(buffer___2, buffersize, arg, argsize,
                                       (enum quoting_style)2, o___0);
  }
                     
  }
}
size_t quotearg_buffer(char *buffer___2, size_t buffersize, char const *arg,
                       size_t argsize, struct quoting_options const *o___0) {
  struct quoting_options const *p;
  int e;
  int *tmp;
  size_t r;
  size_t tmp___0;
  int *tmp___1;
  {
    if (o___0) {
      p = o___0;
    } else {
      p = (struct quoting_options const *)(&default_quoting_options);
    }
    {
                               
               
      tmp___0 = quotearg_buffer_restyled(buffer___2, buffersize, arg, argsize,
                                         (enum quoting_style)p->style, p);
      r = tmp___0;
                                   
                   
    }
    return (r);
  }
}
static char slot0[256];
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options);
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options) {
  int e;
  int *tmp;
  unsigned int n0;
  unsigned int n1;
  void *tmp___0;
  void *tmp___1;
  size_t size;
  char *val;
  size_t qsize;
  size_t tmp___2;
  void *tmp___3;
  int *tmp___4;
  int tmp___5;
  {
    {
                               
               
      n0 = (unsigned int)n;
    }
                
       
                
       
     
                      {
      n1 = n0 + 1U;
                                                
                     
              
                     
       
                                                            
         
                       
         
       
                                                                 
         
                                              
                                              
                              
         
       
       
                 
                                                                            
                                            
                                             
                                                                
                    
       
    }
    {
                                 
                               
      tmp___2 = quotearg_buffer(val, size, arg, argsize, options);
      qsize = tmp___2;
    }
                       {
      size = qsize + 1UL;
      (slotvec + n)->size = size;
                                                         
         
                            
         
       
      {
        tmp___3 = xmalloc(size);
        val = (char *)tmp___3;
                                 
                                                          
      }
    }
     
                                   
                   
     
    return (val);
  }
}
char *quotearg_n(int n, char const *arg) {
  char *tmp;
  {
    {
      tmp = quotearg_n_options(
          n, arg, (size_t)-1,
          (struct quoting_options const *)(&default_quoting_options));
    }
    return (tmp);
  }
}
char *quotearg(char const *arg) {
  char *tmp;
  {
    { tmp = quotearg_n(0, arg); }
    return (tmp);
  }
}
static struct quoting_options
quoting_options_from_style(enum quoting_style style) {
  struct quoting_options o___0;
                   
  {
    {
      o___0.style = style;
                                                                                
    }
    return (o___0);
  }
}
                                                                      
                               
                             
                
                   
                   
   
     
                                          
                  
                                                      
                                                                             
     
                     
   
 
char *quotearg_char(char const *arg, char ch) {
  struct quoting_options options;
  char *tmp;
                   
  {
    {
                                        
                                        
      tmp = quotearg_n_options(0, arg, (size_t)-1,
                               (struct quoting_options const *)(&options));
    }
    return (tmp);
  }
}
                                       
            
   
                                            
                 
   
 
/* #pragma merger("0","023.quote.o.i","") */
/* #pragma merger("0","024.safe-read.o.i","") */
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
size_t safe_read(int fd, void *buf, size_t count) {
  ssize_t result;
  int *tmp;
  {
                               
                                 
     
    {
      while (1) {
                                     ;
        { result = read(fd, buf, count); }
        if (result < 0L) {
           
                                     
           
                             
                             
           
        } else {
          goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    return ((size_t)result);
  }
}
/* #pragma merger("0","025.safe-write.o.i","") */
extern ssize_t write(int __fd, void const *__buf, size_t __n);
size_t safe_write(int fd, void const *buf, size_t count) {
  ssize_t result;
  int *tmp;
  {
                               
                                 
     
    {
      while (1) {
                                     ;
        { result = write(fd, buf, count); }
                          
           
                                     
           
                             
                             
           
               {
          goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    return ((size_t)result);
  }
}
/* #pragma merger("0","026.save-cwd.o.i","") */
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fchdir)(int __fd);
char *xgetcwd(void);
static int have_working_fchdir = 1;
int save_cwd(struct saved_cwd *cwd) {
   
                   
                                    
                              
       
                                     
       
                          
                   
       
     
                               
       
                              
       
                                                                   
                   
       
     
    return (0);
   
}
                                              
          
              
   
                              
       
                                     
       
                       
            
                                                   
                           
     
   
 
/* #pragma merger("0","027.savedir.o.i","") */
                                
            
                    
                   
                   
              
                 
            
               
                    
                    
                 
                
               
               
              
               
              
              
   
     
                              
                       
                          
     
                                                            
                                   
     
     
                               
                               
                                   
                   
     
     
                 
                                      
                               
                                                                 
                           
         
                                           
                                              
                      
                
                                                
                        
                  
                        
           
                            
         
                                                   
           
                                    
                                       
           
                                         
             
                           
             
           
                                               
             
                         
                                                  
                                                  
                   
                                 
                   
                 
                                 
                                                        
                                       
                 
               
                                             
             
             
                                                                
                                           
             
           
           
                                                                 
                                                                      
                               
           
         
       
                                 
     
     
                                          
                                   
                            
                               
     
                       
       
                                     
                              
       
     
                          
       
                                 
                                     
                              
       
                                   
     
                        
   
 
/* #pragma merger("0","028.stripslash.o.i","") */
int strip_trailing_slashes(char *path) {
  char *base;
  char *tmp;
  char *base_lim;
  size_t tmp___0;
  int had_slash;
  {
    {
      tmp = base_name((char const *)path);
      base = tmp;
      tmp___0 = base_len((char const *)base);
      base_lim = base + tmp___0;
      had_slash = (int)*base_lim;
      *base_lim = (char)'\000';
    }
    return (had_slash);
  }
}
/* #pragma merger("0","029.xgetcwd.o.i","") */
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           getcwd)(char *__buf, size_t __size);
                     
            
            
               
   
     
                                                   
                
     
               
       
                                     
       
                           
         
                       
         
       
     
                 
   
 
/* #pragma merger("0","02a.xmalloc.o.i","") */
                                           
void *xclone(void const *p, size_t s);
extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);
void (*xalloc_fail_func)(void) = (void (*)(void))0;
                                              
                                                                         
                                                                         
                                                                         
                                                                         
                        
__attribute__((__noreturn__)) void xalloc_die(void);
                       
            
   
                           
       
                              
       
     
     
                                                 
                                             
              
     
   
 
__inline static void *xnmalloc_inline(size_t n, size_t s) {
  void *p;
  int tmp;
  {
                                              
               
            
               
     
                              
       
                     
       
           {
      {                p = malloc(n * s); }
               
         
                       
         
       
    }
    return (p);
  }
}
void *xmalloc(size_t n) {
  void *tmp;
  {
    { tmp = xnmalloc_inline(n, (size_t)1); }
    return (tmp);
  }
}
__inline static void *xnrealloc_inline(void *p, size_t n, size_t s) {
  int tmp;
  {
                                              
               
            
               
     
                              
       
                     
       
           {
                       p = realloc(p, n * s);  
               
         
                       
         
       
    }
    return (p);
  }
}
void *xrealloc(void *p, size_t n) {
  void *tmp;
  {
    { tmp = xnrealloc_inline(p, n, (size_t)1); }
    return (tmp);
  }
}
__inline static void *x2nrealloc_inline(void *p, size_t *pn, size_t s) {
  size_t n;
  void *tmp;
  {
    n = *pn;
             
               
                     
                          
       
            
                                          
         
                       
         
       
               
     
    {
              
      tmp = xrealloc(p, n * s);
    }
    return (tmp);
  }
}
void *x2nrealloc(void *p, size_t *pn, size_t s) {
  void *tmp;
  {
    { tmp = x2nrealloc_inline(p, pn, s); }
    return (tmp);
  }
}
void *x2realloc(void *p, size_t *pn) {
  void *tmp;
  {
    { tmp = x2nrealloc_inline(p, pn, (size_t)1); }
    return (tmp);
  }
}
void *xzalloc(size_t s) {
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memset(tmp, 0, s);
    }
    return (tmp___0);
  }
}
void *xclone(void const *p, size_t s) {
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memcpy((void * /* __restrict  */)tmp,
                       (void const * /* __restrict  */)p, s);
    }
    return (tmp___0);
  }
}
/* #pragma merger("0","02b.xstrdup.o.i","") */
char *xstrdup(char const *string) {
  size_t tmp;
  void *tmp___0;
  {
    {
      tmp = strlen(string);
      tmp___0 = xclone((void const *)string, tmp + 1UL);
    }
    return ((char *)tmp___0);
  }
}
/* #pragma merger("0","02c.xstrtol.o.i","") */
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((
    __leaf__)) __assert_fail)(char const *__assertion, char const *__file,
                              unsigned int __line, char const *__function);
extern
    __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__))
                                      strtol)(char const *__restrict __nptr,
                                              char **__restrict __endptr,
                                              int __base);
/* #pragma merger("0","02d.xstrtoul.o.i","") */
                                                                       
   
                                                                  
                                
                               
     
                                      
                             
   
 
                                                                      
                                                       
                   
                   
              
   
                          
     
                 
                                      
                        
                
                       
                           
         
         
                                       
                                                                      
         
       
                                 
     
                 
   
 
                                                                 
                                                                       
              
           
                    
                   
                
                                 
               
                
               
               
           
               
                        
                
                
   
                          
                           
                                 
         
                        
                                                      
                                                                             
                          
         
       
            
       
                                                              
                                                                               
                                        
       
     
              
              
            
                 
     
          
     
                 
                                      
                                      
                                                                            
                           
         
            
       
                                 
     
                                
                               
     
     
                                   
                   
                                                      
                                                               
     
                                                
                           
                    
           
                                                         
           
                        
                      
                  
                                     
           
                
                                   
         
              
                                 
       
            
                                       
                          
         
                                       
         
                             
                                   
         
                              
       
     
                          
                 
                   
     
                          
       
                    
                     
                                                     
       
                     
                   
                                                        
       
                                                
                    
         
                                            
                          
           
                                           
                         
           
                                           
                         
           
                            
                                 
                                           
                          
           
                            
                                
                                
                       
                     
                            
                                      
         
       
       
                               
                       
         
                               
                           
         
                               
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                        
         
                               
                       
         
                                
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                       
         
                               
                       
         
                            
                               
       
                                            
       
                              
                                   
       
                                             
       
                              
                              
                                   
                              
                               
       
                                                         
       
                              
                                
                                
        
                                                         
       
                              
                               
                               
        
                                                         
       
                              
                                
                                
        
                                                         
       
                              
                               
       
                                                         
       
                              
                                
                                
        
                                                         
       
                              
                                
       
                                          
       
                              
                               
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                     
                   
                                                        
                                        
       
                                                                       
                     
                  
                                                     
       
     
               
                 
   
 
/* #pragma merger("0","02e.xstrtoumax.o.i","") */
extern __attribute__((__nothrow__))
uintmax_t(__attribute__((__leaf__)) strtoumax)(char const *__restrict __nptr,
                                               char **__restrict __endptr,
                                               int __base);
                                                                   
   
                                                                  
                                
                               
     
                                  
                             
   
 
                                                                               
                   
                   
              
   
                          
     
                 
                                      
                        
                
                       
                           
         
         
                                       
                                                                      
         
       
                                 
     
                 
   
 
                                                                   
                                                                     
              
           
                
                   
                
                                 
               
                
               
               
           
               
                        
                
                
   
                          
                           
                                 
         
                        
                                                      
                                                                             
                            
         
       
            
       
                                                              
                                                                               
                                          
       
     
              
              
            
                 
     
          
     
                 
                                      
                                      
                                                                            
                           
         
            
       
                                 
     
                                
                               
     
     
                                   
                   
                                                        
                                                                 
     
                                                
                           
                    
           
                                                         
           
                        
                               
                  
                                     
           
                
                                   
         
              
                                 
       
            
                                       
                          
         
                                       
         
                             
                                   
         
                              
       
     
                          
                 
                   
     
                          
       
                    
                     
                                                     
       
                     
                   
                                                        
       
                                                
                    
         
                                            
                          
           
                                           
                         
           
                                           
                         
           
                            
                                 
                                           
                          
           
                            
                                
                                
                       
                     
                            
                                      
         
       
       
                               
                       
         
                               
                           
         
                               
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                        
         
                               
                       
         
                                
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                       
         
                               
                       
         
                            
                               
       
                                            
       
                              
                                   
       
                                             
       
                              
                              
                                   
                              
                               
       
                                                         
       
                              
                                
                                
        
                                                         
       
                              
                               
                               
        
                                                         
       
                              
                                
                                
        
                                                         
       
                              
                               
       
                                                         
       
                              
                                
                                
        
                                                         
       
                              
                                
       
                                          
       
                              
                               
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                     
                   
                                                        
                                        
       
                                                                       
                     
                  
                                                     
       
     
               
                 
   
 
/* #pragma merger("0","../../lib/addext.o.i","") */
/* #pragma merger("0","../../lib/argmatch.o.i","") */
/* #pragma merger("0","../../lib/backupfile.o.i","") */
/* #pragma merger("0","../../lib/basename.o.i","") */
/* #pragma merger("0","../../lib/dirname.o.i","") */
/* #pragma merger("0","../../lib/exclude.o.i","") */
/* #pragma merger("0","../../lib/exitfail.o.i","") */
/* #pragma merger("0","../../lib/full-write.o.i","") */
/* #pragma merger("0","../../lib/getdate.o.i","") */
/* #pragma merger("0","../../lib/getopt1.o.i","") */
/* #pragma merger("0","../../lib/getopt.o.i","") */
/* #pragma merger("0","../../lib/gettime.o.i","") */
/* #pragma merger("0","../../lib/hash.o.i","") */
/* #pragma merger("0","../../lib/human.o.i","") */
/* #pragma merger("0","../../lib/mktime.o.i","") */
/* #pragma merger("0","../../lib/modechange.o.i","") */
/* #pragma merger("0","../../lib/prepargs.o.i","") */
/* #pragma merger("0","../../lib/quotearg.o.i","") */
/* #pragma merger("0","../../lib/quote.o.i","") */
/* #pragma merger("0","../../lib/safe-read.o.i","") */
/* #pragma merger("0","../../lib/safe-write.o.i","") */
/* #pragma merger("0","../../lib/save-cwd.o.i","") */
/* #pragma merger("0","../../lib/savedir.o.i","") */
/* #pragma merger("0","../../lib/stripslash.o.i","") */
/* #pragma merger("0","../../lib/xgetcwd.o.i","") */
/* #pragma merger("0","../../lib/xmalloc.o.i","") */
/* #pragma merger("0","../../lib/xstrdup.o.i","") */
/* #pragma merger("0","../../lib/xstrtol.o.i","") */
/* #pragma merger("0","../../lib/xstrtoul.o.i","") */
/* #pragma merger("0","../../lib/xstrtoumax.o.i","") */
