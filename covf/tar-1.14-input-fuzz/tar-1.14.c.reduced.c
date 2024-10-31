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
_Bool backup_option;
_Bool checkpoint_option;
char const *use_compress_program_option;
_Bool force_local_option;
char const *info_script_option;
_Bool multi_volume_option;
_Bool read_full_records_option;
char const *rsh_command_option;
tarlong tape_length_option;
_Bool to_stdout_option;
_Bool totals_option;
int verbose_option;
_Bool verify_option;
char const *volno_file_option;
char const *volume_label_option;
int archive;
_Bool dev_null_output;
struct timespec start_timespec;
struct tar_stat_info current_stat_info;
char const **archive_name_array;
int archive_names;
char const **archive_name_cursor;
char const *index_file_name;
enum access_mode access_mode;
FILE *stdlis;
char *save_name;
off_t save_sizeleft;
off_t save_totsize;
_Bool write_archive_to_stdout;
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
_Bool now_verifying;
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
static tarlong prev_written;
static tarlong bytes_written;
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
static int hit_eof;
static int checkpoint;
_Bool time_to_start_writing;
static int volno = 1;
static int global_volno = 1;
static char *real_s_name;
static off_t real_s_totsize;
static off_t real_s_sizeleft;
void clear_read_error_count(void) {




}
void print_total_written(void) {





































































}
off_t current_block_ordinal(void) {
  { return (record_start_block + (current_block - record_start)); }
}
void reset_eof(void) {









}
union block *find_next_block(void) {
  {
    if ((unsigned long)current_block == (unsigned long)record_end) {
      if (hit_eof) {
        return ((union block *)0);
      }
      { flush_archive(); }
      if ((unsigned long)current_block == (unsigned long)record_end) {
        hit_eof = 1;
        return ((union block *)0);
      }
    }
    return (current_block);
  }
}
void set_next_block_after(union block *block) {
  {
    {
      while (1) {
                                     ;
        if (!((unsigned long)block >= (unsigned long)current_block)) {
          goto while_break;
        }
        current_block++;
      }
    while_break: /* CIL Label */;
    }
    if ((unsigned long)current_block > (unsigned long)record_end) {
      {
        abort();
      }
    }
    return;
  }
}
size_t available_space_after(union block *pointer) {
  { return ((size_t)(record_end->buffer - pointer->buffer)); }
}
void xclose(int fd) {
            
  int tmp___0;
                   
  {
    { tmp___0 = close(fd); }
                       
       


       
     
    return;
  }
}
static _Bool check_label_pattern(union block *label) {










































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
    backed_up_flag = 0;
    if (index_file_name) {
      {
        stdlis = fopen((char const * /* __restrict  */)index_file_name,
                       (char const * /* __restrict  */) "w");
      }
      if (!stdlis) {
        {
          open_error(index_file_name);
        }
      }
    } else {
      if (to_stdout_option) {
        stdlis = stderr;
      } else {
        stdlis = stdout;
      }
    }
    if (record_size == 0UL) {
      {
        tmp = gettext("Invalid value for record_size");
        error(0, 0, (char const *)tmp);
        fatal_exit();
      }
    }
    if (archive_names == 0) {
      {
        tmp___0 = gettext("No archive name given");
        error(0, 0, (char const *)tmp___0);
        fatal_exit();
      }
    }
    {
      tar_stat_destroy(&current_stat_info);
      save_name = (char *)0;
      real_s_name = (char *)0;
    }
    if (multi_volume_option) {
      {
        tmp___1 = valloc(record_size + 1024UL);
        record_start = (union block *)tmp___1;
      }
      if (record_start) {
        record_start += 2;
      }
    } else {
      {
        tmp___2 = valloc(record_size);
        record_start = (union block *)tmp___2;
      }
    }
    if (!record_start) {
      {
        tmp___3 = gettext("Cannot allocate memory for blocking factor %d");
        error(0, 0, (char const *)tmp___3, blocking_factor);
        fatal_exit();
      }
    }
    current_block = record_start;
    record_end = record_start + blocking_factor;
    if ((unsigned int)wanted_access == 2U) {
      tmp___33 = 0U;
    } else {
      tmp___33 = (unsigned int)wanted_access;
    }
    access_mode = (enum access_mode)tmp___33;
    if (use_compress_program_option) {
      {
        if ((unsigned int)wanted_access == 0U) {
          goto case_0;
        }
        if ((unsigned int)wanted_access == 1U) {
          goto case_1;
        }
        if ((unsigned int)wanted_access == 2U) {
          goto case_2;
        }
        goto switch_break;
      case_0 : /* CIL Label */
      {
        child_pid = sys_child_open_for_uncompress();
        read_full_records_option = (_Bool)0;
      }
        goto switch_break;
      case_1 : /* CIL Label */
      {
        child_pid = sys_child_open_for_compress();
      }
        goto switch_break;
      case_2 : /* CIL Label */
      {
        abort();
      }
        goto switch_break;
      switch_break: /* CIL Label */;
      }
      if ((unsigned int)wanted_access == 1U) {
        {
          tmp___4 = strcmp(*(archive_name_array + 0), "-");
        }
        if (tmp___4 == 0) {
          stdlis = stderr;
        }
      }
    } else {
      { tmp___22 = strcmp(*(archive_name_array + 0), "-"); }
      if (tmp___22 == 0) {
        read_full_records_option = (_Bool)1;
        if (verify_option) {
          {
            tmp___5 = gettext("Cannot verify stdin/stdout archive");
            error(0, 0, (char const *)tmp___5);
            fatal_exit();
          }
        }
        {
          if ((unsigned int)wanted_access == 0U) {
            goto case_0___0;
          }
          if ((unsigned int)wanted_access == 1U) {
            goto case_1___0;
          }
          if ((unsigned int)wanted_access == 2U) {
            goto case_2___0;
          }
          goto switch_break___0;
        case_0___0: /* CIL Label */
          archive = 0;
          goto switch_break___0;
        case_1___0: /* CIL Label */
          archive = 1;
          stdlis = stderr;
          goto switch_break___0;
        case_2___0: /* CIL Label */
          archive = 0;
          stdlis = stderr;
          write_archive_to_stdout = (_Bool)1;
          goto switch_break___0;
        switch_break___0: /* CIL Label */;
        }
      } else {
        if (verify_option) {
          if (!force_local_option) {
            {
              rmt_path__ = strchr(*(archive_name_array + 0), ':');
            }
            if (rmt_path__) {
              if ((unsigned long)rmt_path__ >
                  (unsigned long)*(archive_name_array + 0)) {
                {
                  tmp___9 = memchr(
                      (void const *)*(archive_name_array + 0), '/',
                      (size_t)(rmt_path__ - (char *)*(archive_name_array + 0)));
                }
                if (tmp___9) {
                  {
                    tmp___8 =
                        open(*(archive_name_array + 0), 66,
                             ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                    archive = tmp___8;
                  }
                } else {
                  {
                    tmp___7 = rmt_open__(*(archive_name_array + 0), 66, 1 << 30,
                                         rsh_command_option);
                    archive = tmp___7;
                  }
                }
              } else {
                {
                  tmp___8 = open(*(archive_name_array + 0), 66,
                                 ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                     ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                  archive = tmp___8;
                }
              }
            } else {
              {
                tmp___8 = open(*(archive_name_array + 0), 66,
                               ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                archive = tmp___8;
              }
            }
          } else {
            {
              tmp___8 = open(*(archive_name_array + 0), 66,
                             ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
              archive = tmp___8;
            }
          }
        } else {
          {
            if ((unsigned int)wanted_access == 0U) {
              goto case_0___1;
            }
            if ((unsigned int)wanted_access == 1U) {
              goto case_1___1;
            }
            if ((unsigned int)wanted_access == 2U) {
              goto case_2___1;
            }
            goto switch_break___1;
          case_0___1: /* CIL Label */
            if (!force_local_option) {
              {
                rmt_path__ = strchr(*(archive_name_array + 0), ':');
              }
              if (rmt_path__) {
                if ((unsigned long)rmt_path__ >
                    (unsigned long)*(archive_name_array + 0)) {
                  {
                    tmp___13 =
                        memchr((void const *)*(archive_name_array + 0), '/',
                               (size_t)(rmt_path__ -
                                        (char *)*(archive_name_array + 0)));
                  }
                  if (tmp___13) {
                    {
                      tmp___12 =
                          open(*(archive_name_array + 0), 0,
                               ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                      archive = tmp___12;
                    }
                  } else {
                    {
                      tmp___11 = rmt_open__(*(archive_name_array + 0), 0,
                                            1 << 30, rsh_command_option);
                      archive = tmp___11;
                    }
                  }
                } else {
                  {
                    tmp___12 =
                        open(*(archive_name_array + 0), 0,
                             ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                    archive = tmp___12;
                  }
                }
              } else {
                {
                  tmp___12 = open(*(archive_name_array + 0), 0,
                                  ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                      ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                  archive = tmp___12;
                }
              }
            } else {
              {
                tmp___12 = open(*(archive_name_array + 0), 0,
                                ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                    ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                archive = tmp___12;
              }
            }
            goto switch_break___1;
          case_1___1: /* CIL Label */
            if (backup_option) {
              {
                maybe_backup_file(*(archive_name_array + 0), 1);
                backed_up_flag = 1;
              }
            }
            if (!force_local_option) {
              {
                rmt_path__ = strchr(*(archive_name_array + 0), ':');
              }
              if (rmt_path__) {
                if ((unsigned long)rmt_path__ >
                    (unsigned long)*(archive_name_array + 0)) {
                  {
                    tmp___17 =
                        memchr((void const *)*(archive_name_array + 0), '/',
                               (size_t)(rmt_path__ -
                                        (char *)*(archive_name_array + 0)));
                  }
                  if (tmp___17) {
                    {
                      tmp___16 = creat(
                          *(archive_name_array + 0),
                          (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
                      archive = tmp___16;
                    }
                  } else {
                    {
                      tmp___15 = rmt_open__(*(archive_name_array + 0), 65,
                                            1 << 30, rsh_command_option);
                      archive = tmp___15;
                    }
                  }
                } else {
                  {
                    tmp___16 = creat(
                        *(archive_name_array + 0),
                        (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
                    archive = tmp___16;
                  }
                }
              } else {
                {
                  tmp___16 =
                      creat(*(archive_name_array + 0),
                            (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                     ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
                  archive = tmp___16;
                }
              }
            } else {
              {
                tmp___16 =
                    creat(*(archive_name_array + 0),
                          (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
                archive = tmp___16;
              }
            }
            goto switch_break___1;
          case_2___1: /* CIL Label */
            if (!force_local_option) {
              {
                rmt_path__ = strchr(*(archive_name_array + 0), ':');
              }
              if (rmt_path__) {
                if ((unsigned long)rmt_path__ >
                    (unsigned long)*(archive_name_array + 0)) {
                  {
                    tmp___21 =
                        memchr((void const *)*(archive_name_array + 0), '/',
                               (size_t)(rmt_path__ -
                                        (char *)*(archive_name_array + 0)));
                  }
                  if (tmp___21) {
                    {
                      tmp___20 =
                          open(*(archive_name_array + 0), 66,
                               ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                      archive = tmp___20;
                    }
                  } else {
                    {
                      tmp___19 = rmt_open__(*(archive_name_array + 0), 66,
                                            1 << 30, rsh_command_option);
                      archive = tmp___19;
                    }
                  }
                } else {
                  {
                    tmp___20 =
                        open(*(archive_name_array + 0), 66,
                             ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                    archive = tmp___20;
                  }
                }
              } else {
                {
                  tmp___20 = open(*(archive_name_array + 0), 66,
                                  ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                      ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                  archive = tmp___20;
                }
              }
            } else {
              {
                tmp___20 = open(*(archive_name_array + 0), 66,
                                ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                    ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
                archive = tmp___20;
              }
            }
            goto switch_break___1;
          switch_break___1: /* CIL Label */;
          }
        }
      }
    }
    if (archive < 0) {
      goto _L;
    } else {
      if (!(archive >= 1 << 30)) {
        {
          tmp___25 = sys_get_archive_stat();
        }
        if (!tmp___25) {
        _L : {
          tmp___23 = __errno_location();
          saved_errno = *tmp___23;
        }
          if (backed_up_flag) {
            {
              undo_last_backup();
            }
          }
          {
            tmp___24 = __errno_location();
            *tmp___24 = saved_errno;
            open_fatal(*(archive_name_array + 0));
          }
        }
      }
    }
    {
      sys_detect_dev_null_output();
      sys_save_archive_dev_ino();
    }
    {
      if ((unsigned int)wanted_access == 2U) {
        goto case_2___2;
      }
      if ((unsigned int)wanted_access == 0U) {
        goto case_0___2;
      }
      if ((unsigned int)wanted_access == 1U) {
        goto case_1___2;
      }
      goto switch_break___2;
    case_2___2: /* CIL Label */
      records_written = (off_t)0;
    case_0___2 : /* CIL Label */
    {
      records_read = (off_t)0;
      record_end = record_start;
      find_next_block();
    }
      if (volume_label_option) {
        {
          tmp___26 = find_next_block();
          label = tmp___26;
        }
        if (!label) {
          {
            tmp___27 = quote(volume_label_option);
            tmp___28 = gettext("Archive not labeled to match %s");
            error(0, 0, (char const *)tmp___28, tmp___27);
            fatal_exit();
          }
        }
        { tmp___32 = check_label_pattern(label); }
        if (!tmp___32) {
          {
            tmp___29 = quote_n(1, volume_label_option);
            tmp___30 = quote_n(0, (char const *)(label->header.name));
            tmp___31 = gettext("Volume %s does not match %s");
            error(0, 0, (char const *)tmp___31, tmp___30, tmp___29);
            fatal_exit();
          }
        }
      }
      goto switch_break___2;
    case_1___2: /* CIL Label */
      records_written = (off_t)0;
      if (volume_label_option) {
        {
          memset((void *)record_start, 0, (size_t)512);
        }
        if (multi_volume_option) {
          {
            sprintf((char * /* __restrict  */)(record_start->header.name),
                    (char const * /* __restrict  */) "%s Volume 1",
                    volume_label_option);
          }
        } else {
          {
            strcpy((char * /* __restrict  */)(record_start->header.name),
                   (char const * /* __restrict  */)volume_label_option);
          }
        }
        {
          assign_string(&current_stat_info.file_name,
                        (char const *)(record_start->header.name));
          current_stat_info.had_trailing_slash =
              strip_trailing_slashes(current_stat_info.file_name);
          record_start->header.typeflag = (char)'V';
          time_to_chars(start_timespec.tv_sec, record_start->header.mtime,
                        sizeof(record_start->header.mtime));
          finish_header(&current_stat_info, record_start, (off_t)-1);
        }
      }
      goto switch_break___2;
    switch_break___2: /* CIL Label */;
    }
    return;
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
    if (checkpoint_option) {
      checkpoint++;
      if (!(checkpoint % 10)) {
        {
          tmp = gettext("Write checkpoint %d");
          error(0, 0, (char const *)tmp, checkpoint);
        }
      }
    }
    if (tape_length_option) {
      if (tape_length_option <= bytes_written) {
        {
          tmp___0 = __errno_location();
          *tmp___0 = 28;
          status = (ssize_t)0;
        }
      } else {
        goto _L___0;
      }
    } else {
    _L___0: /* CIL Label */
      if (dev_null_output) {
        status = (ssize_t)record_size;
      } else {
        {
          tmp___1 = sys_write_archive_buffer();
          status = (ssize_t)tmp___1;
        }
      }
    }
    if ((size_t)status != record_size) {
      if (!multi_volume_option) {
        {
          archive_write_error(status);
        }
      }
    }
    if (status > 0L) {
      records_written++;
      bytes_written += (tarlong)status;
    }
    if ((size_t)status == record_size) {
      if (multi_volume_option) {
        if (save_name) {
          {
            tmp___2 = safer_name_suffix((char const *)save_name, (_Bool)0);
            assign_string(&real_s_name, (char const *)tmp___2);
            real_s_totsize = save_totsize;
            real_s_sizeleft = save_sizeleft;
          }
        } else {
          {
            assign_string(&real_s_name, (char const *)0);
            real_s_totsize = (off_t)0;
            real_s_sizeleft = (off_t)0;
          }
        }
      }
      return;
    }
    if (status < 0L) {
      {
        tmp___3 = __errno_location();
      }
      if (*tmp___3 != 28) {
        {
          tmp___4 = __errno_location();
        }
        if (*tmp___4 != 5) {
          {
            tmp___5 = __errno_location();
          }
          if (*tmp___5 != 6) {
            {
              archive_write_error(status);
            }
          }
        }
      }
    }
    { tmp___6 = new_volume((enum access_mode)1); }
    if (!tmp___6) {
      return;
    }
    if (totals_option) {
      prev_written += bytes_written;
    }
    bytes_written = (tarlong)0;
    if (volume_label_option) {
      if (real_s_name) {
        copy_back = 2;
        record_start -= 2;
      } else {
        goto _L___1;
      }
    } else {
    _L___1: /* CIL Label */
      if (volume_label_option) {
        copy_back = 1;
        record_start--;
      } else {
        if (real_s_name) {
          copy_back = 1;
          record_start--;
        } else {
          copy_back = 0;
        }
      }
    }
    if (volume_label_option) {
      {
        memset((void *)record_start, 0, (size_t)512);
        sprintf((char * /* __restrict  */)(record_start->header.name),
                (char const * /* __restrict  */) "%s Volume %d",
                volume_label_option, volno);
        time_to_chars(start_timespec.tv_sec, record_start->header.mtime,
                      sizeof(record_start->header.mtime));
        record_start->header.typeflag = (char)'V';
        finish_header(&current_stat_info, record_start, (off_t)-1);
      }
    }
    if (real_s_name) {
      if (volume_label_option) {
        record_start++;
      }
      {
        memset((void *)record_start, 0, (size_t)512);
        strcpy((char * /* __restrict  */)(record_start->header.name),
               (char const * /* __restrict  */)real_s_name);
        record_start->header.typeflag = (char)'M';
        off_to_chars(real_s_sizeleft, record_start->header.size,
                     sizeof(record_start->header.size));
        off_to_chars(real_s_totsize - real_s_sizeleft,
                     record_start->oldgnu_header.offset,
                     sizeof(record_start->oldgnu_header.offset));
        tmp___7 = verbose_option;
        verbose_option = 0;
        finish_header(&current_stat_info, record_start, (off_t)-1);
        verbose_option = tmp___7;
      }
      if (volume_label_option) {
        record_start--;
      }
    }
    {
      tmp___8 = sys_write_archive_buffer();
      status = (ssize_t)tmp___8;
    }
    if ((size_t)status != record_size) {
      {
        archive_write_error(status);
      }
    }
    bytes_written += (tarlong)status;
    if (copy_back) {
      {
        record_start += copy_back;
        memcpy((void * /* __restrict  */)current_block,
               (void const * /* __restrict  */)(
                   (record_start + blocking_factor) - copy_back),
               (size_t)(copy_back * 512));
        current_block += copy_back;
      }
      if (real_s_sizeleft >= (off_t)(copy_back * 512)) {
        real_s_sizeleft -= (off_t)(copy_back * 512);
      } else {
        if (((real_s_sizeleft + 512L) - 1L) / 512L <= (off_t)copy_back) {
          {
            assign_string(&real_s_name, (char const *)0);
          }
        } else {
          {
            tmp___9 = safer_name_suffix((char const *)save_name, (_Bool)0);
            assign_string(&real_s_name, (char const *)tmp___9);
            real_s_sizeleft = save_sizeleft;
            real_s_totsize = save_totsize;
          }
        }
      }
      copy_back = 0;
    }
    return;
  }
}
__attribute__((__noreturn__)) void archive_write_error(ssize_t status);
void archive_write_error(ssize_t status) {















}
void archive_read_error(void) {

























}
static void short_read(size_t status) {


































































































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
    if (checkpoint_option) {
      checkpoint++;
      if (!(checkpoint % 10)) {
        {
          tmp = gettext("Read checkpoint %d");
          error(0, 0, (char const *)tmp, checkpoint);
        }
      }
    }
    read_error_count = 0;
    if (write_archive_to_stdout) {
      if (record_start_block != 0L) {
        {
          archive = 1;
          status = sys_write_archive_buffer();
          archive = 0;
        }
        if (status != record_size) {
          {
            archive_write_error((ssize_t)status);
          }
        }
      }
    }
    if (multi_volume_option) {
      if (save_name) {
        {
          tmp___0 = safer_name_suffix((char const *)save_name, (_Bool)0);
          assign_string(&real_s_name, (char const *)tmp___0);
          real_s_sizeleft = save_sizeleft;
          real_s_totsize = save_totsize;
        }
      } else {
        {
          assign_string(&real_s_name, (char const *)0);
          real_s_totsize = (off_t)0;
          real_s_sizeleft = (off_t)0;
        }
      }
    }
  error_loop:
    if (archive >= 1 << 30) {
      {
        tmp___1 =
            rmt_read__(archive - (1 << 30), record_start->buffer, record_size);
        status = tmp___1;
      }
    } else {
      {
        tmp___2 =
            safe_read(archive, (void *)(record_start->buffer), record_size);
        status = tmp___2;
      }
    }
    if (status == record_size) {
      records_read++;
      return;
    }
    if (status == 0UL) {
      goto _L___1;
    } else {
      if (status == 0xffffffffffffffffUL) {
        {
          tmp___24 = __errno_location();
        }
        if (*tmp___24 == 28) {
        _L___1:
          if (multi_volume_option) {
          try_volume : {
            if ((unsigned int)subcommand_option == 1U) {
              goto case_1;
            }
            if ((unsigned int)subcommand_option == 2U) {
              goto case_1;
            }
            if ((unsigned int)subcommand_option == 8U) {
              goto case_1;
            }
            goto switch_default;
          case_1:  /* CIL Label */
                                  
                                   
           {
            tmp___3 = new_volume((enum access_mode)2);
          }
            if (!tmp___3) {
              return;
            }
            goto switch_break;
          switch_default : /* CIL Label */
          {
            tmp___4 = new_volume((enum access_mode)0);
          }
            if (!tmp___4) {
              return;
            }
            goto switch_break;
          switch_break: /* CIL Label */;
          }
            {
              while (1) {
                                             ;
                if (archive >= 1 << 30) {
                  {
                    tmp___5 = rmt_read__(archive - (1 << 30),
                                         record_start->buffer, record_size);
                    status = tmp___5;
                  }
                } else {
                  {
                    tmp___6 = safe_read(archive, (void *)(record_start->buffer),
                                        record_size);
                    status = tmp___6;
                  }
                }
                if (!(status == 0xffffffffffffffffUL)) {
                  goto while_break;
                }
                { archive_read_error(); }
              }
            while_break: /* CIL Label */;
            }
            if (status != record_size) {
              {
                short_read(status);
              }
            }
            cursor = record_start;
            if ((int)cursor->header.typeflag == 86) {
              if (volume_label_option) {
                {
                  tmp___10 = check_label_pattern(cursor);
                }
                if (!tmp___10) {
                  {
                    tmp___7 = quote_n(1, volume_label_option);
                    tmp___8 = quote_n(0, (char const *)(cursor->header.name));
                    tmp___9 = gettext("Volume %s does not match %s");
                    error(0, 0, (char const *)tmp___9, tmp___8, tmp___7);
                    volno--;
                    global_volno--;
                  }
                  goto try_volume;
                }
              }
              if (verbose_option) {
                {
                  tmp___11 = quote((char const *)(cursor->header.name));
                  tmp___12 = gettext("Reading %s\n");
                  fprintf((FILE * /* __restrict  */) stdlis,
                          (char const * /* __restrict  */)tmp___12, tmp___11);
                }
              }
              cursor++;
            } else {
              if (volume_label_option) {
                {
                  tmp___13 = gettext("WARNING: No volume header");
                  error(0, 0, (char const *)tmp___13);
                }
              }
            }
            if (real_s_name) {
              if ((int)cursor->header.typeflag != 77) {
                goto _L;
              } else {
                {
                  tmp___16 = strcmp((char const *)(cursor->header.name),
                                    (char const *)real_s_name);
                }
                if (tmp___16) {
                _L : {
                  tmp___14 = quote((char const *)real_s_name);
                  tmp___15 = gettext("%s is not continued on this volume");
                  error(0, 0, (char const *)tmp___15, tmp___14);
                  volno--;
                  global_volno--;
                }
                  goto try_volume;
                }
              }
              {
                s1 = uintmax_from_header((char const *)(cursor->header.size),
                                         sizeof(cursor->header.size));
                s2 = uintmax_from_header(
                    (char const *)(cursor->oldgnu_header.offset),
                    sizeof(cursor->oldgnu_header.offset));
              }
              if ((uintmax_t)real_s_totsize != s1 + s2) {
                goto _L___3;
              } else {
                if (s1 + s2 < s2) {
                _L___3 : /* CIL Label */
                {
                  tmp___17 = stringify_uintmax_t_backwards(
                      s2,
                      s2buf + ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL +
                                1UL) +
                               1UL));
                  tmp___18 = stringify_uintmax_t_backwards(
                      s1,
                      s1buf + ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL +
                                1UL) +
                               1UL));
                  tmp___19 = stringify_uintmax_t_backwards(
                      (uintmax_t)save_totsize,
                      totsizebuf +
                          ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL +
                            1UL) +
                           1UL));
                  tmp___20 = quote((char const *)(cursor->header.name));
                  tmp___21 = gettext("%s is the wrong size (%s != %s + %s)");
                  error(0, 0, (char const *)tmp___21, tmp___20, tmp___19,
                        tmp___18, tmp___17);
                  volno--;
                  global_volno--;
                }
                  goto try_volume;
                }
              }
              {
                tmp___23 = off_from_header(
                    (char const *)(cursor->oldgnu_header.offset),
                    sizeof(cursor->oldgnu_header.offset));
              }
              if (real_s_totsize - real_s_sizeleft != tmp___23) {
                {
                  tmp___22 = gettext("This volume is out of sequence");
                  error(0, 0, (char const *)tmp___22);
                  volno--;
                  global_volno--;
                }
                goto try_volume;
              }
              cursor++;
            }
            current_block = cursor;
            records_read++;
            return;
          } else {
            goto _L___2;
          }
        } else {
          goto _L___2;
        }
      } else {
      _L___2:
        if (status == 0xffffffffffffffffUL) {
          {
            archive_read_error();
          }
          goto error_loop;
        }
      }
    }
    { short_read(status); }
    return;
  }
}
void flush_archive(void) {
  {
    record_start_block += record_end - record_start;
    current_block = record_start;
    record_end = record_start + blocking_factor;
    if ((unsigned int)access_mode == 0U) {
      if (time_to_start_writing) {
        {
          access_mode = (enum access_mode)1;
          time_to_start_writing = (_Bool)0;
          backspace_output();
        }
      }
    }
    {
      if ((unsigned int)access_mode == 0U) {
        goto case_0;
      }
      if ((unsigned int)access_mode == 1U) {
        goto case_1;
      }
      if ((unsigned int)access_mode == 2U) {
        goto case_2;
      }
      goto switch_break;
    case_0 : /* CIL Label */
    {
      flush_read();
    }
      goto switch_break;
    case_1 : /* CIL Label */
    {
      flush_write();
    }
      goto switch_break;
    case_2 : /* CIL Label */
    {
      abort();
    }
    switch_break: /* CIL Label */;
    }
    return;
  }
}
static void backspace_output(void) {
















































































































}
void close_archive(void) {
  int tmp;
  int tmp___0;
  int tmp___1;
  union block *tmp___2;
  {
    if (time_to_start_writing) {
      {
        flush_archive();
      }
    } else {
      if ((unsigned int)access_mode == 1U) {
        {
          flush_archive();
        }
      }
    }
    { sys_drain_input_pipe(); }
    if (verify_option) {
      {
        verify_volume();
      }
    }
    if (archive >= 1 << 30) {
      {
        tmp = rmt_close__(archive - (1 << 30));
        tmp___1 = tmp;
      }
    } else {
      {
        tmp___0 = close(archive);
        tmp___1 = tmp___0;
      }
    }
    if (tmp___1 != 0) {
      {
        close_warn(*archive_name_cursor);
      }
    }
    {
      sys_wait_for_child(child_pid);
      tar_stat_destroy(&current_stat_info);
    }
    if (save_name) {
      {
        free((void *)save_name);
      }
    }
    if (real_s_name) {
      {
        free((void *)real_s_name);
      }
    }
    if (multi_volume_option) {
      tmp___2 = record_start - 2;
    } else {
      tmp___2 = record_start;
    }
    { free((void *)tmp___2); }
    return;
  }
}
void init_volume_number(void) {




























































}
void closeout_volume_number(void) {
































}
static FILE *read_file;
static int looped;
static _Bool new_volume(enum access_mode mode) {



















































































































































































































































































































































































































































































































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
_Bool atime_preserve_option;
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
static char *diff_buffer;
void diff_init(void) {













}
void report_difference(struct tar_stat_info *st __attribute__((__unused__)),
                       char const *fmt, ...) {





















}
static int process_noop(size_t size __attribute__((__unused__)),
                        char *data __attribute__((__unused__))) {

}
static int process_rawdata(size_t bytes, char *buffer___2) {








































}
static char *dumpdir_cursor;
static int process_dumpdir(size_t bytes, char *buffer___2) {


















}
static void read_and_process(off_t size, int (*processor)(size_t, char *)) {













































}
static int get_stat_data(char const *file_name, struct stat *stat_data) {
























}
void diff_archive(void) {























































































































































































































































































































































































































































































































}
void verify_volume(void) {

















































































































































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
enum archive_format archive_format;
int after_date_option;
gid_t group_option;
_Bool ignore_failed_read_option;
_Bool incremental_option;
_Bool interactive_option;
char const *listed_incremental_option;
struct mode_change *mode_option;
struct timespec newer_mtime_option;
int recursion_option;
_Bool numeric_owner_option;
_Bool one_file_system_option;
uid_t owner_option;
_Bool remove_files_option;
_Bool sparse_option;
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
struct xheader extended_header;
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
    return;
  }
}
static void to_base256(int negative, uintmax_t value, char *where,
                       size_t size) {





















}
static int warned_once;
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
    if ((unsigned int)archive_format == 6U) {
      tmp___8 = 1;
    } else {
      if ((unsigned int)archive_format == 2U) {
        tmp___8 = 1;
      } else {
        tmp___8 = 0;
      }
    }
    base256_allowed = tmp___8;
    if (!negative) {
      if ((size - 1UL) * 3UL < sizeof(uintmax_t) * 8UL) {
        tmp___15 = (1UL << (size - 1UL) * 3UL) - 1UL;
      } else {
        tmp___15 = (uintmax_t)-1;
      }
      if (value <= tmp___15) {
        {
          *(where + (size - 1UL)) = (char)'\000';
          to_octal(value, where, size - 1UL);
        }
      } else {
        goto _L___5;
      }
    } else {
    _L___5: /* CIL Label */
      if (negative) {
        tmp___13 = 0xffffffffffffffffUL - value;
      } else {
        tmp___13 = value;
      }
      if ((size - 1UL) * 8UL < sizeof(uintmax_t) * 8UL) {
        tmp___14 = (1UL << (size - 1UL) * 8UL) - 1UL;
      } else {
        tmp___14 = (uintmax_t)-1;
      }
      if (tmp___13 <= tmp___14) {
        if (base256_allowed) {
          if (negative) {
            tmp___9 = -1;
          } else {
            tmp___9 = 1 << 7;
          }
          {
            *(where + 0) = (char)tmp___9;
            to_base256(negative, value, where + 1, size - 1UL);
          }
        } else {
          goto _L___4;
        }
      } else {
      _L___4: /* CIL Label */
        if (negative) {
          if (valsize * 8UL <= (size - 1UL) * 3UL) {
            if (!warned_once) {
              {
                warned_once = 1;
                tmp = gettext("Generating negative octal headers");
                error(0, 0, (char const *)tmp);
              }
            }
            *(where + (size - 1UL)) = (char)'\000';
            if (valsize * 8UL < sizeof(uintmax_t) * 8UL) {
              tmp___10 = (1UL << valsize * 8UL) - 1UL;
            } else {
              tmp___10 = (uintmax_t)-1;
            }
            { to_octal(value & tmp___10, where, size - 1UL); }
          } else {
            goto _L___3;
          }
        } else {
        _L___3: /* CIL Label */
          if (base256_allowed) {
            if ((size - 1UL) * 8UL < sizeof(uintmax_t) * 8UL) {
              tmp___11 = (1UL << (size - 1UL) * 8UL) - 1UL;
            } else {
              tmp___11 = (uintmax_t)-1;
            }
            maxval = tmp___11;
          } else {
            if ((size - 1UL) * 3UL < sizeof(uintmax_t) * 8UL) {
              tmp___12 = (1UL << (size - 1UL) * 3UL) - 1UL;
            } else {
              tmp___12 = (uintmax_t)-1;
            }
            maxval = tmp___12;
          }
          {
            tmp___0 = stringify_uintmax_t_backwards(
                maxval,
                maxbuf + ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                          1UL));
            maxval_string = (char const *)tmp___0;
          }
          if (base256_allowed) {
            if (maxval + 1UL) {
              m = maxval + 1UL;
            } else {
              m = maxval / 2UL + 1UL;
            }
            {
              tmp___1 = stringify_uintmax_t_backwards(
                  m, (minbuf + 1) +
                         ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                          1UL));
              p = tmp___1;
              p--;
              *p = (char)'-';
              minval_string = (char const *)p;
            }
          } else {
            minval_string = "0";
          }
          if (negative) {
            {
              tmp___2 = stringify_uintmax_t_backwards(
                  -value,
                  (valbuf + 1) +
                      ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                       1UL));
              p___0 = tmp___2;
              p___0--;
              *p___0 = (char)'-';
              value_string = (char const *)p___0;
            }
          } else {
            {
              tmp___3 = stringify_uintmax_t_backwards(
                  value,
                  valbuf +
                      ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                       1UL));
              value_string = (char const *)tmp___3;
            }
          }
          if (substitute) {
            {
              tmp___4 = (*substitute)(&negsub);
              sub = tmp___4 & maxval;
              negsub &= (unsigned int)archive_format == 6U;
            }
            if (negsub) {
              s = -sub;
            } else {
              s = sub;
            }
            {
              tmp___5 = stringify_uintmax_t_backwards(
                  s, (subbuf + 1) +
                         ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                          1UL));
              sub_string = tmp___5;
            }
            if (negsub) {
              sub_string--;
              *sub_string = (char)'-';
            }
            {
              tmp___6 =
                  gettext("value %s out of %s range %s..%s; substituting %s");
              error(0, 0, (char const *)tmp___6, value_string, type,
                    minval_string, maxval_string, sub_string);
              to_chars(negsub, s, valsize, (uintmax_t(*)(int *))0, where, size,
                       type);
            }
          } else {
            {
              tmp___7 = gettext("value %s out of %s range %s..%s");
              error(0, 0, (char const *)tmp___7, value_string, type,
                    minval_string, maxval_string);
              exit_status = 2;
            }
          }
        }
      }
    }
    return;
  }
}
static gid_t gid_nobody;
static uintmax_t gid_substitute(int *negative) {
















}
void gid_to_chars(gid_t v, char *p, size_t s) {
                   
  {
    {
      to_chars(v < 0U, (uintmax_t)v, sizeof(v), &gid_substitute, p, s, "gid_t");
    }
    return;
  }
}
void major_to_chars(int v, char *p, size_t s) {
                   
  {
    {
      to_chars(v < 0, (uintmax_t)v, sizeof(v), (uintmax_t(*)(int *))0, p, s,
               "major_t");
    }
    return;
  }
}
void minor_to_chars(int v, char *p, size_t s) {
                   
  {
    {
      to_chars(v < 0, (uintmax_t)v, sizeof(v), (uintmax_t(*)(int *))0, p, s,
               "minor_t");
    }
    return;
  }
}
void mode_to_chars(mode_t v, char *p, size_t s) {
  int negative;
  uintmax_t u;
  int tmp;
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
                    
  {
    if (256 >> 3 == 32) {
      if (128 >> 3 == 16) {
        if (64 >> 3 == 8) {
          if ((256 >> 3) >> 3 == 4) {
            if ((128 >> 3) >> 3 == 2) {
              if ((64 >> 3) >> 3 == 1) {
                if ((unsigned int)archive_format != 4U) {
                  if ((unsigned int)archive_format != 3U) {
                    if ((unsigned int)archive_format != 6U) {
                      negative = v < 0U;
                      u = (uintmax_t)v;
                    } else {
                      goto _L___10;
                    }
                  } else {
                    goto _L___10;
                  }
                } else {
                  goto _L___10;
                }
              } else {
                goto _L___10;
              }
            } else {
              goto _L___10;
            }
          } else {
            goto _L___10;
          }
        } else {
          goto _L___10;
        }
      } else {
        goto _L___10;
      }
    } else {
    _L___10: /* CIL Label */
      negative = 0;
      if (v & 2048U) {
        tmp = 2048;
      } else {
        tmp = 0;
      }
      if (v & 1024U) {
        tmp___0 = 1024;
      } else {
        tmp___0 = 0;
      }
      if (v & 512U) {
        tmp___1 = 512;
      } else {
        tmp___1 = 0;
      }
      if (v & 256U) {
        tmp___2 = 256;
      } else {
        tmp___2 = 0;
      }
      if (v & 128U) {
        tmp___3 = 128;
      } else {
        tmp___3 = 0;
      }
      if (v & 64U) {
        tmp___4 = 64;
      } else {
        tmp___4 = 0;
      }
      if (v & (unsigned int)(256 >> 3)) {
        tmp___5 = 32;
      } else {
        tmp___5 = 0;
      }
      if (v & (unsigned int)(128 >> 3)) {
        tmp___6 = 16;
      } else {
        tmp___6 = 0;
      }
      if (v & (unsigned int)(64 >> 3)) {
        tmp___7 = 8;
      } else {
        tmp___7 = 0;
      }
      if (v & (unsigned int)((256 >> 3) >> 3)) {
        tmp___8 = 4;
      } else {
        tmp___8 = 0;
      }
      if (v & (unsigned int)((128 >> 3) >> 3)) {
        tmp___9 = 2;
      } else {
        tmp___9 = 0;
      }
      if (v & (unsigned int)((64 >> 3) >> 3)) {
        tmp___10 = 1;
      } else {
        tmp___10 = 0;
      }
      u = (uintmax_t)(
          ((((((((((tmp | tmp___0) | tmp___1) | tmp___2) | tmp___3) | tmp___4) |
               tmp___5) |
              tmp___6) |
             tmp___7) |
            tmp___8) |
           tmp___9) |
          tmp___10);
    }
    {
      to_chars(negative, u, sizeof(v), (uintmax_t(*)(int *))0, p, s, "mode_t");
    }
    return;
  }
}
void off_to_chars(off_t v, char *p, size_t s) {
                   
  {
    {
      to_chars(v < 0L, (uintmax_t)v, sizeof(v), (uintmax_t(*)(int *))0, p, s,
               "off_t");
    }
    return;
  }
}
void size_to_chars(size_t v, char *p, size_t s) {





}
void time_to_chars(time_t v, char *p, size_t s) {
                   
  {
    {
      to_chars(v < 0L, (uintmax_t)v, sizeof(v), (uintmax_t(*)(int *))0, p, s,
               "time_t");
    }
    return;
  }
}
static uid_t uid_nobody;
static uintmax_t uid_substitute(int *negative) {
















}
void uid_to_chars(uid_t v, char *p, size_t s) {
                   
  {
    {
      to_chars(v < 0U, (uintmax_t)v, sizeof(v), &uid_substitute, p, s, "uid_t");
    }
    return;
  }
}
void uintmax_to_chars(uintmax_t v, char *p, size_t s) {
                   
  {
    { to_chars(0, v, sizeof(v), (uintmax_t(*)(int *))0, p, s, "uintmax_t"); }
    return;
  }
}
void string_to_chars(char *str, char *p, size_t s) {
  {
    {
      strncpy((char * /* __restrict  */)p, (char const * /* __restrict  */)str,
              s);
      *(p + (s - 1UL)) = (char)0;
    }
    return;
  }
}
_Bool file_dumpable_p(struct tar_stat_info *st) {
  int tmp;
  {
    if (dev_null_output) {
      tmp = 0;
    } else {
      if (st->archive_file_size == 0L) {
        if ((st->stat.st_mode &
             (unsigned int)((256 | (256 >> 3)) | ((256 >> 3) >> 3))) ==
            (unsigned int)((256 | (256 >> 3)) | ((256 >> 3) >> 3))) {
          tmp = 0;
        } else {
          tmp = 1;
        }
      } else {
        tmp = 1;
      }
    }
    return ((_Bool)tmp);
  }
}
void write_eot(void) {
  union block *pointer;
  union block *tmp;
  size_t tmp___0;
  {
    {
      tmp = find_next_block();
      pointer = tmp;
      memset((void *)(pointer->buffer), 0, (size_t)512);
      set_next_block_after(pointer);
      pointer = find_next_block();
      tmp___0 = available_space_after(pointer);
      memset((void *)(pointer->buffer), 0, tmp___0);
      set_next_block_after(pointer);
    }
    return;
  }
}
static void tar_copy_str(char *dst, char const *src, size_t len) {
  {
    {
      *(dst + (len - 1UL)) = (char)0;
      strncpy((char * /* __restrict  */)dst,
              (char const * /* __restrict  */)src, len);
    }
    return;
  }
}
union block *start_private_header(char const *name, size_t size) {


































}
static union block *write_short_name(struct tar_stat_info *st) {
  union block *header;
  union block *tmp;
  {
    {
      tmp = find_next_block();
      header = tmp;
      memset((void *)(header->buffer), 0, sizeof(union block));
      tar_copy_str(header->header.name, (char const *)st->file_name,
                   (size_t)100);
    }
    return (header);
  }
}
static void write_gnu_long_link(struct tar_stat_info *st, char const *p,
                                char type) {












































}
static size_t split_long_name(char const *name, size_t length) {





















}
static union block *write_ustar_long_name(char const *name) {


























































}
static void write_long_link(struct tar_stat_info *st) {






















































}
static union block *write_long_name(struct tar_stat_info *st) {




































































}
static union block *write_extended(struct tar_stat_info *st,
                                   union block *old_header) {
  union block *header;
  union block hp;
  char *p;
                   
                   
                   
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                  
                    
                    
                    
                    
                  
                    
                    
                    
                    
                    
                    
                  
                    
                    
                    
                    
                    
                    
                    
                    
                    
                  
                    
                    
  {
    if (extended_header.buffer) {
      return (old_header);
    } else {
      if ((unsigned long)extended_header.stk == (unsigned long)((void *)0)) {
        return (old_header);
      }
    }
    {
      xheader_finish(&extended_header);
      memcpy((void * /* __restrict  */)(hp.buffer),
             (void const * /* __restrict  */)old_header, sizeof(hp));
      p = xheader_xhdr_name(st);
      xheader_write((char)'x', p, &extended_header);
      free((void *)p);
      header = find_next_block();
      memcpy((void * /* __restrict  */)header,
             (void const * /* __restrict  */)(&hp.buffer), sizeof(hp.buffer));
    }
    return (header);
  }
}
static union block *write_header_name(struct tar_stat_info *st) {
  union block *tmp;
  union block *tmp___0;
  union block *tmp___1;
  size_t tmp___2;
  _Bool tmp___3;
                   
  {
    if ((unsigned int)archive_format == 4U) {
      {
        tmp___3 = string_ascii_p((char const *)st->file_name);
      }
      if (tmp___3) {
        goto _L;
      } else {
        {
          xheader_store("path", (struct tar_stat_info const *)st, (void *)0);
          tmp = write_short_name(st);
        }
        return (tmp);
      }
    } else {
    _L : { tmp___2 = strlen((char const *)st->file_name); }
      if (100UL < tmp___2) {
        {
          tmp___0 = write_long_name(st);
        }
        return (tmp___0);
      } else {
        { tmp___1 = write_short_name(st); }
        return (tmp___1);
      }
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
    if (!header) {
      return ((union block *)((void *)0));
    }
    if (owner_option != 4294967295U) {
      st->stat.st_uid = owner_option;
    }
    if (group_option != 4294967295U) {
      st->stat.st_gid = group_option;
    }
    if (mode_option) {
      {
        tmp = mode_adjust(st->stat.st_mode,
                          (struct mode_change const *)mode_option);
        st->stat.st_mode =
            (st->stat.st_mode &
             (unsigned int)(~(3584 |
                              (((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                               (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                ((256 | (256 >> 3)) | ((256 >> 3) >> 3))))))) |
            tmp;
      }
    }
    if ((unsigned int)archive_format == 1U) {
      {
        mode_to_chars(
            st->stat.st_mode &
                (unsigned int)(3584 |
                               (((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                                (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3))))),
            header->header.mode, sizeof(header->header.mode));
      }
    } else {
      if ((unsigned int)archive_format == 3U) {
        {
          mode_to_chars(
              st->stat.st_mode &
                  (unsigned int)(3584 |
                                 (((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                                  (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3))))),
              header->header.mode, sizeof(header->header.mode));
        }
      } else {
        {
          mode_to_chars(st->stat.st_mode, header->header.mode,
                        sizeof(header->header.mode));
        }
      }
    }
    if (st->stat.st_uid > 2097151U) {
      if ((unsigned int)archive_format == 4U) {
        {
          xheader_store("uid", (struct tar_stat_info const *)st, (void *)0);
        }
      } else {
        {
          uid_to_chars(st->stat.st_uid, header->header.uid,
                       sizeof(header->header.uid));
        }
      }
    } else {
      {
        uid_to_chars(st->stat.st_uid, header->header.uid,
                     sizeof(header->header.uid));
      }
    }
    if (st->stat.st_gid > 2097151U) {
      if ((unsigned int)archive_format == 4U) {
        {
          xheader_store("gid", (struct tar_stat_info const *)st, (void *)0);
        }
      } else {
        {
          gid_to_chars(st->stat.st_gid, header->header.gid,
                       sizeof(header->header.gid));
        }
      }
    } else {
      {
        gid_to_chars(st->stat.st_gid, header->header.gid,
                     sizeof(header->header.gid));
      }
    }
    if (st->stat.st_size > 2147483647L) {
      if ((unsigned int)archive_format == 4U) {
        {
          xheader_store("size", (struct tar_stat_info const *)st, (void *)0);
        }
      } else {
        {
          off_to_chars(st->stat.st_size, header->header.size,
                       sizeof(header->header.size));
        }
      }
    } else {
      {
        off_to_chars(st->stat.st_size, header->header.size,
                     sizeof(header->header.size));
      }
    }
    {
      time_to_chars(st->stat.st_mtim.tv_sec, header->header.mtime,
                    sizeof(header->header.mtime));
    }
    if ((st->stat.st_mode & 61440U) == 8192U) {
      goto _L___3;
    } else {
      if ((st->stat.st_mode & 61440U) == 24576U) {
      _L___3 : /* CIL Label */
      {
        st->devmajor = gnu_dev_major((unsigned long long)st->stat.st_rdev);
        st->devminor = gnu_dev_minor((unsigned long long)st->stat.st_rdev);
      }
        if (st->devmajor > 2097151U) {
          if ((unsigned int)archive_format == 4U) {
            {
              xheader_store("devmajor", (struct tar_stat_info const *)st,
                            (void *)0);
            }
          } else {
            {
              major_to_chars((int)st->devmajor, header->header.devmajor,
                             sizeof(header->header.devmajor));
            }
          }
        } else {
          {
            major_to_chars((int)st->devmajor, header->header.devmajor,
                           sizeof(header->header.devmajor));
          }
        }
        if (st->devminor > 2097151U) {
          if ((unsigned int)archive_format == 4U) {
            {
              xheader_store("devminor", (struct tar_stat_info const *)st,
                            (void *)0);
            }
          } else {
            {
              major_to_chars((int)st->devminor, header->header.devminor,
                             sizeof(header->header.devminor));
            }
          }
        } else {
          {
            major_to_chars((int)st->devminor, header->header.devminor,
                           sizeof(header->header.devminor));
          }
        }
      } else {
        {
          major_to_chars(0, header->header.devmajor,
                         sizeof(header->header.devmajor));
          minor_to_chars(0, header->header.devminor,
                         sizeof(header->header.devminor));
        }
      }
    }
    if ((unsigned int)archive_format == 4U) {
      {
        xheader_store("atime", (struct tar_stat_info const *)st, (void *)0);
        xheader_store("ctime", (struct tar_stat_info const *)st, (void *)0);
      }
    } else {
      if (incremental_option) {
        if ((unsigned int)archive_format == 2U) {
          {
            time_to_chars(st->stat.st_atim.tv_sec, header->oldgnu_header.atime,
                          sizeof(header->oldgnu_header.atime));
            time_to_chars(st->stat.st_ctim.tv_sec, header->oldgnu_header.ctime,
                          sizeof(header->oldgnu_header.ctime));
          }
        } else {
          if ((unsigned int)archive_format == 6U) {
            {
              time_to_chars(st->stat.st_atim.tv_sec,
                            header->oldgnu_header.atime,
                            sizeof(header->oldgnu_header.atime));
              time_to_chars(st->stat.st_ctim.tv_sec,
                            header->oldgnu_header.ctime,
                            sizeof(header->oldgnu_header.ctime));
            }
          }
        }
      }
    }
    if ((unsigned int)archive_format == 1U) {
      tmp___4 = '\000';
    } else {
      tmp___4 = '0';
    }
    header->header.typeflag = (char)tmp___4;
    {
      if ((unsigned int)archive_format == 1U) {
        goto case_1;
      }
      if ((unsigned int)archive_format == 2U) {
        goto case_2;
      }
      if ((unsigned int)archive_format == 6U) {
        goto case_2;
      }
      if ((unsigned int)archive_format == 4U) {
        goto case_4;
      }
      if ((unsigned int)archive_format == 3U) {
        goto case_4;
      }
      goto switch_default;
    case_1: /* CIL Label */
      goto switch_break;
    case_2:  /* CIL Label */
                            
     {
      strcpy((char * /* __restrict  */)(header->header.magic),
             (char const * /* __restrict  */) "ustar  ");
    }
      goto switch_break;
    case_4:  /* CIL Label */
                            
     {
      strncpy((char * /* __restrict  */)(header->header.magic),
              (char const * /* __restrict  */) "ustar", (size_t)6);
      strncpy((char * /* __restrict  */)(header->header.version),
              (char const * /* __restrict  */) "00", (size_t)2);
    }
      goto switch_break;
    switch_default : /* CIL Label */
    {
      abort();
    }
    switch_break: /* CIL Label */;
    }
    if (!((unsigned int)archive_format == 1U)) {
      if (!numeric_owner_option) {
        {
          uid_to_uname(st->stat.st_uid, &st->uname);
          gid_to_gname(st->stat.st_gid, &st->gname);
        }
        if ((unsigned int)archive_format == 4U) {
          {
            tmp___0 = strlen((char const *)st->uname);
          }
          if (tmp___0 > 32UL) {
            {
              xheader_store("uname", (struct tar_stat_info const *)st,
                            (void *)0);
            }
          } else {
            { tmp___1 = string_ascii_p((char const *)st->uname); }
            if (tmp___1) {
              {
                string_to_chars(st->uname, header->header.uname,
                                sizeof(header->header.uname));
              }
            } else {
              {
                xheader_store("uname", (struct tar_stat_info const *)st,
                              (void *)0);
              }
            }
          }
        } else {
          {
            string_to_chars(st->uname, header->header.uname,
                            sizeof(header->header.uname));
          }
        }
        if ((unsigned int)archive_format == 4U) {
          {
            tmp___2 = strlen((char const *)st->gname);
          }
          if (tmp___2 > 32UL) {
            {
              xheader_store("gname", (struct tar_stat_info const *)st,
                            (void *)0);
            }
          } else {
            { tmp___3 = string_ascii_p((char const *)st->gname); }
            if (tmp___3) {
              {
                string_to_chars(st->gname, header->header.gname,
                                sizeof(header->header.gname));
              }
            } else {
              {
                xheader_store("gname", (struct tar_stat_info const *)st,
                              (void *)0);
              }
            }
          }
        } else {
          {
            string_to_chars(st->gname, header->header.gname,
                            sizeof(header->header.gname));
          }
        }
      }
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
      memcpy((void * /* __restrict  */)(header->header.chksum),
             (void const * /* __restrict  */) "        ",
             sizeof(header->header.chksum));
      sum = 0;
      p = header->buffer;
      i = sizeof(*header);
    }
    {
      while (1) {
                                     ;
        tmp___0 = i;
        i--;
        if (!(tmp___0 != 0UL)) {
          goto while_break;
        }
        tmp = p;
        p++;
        sum += 255 & (int)*tmp;
      }
    while_break: /* CIL Label */;
    }
    {
      uintmax_to_chars((uintmax_t)sum, header->header.chksum, (size_t)7);
      set_next_block_after(header);
    }
    return;
  }
}
void finish_header(struct tar_stat_info *st, union block *header,
                   off_t block_ordinal) {
  {
    if (verbose_option) {
      if ((int)header->header.typeflag != 75) {
        if ((int)header->header.typeflag != 76) {
          if ((int)header->header.typeflag != 120) {
            if ((int)header->header.typeflag != 103) {
              {
                current_header = header;
                current_format = archive_format;
                print_header(st, block_ordinal);
              }
            }
          }
        }
      }
    }
    {
      header = write_extended(st, header);
      simple_finish_header(header);
    }
    return;
  }
}
void pad_archive(off_t size_left) {




















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
    if (!blk) {
      return ((enum dump_status)2);
    }
                                             
     
    { finish_header(st, blk, block_ordinal); }
    {
      while (1) {
                                     ;
        if (!(size_left > 0L)) {
          goto while_break;
        }
        if (multi_volume_option) {
          {
            assign_string(&save_name, (char const *)st->file_name);
            save_sizeleft = size_left;
            save_totsize = st->stat.st_size;
          }
        }
        {
          blk = find_next_block();
          bufsize = available_space_after(blk);
        }
        if ((size_t)size_left < bufsize) {
          bufsize = (size_t)size_left;
          count = bufsize % 512UL;
          if (count) {
            {
              memset((void *)(blk->buffer + size_left), 0, 512UL - count);
            }
          }
        }
        if (fd < 0) {
          count = bufsize;
        } else {
          {
            tmp = safe_read(fd, (void *)(blk->buffer), bufsize);
            count = tmp;
          }
        }
        if (count == 0xffffffffffffffffUL) {
          {
            read_diag_details((char const *)st->orig_file_name,
                              st->stat.st_size - size_left, bufsize);
            pad_archive(size_left);
          }
          return ((enum dump_status)1);
        }
        {
          size_left = (off_t)((size_t)size_left - count);
          set_next_block_after(blk + (bufsize - 1UL) / 512UL);
        }
        if (count != bufsize) {
          {
            memset((void *)(blk->buffer + count), 0, bufsize - count);
            tmp___0 = stringify_uintmax_t_backwards(
                (uintmax_t)size_left,
                buf + ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                       1UL));
            tmp___1 = quotearg_colon((char const *)st->orig_file_name);
            tmp___2 =
                ngettext("%s: File shrank by %s byte; padding with zeros",
                         "%s: File shrank by %s bytes; padding with zeros",
                         (unsigned long)size_left);
            error(0, 0, (char const *)tmp___2, tmp___1, tmp___0);
          }
          if (!ignore_failed_read_option) {
            exit_status = 2;
          }
          { pad_archive(size_left); }
          return ((enum dump_status)1);
        }
      }
    while_break: /* CIL Label */;
    }
    return ((enum dump_status)0);
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
                    
                    
  {
    if (fd >= 0) {
      {
        tmp___1 = fstat(fd, &final_stat);
      }
      if (tmp___1 != 0) {
        {
          stat_diag((char const *)st->orig_file_name);
        }
      } else {
        if (final_stat.st_ctim.tv_sec != original_ctime) {
          {
            tmp = quotearg_colon((char const *)st->orig_file_name);
            tmp___0 = gettext("%s: file changed as we read it");
            error(0, 0, (char const *)tmp___0, tmp);
          }
        }
      }
      { tmp___2 = close(fd); }
      if (tmp___2 != 0) {
        {
          close_diag((char const *)st->orig_file_name);
        }
      }
    }
    if (remove_files_option) {
      {
        tmp___3 = unlink((char const *)st->orig_file_name);
      }
      if (tmp___3 == -1) {
        {
          unlink_error((char const *)st->orig_file_name);
        }
      }
    }
    return;
  }
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
    {
      our_device = st->stat.st_dev;
      tmp___1 = is_avoided_name((char const *)st->orig_file_name);
    }
    if (!tmp___1) {
      {
        blk = (union block *)((void *)0);
        tmp = current_block_ordinal();
        block_ordinal = tmp;
        st->stat.st_size = (__off_t)0;
        blk = start_header(st);
      }
      if (!blk) {
        return;
      }
      if (incremental_option) {
        blk->header.typeflag = (char)'D';
      } else {
        blk->header.typeflag = (char)'5';
      }
      if (!incremental_option) {
        {
          finish_header(st, blk, block_ordinal);
        }
      } else {
        if (gnu_list_name->dir_contents) {
          {
            block_ordinal = current_block_ordinal();
            buffer___2 = gnu_list_name->dir_contents;
            totsize = (off_t)0;
          }
          if (buffer___2) {
            p_buffer = buffer___2;
            {
              while (1) {
                                             ;
                if (!*p_buffer) {
                  goto while_break;
                }
                {
                  tmp___0 = strlen(p_buffer);
                  size = tmp___0 + 1UL;
                  totsize = (off_t)((size_t)totsize + size);
                  p_buffer += size;
                }
              }
            while_break: /* CIL Label */;
            }
          }
          {
            totsize++;
            off_to_chars(totsize, blk->header.size, sizeof(blk->header.size));
            finish_header(st, blk, block_ordinal);
            p_buffer = buffer___2;
            size_left = totsize;
          }
          {
            while (1) {
                                               ;
              if (!(size_left > 0L)) {
                goto while_break___0;
              }
              if (multi_volume_option) {
                {
                  assign_string(&save_name, (char const *)st->orig_file_name);
                  save_sizeleft = size_left;
                  save_totsize = totsize;
                }
              }
              {
                blk = find_next_block();
                bufsize = available_space_after(blk);
              }
              if ((size_t)size_left < bufsize) {
                bufsize = (size_t)size_left;
                count = (ssize_t)(bufsize % 512UL);
                if (count) {
                  {
                    memset((void *)(blk->buffer + size_left), 0,
                           (size_t)(512L - count));
                  }
                }
              }
              {
                memcpy((void * /* __restrict  */)(blk->buffer),
                       (void const * /* __restrict  */)p_buffer, bufsize);
                size_left = (off_t)((size_t)size_left - bufsize);
                p_buffer += bufsize;
                set_next_block_after(blk + (bufsize - 1UL) / 512UL);
              }
            }
          while_break___0: /* CIL Label */;
          }
          if (multi_volume_option) {
            {
              assign_string(&save_name, (char const *)0);
            }
          }
          return;
        }
      }
    }
    if (!recursion_option) {
      return;
    }
    if (one_file_system_option) {
      if (!top_level) {
        if (parent_device != st->stat.st_dev) {
          if (verbose_option) {
            {
              tmp___2 = quotearg_colon((char const *)st->orig_file_name);
              tmp___3 =
                  gettext("%s: file is on a different filesystem; not dumped");
              error(0, 0, (char const *)tmp___3, tmp___2);
            }
          }
          return;
        }
      }
    }
    {
      tmp___4 = strdup((char const *)st->orig_file_name);
      name_buf = tmp___4;
      tmp___5 = strlen((char const *)name_buf);
      name_size = tmp___5;
      name_len = name_size;
      entry = (char const *)directory;
    }
    {
      while (1) {
                                         ;
        { entry_len = strlen(entry); }
        if (!(entry_len != 0UL)) {
          goto while_break___1;
        }
        if (name_size < name_len + entry_len) {
          {
            name_size = name_len + entry_len;
            tmp___6 = xrealloc((void *)name_buf, name_size + 1UL);
            name_buf = (char *)tmp___6;
          }
        }
        {
          strcpy((char * /* __restrict  */)(name_buf + name_len),
                 (char const * /* __restrict  */)entry);
          tmp___7 = excluded_name((char const *)name_buf);
        }
        if (!tmp___7) {
          {
            dump_file(name_buf, 0, our_device);
          }
        }
        entry += entry_len + 1UL;
      }
    while_break___1: /* CIL Label */;
    }
    { free((void *)name_buf); }
    return;
  }
}
static void ensure_slash(char **pstr) {
  size_t len;
  size_t tmp;
  void *tmp___0;
  size_t tmp___1;
  {
    {
      tmp = strlen((char const *)*pstr);
      len = tmp;
    }
    {
      while (1) {
                                     ;
        if (len >= 1UL) {
          if (!((int)*(*pstr + (len - 1UL)) == 47)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        len--;
      }
    while_break: /* CIL Label */;
    }
    if (!((int)*(*pstr + len) == 47)) {
      {
        tmp___0 = xrealloc((void *)*pstr, len + 2UL);
        *pstr = (char *)tmp___0;
      }
    }
    tmp___1 = len;
    len++;
    *(*pstr + tmp___1) = (char)'/';
    *(*pstr + len) = (char)'\000';
    return;
  }
}
static _Bool dump_dir(struct tar_stat_info *st, int top_level,
                      dev_t parent_device) {
  char *directory;
  {
    { directory = savedir((char const *)st->orig_file_name); }
    if (!directory) {
      {
        savedir_diag((char const *)st->orig_file_name);
      }
      return ((_Bool)0);
    }
    {
      ensure_slash(&st->orig_file_name);
      ensure_slash(&st->file_name);
      dump_dir0(directory, st, top_level, parent_device);
      free((void *)directory);
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
      xheader_write_global();
    }
    if (incremental_option) {
      {
        buffer_size = (size_t)1000;
        tmp = xmalloc(buffer_size);
        buffer___2 = (char *)tmp;
        collect_and_sort_names();
      }
      {
        while (1) {
                                       ;
          { p = name_from_list(); }
          if (!((unsigned long)p != (unsigned long)((void *)0))) {
            goto while_break;
          }
          { tmp___0 = excluded_name((char const *)p); }
          if (!tmp___0) {
            {
              dump_file(p, -1, (dev_t)0);
            }
          }
        }
      while_break: /* CIL Label */;
      }
      { blank_name_list(); }
      {
        while (1) {
                                           ;
          { p = name_from_list(); }
          if (!((unsigned long)p != (unsigned long)((void *)0))) {
            goto while_break___0;
          }
          { tmp___6 = excluded_name((char const *)p); }
          if (!tmp___6) {
            {
              tmp___1 = strlen((char const *)p);
              plen = tmp___1;
            }
            if (buffer_size <= plen) {
              {
                while (1) {
                while_continue___1: /* CIL Label */;
                  buffer_size *= 2UL;
                  if (!(buffer_size <= plen)) {
                    goto while_break___1;
                  }
                  goto while_continue___1;
                }
              while_break___1: /* CIL Label */;
              }
              {
                tmp___2 = xrealloc((void *)buffer___2, buffer_size);
                buffer___2 = (char *)tmp___2;
              }
            }
            {
              memcpy((void * /* __restrict  */)buffer___2,
                     (void const * /* __restrict  */)p, plen);
            }
            if (!((int)*(buffer___2 + (plen - 1UL)) == 47)) {
              tmp___3 = plen;
              plen++;
              *(buffer___2 + tmp___3) = (char)'/';
            }
            q = gnu_list_name->dir_contents;
            if (q) {
              {
                while (1) {
                                                   ;
                  if (!*q) {
                    goto while_break___2;
                  }
                  {
                    tmp___4 = strlen(q);
                    qlen = tmp___4;
                  }
                  if ((int const) * q == 89) {
                    if (buffer_size < plen + qlen) {
                      {
                        while (1) {
                        while_continue___3: /* CIL Label */;
                          buffer_size *= 2UL;
                          if (!(buffer_size < plen + qlen)) {
                            goto while_break___3;
                          }
                          goto while_continue___3;
                        }
                      while_break___3: /* CIL Label */;
                      }
                      {
                        tmp___5 = xrealloc((void *)buffer___2, buffer_size);
                        buffer___2 = (char *)tmp___5;
                      }
                    }
                    {
                      strcpy((char * /* __restrict  */)(buffer___2 + plen),
                             (char const * /* __restrict  */)(q + 1));
                      dump_file(buffer___2, -1, (dev_t)0);
                    }
                  }
                  q += qlen + 1UL;
                }
              while_break___2: /* CIL Label */;
              }
            }
          }
        }
      while_break___0: /* CIL Label */;
      }
      { free((void *)buffer___2); }
    } else {
      {
        while (1) {
                                           ;
          { p = name_next(1); }
          if (!((unsigned long)p != (unsigned long)((void *)0))) {
            goto while_break___4;
          }
          { tmp___7 = excluded_name((char const *)p); }
          if (!tmp___7) {
            {
              dump_file(p, 1, (dev_t)0);
            }
          }
        }
      while_break___4: /* CIL Label */;
      }
    }
    {
      write_eot();
      close_archive();
    }
    if (listed_incremental_option) {
      {
        write_directory_file();
      }
    }
    return;
  }
}
static unsigned int hash_link(void const *entry, unsigned int n_buckets) {







}
static _Bool compare_links(void const *entry1, void const *entry2) {








}
static void unknown_file_error(char *p) {














}
static Hash_table *link_table;
static _Bool dump_hard_link(struct tar_stat_info *st) {
  struct link lp;
  struct link *duplicate;
  off_t block_ordinal;
  union block *blk;
  char const *link_name;
  char *tmp;
  size_t tmp___0;
  int tmp___1;
  void *tmp___2;
                    
  {
    if (link_table) {
      if (st->stat.st_nlink > 1UL) {
        {
          lp.ino = st->stat.st_ino;
          lp.dev = st->stat.st_dev;
          tmp___2 =
              hash_lookup((Hash_table const *)link_table, (void const *)(&lp));
          duplicate = (struct link *)tmp___2;
        }
        if (duplicate) {
          {
            tmp = safer_name_suffix((char const *)(duplicate->name), (_Bool)1);
            link_name = (char const *)tmp;
            (duplicate->nlink)--;
            block_ordinal = current_block_ordinal();
            assign_string(&st->link_name, link_name);
            tmp___0 = strlen(link_name);
          }
          if (100UL < tmp___0) {
            {
              write_long_link(st);
            }
          }
          {
            st->stat.st_size = (__off_t)0;
            blk = start_header(st);
          }
          if (!blk) {
            return ((_Bool)1);
          }
          {
            tar_copy_str(blk->header.linkname, link_name, (size_t)100);
            blk->header.typeflag = (char)'1';
            finish_header(st, blk, block_ordinal);
          }
          if (remove_files_option) {
            {
              tmp___1 = unlink((char const *)st->orig_file_name);
            }
            if (tmp___1 != 0) {
              {
                unlink_error((char const *)st->orig_file_name);
              }
            }
          }
          return ((_Bool)1);
        }
      }
    }
    return ((_Bool)0);
  }
}
static void file_count_links(struct tar_stat_info *st) {
  struct link *duplicate;
  struct link *lp;
  size_t tmp;
  void *tmp___0;
  void *tmp___1;
  {
    if (st->stat.st_nlink > 1UL) {
      {
        tmp = strlen((char const *)st->orig_file_name);
        tmp___0 =
            xmalloc(((unsigned long)(&((struct link *)0)->name) + tmp) + 1UL);
        lp = (struct link *)tmp___0;
        lp->ino = st->stat.st_ino;
        lp->dev = st->stat.st_dev;
        lp->nlink = st->stat.st_nlink;
        strcpy((char * /* __restrict  */)(lp->name),
               (char const * /* __restrict  */)st->orig_file_name);
      }
      if (link_table) {
        goto _L;
      } else {
        {
          link_table =
              hash_initialize((size_t)0, (Hash_tuning const *)0,
                              (size_t(*)(void const *, size_t))(&hash_link),
                              &compare_links, (void (*)(void *))0);
        }
        if (link_table) {
        _L : {
          tmp___1 = hash_insert(link_table, (void const *)lp);
          duplicate = (struct link *)tmp___1;
        }
          if (!duplicate) {
            {
              xalloc_die();
            }
          }
        } else {
          { xalloc_die(); }
        }
      }
      if ((unsigned long)duplicate != (unsigned long)lp) {
        {
          abort();
        }
      }
      (lp->nlink)--;
    }
    return;
  }
}
void check_links(void) {



































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
    block_ordinal = (off_t)-1;
    if (interactive_option) {
      {
        tmp = confirm("add", (char const *)p);
      }
      if (!tmp) {
        return;
      }
    }
    {
      assign_string(&st->orig_file_name, (char const *)p);
      tmp___0 = safer_name_suffix((char const *)p, (_Bool)0);
      assign_string(&st->file_name, (char const *)tmp___0);
      tmp___1 = deref_stat(dereference_option, (char const *)p, &st->stat);
    }
    if (tmp___1 != 0) {
      {
        stat_diag((char const *)p);
      }
      return;
    }
    {
      st->archive_file_size = st->stat.st_size;
      sys_stat_nanoseconds(st);
      original_ctime = st->stat.st_ctim.tv_sec;
      restore_times.actime = st->stat.st_atim.tv_sec;
      restore_times.modtime = st->stat.st_mtim.tv_sec;
    }
    if (!((st->stat.st_mode & 61440U) == 16384U)) {
      if (st->stat.st_mtim.tv_sec < newer_mtime_option.tv_sec) {
        goto _L___5;
      } else {
        if (st->stat.st_mtim.tv_sec == newer_mtime_option.tv_sec) {
          if (st->stat.st_mtim.tv_nsec < newer_mtime_option.tv_nsec) {
          _L___5: /* CIL Label */
            if (!after_date_option) {
              goto _L___4;
            } else {
              if (st->stat.st_ctim.tv_sec < newer_mtime_option.tv_sec) {
                goto _L___4;
              } else {
                if (st->stat.st_ctim.tv_sec == newer_mtime_option.tv_sec) {
                  if (st->stat.st_ctim.tv_nsec < newer_mtime_option.tv_nsec) {
                  _L___4: /* CIL Label */
                    if (0 < top_level) {
                      {
                        tmp___2 = quotearg_colon((char const *)p);
                        tmp___3 = gettext("%s: file is unchanged; not dumped");
                        error(0, 0, (char const *)tmp___3, tmp___2);
                      }
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    { tmp___6 = sys_file_is_archive(st); }
    if (tmp___6) {
      {
        tmp___4 = quotearg_colon((char const *)p);
        tmp___5 = gettext("%s: file is the archive; not dumped");
        error(0, 0, (char const *)tmp___5, tmp___4);
      }
      return;
    }
    if ((st->stat.st_mode & 61440U) == 16384U) {
      {
        dump_dir(st, top_level, parent_device);
      }
      if (atime_preserve_option) {
        {
          utime((char const *)p, (struct utimbuf const *)(&restore_times));
        }
      }
      return;
    } else {
      { tmp___20 = is_avoided_name((char const *)p); }
      if (tmp___20) {
        return;
      } else {
        { tmp___7 = dump_hard_link(st); }
        if (tmp___7) {
          return;
        }
        if ((st->stat.st_mode & 61440U) == 32768U) {
          goto _L___6;
        } else {
          if (0) {
          _L___6 : /* CIL Label */
          {
            tmp___11 = file_dumpable_p(st);
          }
            if (tmp___11) {
              {
                fd = open((char const *)st->orig_file_name, 0);
              }
              if (fd < 0) {
                if (!top_level) {
                  {
                    tmp___10 = __errno_location();
                  }
                  if (*tmp___10 == 2) {
                    {
                      tmp___8 =
                          quotearg_colon((char const *)st->orig_file_name);
                      tmp___9 = gettext("%s: File removed before we read it");
                      error(0, 0, (char const *)tmp___9, tmp___8);
                    }
                  } else {
                    { open_diag((char const *)st->orig_file_name); }
                  }
                } else {
                  { open_diag((char const *)st->orig_file_name); }
                }
                return;
              }
            } else {
              fd = -1;
            }
            if (sparse_option) {
              {
                tmp___12 = sparse_file_p(st);
              }
              if (tmp___12) {
                {
                  status = sparse_dump_file(fd, st);
                }
                if ((unsigned int)status == 3U) {
                  {
                    status = dump_regular_file(fd, st);
                  }
                }
              } else {
                { status = dump_regular_file(fd, st); }
              }
            } else {
              { status = dump_regular_file(fd, st); }
            }
            {
              if ((unsigned int)status == 0U) {
                goto case_0;
              }
              if ((unsigned int)status == 1U) {
                goto case_1;
              }
              if ((unsigned int)status == 2U) {
                goto case_2;
              }
              if ((unsigned int)status == 3U) {
                goto case_3;
              }
              goto switch_break;
            case_0: /* CIL Label */
              if (multi_volume_option) {
                {
                  assign_string(&save_name, (char const *)0);
                }
              }
              { dump_regular_finish(fd, st, original_ctime); }
              goto switch_break;
            case_1: /* CIL Label */
              if (multi_volume_option) {
                {
                  assign_string(&save_name, (char const *)0);
                }
              }
              { close(fd); }
              goto switch_break;
            case_2 : /* CIL Label */
            {
              close(fd);
            }
              return;
            case_3 : /* CIL Label */
            {
              abort();
            }
            switch_break: /* CIL Label */;
            }
            if (atime_preserve_option) {
              {
                utime((char const *)st->orig_file_name,
                      (struct utimbuf const *)(&restore_times));
              }
            }
            { file_count_links(st); }
            return;
          } else {
            if ((st->stat.st_mode & 61440U) == 40960U) {
              linklen = (size_t)st->stat.st_size;
              if (linklen != (size_t)st->stat.st_size) {
                {
                  xalloc_die();
                }
              } else {
                if (linklen + 1UL == 0UL) {
                  {
                    xalloc_die();
                  }
                }
              }
              {
                tmp___13 = __builtin_alloca(linklen + 1UL);
                buffer___2 = (char *)tmp___13;
                tmp___14 = readlink((char const * /* __restrict  */)p,
                                    (char * /* __restrict  */)buffer___2,
                                    linklen + 1UL);
                size = (int)tmp___14;
              }
              if (size < 0) {
                {
                  readlink_diag((char const *)p);
                }
                return;
              }
              {
                *(buffer___2 + size) = (char)'\000';
                assign_string(&st->link_name, (char const *)buffer___2);
              }
              if (size > 100) {
                {
                  write_long_link(st);
                }
              }
              {
                block_ordinal = current_block_ordinal();
                st->stat.st_size = (__off_t)0;
                header = start_header(st);
              }
              if (!header) {
                return;
              }
              {
                tar_copy_str(header->header.linkname, (char const *)buffer___2,
                             (size_t)100);
                header->header.typeflag = (char)'2';
                finish_header(st, header, block_ordinal);
              }
              if (remove_files_option) {
                {
                  tmp___15 = unlink((char const *)p);
                }
                if (tmp___15 == -1) {
                  {
                    unlink_error((char const *)p);
                  }
                }
              }
              { file_count_links(st); }
              return;
            } else {
              if ((st->stat.st_mode & 61440U) == 8192U) {
                type = (char)'3';
              } else {
                if ((st->stat.st_mode & 61440U) == 24576U) {
                  type = (char)'4';
                } else {
                  if ((st->stat.st_mode & 61440U) == 4096U) {
                    type = (char)'6';
                  } else {
                    if ((st->stat.st_mode & 61440U) == 49152U) {
                      {
                        tmp___16 = quotearg_colon((char const *)p);
                        tmp___17 = gettext("%s: socket ignored");
                        error(0, 0, (char const *)tmp___17, tmp___16);
                      }
                      return;
                    } else {
                      { unknown_file_error(p); }
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if ((unsigned int)archive_format == 1U) {
      {
        unknown_file_error(p);
      }
      return;
    }
    {
      block_ordinal = current_block_ordinal();
      st->stat.st_size = (__off_t)0;
      header = start_header(st);
    }
    if (!header) {
      return;
    }
    header->header.typeflag = type;
    if ((int)type != 54) {
      {
        tmp___21 = gnu_dev_major((unsigned long long)st->stat.st_rdev);
        major_to_chars((int)tmp___21, header->header.devmajor,
                       sizeof(header->header.devmajor));
        tmp___22 = gnu_dev_minor((unsigned long long)st->stat.st_rdev);
        minor_to_chars((int)tmp___22, header->header.devminor,
                       sizeof(header->header.devminor));
      }
    }
    { finish_header(st, header, block_ordinal); }
    if (remove_files_option) {
      {
        tmp___23 = unlink((char const *)p);
      }
      if (tmp___23 == -1) {
        {
          unlink_error((char const *)p);
        }
      }
    }
    return;
  }
}
void dump_file(char *p, int top_level, dev_t parent_device) {
  struct tar_stat_info st;
                   
  {
    {
      tar_stat_init(&st);
      dump_file0(&st, p, top_level, parent_device);
      tar_stat_destroy(&st);
    }
    return;
  }
}
/* #pragma merger("0","003.delete.o.i","") */
_Bool ignore_zeros_option;
uintmax_t occurrence_option;
void delete_archive_members(void);
size_t recent_long_name_blocks;
size_t recent_long_link_blocks;
void truncate_warn(char const *name);
void name_gather(void);
void names_notfound(void);
struct name *name_scan(char const *path);
void xheader_decode(struct tar_stat_info *st);
int sys_truncate(int fd);
static union block *new_record;
static int new_blocks;
static _Bool acting_as_filter;
union block *recent_long_name;
union block *recent_long_link;
static off_t records_skipped;
static void move_archive(off_t count) {



































































































































}
static void write_record(int move_back_flag) {



























}
static void write_recent_blocks(union block *h, size_t blocks) {
























}
static void write_recent_bytes(char *data, size_t bytes) {
























}
void delete_archive_members(void) {








































































































































































































































































































































































}
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
_Bool touch_option;
_Bool we_are_root;
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
static struct delayed_symlink *delayed_symlink_head;
void extr_init(void) {
  __uid_t tmp;
  {
    {
      tmp = geteuid();
      we_are_root = (_Bool)(tmp == 0U);
      same_permissions_option += (int)we_are_root;
      same_owner_option += (int)we_are_root;
      xalloc_fail_func = &extract_finish;
      newdir_umask = umask((__mode_t)0);
    }
    if (0 < same_permissions_option) {
      current_umask = (mode_t)0;
    } else {
      {
        umask(newdir_umask);
        current_umask = newdir_umask;
      }
    }
    return;
  }
}
static void set_mode(char const *file_name, struct stat const *stat_info,
                     struct stat const *cur_info, mode_t invert_permissions,
                     enum permstatus permstatus, char typeflag) {
  mode_t mode;
  struct stat st;
  int tmp;
  int tmp___0;
                    
  {
    if (0 < same_permissions_option) {
      if ((unsigned int)permstatus != 2U) {
        mode = (mode_t)stat_info->st_mode;
        if ((unsigned int)permstatus == 1U) {
          if (!(mode & (unsigned int)(~(
                           ((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                           (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                            ((256 | (256 >> 3)) | ((256 >> 3) >> 3))))))) {
            if ((int)typeflag != 53) {
              if ((int)typeflag != 68) {
                return;
              }
            }
          }
        }
      } else {
        goto _L___3;
      }
    } else {
    _L___3: /* CIL Label */
      if (!invert_permissions) {
        return;
      } else {
        if (!cur_info) {
          {
            tmp = stat((char const * /* __restrict  */)file_name,
                       (struct stat * /* __restrict  */)(&st));
          }
          if (tmp != 0) {
            {
              stat_error(file_name);
            }
            return;
          }
          cur_info = (struct stat const *)(&st);
        }
        mode = (mode_t)(cur_info->st_mode ^
                        (unsigned int const)invert_permissions);
      }
    }
    { tmp___0 = chmod(file_name, mode); }
    if (tmp___0 != 0) {
      {
        chmod_error_details(file_name, mode);
      }
    }
    return;
  }
}
static void check_time(char const *file_name, time_t t) {
  time_t now;
  char const *tmp;
  char *tmp___0;
  char const *tmp___1;
  char *tmp___2;
                   
                   
  {
    if (t <= 0L) {
      {
        tmp = tartime(t);
        tmp___0 = gettext("%s: implausibly old time stamp %s");
        error(0, 0, (char const *)tmp___0, file_name, tmp);
      }
    } else {
      if (start_timespec.tv_sec < t) {
        {
          now = time((time_t *)0);
        }
        if (now < t) {
          {
            tmp___1 = tartime(t);
            tmp___2 = gettext("%s: time stamp %s is %lu s in the future");
            error(0, 0, (char const *)tmp___2, file_name, tmp___1,
                  (unsigned long)(t - now));
          }
        }
      }
    }
    return;
  }
}
static void set_stat(char const *file_name, struct stat const *stat_info,
                     struct stat const *cur_info, mode_t invert_permissions,
                     enum permstatus permstatus, char typeflag) {
  struct utimbuf utimbuf;
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    if ((int)typeflag != 50) {
      if (!touch_option) {
        if ((unsigned int)permstatus != 2U) {
          if (incremental_option) {
            utimbuf.actime = (__time_t)stat_info->st_atim.tv_sec;
          } else {
            utimbuf.actime = start_timespec.tv_sec;
          }
          {
            utimbuf.modtime = (__time_t)stat_info->st_mtim.tv_sec;
            tmp = utime(file_name, (struct utimbuf const *)(&utimbuf));
          }
          if (tmp < 0) {
            {
              utime_error(file_name);
            }
          } else {
            {
              check_time(file_name, utimbuf.actime);
              check_time(file_name, utimbuf.modtime);
            }
          }
        }
      }
      {
        set_mode(file_name, stat_info, cur_info, invert_permissions, permstatus,
                 typeflag);
      }
    }
    if (0 < same_owner_option) {
      if ((unsigned int)permstatus != 2U) {
        if ((int)typeflag == 50) {
          {
            tmp___0 = lchown(file_name, (__uid_t)stat_info->st_uid,
                             (__gid_t)stat_info->st_gid);
          }
          if (tmp___0 < 0) {
            {
              chown_error_details(file_name, (uid_t)stat_info->st_uid,
                                  (gid_t)stat_info->st_gid);
            }
          }
        } else {
          {
            tmp___1 = chown(file_name, (__uid_t)stat_info->st_uid,
                            (__gid_t)stat_info->st_gid);
          }
          if (tmp___1 < 0) {
            {
              chown_error_details(file_name, (uid_t)stat_info->st_uid,
                                  (gid_t)stat_info->st_gid);
            }
          }
          if (stat_info->st_mode & 3584U) {
            {
              set_mode(file_name, stat_info, (struct stat const *)0,
                       invert_permissions, permstatus, typeflag);
            }
          }
        }
      }
    }
    return;
  }
}
static void delay_set_stat(char const *file_name, struct stat const *stat_info,
                           mode_t invert_permissions,
                           enum permstatus permstatus) {
  size_t file_name_len;
  size_t tmp;
  struct delayed_set_stat *data;
  void *tmp___0;
  {
    {
      tmp = strlen(file_name);
      file_name_len = tmp;
      tmp___0 =
          xmalloc(((unsigned long)(&((struct delayed_set_stat *)0)->file_name) +
                   file_name_len) +
                  1UL);
      data = (struct delayed_set_stat *)tmp___0;
      data->file_name_len = file_name_len;
      strcpy((char * /* __restrict  */)(data->file_name),
             (char const * /* __restrict  */)file_name);
      data->invert_permissions = invert_permissions;
      data->permstatus = permstatus;
      data->after_symlinks = (_Bool)0;
      data->stat_info = (struct stat) * stat_info;
      data->next = delayed_set_stat_head;
      delayed_set_stat_head = data;
    }
    return;
  }
}
static void repair_delayed_set_stat(char const *dir,
                                    struct stat const *dir_stat_info) {

















































}
static int make_directories(char *file_name) {
  char *cursor0;
  char *cursor;
  int did_something;
  int mode;
  int invert_permissions;
  int status;
  int *tmp;
  int tmp___0;
  int *tmp___1;
  {
    cursor0 = file_name + 0;
    did_something = 0;
    cursor = cursor0;
    {
      while (1) {
                                     ;
        if (!*cursor) {
          goto while_break;
        }
        if (!((int)*cursor == 47)) {
          goto __Cont;
        }
        if ((unsigned long)cursor == (unsigned long)cursor0) {
          goto __Cont;
        } else {
          if ((int)*(cursor + -1) == 47) {
            goto __Cont;
          }
        }
        if ((int)*(cursor + -1) == 46) {
          if ((unsigned long)cursor == (unsigned long)(cursor0 + 1)) {
            goto __Cont;
          } else {
            if ((int)*(cursor + -2) == 47) {
              goto __Cont;
            } else {
              if ((int)*(cursor + -2) == 46) {
                if ((unsigned long)cursor == (unsigned long)(cursor0 + 2)) {
                  goto __Cont;
                } else {
                  if ((int)*(cursor + -3) == 47) {
                    goto __Cont;
                  }
                }
              }
            }
          }
        }
        *cursor = (char)'\000';
        mode =
            (int)((unsigned int)(((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                                 (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                  ((256 | (256 >> 3)) | ((256 >> 3) >> 3)))) &
                  ~newdir_umask);
        if (we_are_root) {
          invert_permissions = 0;
        } else {
          invert_permissions = 192 & ~mode;
        }
        {
          status = mkdir((char const *)file_name,
                         (__mode_t)(mode ^ invert_permissions));
        }
        if (status == 0) {
          {
            delay_set_stat((char const *)file_name,
                           (struct stat const *)(&current_stat_info.stat),
                           (mode_t)invert_permissions, (enum permstatus)2);
            print_for_mkdir(file_name, (int)(cursor - file_name), (mode_t)mode);
            did_something = 1;
            *cursor = (char)'/';
          }
          goto __Cont;
        }
        {
          *cursor = (char)'/';
          tmp___1 = __errno_location();
        }
        if (*tmp___1 == 17) {
          goto __Cont;
        } else {
          { tmp = __errno_location(); }
          if (*tmp == 38) {
            goto _L___3;
          } else {
            if (0) {
            _L___3 : /* CIL Label */
            {
              tmp___0 = access((char const *)file_name, 2);
            }
              if (tmp___0 == 0) {
                goto __Cont;
              }
            }
          }
        }
        goto while_break;
      __Cont:
        cursor++;
      }
    while_break: /* CIL Label */;
    }
    return (did_something);
  }
}
static _Bool file_newer_p(char const *file_name,
                          struct tar_stat_info *tar_stat) {





















}
static int prepare_to_extract(char const *file_name) {
  int tmp;
  int *tmp___0;
  int *tmp___1;
  char *tmp___2;
  _Bool tmp___3;
                   
  {
    if (to_stdout_option) {
      return (0);
    }
    {
      if ((unsigned int)old_files_option == 3U) {
        goto case_3;
      }
      if ((unsigned int)old_files_option == 5U) {
        goto case_5;
      }
      goto switch_default;
    case_3 : /* CIL Label */
    {
      tmp = remove_any_file(file_name,
                            (enum remove_option)recursive_unlink_option);
    }
      if (!tmp) {
        {
          tmp___0 = __errno_location();
        }
        if (*tmp___0) {
          {
            tmp___1 = __errno_location();
          }
          if (*tmp___1 != 2) {
            {
              unlink_error(file_name);
            }
            return (0);
          }
        }
      }
      goto switch_break;
    case_5 : /* CIL Label */
    {
      tmp___3 = file_newer_p(file_name, &current_stat_info);
    }
      if (tmp___3) {
        {
          tmp___2 = gettext("Current `%s\' is newer");
          error(0, 0, (char const *)tmp___2, file_name);
        }
        return (0);
      }
      goto switch_break;
    switch_default: /* CIL Label */
      goto switch_break;
    switch_break: /* CIL Label */;
    }
    return (1);
  }
}
static int maybe_recoverable(char *file_name, int *interdir_made) {
  int e;
  int *tmp;
  int *tmp___0;
  int *tmp___1;
  _Bool tmp___2;
  int r;
  int tmp___3;
  int *tmp___4;
  int *tmp___5;
  int tmp___6;
  {
    {
      tmp = __errno_location();
      e = *tmp;
    }
    if (*interdir_made) {
      return (0);
    }
    { tmp___0 = __errno_location(); }
    {
      if (*tmp___0 == 17) {
        goto case_17;
      }
      if (*tmp___0 == 2) {
        goto case_2___0;
      }
      goto switch_default;
    case_17 : /* CIL Label */
    {
      if ((unsigned int)old_files_option == 4U) {
        goto case_4;
      }
      if ((unsigned int)old_files_option == 5U) {
        goto case_5;
      }
      if ((unsigned int)old_files_option == 0U) {
        goto case_0;
      }
      if ((unsigned int)old_files_option == 1U) {
        goto case_0;
      }
      if ((unsigned int)old_files_option == 2U) {
        goto case_0;
      }
      if ((unsigned int)old_files_option == 3U) {
        goto case_3;
      }
      goto switch_break___0;
    case_4: /* CIL Label */
      return (0);
    case_5 : /* CIL Label */
    {
      tmp___2 = file_newer_p((char const *)file_name, &current_stat_info);
    }
      if (tmp___2) {
        {
          tmp___1 = __errno_location();
          *tmp___1 = e;
        }
        return (0);
      }
    case_0:  /* CIL Label */
                            
                             
     {
      tmp___3 = remove_any_file((char const *)file_name, (enum remove_option)0);
      r = tmp___3;
      tmp___4 = __errno_location();
      *tmp___4 = 17;
    }
      return (r);
    case_3: /* CIL Label */
      goto switch_break___0;
    switch_break___0: /* CIL Label */;
    }
    case_2___0 : /* CIL Label */
    {
      tmp___6 = make_directories(file_name);
    }
      if (!tmp___6) {
        {
          tmp___5 = __errno_location();
          *tmp___5 = 2;
        }
        return (0);
      }
      *interdir_made = 1;
      return (1);
    switch_default: /* CIL Label */
      return (0);
                                 ;
    }
  }
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
                    
                    
                    
  {
    {
      tmp = strlen(file_name);
      file_name_len = tmp;
      check_for_renamed_directories = (_Bool)0;
    }
    {
      while (1) {
                                     ;
        if (!delayed_set_stat_head) {
          goto while_break;
        }
        data = delayed_set_stat_head;
        skip_this_one = (_Bool)0;
        cur_info = (struct stat const *)0;
        check_for_renamed_directories = (_Bool)(
            (int)check_for_renamed_directories | (int)data->after_symlinks);
        if ((int)after_symlinks < (int)data->after_symlinks) {
          goto while_break;
        } else {
          if (data->file_name_len < file_name_len) {
            if (*(file_name + data->file_name_len)) {
              if ((int const) * (file_name + data->file_name_len) == 47) {
                goto _L___3;
              } else {
                if ((int const) * (file_name + (data->file_name_len - 1UL)) ==
                    47) {
                _L___3 : /* CIL Label */
                {
                  tmp___0 = memcmp((void const *)file_name,
                                   (void const *)(data->file_name),
                                   data->file_name_len);
                }
                  if (tmp___0 == 0) {
                    goto while_break;
                  }
                }
              }
            }
          }
        }
        if (check_for_renamed_directories) {
          {
            cur_info = (struct stat const *)(&st);
            tmp___3 = stat((char const * /* __restrict  */)(data->file_name),
                           (struct stat * /* __restrict  */)(&st));
          }
          if (tmp___3 != 0) {
            {
              stat_error((char const *)(data->file_name));
              skip_this_one = (_Bool)1;
            }
          } else {
            if (st.st_dev == data->stat_info.st_dev) {
              if (!(st.st_ino == data->stat_info.st_ino)) {
                {
                  tmp___1 = quotearg_colon((char const *)(data->file_name));
                  tmp___2 = gettext("%s: Directory renamed before its status "
                                    "could be extracted");
                  error(0, 0, (char const *)tmp___2, tmp___1);
                  exit_status = 2;
                  skip_this_one = (_Bool)1;
                }
              }
            } else {
              {
                tmp___1 = quotearg_colon((char const *)(data->file_name));
                tmp___2 = gettext("%s: Directory renamed before its status "
                                  "could be extracted");
                error(0, 0, (char const *)tmp___2, tmp___1);
                exit_status = 2;
                skip_this_one = (_Bool)1;
              }
            }
          }
        }
        if (!skip_this_one) {
          {
            set_stat((char const *)(data->file_name),
                     (struct stat const *)(&data->stat_info), cur_info,
                     data->invert_permissions, data->permstatus, (char)'5');
          }
        }
        {
          delayed_set_stat_head = data->next;
          free((void *)data);
        }
      }
    while_break: /* CIL Label */;
    }
    return;
  }
}
static int conttype_diagnosed;
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
      interdir_made = 0;
      set_next_block_after(current_header);
      decode_header(current_header, &current_stat_info, &current_format, 1);
    }
    if (interactive_option) {
      {
        tmp = confirm("extract", (char const *)current_stat_info.file_name);
      }
      if (!tmp) {
        {
          skip_member();
        }
        return;
      }
    }
    if (verbose_option) {
      {
        print_header(&current_stat_info, (off_t)-1);
      }
    }
    {
      file_name = safer_name_suffix((char const *)current_stat_info.file_name,
                                    (_Bool)0);
    }
    if (strip_path_elements) {
      {
        tmp___0 =
            stripped_prefix_len((char const *)file_name, strip_path_elements);
        prefix_len = tmp___0;
      }
      if (prefix_len == 0xffffffffffffffffUL) {
        {
          skip_member();
        }
        return;
      }
      file_name += prefix_len;
    }
    { apply_nonancestor_delayed_set_stat((char const *)file_name, (_Bool)0); }
    if (backup_option) {
      if (!to_stdout_option) {
        {
          tmp___4 = maybe_backup_file((char const *)file_name, 0);
        }
        if (!tmp___4) {
          {
            tmp___1 = __errno_location();
            e = *tmp___1;
            tmp___2 = quotearg_colon((char const *)file_name);
            tmp___3 = gettext("%s: Was unable to backup this file");
            error(0, e, (char const *)tmp___3, tmp___2);
            exit_status = 2;
            skip_member();
          }
          return;
        }
      }
    }
    { tmp___5 = sparse_member_p(&current_stat_info); }
    if (tmp___5) {
      tmp___50 = 'S';
    } else {
      tmp___50 = (int)current_header->header.typeflag;
    }
    typeflag = (char)tmp___50;
    {
      if ((int)typeflag == 83) {
        goto case_83;
      }
      if ((int)typeflag == 0) {
        goto case_83;
      }
      if ((int)typeflag == 48) {
        goto case_83;
      }
      if ((int)typeflag == 55) {
        goto case_83;
      }
      if ((int)typeflag == 50) {
        goto case_50;
      }
      if ((int)typeflag == 49) {
        goto case_49;
      }
      if ((int)typeflag == 51) {
        goto case_51;
      }
      if ((int)typeflag == 52) {
        goto case_52;
      }
      if ((int)typeflag == 54) {
        goto case_54;
      }
      if ((int)typeflag == 53) {
        goto really_dir;
      }
      if ((int)typeflag == 68) {
        goto really_dir;
      }
      if ((int)typeflag == 86) {
        goto case_86;
      }
      if ((int)typeflag == 78) {
        goto case_78;
      }
      if ((int)typeflag == 77) {
        goto case_77;
      }
      if ((int)typeflag == 76) {
        goto case_76;
      }
      if ((int)typeflag == 75) {
        goto case_76;
      }
      goto switch_default;
    case_83: /* CIL Label */
                            
                             
                             
       if (current_stat_info.had_trailing_slash) {
        goto really_dir;
      }
    again_file:
      if ((unsigned int)old_files_option == 2U) {
        tmp___51 = 512;
      } else {
        tmp___51 = 128;
      }
      openflag = 65 | tmp___51;
      mode = (current_stat_info.stat.st_mode &
              (unsigned int)(((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                             (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                              ((256 | (256 >> 3)) | ((256 >> 3) >> 3))))) &
             ~current_umask;
      if (to_stdout_option) {
        fd = 1;
        goto extract_file;
      }
      { tmp___6 = prepare_to_extract((char const *)file_name); }
      if (!tmp___6) {
        {
          skip_member();
        }
        if (backup_option) {
          {
            undo_last_backup();
          }
        }
        goto switch_break;
      }
      if ((int)typeflag == 55) {
        if (!conttype_diagnosed) {
          {
            conttype_diagnosed = 1;
            tmp___7 = gettext("Extracting contiguous files as regular files");
            error(0, 0, (char const *)tmp___7);
          }
        }
      }
      { fd = open((char const *)file_name, openflag, mode); }
      if (fd < 0) {
        {
          tmp___8 = maybe_recoverable(file_name, &interdir_made);
        }
        if (tmp___8) {
          goto again_file;
        }
        {
          open_error((char const *)file_name);
          skip_member();
        }
        if (backup_option) {
          {
            undo_last_backup();
          }
        }
        goto switch_break;
      }
    extract_file:
      if (current_stat_info.is_sparse) {
        {
          sparse_extract_file(fd, &current_stat_info, &size);
        }
      } else {
        size = current_stat_info.stat.st_size;
        {
          while (1) {
                                         ;
            if (!(size > 0L)) {
              goto while_break;
            }
            if (multi_volume_option) {
              {
                assign_string(&save_name,
                              (char const *)current_stat_info.file_name);
                save_totsize = current_stat_info.stat.st_size;
                save_sizeleft = size;
              }
            }
            { data_block = find_next_block(); }
            if (!data_block) {
              {
                tmp___9 = gettext("Unexpected EOF in archive");
                error(0, 0, (char const *)tmp___9);
                exit_status = 2;
              }
              goto while_break;
            }
            { written = available_space_after(data_block); }
            if (written > (size_t)size) {
              written = (size_t)size;
            }
            {
              tmp___10 = __errno_location();
              *tmp___10 = 0;
              count =
                  full_write(fd, (void const *)(data_block->buffer), written);
              size = (off_t)((size_t)size - count);
              set_next_block_after(
                  (union block *)((data_block->buffer + written) - 1));
            }
            if (count != written) {
              {
                write_error_details((char const *)file_name, count, written);
              }
              goto while_break;
            }
          }
        while_break: /* CIL Label */;
        }
      }
      { skip_file(size); }
      if (multi_volume_option) {
        {
          assign_string(&save_name, (char const *)0);
        }
      }
      if (to_stdout_option) {
        goto switch_break;
      }
      { status = close(fd); }
      if (status < 0) {
        {
          close_error((char const *)file_name);
        }
        if (backup_option) {
          {
            undo_last_backup();
          }
        }
      }
      if ((unsigned int)old_files_option == 2U) {
        tmp___52 = 0;
      } else {
        tmp___52 = 1;
      }
      {
        set_stat((char const *)file_name,
                 (struct stat const *)(&current_stat_info.stat),
                 (struct stat const *)0, (mode_t)0, (enum permstatus)tmp___52,
                 typeflag);
      }
      goto switch_break;
    case_50 : /* CIL Label */
    {
      tmp___11 = prepare_to_extract((char const *)file_name);
    }
      if (!tmp___11) {
        goto switch_break;
      }
      if (absolute_names_option) {
        goto _L;
      } else {
        if ((int)*(current_stat_info.link_name + 0) == 47) {
          goto _L___0;
        } else {
          {
            tmp___23 =
                contains_dot_dot((char const *)current_stat_info.link_name);
          }
          if (tmp___23) {
          _L___0 : {
            while (1) {
                                               ;
              { fd = open((char const *)file_name, 193, 0); }
              if (!(fd < 0)) {
                goto while_break___0;
              }
              { tmp___13 = maybe_recoverable(file_name, &interdir_made); }
              if (!tmp___13) {
                goto while_break___0;
              }
            }
          while_break___0: /* CIL Label */;
          }
            status = -1;
            if (fd < 0) {
              {
                open_error((char const *)file_name);
              }
            } else {
              { tmp___22 = fstat(fd, &st); }
              if (tmp___22 != 0) {
                {
                  stat_error((char const *)file_name);
                  close(fd);
                }
              } else {
                { tmp___21 = close(fd); }
                if (tmp___21 != 0) {
                  {
                    close_error((char const *)file_name);
                  }
                } else {
                  {
                    tmp___14 =
                        strlen((char const *)current_stat_info.link_name);
                    tmp___15 =
                        xmalloc(((unsigned long)(&((struct delayed_symlink *)0)
                                                      ->target) +
                                 tmp___14) +
                                1UL);
                    p = (struct delayed_symlink *)tmp___15;
                    p->next = delayed_symlink_head;
                    delayed_symlink_head = p;
                    p->dev = st.st_dev;
                    p->ino = st.st_ino;
                    p->mtime = st.st_mtim.tv_sec;
                    p->uid = current_stat_info.stat.st_uid;
                    p->gid = current_stat_info.stat.st_gid;
                    tmp___16 = strlen((char const *)file_name);
                    tmp___17 = xmalloc(
                        ((unsigned long)(&((struct string_list *)0)->string) +
                         tmp___16) +
                        1UL);
                    p->sources = (struct string_list *)tmp___17;
                    (p->sources)->next = (struct string_list *)0;
                    strcpy((char * /* __restrict  */)((p->sources)->string),
                           (char const * /* __restrict  */)file_name);
                    strcpy((char * /* __restrict  */)(p->target),
                           (char const * /* __restrict  */)
                               current_stat_info.link_name);
                    h = delayed_set_stat_head;
                  }
                  if (h) {
                    if (!h->after_symlinks) {
                      {
                        tmp___19 = strncmp((char const *)file_name,
                                           (char const *)(h->file_name),
                                           h->file_name_len);
                      }
                      if (tmp___19 == 0) {
                        if ((int)*(file_name + h->file_name_len) == 47) {
                          {
                            tmp___20 = base_name((char const *)file_name);
                          }
                          if ((unsigned long)tmp___20 ==
                              (unsigned long)((file_name + h->file_name_len) +
                                              1)) {
                            {
                              while (1) {
                                                                 ;
                                {
                                  h->after_symlinks = (_Bool)1;
                                  tmp___18 = stat(
                                      (char const * /* __restrict  */)(
                                          h->file_name),
                                      (struct stat * /* __restrict  */)(&st));
                                }
                                if (tmp___18 != 0) {
                                  {
                                    stat_error((char const *)(h->file_name));
                                  }
                                } else {
                                  h->stat_info.st_dev = st.st_dev;
                                  h->stat_info.st_ino = st.st_ino;
                                }
                                h = h->next;
                                if (h) {
                                  if (!(!h->after_symlinks)) {
                                    goto while_break___1;
                                  }
                                } else {
                                  goto while_break___1;
                                }
                              }
                            while_break___1: /* CIL Label */;
                            }
                          }
                        }
                      }
                    }
                  }
                  status = 0;
                }
              }
            }
          } else {
          _L : {
            while (1) {
                                               ;
              {
                status = symlink((char const *)current_stat_info.link_name,
                                 (char const *)file_name);
              }
              if (!(status != 0)) {
                goto while_break___2;
              }
              { tmp___12 = maybe_recoverable(file_name, &interdir_made); }
              if (!tmp___12) {
                goto while_break___2;
              }
            }
          while_break___2: /* CIL Label */;
          }
            if (status == 0) {
              {
                set_stat((char const *)file_name,
                         (struct stat const *)(&current_stat_info.stat),
                         (struct stat const *)0, (mode_t)0, (enum permstatus)0,
                         (char)'2');
              }
            } else {
              {
                symlink_error((char const *)current_stat_info.link_name,
                              (char const *)file_name);
              }
            }
          }
        }
      }
      if (status != 0) {
        if (backup_option) {
          {
            undo_last_backup();
          }
        }
      }
      goto switch_break;
    case_49 : /* CIL Label */
    {
      tmp___24 = prepare_to_extract((char const *)file_name);
    }
      if (!tmp___24) {
        goto switch_break;
      }
    again_link : {
      tmp___25 = safer_name_suffix((char const *)current_stat_info.link_name,
                                   (_Bool)1);
      link_name = (char const *)tmp___25;
      status = link(link_name, (char const *)file_name);
    }
      if (status == 0) {
        ds = delayed_symlink_head;
        if (ds) {
          {
            tmp___28 = stat((char const * /* __restrict  */)link_name,
                            (struct stat * /* __restrict  */)(&st1));
          }
          if (tmp___28 == 0) {
            {
              while (1) {
                                                 ;
                if (!ds) {
                  goto while_break___3;
                }
                if (ds->dev == st1.st_dev) {
                  if (ds->ino == st1.st_ino) {
                    if (ds->mtime == st1.st_mtim.tv_sec) {
                      {
                        tmp___26 = strlen((char const *)file_name);
                        tmp___27 =
                            xmalloc(((unsigned long)(&((struct string_list *)0)
                                                          ->string) +
                                     tmp___26) +
                                    1UL);
                        p___0 = (struct string_list *)tmp___27;
                        strcpy((char * /* __restrict  */)(p___0->string),
                               (char const * /* __restrict  */)file_name);
                        p___0->next = ds->sources;
                        ds->sources = p___0;
                      }
                      goto while_break___3;
                    }
                  }
                }
                ds = ds->next;
              }
            while_break___3: /* CIL Label */;
            }
          }
        }
        goto switch_break;
      }
      { tmp___29 = maybe_recoverable(file_name, &interdir_made); }
      if (tmp___29) {
        goto again_link;
      }
      if (incremental_option) {
        {
          tmp___30 = __errno_location();
        }
        if (*tmp___30 == 17) {
          goto switch_break;
        }
      }
      {
        tmp___31 = __errno_location();
        e___0 = *tmp___31;
        tmp___32 = stat((char const * /* __restrict  */)link_name,
                        (struct stat * /* __restrict  */)(&st1));
      }
      if (tmp___32 == 0) {
        {
          tmp___33 = stat((char const * /* __restrict  */)file_name,
                          (struct stat * /* __restrict  */)(&st2));
        }
        if (tmp___33 == 0) {
          if (st1.st_dev == st2.st_dev) {
            if (st1.st_ino == st2.st_ino) {
              goto switch_break;
            }
          }
        }
      }
      { link_error(link_name, (char const *)file_name); }
      if (backup_option) {
        {
          undo_last_backup();
        }
      }
      goto switch_break;
    case_51: /* CIL Label */
      current_stat_info.stat.st_mode |= 8192U;
      goto make_node;
    case_52: /* CIL Label */
      current_stat_info.stat.st_mode |= 24576U;
    make_node : { tmp___34 = prepare_to_extract((char const *)file_name); }
      if (!tmp___34) {
        goto switch_break;
      }
      {
        status = mknod((char const *)file_name, current_stat_info.stat.st_mode,
                       current_stat_info.stat.st_rdev);
      }
      if (status != 0) {
        {
          tmp___35 = maybe_recoverable(file_name, &interdir_made);
        }
        if (tmp___35) {
          goto make_node;
        }
        { mknod_error((char const *)file_name); }
        if (backup_option) {
          {
            undo_last_backup();
          }
        }
        goto switch_break;
      }
      {
        set_stat((char const *)file_name,
                 (struct stat const *)(&current_stat_info.stat),
                 (struct stat const *)0, (mode_t)0, (enum permstatus)1,
                 typeflag);
      }
      goto switch_break;
    case_54 : /* CIL Label */
    {
      tmp___36 = prepare_to_extract((char const *)file_name);
    }
      if (!tmp___36) {
        goto switch_break;
      }
      {
        while (1) {
                                           ;
          {
            status =
                mkfifo((char const *)file_name, current_stat_info.stat.st_mode);
          }
          if (!(status != 0)) {
            goto while_break___4;
          }
          { tmp___37 = maybe_recoverable(file_name, &interdir_made); }
          if (!tmp___37) {
            goto while_break___4;
          }
        }
      while_break___4: /* CIL Label */;
      }
      if (status == 0) {
        {
          set_stat((char const *)file_name,
                   (struct stat const *)(&current_stat_info.stat),
                   (struct stat const *)((void *)0), (mode_t)0,
                   (enum permstatus)1, typeflag);
        }
      } else {
        { mkfifo_error((char const *)file_name); }
        if (backup_option) {
          {
            undo_last_backup();
          }
        }
      }
      goto switch_break;
    really_dir:
                            
                             
       if (incremental_option) {
        {
          gnu_restore((char const *)file_name);
        }
      } else {
        if ((int)typeflag == 68) {
          {
            skip_member();
          }
        }
      }
      if (we_are_root) {
        tmp___53 = 0;
      } else {
        tmp___53 = 192;
      }
      {
        mode = (current_stat_info.stat.st_mode | (unsigned int)tmp___53) &
               (unsigned int)(((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                              (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                               ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
        status = prepare_to_extract((char const *)file_name);
      }
      if (status == 0) {
        goto switch_break;
      }
      if (status < 0) {
        goto directory_exists;
      }
    again_dir : { status = mkdir((char const *)file_name, mode); }
      if (status != 0) {
        {
          tmp___40 = __errno_location();
        }
        if (*tmp___40 == 17) {
          if (interdir_made) {
            goto _L___3;
          } else {
            if ((unsigned int)old_files_option == 0U) {
              goto _L___3;
            } else {
              if ((unsigned int)old_files_option == 2U) {
              _L___3 : /* CIL Label */
              {
                tmp___38 = stat((char const * /* __restrict  */)file_name,
                                (struct stat * /* __restrict  */)(&st___0));
              }
                if (tmp___38 == 0) {
                  if (interdir_made) {
                    {
                      repair_delayed_set_stat((char const *)file_name,
                                              (struct stat const *)(&st___0));
                    }
                    goto switch_break;
                  }
                  if ((st___0.st_mode & 61440U) == 16384U) {
                    mode = st___0.st_mode & ~current_umask;
                    goto directory_exists;
                  }
                }
                {
                  tmp___39 = __errno_location();
                  *tmp___39 = 17;
                }
              }
            }
          }
        }
        { tmp___41 = maybe_recoverable(file_name, &interdir_made); }
        if (tmp___41) {
          goto again_dir;
        }
        { tmp___42 = __errno_location(); }
        if (*tmp___42 != 17) {
          {
            mkdir_error((char const *)file_name);
          }
          if (backup_option) {
            {
              undo_last_backup();
            }
          }
          goto switch_break;
        }
      }
    directory_exists:
      if (status == 0) {
        goto _L___4;
      } else {
        if ((unsigned int)old_files_option == 0U) {
          goto _L___4;
        } else {
          if ((unsigned int)old_files_option == 2U) {
          _L___4: /* CIL Label */
            if (status == 0) {
              tmp___54 = 1;
            } else {
              tmp___54 = 0;
            }
            {
              delay_set_stat(
                  (char const *)file_name,
                  (struct stat const *)(&current_stat_info.stat),
                  (unsigned int)(((64 | (64 >> 3)) | ((64 >> 3) >> 3)) |
                                 (((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                  ((256 | (256 >> 3)) | ((256 >> 3) >> 3)))) &
                      (mode ^ current_stat_info.stat.st_mode),
                  (enum permstatus)tmp___54);
            }
          }
        }
      }
      goto switch_break;
    case_86: /* CIL Label */
      if (verbose_option) {
        {
          tmp___43 = quote((char const *)current_stat_info.file_name);
          tmp___44 = gettext("Reading %s\n");
          fprintf((FILE * /* __restrict  */) stdlis,
                  (char const * /* __restrict  */)tmp___44, tmp___43);
        }
      }
      goto switch_break;
    case_78 : /* CIL Label */
    {
      extract_mangle();
    }
      goto switch_break;
    case_77 : /* CIL Label */
    {
      tmp___45 = quotearg_colon((char const *)current_stat_info.file_name);
      tmp___46 = gettext(
          "%s: Cannot extract -- file is continued from another volume");
      error(0, 0, (char const *)tmp___46, tmp___45);
      exit_status = 2;
      skip_member();
    }
      if (backup_option) {
        {
          undo_last_backup();
        }
      }
      goto switch_break;
    case_76:  /* CIL Label */
                             
     {
      tmp___47 = gettext("Visible long name error");
      error(0, 0, (char const *)tmp___47);
      exit_status = 2;
      skip_member();
    }
      if (backup_option) {
        {
          undo_last_backup();
        }
      }
      goto switch_break;
    switch_default : /* CIL Label */
    {
      tmp___48 = quotearg_colon((char const *)file_name);
      tmp___49 =
          gettext("%s: Unknown file type \'%c\', extracted as normal file");
      error(0, 0, (char const *)tmp___49, tmp___48, (int)typeflag);
    }
      goto again_file;
    switch_break: /* CIL Label */;
    }
    return;
  }
}
static void apply_delayed_symlinks(void) {
  struct delayed_symlink *ds;
  struct string_list *sources;
  char const *valid_source;
  char const *source;
  struct stat st;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  struct string_list *next;
  struct delayed_symlink *next___0;
                    
  {
    ds = delayed_symlink_head;
    {
      while (1) {
                                     ;
        if (!ds) {
          goto while_break;
        }
        sources = ds->sources;
        valid_source = (char const *)0;
        sources = ds->sources;
        {
          while (1) {
                                             ;
            if (!sources) {
              goto while_break___0;
            }
            {
              source = (char const *)(sources->string);
              tmp___2 = lstat((char const * /* __restrict  */)source,
                              (struct stat * /* __restrict  */)(&st));
            }
            if (tmp___2 == 0) {
              if (st.st_dev == ds->dev) {
                if (st.st_ino == ds->ino) {
                  if (st.st_mtim.tv_sec == ds->mtime) {
                    {
                      tmp___1 = unlink(source);
                    }
                    if (tmp___1 != 0) {
                      {
                        unlink_error(source);
                      }
                    } else {
                      if (valid_source) {
                        {
                          tmp___0 = link(valid_source, source);
                        }
                        if (!(tmp___0 == 0)) {
                          goto _L;
                        }
                      } else {
                      _L : {
                        tmp = symlink((char const *)(ds->target), source);
                      }
                        if (tmp != 0) {
                          {
                            symlink_error((char const *)(ds->target), source);
                          }
                        } else {
                          {
                            valid_source = source;
                            st.st_uid = ds->uid;
                            st.st_gid = ds->gid;
                            set_stat(source, (struct stat const *)(&st),
                                     (struct stat const *)0, (mode_t)0,
                                     (enum permstatus)0, (char)'2');
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            sources = sources->next;
          }
        while_break___0: /* CIL Label */;
        }
        sources = ds->sources;
        {
          while (1) {
                                             ;
            if (!sources) {
              goto while_break___1;
            }
            {
              next = sources->next;
              free((void *)sources);
              sources = next;
            }
          }
        while_break___1: /* CIL Label */;
        }
        {
          next___0 = ds->next;
          free((void *)ds);
          ds = next___0;
        }
      }
    while_break: /* CIL Label */;
    }
    delayed_symlink_head = (struct delayed_symlink *)0;
    return;
  }
}
void extract_finish(void) {
                   
                   
  {
    {
      apply_nonancestor_delayed_set_stat("", (_Bool)0);
      apply_delayed_symlinks();
      apply_nonancestor_delayed_set_stat("", (_Bool)1);
    }
    return;
  }
}
__attribute__((__noreturn__)) void fatal_exit(void);
void fatal_exit(void) {










}
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
static size_t global_header_count;
static struct keyword_list *keyword_pattern_list;
static struct keyword_list *keyword_global_override_list;
static struct keyword_list *keyword_override_list;
static struct keyword_list *global_header_override_list;
static char *exthdr_name;
static char *globexthdr_name;
static _Bool xheader_keyword_deleted_p(char const *kw) {




















}
static _Bool xheader_keyword_override_p(char const *keyword) {




















}
static void xheader_list_append(struct keyword_list **root, char const *kw,
                                char const *value) {





















}
static void xheader_list_destroy(struct keyword_list **root) {

























}
static __attribute__((__noreturn__)) void xheader_set_single_keyword(char *kw);
static void xheader_set_single_keyword(char *kw) {









}
static void xheader_set_keyword_equal(char *kw, char *eq) {













































































































}
void xheader_set_option(char *string) {


































}
static void to_decimal(uintmax_t value, char *where, size_t size) {













































}
static char *xheader_format_name(struct tar_stat_info *st, char const *fmt,
                                 _Bool allow_n) {
































































































































































































































}
char *xheader_xhdr_name(struct tar_stat_info *st) {











}
char *xheader_ghdr_name(void) {




































}
void xheader_write(char type, char *name, struct xheader *xhdr) {













































}
void xheader_write_global(void) {
  char *name;
  struct keyword_list *kp;
  {
    if (!keyword_global_override_list) {
      return;
    }
    {
      extended_header_init();
      kp = keyword_global_override_list;
    }
    {
      while (1) {
                                     ;
        if (!kp) {
          goto while_break;
        }
        {
          code_string((char const *)kp->value, (char const *)kp->pattern,
                      &extended_header);
          kp = kp->next;
        }
      }
    while_break: /* CIL Label */;
    }
    {
      xheader_finish(&extended_header);
      name = xheader_ghdr_name();
      xheader_write((char)'g', name, &extended_header);
      free((void *)name);
      global_header_count++;
    }
    return;
  }
}
struct xhdr_tab const xhdr_tab[17];
static struct xhdr_tab const *locate_handler(char const *keyword) {




















}
static _Bool xheader_protected_pattern_p(char const *pattern) {
























}
static _Bool xheader_protected_keyword_p(char const *keyword) {
























}
static _Bool decode_record(char **p,
                           void (*handler)(void *, char const *, char const *),
                           void *data) {




























































}
static void run_override_list(struct keyword_list *kp,
                              struct tar_stat_info *st) {
  struct xhdr_tab const *t;
  struct xhdr_tab const *tmp;
  {
    {
      while (1) {
                                     ;
        if (!kp) {
          goto while_break;
        }
        {
          tmp = locate_handler((char const *)kp->pattern);
          t = tmp;
        }
        if (t) {
          {
            (*(t->decoder))(st, (char const *)kp->value);
          }
        }
        kp = kp->next;
      }
    while_break: /* CIL Label */;
    }
    return;
  }
}
static void decx(void *data, char const *keyword, char const *value) {

























}
void xheader_decode(struct tar_stat_info *st) {
  char *p;
  char *endp;
  _Bool tmp;
  {
    {
      run_override_list(keyword_global_override_list, st);
      run_override_list(global_header_override_list, st);
    }
    if (extended_header.size) {
      p = extended_header.buffer + 512;
      endp = extended_header.buffer + (extended_header.size - 1UL);
      {
        while (1) {
                                       ;
          if (!((unsigned long)p < (unsigned long)endp)) {
            goto while_break;
          }
          { tmp = decode_record(&p, &decx, (void *)st); }
          if (!tmp) {
            goto while_break;
          }
        }
      while_break: /* CIL Label */;
      }
    }
    { run_override_list(keyword_override_list, st); }
    return;
  }
}
static void decg(void *data, char const *keyword, char const *value) {








}
void xheader_decode_global(void) {





























}
static void extended_header_init(void) {












}
void xheader_store(char const *keyword, struct tar_stat_info const *st,
                   void *data) {


























}
void xheader_read(union block *p, size_t size) {





































}
static size_t format_uintmax(uintmax_t val, char *buf, size_t s) {















































}
static void xheader_print(struct xheader *xhdr, char const *keyword,
                          char const *value) {

























































































































}
void xheader_finish(struct xheader *xhdr) {

















































}
void xheader_destroy(struct xheader *xhdr) {
  struct obstack *__o;
  void *__obj;
  char *tmp;
  {
    if (xhdr->stk) {
      __o = xhdr->stk;
      __obj = (void *)0;
      if ((unsigned long)__obj > (unsigned long)((void *)__o->chunk)) {
        if ((unsigned long)__obj < (unsigned long)((void *)__o->chunk_limit)) {
          tmp = (char *)__obj;
          __o->object_base = tmp;
          __o->next_free = tmp;
        } else {
          { obstack_free(__o, __obj); }
        }
      } else {
        { obstack_free(__o, __obj); }
      }
      {
        free((void *)xhdr->stk);
        xhdr->stk = (struct obstack *)((void *)0);
      }
    } else {
      { free((void *)xhdr->buffer); }
    }
    xhdr->buffer = (char *)0;
    xhdr->size = (size_t)0;
    return;
  }
}
static void code_string(char const *string, char const *keyword,
                        struct xheader *xhdr) {















}
static void decode_string(char **string, char const *arg) {
















}
static void code_time(time_t t, unsigned long nano, char const *keyword,
                      struct xheader *xhdr) {


























}
static void decode_time(char const *arg, time_t *secs, unsigned long *nsecs) {






















}
static void code_num(uintmax_t value, char const *keyword,
                     struct xheader *xhdr) {














}
static void dummy_coder(struct tar_stat_info const *st
                        __attribute__((__unused__)),
                        char const *keyword __attribute__((__unused__)),
                        struct xheader *xhdr __attribute__((__unused__)),
                        void *data __attribute__((__unused__))) {

}
static void dummy_decoder(struct tar_stat_info *st __attribute__((__unused__)),
                          char const *arg __attribute__((__unused__))) {

}
static void atime_coder(struct tar_stat_info const *st, char const *keyword,
                        struct xheader *xhdr,
                        void *data __attribute__((__unused__))) {







}
static void atime_decoder(struct tar_stat_info *st, char const *arg) {




}
static void gid_coder(struct tar_stat_info const *st, char const *keyword,
                      struct xheader *xhdr,
                      void *data __attribute__((__unused__))) {




}
static void gid_decoder(struct tar_stat_info *st, char const *arg) {










}
static void gname_coder(struct tar_stat_info const *st, char const *keyword,
                        struct xheader *xhdr,
                        void *data __attribute__((__unused__))) {




}
static void gname_decoder(struct tar_stat_info *st, char const *arg) {




}
static void linkpath_coder(struct tar_stat_info const *st, char const *keyword,
                           struct xheader *xhdr,
                           void *data __attribute__((__unused__))) {




}
static void linkpath_decoder(struct tar_stat_info *st, char const *arg) {




}
static void ctime_coder(struct tar_stat_info const *st, char const *keyword,
                        struct xheader *xhdr,
                        void *data __attribute__((__unused__))) {







}
static void ctime_decoder(struct tar_stat_info *st, char const *arg) {




}
static void mtime_coder(struct tar_stat_info const *st, char const *keyword,
                        struct xheader *xhdr,
                        void *data __attribute__((__unused__))) {







}
static void mtime_decoder(struct tar_stat_info *st, char const *arg) {




}
static void path_coder(struct tar_stat_info const *st, char const *keyword,
                       struct xheader *xhdr,
                       void *data __attribute__((__unused__))) {




}
static void path_decoder(struct tar_stat_info *st, char const *arg) {








}
static void size_coder(struct tar_stat_info const *st, char const *keyword,
                       struct xheader *xhdr,
                       void *data __attribute__((__unused__))) {




}
static void size_decoder(struct tar_stat_info *st, char const *arg) {













}
static void uid_coder(struct tar_stat_info const *st, char const *keyword,
                      struct xheader *xhdr,
                      void *data __attribute__((__unused__))) {




}
static void uid_decoder(struct tar_stat_info *st, char const *arg) {










}
static void uname_coder(struct tar_stat_info const *st, char const *keyword,
                        struct xheader *xhdr,
                        void *data __attribute__((__unused__))) {




}
static void uname_decoder(struct tar_stat_info *st, char const *arg) {




}
static void sparse_size_coder(struct tar_stat_info const *st,
                              char const *keyword, struct xheader *xhdr,
                              void *data) {




}
static void sparse_size_decoder(struct tar_stat_info *st, char const *arg) {










}
static void sparse_numblocks_coder(struct tar_stat_info const *st,
                                   char const *keyword, struct xheader *xhdr,
                                   void *data __attribute__((__unused__))) {




}
static void sparse_numblocks_decoder(struct tar_stat_info *st,
                                     char const *arg) {
















}
static void sparse_offset_coder(struct tar_stat_info const *st,
                                char const *keyword, struct xheader *xhdr,
                                void *data) {








}
static void sparse_offset_decoder(struct tar_stat_info *st, char const *arg) {










}
static void sparse_numbytes_coder(struct tar_stat_info const *st,
                                  char const *keyword, struct xheader *xhdr,
                                  void *data) {








}
static void sparse_numbytes_decoder(struct tar_stat_info *st, char const *arg) {






















}
struct xhdr_tab const xhdr_tab[17] = {
    {"atime", &atime_coder, &atime_decoder, (_Bool)0},
    {"comment", &dummy_coder, &dummy_decoder, (_Bool)0},
    {"charset", &dummy_coder, &dummy_decoder, (_Bool)0},
    {"ctime", &ctime_coder, &ctime_decoder, (_Bool)0},
    {"gid", &gid_coder, &gid_decoder, (_Bool)0},
    {"gname", &gname_coder, &gname_decoder, (_Bool)0},
    {"linkpath", &linkpath_coder, &linkpath_decoder, (_Bool)0},
    {"mtime", &mtime_coder, &mtime_decoder, (_Bool)0},
    {"path", &path_coder, &path_decoder, (_Bool)0},
    {"size", &size_coder, &size_decoder, (_Bool)0},
    {"uid", &uid_coder, &uid_decoder, (_Bool)0},
    {"uname", &uname_coder, &uname_decoder, (_Bool)0},
    {"GNU.sparse.size", &sparse_size_coder, &sparse_size_decoder, (_Bool)1},
    {"GNU.sparse.numblocks", &sparse_numblocks_coder, &sparse_numblocks_decoder,
     (_Bool)1},
    {"GNU.sparse.offset", &sparse_offset_coder, &sparse_offset_decoder,
     (_Bool)1},
    {"GNU.sparse.numbytes", &sparse_numbytes_coder, &sparse_numbytes_decoder,
     (_Bool)1},
    {(char const *)((void *)0),
     (void (*)(struct tar_stat_info const *, char const *, struct xheader *,
               void *data))((void *)0),
     (void (*)(struct tar_stat_info *, char const *))((void *)0), (_Bool)0}};
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
static Hash_table *directory_table;
static unsigned int hash_directory(void const *entry, unsigned int n_buckets) {









}
static _Bool compare_directories(void const *entry1, void const *entry2) {












}
static struct directory *note_directory(char const *name, dev_t dev, ino_t ino,
                                        _Bool nfs, _Bool found) {









































}
static struct directory *find_directory(char *name) {






















}
static int compare_dirents(void const *first, void const *second) {








}
static void scan_path(struct obstack *stk, char *path, dev_t device) {













































































































































































































































































































































































}
static char *sort_obstack(struct obstack *stk) {








































































































































}
char *get_directory_contents(char *path, dev_t device) {



























}
static FILE *listed_incremental_stream;
void read_directory_file(void) {





































































































































































































































































































}
static _Bool write_directory_file_entry(void *entry, void *data) {


















































}
void write_directory_file(void) {























































}
void gnu_restore(char const *directory_name) {



























































































































































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
_Bool utc_option;
_Bool block_number_option;
_Bool show_omitted_dirs_option;
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
static char const base_64_digits[64] = {
    (char const)'A', (char const)'B', (char const)'C', (char const)'D',
    (char const)'E', (char const)'F', (char const)'G', (char const)'H',
    (char const)'I', (char const)'J', (char const)'K', (char const)'L',
    (char const)'M', (char const)'N', (char const)'O', (char const)'P',
    (char const)'Q', (char const)'R', (char const)'S', (char const)'T',
    (char const)'U', (char const)'V', (char const)'W', (char const)'X',
    (char const)'Y', (char const)'Z', (char const)'a', (char const)'b',
    (char const)'c', (char const)'d', (char const)'e', (char const)'f',
    (char const)'g', (char const)'h', (char const)'i', (char const)'j',
    (char const)'k', (char const)'l', (char const)'m', (char const)'n',
    (char const)'o', (char const)'p', (char const)'q', (char const)'r',
    (char const)'s', (char const)'t', (char const)'u', (char const)'v',
    (char const)'w', (char const)'x', (char const)'y', (char const)'z',
    (char const)'0', (char const)'1', (char const)'2', (char const)'3',
    (char const)'4', (char const)'5', (char const)'6', (char const)'7',
    (char const)'8', (char const)'9', (char const)'+', (char const)'/'};
static char base64_map[256];
static void base64_init(void) {
  int i;
  {
    {
      memset((void *)(base64_map), 64, sizeof(base64_map));
      i = 0;
    }
    {
      while (1) {
                                     ;
        if (!(i < 64)) {
          goto while_break;
        }
        base64_map[(int)base_64_digits[i]] = (char)i;
        i++;
      }
    while_break: /* CIL Label */;
    }
    return;
  }
}
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
      status = (enum read_header)0;
      base64_init();
      name_gather();
      open_archive((enum access_mode)0);
    }
    {
      while (1) {
                                     ;
        {
          prev_status = status;
          tar_stat_destroy(&current_stat_info);
          xheader_destroy(&extended_header);
          status = read_header((_Bool)0);
        }
        {
          if ((unsigned int)status == 0U) {
            goto case_0;
          }
          if ((unsigned int)status == 2U) {
            goto case_0;
          }
          if ((unsigned int)status == 1U) {
            goto case_1;
          }
          if ((unsigned int)status == 3U) {
            goto case_3;
          }
          if ((unsigned int)status == 4U) {
            goto case_4;
          }
          if ((unsigned int)status == 5U) {
            goto case_5;
          }
          goto switch_break;
        case_0:  /* CIL Label */
                                
         {
          abort();
        }
        case_1 : /* CIL Label */
        {
          tmp___1 = name_match((char const *)current_stat_info.file_name);
        }
          if (tmp___1) {
            if (0L <= newer_mtime_option.tv_nsec) {
              {
                current_stat_info.stat.st_mtim.tv_sec = time_from_header(
                    (char const *)(current_header->header.mtime),
                    sizeof(current_header->header.mtime));
                current_stat_info.stat.st_mtim.tv_nsec = (__syscall_slong_t)0;
              }
              if (current_stat_info.stat.st_mtim.tv_sec <
                  newer_mtime_option.tv_sec) {
                goto _L;
              } else {
                if (current_stat_info.stat.st_mtim.tv_sec ==
                    newer_mtime_option.tv_sec) {
                  if (current_stat_info.stat.st_mtim.tv_nsec <
                      newer_mtime_option.tv_nsec) {
                    goto _L;
                  } else {
                    goto _L___0;
                  }
                } else {
                  goto _L___0;
                }
              }
            } else {
            _L___0 : {
              tmp___2 =
                  excluded_name((char const *)current_stat_info.file_name);
            }
              if (tmp___2) {
              _L : {
                if ((int)current_header->header.typeflag == 86) {
                  goto case_86;
                }
                if ((int)current_header->header.typeflag == 77) {
                  goto case_86;
                }
                if ((int)current_header->header.typeflag == 78) {
                  goto case_86;
                }
                if ((int)current_header->header.typeflag == 53) {
                  goto case_53;
                }
                goto switch_default;
              case_86: /* CIL Label */
                                      
                                       
                 goto switch_break___0;
              case_53: /* CIL Label */
                if (show_omitted_dirs_option) {
                  {
                    tmp = quotearg_colon(
                        (char const *)current_stat_info.file_name);
                    tmp___0 = gettext("%s: Omitting");
                    error(0, 0, (char const *)tmp___0, tmp);
                  }
                }
              switch_default : /* CIL Label */
              {
                skip_member();
              }
                goto __Cont;
              switch_break___0: /* CIL Label */;
              }
              }
            }
          } else {
            goto _L;
          }
          { (*do_something)(); }
          goto __Cont;
        case_3: /* CIL Label */
          if (block_number_option) {
            {
              tmp___3 = current_block_ordinal();
              tmp___4 = stringify_uintmax_t_backwards(
                  (uintmax_t)tmp___3,
                  buf + ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                         1UL));
              tmp___5 = gettext("block %s: ** Block of NULs **\n");
              fprintf((FILE * /* __restrict  */) stdlis,
                      (char const * /* __restrict  */)tmp___5, tmp___4);
            }
          }
          { set_next_block_after(current_header); }
          if (!ignore_zeros_option) {
            {
              status = read_header((_Bool)0);
            }
            if ((unsigned int)status == 3U) {
              goto switch_break;
            }
            {
              tmp___6 = current_block_ordinal();
              tmp___7 = stringify_uintmax_t_backwards(
                  (uintmax_t)tmp___6,
                  buf___0 +
                      ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                       1UL));
              tmp___8 = gettext("A lone zero block at %s");
              error(0, 0, (char const *)tmp___8, tmp___7);
            }
            goto switch_break;
          }
          status = prev_status;
          goto __Cont;
        case_4: /* CIL Label */
          if (block_number_option) {
            {
              tmp___9 = current_block_ordinal();
              tmp___10 = stringify_uintmax_t_backwards(
                  (uintmax_t)tmp___9,
                  buf___1 +
                      ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                       1UL));
              tmp___11 = gettext("block %s: ** End of File **\n");
              fprintf((FILE * /* __restrict  */) stdlis,
                      (char const * /* __restrict  */)tmp___11, tmp___10);
            }
          }
          goto switch_break;
        case_5 : /* CIL Label */
        {
          set_next_block_after(current_header);
        }
          {
            if ((unsigned int)prev_status == 0U) {
              goto case_0___0;
            }
            if ((unsigned int)prev_status == 3U) {
              goto case_3___0;
            }
            if ((unsigned int)prev_status == 1U) {
              goto case_3___0;
            }
            if ((unsigned int)prev_status == 4U) {
              goto case_4___0;
            }
            if ((unsigned int)prev_status == 5U) {
              goto case_4___0;
            }
            if ((unsigned int)prev_status == 2U) {
              goto case_2___0;
            }
            goto switch_break___1;
          case_0___0 : /* CIL Label */
          {
            tmp___12 = gettext("This does not look like a tar archive");
            error(0, 0, (char const *)tmp___12);
            exit_status = 2;
          }
          case_3___0: /* CIL Label */
                                     
             if (block_number_option) {
              {
                tmp___13 = current_block_ordinal();
                block_ordinal = tmp___13;
                block_ordinal =
                    (off_t)((size_t)block_ordinal - recent_long_name_blocks);
                block_ordinal =
                    (off_t)((size_t)block_ordinal - recent_long_link_blocks);
                tmp___14 = stringify_uintmax_t_backwards(
                    (uintmax_t)block_ordinal,
                    buf___2 +
                        ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                         1UL));
                tmp___15 = gettext("block %s: ");
                fprintf((FILE * /* __restrict  */) stdlis,
                        (char const * /* __restrict  */)tmp___15, tmp___14);
              }
            }
            {
              tmp___16 = gettext("Skipping to next header");
              error(0, 0, (char const *)tmp___16);
              exit_status = 2;
            }
            goto switch_break___1;
          case_4___0: /* CIL Label */
                                     
             goto switch_break___1;
          case_2___0 : /* CIL Label */
          {
            abort();
          }
          switch_break___1: /* CIL Label */;
          }
          goto __Cont;
        switch_break: /* CIL Label */;
        }
        goto while_break;
      __Cont : { tmp___17 = all_names_found(&current_stat_info); }
        if (tmp___17) {
          goto while_break;
        }
      }
    while_break: /* CIL Label */;
    }
    {
      close_archive();
      names_notfound();
    }
    return;
  }
}
void list_archive(void) {































































































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
    next_long_name = (union block *)0;
    next_long_link = (union block *)0;
    {
      while (1) {
                                     ;
        {
          header = find_next_block();
          current_header = header;
        }
        if (!header) {
          return ((enum read_header)4);
        }
        unsigned_sum = 0;
        signed_sum = 0;
        p = header->buffer;
        i = sizeof(*header);
        {
          while (1) {
                                             ;
            tmp___0 = i;
            i--;
            if (!(tmp___0 != 0UL)) {
              goto while_break___0;
            }
            unsigned_sum += (int)((unsigned char)*p);
            tmp = p;
            p++;
            signed_sum += (int)((signed char)*tmp);
          }
        while_break___0: /* CIL Label */;
        }
        if (unsigned_sum == 0) {
          return ((enum read_header)3);
        }
        i = sizeof(header->header.chksum);
        {
          while (1) {
                                             ;
            tmp___1 = i;
            i--;
            if (!(tmp___1 != 0UL)) {
              goto while_break___1;
            }
            unsigned_sum -= (int)((unsigned char)header->header.chksum[i]);
            signed_sum -= (int)((signed char)header->header.chksum[i]);
          }
        while_break___1: /* CIL Label */;
        }
        {
          unsigned_sum = (int)((unsigned long)unsigned_sum +
                               32UL * sizeof(header->header.chksum));
          signed_sum = (int)((unsigned long)signed_sum +
                             32UL * sizeof(header->header.chksum));
          parsed_sum = from_header(
              (char const *)(header->header.chksum),
              sizeof(header->header.chksum), (char const *)0, (uintmax_t)0,
              (uintmax_t)(-1 - (-1 << (sizeof(int) * 8UL - 1UL))));
        }
        if (parsed_sum == 0xffffffffffffffffUL) {
          return ((enum read_header)5);
        }
        recorded_sum = (int)parsed_sum;
        if (unsigned_sum != recorded_sum) {
          if (signed_sum != recorded_sum) {
            return ((enum read_header)5);
          }
        }
        if ((int)header->header.typeflag == 49) {
          current_stat_info.stat.st_size = (__off_t)0;
        } else {
          {
            current_stat_info.stat.st_size =
                off_from_header((char const *)(header->header.size),
                                sizeof(header->header.size));
          }
        }
        if ((int)header->header.typeflag == 76) {
          goto _L___4;
        } else {
          if ((int)header->header.typeflag == 75) {
            goto _L___4;
          } else {
            if ((int)header->header.typeflag == 120) {
              goto _L___4;
            } else {
              if ((int)header->header.typeflag == 103) {
              _L___4: /* CIL Label */
                if (raw_extended_headers) {
                  return ((enum read_header)2);
                } else {
                  if ((int)header->header.typeflag == 76) {
                    goto _L___3;
                  } else {
                    if ((int)header->header.typeflag == 75) {
                    _L___3: /* CIL Label */
                      name_size = (size_t)current_stat_info.stat.st_size;
                      size = (name_size - name_size % 512UL) + 1024UL;
                      if (name_size != (size_t)current_stat_info.stat.st_size) {
                        {
                          xalloc_die();
                        }
                      } else {
                        if (size < name_size) {
                          {
                            xalloc_die();
                          }
                        }
                      }
                      {
                        tmp___2 = xmalloc(size + 1UL);
                        header_copy = (union block *)tmp___2;
                      }
                      if ((int)header->header.typeflag == 76) {
                        if (next_long_name) {
                          {
                            free((void *)next_long_name);
                          }
                        }
                        next_long_name = header_copy;
                        next_long_name_blocks = size / 512UL;
                      } else {
                        if (next_long_link) {
                          {
                            free((void *)next_long_link);
                          }
                        }
                        next_long_link = header_copy;
                        next_long_link_blocks = size / 512UL;
                      }
                      {
                        set_next_block_after(header);
                        *header_copy = *header;
                        bp = header_copy->buffer + 512;
                        size -= 512UL;
                      }
                      {
                        while (1) {
                                                           ;
                          if (!(size > 0UL)) {
                            goto while_break___2;
                          }
                          { data_block = find_next_block(); }
                          if (!data_block) {
                            {
                              tmp___3 = gettext("Unexpected EOF in archive");
                              error(0, 0, (char const *)tmp___3);
                              exit_status = 2;
                            }
                            goto while_break___2;
                          }
                          { written = available_space_after(data_block); }
                          if (written > size) {
                            written = size;
                          }
                          {
                            memcpy((void * /* __restrict  */)bp,
                                   (void const * /* __restrict  */)(
                                       data_block->buffer),
                                   written);
                            bp += written;
                            set_next_block_after(
                                (union block *)((data_block->buffer + written) -
                                                1));
                            size -= written;
                          }
                        }
                      while_break___2: /* CIL Label */;
                      }
                      *bp = (char)'\000';
                    } else {
                      if ((int)header->header.typeflag == 120) {
                        {
                          tmp___4 = off_from_header(
                              (char const *)(header->header.size),
                              sizeof(header->header.size));
                          xheader_read(header, (size_t)tmp___4);
                        }
                      } else {
                        if ((int)header->header.typeflag == 103) {
                          {
                            tmp___5 = off_from_header(
                                (char const *)(header->header.size),
                                sizeof(header->header.size));
                            xheader_read(header, (size_t)tmp___5);
                            xheader_decode_global();
                          }
                        }
                      }
                    }
                  }
                }
              } else {
                h = (struct posix_header const *)(&current_header->header);
                if (recent_long_name) {
                  {
                    free((void *)recent_long_name);
                  }
                }
                if (next_long_name) {
                  name = (char const *)(next_long_name->buffer + 512);
                  recent_long_name = next_long_name;
                  recent_long_name_blocks = next_long_name_blocks;
                } else {
                  np = namebuf;
                  if (h->prefix[0]) {
                    {
                      tmp___8 = strcmp((char const *)(h->magic), "ustar");
                    }
                    if (tmp___8 == 0) {
                      {
                        memcpy((void * /* __restrict  */)np,
                               (void const * /* __restrict  */)(h->prefix),
                               sizeof(h->prefix));
                        *(np + sizeof(h->prefix)) = (char)'\000';
                        tmp___6 = strlen((char const *)np);
                        np += tmp___6;
                        tmp___7 = np;
                        np++;
                        *tmp___7 = (char)'/';
                        current_header->oldgnu_header.isextended = (char)0;
                      }
                    }
                  }
                  {
                    memcpy((void * /* __restrict  */)np,
                           (void const * /* __restrict  */)(h->name),
                           sizeof(h->name));
                    *(np + sizeof(h->name)) = (char)'\000';
                    name = (char const *)(namebuf);
                    recent_long_name = (union block *)0;
                    recent_long_name_blocks = (size_t)0;
                  }
                }
                {
                  assign_string(&current_stat_info.orig_file_name, name);
                  assign_string(&current_stat_info.file_name, name);
                  current_stat_info.had_trailing_slash =
                      strip_trailing_slashes(current_stat_info.file_name);
                }
                if (recent_long_link) {
                  {
                    free((void *)recent_long_link);
                  }
                }
                if (next_long_link) {
                  name = (char const *)(next_long_link->buffer + 512);
                  recent_long_link = next_long_link;
                  recent_long_link_blocks = next_long_link_blocks;
                } else {
                  {
                    memcpy((void * /* __restrict  */)(namebuf),
                           (void const * /* __restrict  */)(h->linkname),
                           sizeof(h->linkname));
                    namebuf[sizeof(h->linkname)] = (char)'\000';
                    name = (char const *)(namebuf);
                    recent_long_link = (union block *)0;
                    recent_long_link_blocks = (size_t)0;
                  }
                }
                { assign_string(&current_stat_info.link_name, name); }
                return ((enum read_header)1);
              }
            }
          }
        }
      }
                                ;
    }
  }
}
void decode_header(union block *header, struct tar_stat_info *stat_info,
                   enum archive_format *format_pointer, int do_user_group) {
  enum archive_format format;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  unsigned long long tmp___5;
  _Bool tmp___6;
  {
    { tmp___0 = strcmp((char const *)(header->header.magic), "ustar"); }
    if (tmp___0 == 0) {
      if ((int)header->star_header.prefix[130] == 0) {
        if ((int)header->star_header.atime[0] >= 48) {
          if ((int)header->star_header.atime[0] <= 55) {
            if ((int)header->star_header.atime[11] == 32) {
              if ((int)header->star_header.ctime[0] >= 48) {
                if ((int)header->star_header.ctime[0] <= 55) {
                  if ((int)header->star_header.ctime[11] == 32) {
                    format = (enum archive_format)5;
                  } else {
                    goto _L___6;
                  }
                } else {
                  goto _L___6;
                }
              } else {
                goto _L___6;
              }
            } else {
              goto _L___6;
            }
          } else {
            goto _L___6;
          }
        } else {
          goto _L___6;
        }
      } else {
      _L___6: /* CIL Label */
        if (extended_header.size) {
          format = (enum archive_format)4;
        } else {
          format = (enum archive_format)3;
        }
      }
    } else {
      { tmp = strcmp((char const *)(header->header.magic), "ustar  "); }
      if (tmp == 0) {
        format = (enum archive_format)2;
      } else {
        format = (enum archive_format)1;
      }
    }
    {
      *format_pointer = format;
      stat_info->stat.st_mode = mode_from_header(
          (char const *)(header->header.mode), sizeof(header->header.mode));
      stat_info->stat.st_mtim.tv_sec = time_from_header(
          (char const *)(header->header.mtime), sizeof(header->header.mtime));
      assign_string(&stat_info->uname, (char const *)(header->header.uname));
      assign_string(&stat_info->gname, (char const *)(header->header.gname));
      tmp___1 = major_from_header((char const *)(header->header.devmajor),
                                  sizeof(header->header.devmajor));
      stat_info->devmajor = (unsigned int)tmp___1;
      tmp___2 = minor_from_header((char const *)(header->header.devminor),
                                  sizeof(header->header.devminor));
      stat_info->devminor = (unsigned int)tmp___2;
      stat_info->stat.st_atim.tv_sec = start_timespec.tv_sec;
      stat_info->stat.st_ctim.tv_sec = start_timespec.tv_sec;
    }
    if ((unsigned int)format == 2U) {
      if (incremental_option) {
        {
          stat_info->stat.st_atim.tv_sec =
              time_from_header((char const *)(header->oldgnu_header.atime),
                               sizeof(header->oldgnu_header.atime));
          stat_info->stat.st_ctim.tv_sec =
              time_from_header((char const *)(header->oldgnu_header.ctime),
                               sizeof(header->oldgnu_header.ctime));
        }
      }
    }
    if ((unsigned int)format == 1U) {
      {
        stat_info->stat.st_uid = uid_from_header(
            (char const *)(header->header.uid), sizeof(header->header.uid));
        stat_info->stat.st_gid = gid_from_header(
            (char const *)(header->header.gid), sizeof(header->header.gid));
        stat_info->stat.st_rdev = (__dev_t)0;
      }
    } else {
      if ((unsigned int)format == 5U) {
        {
          stat_info->stat.st_atim.tv_sec =
              time_from_header((char const *)(header->star_header.atime),
                               sizeof(header->star_header.atime));
          stat_info->stat.st_ctim.tv_sec =
              time_from_header((char const *)(header->star_header.ctime),
                               sizeof(header->star_header.ctime));
        }
      }
      if (do_user_group) {
        if (numeric_owner_option) {
          {
            stat_info->stat.st_uid = uid_from_header(
                (char const *)(header->header.uid), sizeof(header->header.uid));
          }
        } else {
          if (!header->header.uname[0]) {
            {
              stat_info->stat.st_uid =
                  uid_from_header((char const *)(header->header.uid),
                                  sizeof(header->header.uid));
            }
          } else {
            {
              tmp___3 = uname_to_uid((char const *)(header->header.uname),
                                     &stat_info->stat.st_uid);
            }
            if (!tmp___3) {
              {
                stat_info->stat.st_uid =
                    uid_from_header((char const *)(header->header.uid),
                                    sizeof(header->header.uid));
              }
            }
          }
        }
        if (numeric_owner_option) {
          {
            stat_info->stat.st_gid = gid_from_header(
                (char const *)(header->header.gid), sizeof(header->header.gid));
          }
        } else {
          if (!header->header.gname[0]) {
            {
              stat_info->stat.st_gid =
                  gid_from_header((char const *)(header->header.gid),
                                  sizeof(header->header.gid));
            }
          } else {
            {
              tmp___4 = gname_to_gid((char const *)(header->header.gname),
                                     &stat_info->stat.st_gid);
            }
            if (!tmp___4) {
              {
                stat_info->stat.st_gid =
                    gid_from_header((char const *)(header->header.gid),
                                    sizeof(header->header.gid));
              }
            }
          }
        }
      }
      {
        if ((int)header->header.typeflag == 52) {
          goto case_52;
        }
        if ((int)header->header.typeflag == 51) {
          goto case_52;
        }
        goto switch_default;
      case_52:  /* CIL Label */
                               
       {
        tmp___5 = gnu_dev_makedev(stat_info->devmajor, stat_info->devminor);
        stat_info->stat.st_rdev = (__dev_t)tmp___5;
      }
        goto switch_break;
      switch_default: /* CIL Label */
        stat_info->stat.st_rdev = (__dev_t)0;
      switch_break: /* CIL Label */;
      }
    }
    {
      stat_info->archive_file_size = stat_info->stat.st_size;
      xheader_decode(stat_info);
      tmp___6 = sparse_member_p(stat_info);
    }
    if (tmp___6) {
      {
        sparse_fixup_header(stat_info);
        stat_info->is_sparse = (_Bool)1;
      }
    }
    return;
  }
}
static int warned_once___0;
static struct quoting_options *o;
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
    lim = where + digs;
    negative = 0;
    where += !*where;
    {
      while (1) {
                                     ;
        if ((unsigned long)where == (unsigned long)lim) {
          if (type) {
            {
              tmp = gettext("Blanks in header where numeric %s value expected");
              error(0, 0, (char const *)tmp, type);
              exit_status = 2;
            }
          }
          return ((uintmax_t)-1);
        }
        { tmp___0 = __ctype_b_loc(); }
        if (!((int const) * (*tmp___0 + (int)((unsigned char)*where)) & 8192)) {
          goto while_break;
        }
        where++;
      }
    while_break: /* CIL Label */;
    }
    value = (uintmax_t)0;
    if ((unsigned int)*where - 48U <= 7U) {
      where1 = where;
      overflow = (uintmax_t)0;
      {
        while (1) {
                                           ;
          tmp___1 = where;
          where++;
          value += (uintmax_t)((int const) * tmp___1 - 48);
          if ((unsigned long)where == (unsigned long)lim) {
            goto while_break___0;
          } else {
            if (!((unsigned int)*where - 48U <= 7U)) {
              goto while_break___0;
            }
          }
          overflow |= value ^ ((value << 3) >> 3);
          value <<= 3;
        }
      while_break___0: /* CIL Label */;
      }
      if (overflow) {
        goto _L___3;
      } else {
        if (maxval < value) {
        _L___3: /* CIL Label */
          if (50 <= (int)*where1) {
            if (type) {
              digit = (int)(((int const) * where1 - 48) | 4);
              overflow = (uintmax_t)0;
              value = (uintmax_t)0;
              where = where1;
              {
                while (1) {
                                                   ;
                  value += (uintmax_t)(7 - digit);
                  where++;
                  if ((unsigned long)where == (unsigned long)lim) {
                    goto while_break___1;
                  } else {
                    if (!((unsigned int)*where - 48U <= 7U)) {
                      goto while_break___1;
                    }
                  }
                  digit = (int)((int const) * where - 48);
                  overflow |= value ^ ((value << 3) >> 3);
                  value <<= 3;
                }
              while_break___1: /* CIL Label */;
              }
              value++;
              overflow |= (unsigned long)(!value);
              if (!overflow) {
                if (value <= minus_minval) {
                  {
                    tmp___2 = gettext("Archive octal value %.*s is out of %s "
                                      "range; assuming two\'s complement");
                    error(0, 0, (char const *)tmp___2, (int)(where - where1),
                          where1, type);
                    negative = 1;
                  }
                }
              }
            }
          }
        }
      }
      if (overflow) {
        if (type) {
          {
            tmp___3 = gettext("Archive octal value %.*s is out of %s range");
            error(0, 0, (char const *)tmp___3, (int)(where - where1), where1,
                  type);
            exit_status = 2;
          }
        }
        return ((uintmax_t)-1);
      }
    } else {
      if ((int const) * where == 45) {
        goto _L___5;
      } else {
        if ((int const) * where == 43) {
        _L___5: /* CIL Label */
          if (!warned_once___0) {
            {
              warned_once___0 = 1;
              tmp___4 = gettext("Archive contains obsolescent base-64 headers");
              error(0, 0, (char const *)tmp___4);
            }
          }
          tmp___5 = where;
          where++;
          negative = (int const) * tmp___5 == 45;
          {
            while (1) {
                                               ;
              if ((unsigned long)where != (unsigned long)lim) {
                dig = (int)base64_map[(unsigned char)*where];
                if (!(dig < 64)) {
                  goto while_break___2;
                }
              } else {
                goto while_break___2;
              }
              if ((value << 6) >> 6 != value) {
                {
                  tmp___6 = __builtin_alloca(digs + 1UL);
                  string = (char *)tmp___6;
                  memcpy((void * /* __restrict  */)string,
                         (void const * /* __restrict  */)where0, digs);
                  *(string + digs) = (char)'\000';
                }
                if (type) {
                  {
                    tmp___7 = quote((char const *)string);
                    tmp___8 = gettext(
                        "Archive signed base-64 string %s is out of %s range");
                    error(0, 0, (char const *)tmp___8, tmp___7, type);
                    exit_status = 2;
                  }
                }
                return ((uintmax_t)-1);
              }
              value = (value << 6) | (unsigned long)dig;
              where++;
            }
          while_break___2: /* CIL Label */;
          }
        } else {
          if ((int const) * where == -128) {
            goto _L___4;
          } else {
            if ((int const) * where == -1) {
            _L___4: /* CIL Label */
              signbit = (int)((int const) * where & (int const)(1 << 6));
              topbits = (uintmax_t)(-signbit)
                        << ((8UL * sizeof(uintmax_t) - 8UL) - 6UL);
              tmp___9 = where;
              where++;
              value = (uintmax_t)(
                  ((int const) * tmp___9 & (int const)((1 << 6) - 1)) -
                  (int const)signbit);
              {
                while (1) {
                                                   ;
                  tmp___10 = where;
                  where++;
                  value = (value << 8) + (uintmax_t)((unsigned char)*tmp___10);
                  if ((unsigned long)where == (unsigned long)lim) {
                    goto while_break___3;
                  }
                  if ((((value << 8) >> 8) | topbits) != value) {
                    if (type) {
                      {
                        tmp___11 = gettext(
                            "Archive base-256 value is out of %s range");
                        error(0, 0, (char const *)tmp___11, type);
                        exit_status = 2;
                      }
                    }
                    return ((uintmax_t)-1);
                  }
                }
              while_break___3: /* CIL Label */;
              }
              negative = signbit;
              if (negative) {
                value = -value;
              }
            }
          }
        }
      }
    }
    if ((unsigned long)where != (unsigned long)lim) {
      if (*where) {
        {
          tmp___13 = __ctype_b_loc();
        }
        if (!((int const) * (*tmp___13 + (int)((unsigned char)*where)) &
              8192)) {
          if (type) {
            if (!o) {
              {
                o = clone_quoting_options((struct quoting_options *)0);
                set_quoting_style(o, (enum quoting_style)5);
              }
            }
            {
              while (1) {
                                                 ;
                if ((unsigned long)where0 != (unsigned long)lim) {
                  if (!(!*(lim + -1))) {
                    goto while_break___4;
                  }
                } else {
                  goto while_break___4;
                }
                lim--;
              }
            while_break___4: /* CIL Label */;
            }
            {
              quotearg_buffer(buf, sizeof(buf), where0, (size_t)(lim - where),
                              (struct quoting_options const *)o);
              tmp___12 = gettext(
                  "Archive contains %.*s where numeric %s value expected");
              error(0, 0, (char const *)tmp___12, (int)sizeof(buf), buf, type);
              exit_status = 2;
            }
          }
          return ((uintmax_t)-1);
        }
      }
    }
    if (negative) {
      tmp___19 = minus_minval;
    } else {
      tmp___19 = maxval;
    }
    if (value <= tmp___19) {
      if (negative) {
        tmp___18 = -value;
      } else {
        tmp___18 = value;
      }
      return (tmp___18);
    }
    if (type) {
      {
        tmp___14 = stringify_uintmax_t_backwards(
            minus_minval,
            (minval_buf + 1) +
                ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL));
        minval_string = tmp___14;
        tmp___15 = stringify_uintmax_t_backwards(
            value,
            (value_buf + 1) +
                ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL));
        value_string = tmp___15;
      }
      if (negative) {
        value_string--;
        *value_string = (char)'-';
      }
      if (minus_minval) {
        minval_string--;
        *minval_string = (char)'-';
      }
      {
        tmp___16 = stringify_uintmax_t_backwards(
            maxval,
            maxval_buf +
                ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL));
        tmp___17 = gettext("Archive value %s is out of %s range %s.%s");
        error(0, 0, (char const *)tmp___17, value_string, type, minval_string,
              tmp___16);
        exit_status = 2;
      }
    }
    return ((uintmax_t)-1);
  }
}
gid_t gid_from_header(char const *p, size_t s) {









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
      tmp = from_header(p, s, "mode_t", -((uintmax_t)((mode_t)0)),
                        0xffffffffffffffffUL);
      u = (unsigned int)tmp;
    }
    if (u & 2048U) {
      tmp___0 = 2048;
    } else {
      tmp___0 = 0;
    }
    if (u & 1024U) {
      tmp___1 = 1024;
    } else {
      tmp___1 = 0;
    }
    if (u & 512U) {
      tmp___2 = 512;
    } else {
      tmp___2 = 0;
    }
    if (u & 256U) {
      tmp___3 = 256;
    } else {
      tmp___3 = 0;
    }
    if (u & 128U) {
      tmp___4 = 128;
    } else {
      tmp___4 = 0;
    }
    if (u & 64U) {
      tmp___5 = 64;
    } else {
      tmp___5 = 0;
    }
    if (u & 32U) {
      tmp___6 = 256 >> 3;
    } else {
      tmp___6 = 0;
    }
    if (u & 16U) {
      tmp___7 = 128 >> 3;
    } else {
      tmp___7 = 0;
    }
    if (u & 8U) {
      tmp___8 = 64 >> 3;
    } else {
      tmp___8 = 0;
    }
    if (u & 4U) {
      tmp___9 = (256 >> 3) >> 3;
    } else {
      tmp___9 = 0;
    }
    if (u & 2U) {
      tmp___10 = (128 >> 3) >> 3;
    } else {
      tmp___10 = 0;
    }
    if (u & 1U) {
      tmp___11 = (64 >> 3) >> 3;
    } else {
      tmp___11 = 0;
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
size_t size_from_header(char const *p, size_t s) {






}
time_t time_from_header(char const *p, size_t s) {
  uintmax_t tmp;
                   
  {
    {
      tmp = from_header(
          p, s, "time_t", -((uintmax_t)(-1L << (sizeof(time_t) * 8UL - 1UL))),
          (uintmax_t)(-1L - (-1L << (sizeof(time_t) * 8UL - 1UL))));
    }
    return ((time_t)tmp);
  }
}
uid_t uid_from_header(char const *p, size_t s) {









}
uintmax_t uintmax_from_header(char const *p, size_t s) {








}
char *stringify_uintmax_t_backwards(uintmax_t o___0, char *buf) {

















}
static char buffer[27UL];
char const *tartime(time_t t) {






















































}
static int ugswidth = 18;
void print_header(struct tar_stat_info *st, off_t block_ordinal) {



























































































































































































































































































































































































































































































}
void print_for_mkdir(char *pathname, int length, mode_t mode) {
  char modes[11];
  char buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  off_t tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
                    
                    
                    
                    
  {
    if (verbose_option > 1) {
      {
        modes[0] = (char)'d';
        decode_mode(mode, modes + 1);
      }
      if (block_number_option) {
        {
          tmp = current_block_ordinal();
          tmp___0 = stringify_uintmax_t_backwards(
              (uintmax_t)tmp,
              buf +
                  ((((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL));
          tmp___1 = gettext("block %s: ");
          fprintf((FILE * /* __restrict  */) stdlis,
                  (char const * /* __restrict  */)tmp___1, tmp___0);
        }
      }
      {
        tmp___2 = quotearg((char const *)pathname);
        tmp___3 = gettext("Creating directory:");
        fprintf((FILE * /* __restrict  */) stdlis,
                (char const * /* __restrict  */) "%s %*s %.*s\n", modes,
                ugswidth + 18, tmp___3, length, tmp___2);
      }
    }
    return;
  }
}
void skip_file(off_t size) {
  union block *x;
            
                   
  {
                              


     
    {
      while (1) {
                                     ;
        if (!(size > 0L)) {
          goto while_break;
        }
        { x = find_next_block(); }
                 
           



           
         
        {
          set_next_block_after(x);
          size -= 512L;
        }
                                  

         
      }
    while_break: /* CIL Label */;
    }
    return;
  }
}
void skip_member(void) {
  char save_typeflag;
  _Bool tmp;
  {
    {
      save_typeflag = current_header->header.typeflag;
      set_next_block_after(current_header);
      assign_string(&save_name, (char const *)current_stat_info.file_name);
      tmp = sparse_member_p(&current_stat_info);
    }
    if (tmp) {
      {
        sparse_skip_file(&current_stat_info);
      }
    } else {
      if ((int)save_typeflag != 53) {
        {
          skip_file(current_stat_info.stat.st_size);
        }
      }
    }
    return;
  }
}
/* #pragma merger("0","008.mangle.o.i","") */
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        rename)(char const *__old,
                                                char const *__new);
void extract_mangle(void) {




































































































































































































































}
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
enum backup_type backup_type;
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
    if (*string) {
      {
        free((void *)*string);
      }
    }
    if (value) {
      {
        tmp = xstrdup(value);
        *string = tmp;
      }
    } else {
      *string = (char *)0;
    }
    return;
  }
}
char *quote_copy_string(char const *string) {















































































}
int unquote_string(char *string) {
  int result;
  char *source;
  char *destination;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  int value;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  char *tmp___9;
  char *tmp___10;
  char *tmp___11;
  char *tmp___12;
  char *tmp___13;
  char *tmp___14;
  char *tmp___15;
  char *tmp___16;
  {
    result = 1;
    source = string;
    destination = string;
    {
      while (1) {
                                     ;
        if (!*source) {
          goto while_break;
        }
        if ((int)*source == 92) {
          source++;
          {
            if ((int)*source == 92) {
              goto case_92;
            }
            if ((int)*source == 110) {
              goto case_110;
            }
            if ((int)*source == 116) {
              goto case_116;
            }
            if ((int)*source == 102) {
              goto case_102;
            }
            if ((int)*source == 98) {
              goto case_98;
            }
            if ((int)*source == 114) {
              goto case_114;
            }
            if ((int)*source == 63) {
              goto case_63;
            }
            if ((int)*source == 48) {
              goto case_48;
            }
            if ((int)*source == 49) {
              goto case_48;
            }
            if ((int)*source == 50) {
              goto case_48;
            }
            if ((int)*source == 51) {
              goto case_48;
            }
            if ((int)*source == 52) {
              goto case_48;
            }
            if ((int)*source == 53) {
              goto case_48;
            }
            if ((int)*source == 54) {
              goto case_48;
            }
            if ((int)*source == 55) {
              goto case_48;
            }
            goto switch_default;
          case_92: /* CIL Label */
            tmp = destination;
            destination++;
            *tmp = (char)'\\';
            source++;
            goto switch_break;
          case_110: /* CIL Label */
            tmp___0 = destination;
            destination++;
            *tmp___0 = (char)'\n';
            source++;
            goto switch_break;
          case_116: /* CIL Label */
            tmp___1 = destination;
            destination++;
            *tmp___1 = (char)'\t';
            source++;
            goto switch_break;
          case_102: /* CIL Label */
            tmp___2 = destination;
            destination++;
            *tmp___2 = (char)'\f';
            source++;
            goto switch_break;
          case_98: /* CIL Label */
            tmp___3 = destination;
            destination++;
            *tmp___3 = (char)'\b';
            source++;
            goto switch_break;
          case_114: /* CIL Label */
            tmp___4 = destination;
            destination++;
            *tmp___4 = (char)'\r';
            source++;
            goto switch_break;
          case_63: /* CIL Label */
            tmp___5 = destination;
            destination++;
            *tmp___5 = (char)127;
            source++;
            goto switch_break;
          case_48: /* CIL Label */
                                  
                                   
                                   
                                   
                                   
                                   
                                   
             tmp___6 = source;
            source++;
            value = (int)*tmp___6 - 48;
            if ((int)*source < 48) {
              tmp___7 = destination;
              destination++;
              *tmp___7 = (char)value;
              goto switch_break;
            } else {
              if ((int)*source > 55) {
                tmp___7 = destination;
                destination++;
                *tmp___7 = (char)value;
                goto switch_break;
              }
            }
            tmp___8 = source;
            source++;
            value = (value * 8 + (int)*tmp___8) - 48;
            if ((int)*source < 48) {
              tmp___9 = destination;
              destination++;
              *tmp___9 = (char)value;
              goto switch_break;
            } else {
              if ((int)*source > 55) {
                tmp___9 = destination;
                destination++;
                *tmp___9 = (char)value;
                goto switch_break;
              }
            }
            tmp___10 = source;
            source++;
            value = (value * 8 + (int)*tmp___10) - 48;
            tmp___11 = destination;
            destination++;
            *tmp___11 = (char)value;
            goto switch_break;
          switch_default: /* CIL Label */
            result = 0;
            tmp___12 = destination;
            destination++;
            *tmp___12 = (char)'\\';
            if (*source) {
              tmp___13 = destination;
              destination++;
              tmp___14 = source;
              source++;
              *tmp___13 = *tmp___14;
            }
            goto switch_break;
          switch_break: /* CIL Label */;
          }
        } else {
          if ((unsigned long)source != (unsigned long)destination) {
            tmp___15 = destination;
            destination++;
            tmp___16 = source;
            source++;
            *tmp___15 = *tmp___16;
          } else {
            source++;
            destination++;
          }
        }
      }
    while_break: /* CIL Label */;
    }
    if ((unsigned long)source != (unsigned long)destination) {
      *destination = (char)'\000';
    }
    return (result);
  }
}
static char *before_backup_name;
static char *after_backup_name;
static _Bool must_be_dot_or_slash(char const *path) {


































































}
static int safer_rmdir(char const *path) {















}
int remove_any_file(char const *path, enum remove_option option) {










































































































































}
_Bool maybe_backup_file(char const *path, int this_is_the_archive) {




































































































}
void undo_last_backup(void) {









































}
int deref_stat(_Bool deref, char const *name, struct stat *buf) {
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    if (deref) {
      {
        tmp = stat((char const * /* __restrict  */)name,
                   (struct stat * /* __restrict  */) buf);
        tmp___1 = tmp;
      }
    } else {
      {
        tmp___0 = lstat((char const * /* __restrict  */)name,
                        (struct stat * /* __restrict  */) buf);
        tmp___1 = tmp___0;
      }
    }
    return (tmp___1);
  }
}
static struct wd *wd;
static size_t wds;
static size_t wd_alloc;
int chdir_arg(char const *dir) {
  void *tmp;
  size_t tmp___0;
                   
  {
    if (wds == wd_alloc) {
      {
        wd_alloc = 2UL * (wd_alloc + 1UL);
        tmp = xrealloc((void *)wd, sizeof(*wd) * wd_alloc);
        wd = (struct wd *)tmp;
      }
      if (!wds) {
        (wd + wds)->name = ".";
        (wd + wds)->saved = 0;
        wds++;
      }
    }
    if (*(dir + 0)) {
      {
        while (1) {
                                       ;
          if ((int const) * (dir + 0) == 46) {
            if (!((int const) * (dir + 1) == 47)) {
              goto while_break;
            }
          } else {
            goto while_break;
          }
          dir += 2;
          {
            while (1) {
                                               ;
              if (!((int const) * dir == 47)) {
                goto while_break___0;
              }
              goto __Cont;
            __Cont:
              dir++;
            }
          while_break___0: /* CIL Label */;
          }
        }
      while_break: /* CIL Label */;
      }
      if (!*(dir + ((int const) * (dir + 0) == 46))) {
        return ((int)(wds - 1UL));
      }
    }
    (wd + wds)->name = dir;
    (wd + wds)->saved = 0;
    tmp___0 = wds;
    wds++;
    return ((int)tmp___0);
  }
}
static int previous;
void chdir_do(int i) {
  struct wd *prev;
  struct wd *curr;
  char *tmp;
  int tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
                   
                    
  {
    if (previous != i) {
      prev = wd + previous;
      curr = wd + i;
      if (!prev->saved) {
        {
          prev->saved = 1;
          tmp___0 = save_cwd(&prev->saved_cwd);
        }
        if (tmp___0 != 0) {
          {
            tmp = gettext("Cannot save working directory");
            error(0, 0, (char const *)tmp);
            fatal_exit();
          }
        }
      }
      if (curr->saved) {
        {
          tmp___2 = restore_cwd((struct saved_cwd const *)(&curr->saved_cwd));
        }
        if (tmp___2) {
          {
            tmp___1 = gettext("Cannot change working directory");
            error(0, 0, (char const *)tmp___1);
            fatal_exit();
          }
        }
      } else {
        if (i) {
          if (!((int const) * (curr->name + 0) == 47)) {
            {
              chdir_do(i - 1);
            }
          }
        }
        { tmp___3 = chdir(curr->name); }
        if (tmp___3 != 0) {
          {
            chdir_fatal(curr->name);
          }
        }
      }
      previous = i;
    }
    return;
  }
}
void decode_mode(mode_t mode, char *string) {


































































































































}
static void call_arg_error(char const *call, char const *name) {
















}
static __attribute__((__noreturn__)) void call_arg_fatal(char const *call,
                                                         char const *name);
static void call_arg_fatal(char const *call, char const *name) {















}
static void call_arg_warn(char const *call, char const *name) {















}
__attribute__((__noreturn__)) void chdir_fatal(char const *name);
void chdir_fatal(char const *name) {




}
void chmod_error_details(char const *name, mode_t mode) {



















}
void chown_error_details(char const *name, uid_t uid, gid_t gid) {

















}
void close_error(char const *name) {





}
void close_warn(char const *name) {





}
void close_diag(char const *name) {










}
__attribute__((__noreturn__)) void exec_fatal(char const *name);
void exec_fatal(char const *name) {




}
void link_error(char const *target, char const *source) {


















}
void mkdir_error(char const *name) {





}
void mkfifo_error(char const *name) {





}
void mknod_error(char const *name) {





}
void open_error(char const *name) {





}
__attribute__((__noreturn__)) void open_fatal(char const *name);
void open_fatal(char const *name) {




}
void open_warn(char const *name) {





}
void open_diag(char const *name) {










}
void read_error(char const *name) {





}
void read_error_details(char const *name, off_t offset, size_t size) {






















}
void read_warn_details(char const *name, off_t offset, size_t size) {






















}
void read_diag_details(char const *name, off_t offset, size_t size) {










}
__attribute__((__noreturn__)) void read_fatal(char const *name);
void read_fatal(char const *name) {




}
__attribute__((__noreturn__)) void
read_fatal_details(char const *name, off_t offset, size_t size);
void read_fatal_details(char const *name, off_t offset, size_t size) {





















}
void readlink_error(char const *name) {





}
void readlink_warn(char const *name) {





}
void readlink_diag(char const *name) {










}
void savedir_error(char const *name) {





}
void savedir_warn(char const *name) {





}
void savedir_diag(char const *name) {










}
void seek_error(char const *name) {





}
void seek_error_details(char const *name, off_t offset) {






















}
void seek_warn(char const *name) {





}
void seek_warn_details(char const *name, off_t offset) {





















}
void seek_diag_details(char const *name, off_t offset) {










}
void symlink_error(char const *contents, char const *name) {


















}
void stat_error(char const *name) {





}
void stat_warn(char const *name) {





}
void stat_diag(char const *name) {










}
void truncate_error(char const *name) {





}
void truncate_warn(char const *name) {





}
void unlink_error(char const *name) {





}
void utime_error(char const *name) {





}
void waitpid_error(char const *name) {





}
void write_error(char const *name) {





}
void write_error_details(char const *name, size_t status, size_t size) {
















}
__attribute__((__noreturn__)) void
write_fatal_details(char const *name, ssize_t status, size_t size);
void write_fatal_details(char const *name, ssize_t status, size_t size) {






}
pid_t xfork(void) {
  pid_t p;
  __pid_t tmp;
                
                   
                   
  {
    {
      tmp = fork();
      p = tmp;
    }
                  
       


       
     
    return (p);
  }
}
void xpipe(int *fd) {
            
  int tmp___0;
                   
                   
  {
    { tmp___0 = pipe(fd); }
                      
       


       
     
    return;
  }
}
char const *quote_n(int n, char const *name) {





}
char const *quote(char const *name) {





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
_Bool same_order_option;
_Bool starting_file_option;
void init_names(void);
void name_add(char const *name);
void name_init(void);
void name_term(void);
void name_close(void);
struct name *addname(char const *string, int change_dir___0);
void add_avoided_name(char const *name);
void request_stdin(char const *option);
static char *cached_uname;
static char *cached_gname;
static uid_t cached_uid;
static gid_t cached_gid;
static char *cached_no_such_uname;
static char *cached_no_such_gname;
static uid_t cached_no_such_uid;
static gid_t cached_no_such_gid;
void uid_to_uname(uid_t uid, char **uname) {
  struct passwd *passwd;
                   
                   
  {
    if (uid != 0U) {
      if (uid == cached_no_such_uid) {
        {
          *uname = strdup("");
        }
        return;
      }
    }
    if (!cached_uname) {
      goto _L___3;
    } else {
      if (uid != cached_uid) {
      _L___3 : /* CIL Label */
      {
        passwd = getpwuid(uid);
      }
        if (passwd) {
          {
            cached_uid = uid;
            assign_string(&cached_uname, (char const *)passwd->pw_name);
          }
        } else {
          {
            cached_no_such_uid = uid;
            *uname = strdup("");
          }
          return;
        }
      }
    }
    { *uname = strdup((char const *)cached_uname); }
    return;
  }
}
void gid_to_gname(gid_t gid, char **gname) {
  struct group *group;
                   
                   
  {
    if (gid != 0U) {
      if (gid == cached_no_such_gid) {
        {
          *gname = strdup("");
        }
        return;
      }
    }
    if (!cached_gname) {
      goto _L___3;
    } else {
      if (gid != cached_gid) {
      _L___3 : /* CIL Label */
      {
        group = getgrgid(gid);
      }
        if (group) {
          {
            cached_gid = gid;
            assign_string(&cached_gname, (char const *)group->gr_name);
          }
        } else {
          {
            cached_no_such_gid = gid;
            *gname = strdup("");
          }
          return;
        }
      }
    }
    { *gname = strdup((char const *)cached_gname); }
    return;
  }
}
int uname_to_uid(char const *uname, uid_t *uidp) {
  struct passwd *passwd;
  int tmp;
  int tmp___0;
  {
    if (cached_no_such_uname) {
      {
        tmp = strcmp(uname, (char const *)cached_no_such_uname);
      }
      if (tmp == 0) {
        return (0);
      }
    }
    if (!cached_uname) {
      goto _L;
    } else {
      if ((int const) * (uname + 0) != (int const) * (cached_uname + 0)) {
        goto _L;
      } else {
        { tmp___0 = strcmp(uname, (char const *)cached_uname); }
        if (tmp___0 != 0) {
        _L : { passwd = getpwnam(uname); }
          if (passwd) {
            {
              cached_uid = passwd->pw_uid;
              assign_string(&cached_uname, (char const *)passwd->pw_name);
            }
          } else {
            { assign_string(&cached_no_such_uname, uname); }
            return (0);
          }
        }
      }
    }
    *uidp = cached_uid;
    return (1);
  }
}
int gname_to_gid(char const *gname, gid_t *gidp) {
  struct group *group;
  int tmp;
  int tmp___0;
  {
    if (cached_no_such_gname) {
      {
        tmp = strcmp(gname, (char const *)cached_no_such_gname);
      }
      if (tmp == 0) {
        return (0);
      }
    }
    if (!cached_gname) {
      goto _L;
    } else {
      if ((int const) * (gname + 0) != (int const) * (cached_gname + 0)) {
        goto _L;
      } else {
        { tmp___0 = strcmp(gname, (char const *)cached_gname); }
        if (tmp___0 != 0) {
        _L : { group = getgrnam(gname); }
          if (group) {
            {
              cached_gid = group->gr_gid;
              assign_string(&cached_gname, gname);
            }
          } else {
            { assign_string(&cached_no_such_gname, gname); }
            return (0);
          }
        }
      }
    }
    *gidp = cached_gid;
    return (1);
  }
}
static struct name *namelist;
static struct name **nametail = &namelist;
static char const **name_array;
static int allocated_names;
static int names;
static int name_index;
void init_names(void) {
  void *tmp;
  {
    {
      allocated_names = 10;
      tmp = xmalloc(sizeof(char const *) * (unsigned long)allocated_names);
      name_array = (char const **)tmp;
      names = 0;
    }
    return;
  }
}
void name_add(char const *name) {
  void *tmp;
  int tmp___0;
  {
    if (names == allocated_names) {
      {
        allocated_names *= 2;
        tmp = xrealloc((void *)name_array,
                       sizeof(char const *) * (unsigned long)allocated_names);
        name_array = (char const **)tmp;
      }
    }
    tmp___0 = names;
    names++;
    *(name_array + tmp___0) = name;
    return;
  }
}
static FILE *name_file;
static char *name_buffer;
static size_t name_buffer_length;
__inline static int is_pattern(char const *string) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  int tmp___2;
  {
    { tmp = strchr(string, '*'); }
    if (tmp) {
      tmp___2 = 1;
    } else {
      { tmp___0 = strchr(string, '['); }
      if (tmp___0) {
        tmp___2 = 1;
      } else {
        { tmp___1 = strchr(string, '?'); }
        if (tmp___1) {
          tmp___2 = 1;
        } else {
          tmp___2 = 0;
        }
      }
    }
    return (tmp___2);
  }
}
void name_init(void) {
  void *tmp;
  int tmp___0;
                   
  {
    {
      tmp = xmalloc((size_t)102);
      name_buffer = (char *)tmp;
      name_buffer_length = (size_t)100;
    }
    if (files_from_option) {
      {
        tmp___0 = strcmp(files_from_option, "-");
      }
      if (tmp___0) {
        {
          name_file = fopen((char const * /* __restrict  */)files_from_option,
                            (char const * /* __restrict  */) "r");
        }
        if (!name_file) {
          {
            open_fatal(files_from_option);
          }
        }
      } else {
        {
          request_stdin("-T");
          name_file = stdin;
        }
      }
    }
    return;
  }
}
void name_term(void) {
  {
    {
      free((void *)name_buffer);
      free((void *)name_array);
    }
    return;
  }
}
static int read_name_from_file(void) {
























































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
    chdir_flag = 0;
    if ((int)filename_terminator == 0) {
      change_dirs = 0;
    }
    {
      while (1) {
                                     ;
        if (name_index == names) {
          if (!name_file) {
            goto while_break;
          }
          { tmp = read_name_from_file(); }
          if (!tmp) {
            goto while_break;
          }
        } else {
          {
            tmp___0 = name_index;
            name_index++;
            source = *(name_array + tmp___0);
            source_len = strlen(source);
          }
          if (name_buffer_length < source_len) {
            {
              while (1) {
                                                 ;
                name_buffer_length *= 2UL;
                if (!name_buffer_length) {
                  {
                    xalloc_die();
                  }
                }
                if (!(name_buffer_length < source_len)) {
                  goto while_break___0;
                }
              }
            while_break___0: /* CIL Label */;
            }
            {
              free((void *)name_buffer);
              tmp___1 = xmalloc(name_buffer_length + 2UL);
              name_buffer = (char *)tmp___1;
            }
          }
          {
            strcpy((char * /* __restrict  */)name_buffer,
                   (char const * /* __restrict  */)source);
          }
        }
        {
          tmp___2 = strlen((char const *)name_buffer);
          cursor = (name_buffer + tmp___2) - 1;
        }
        {
          while (1) {
                                             ;
            if ((unsigned long)cursor > (unsigned long)name_buffer) {
              if (!((int)*cursor == 47)) {
                goto while_break___1;
              }
            } else {
              goto while_break___1;
            }
            tmp___3 = cursor;
            cursor--;
            *tmp___3 = (char)'\000';
          }
        while_break___1: /* CIL Label */;
        }
        if (chdir_flag) {
          {
            tmp___4 = chdir((char const *)name_buffer);
          }
          if (tmp___4 < 0) {
            {
              chdir_fatal((char const *)name_buffer);
            }
          }
          chdir_flag = 0;
        } else {
          if (change_dirs) {
            {
              tmp___5 = strcmp((char const *)name_buffer, "-C");
            }
            if (tmp___5 == 0) {
              chdir_flag = 1;
            } else {
              { unquote_string(name_buffer); }
              return (name_buffer);
            }
          } else {
            { unquote_string(name_buffer); }
            return (name_buffer);
          }
        }
      }
    while_break: /* CIL Label */;
    }
    if (name_file) {
      if (chdir_flag) {
        {
          tmp___6 = gettext("Missing file name after -C");
          error(0, 0, (char const *)tmp___6);
          fatal_exit();
        }
      }
    }
    return ((char *)0);
  }
}
void name_close(void) {
  int tmp;
  {
    if (name_file) {
      if ((unsigned long)name_file != (unsigned long)stdin) {
        {
          tmp = fclose(name_file);
        }
        if (tmp != 0) {
          {
            close_error((char const *)name_buffer);
          }
        }
      }
    }
    return;
  }
}
static struct name *buffer___0;
static size_t allocated_size;
static int change_dir;
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
    if (same_order_option) {
      if (allocated_size == 0UL) {
        {
          allocated_size =
              ((unsigned long)(&((struct name *)0)->name) + 100UL) + 1UL;
          tmp = xmalloc(allocated_size);
          buffer___0 = (struct name *)tmp;
          memset((void *)buffer___0, 0, allocated_size);
        }
      }
      {
        while (1) {
                                       ;
          {
            tmp___3 = name_next(0);
            name = (char const *)tmp___3;
          }
          if (name) {
            {
              tmp___4 = strcmp(name, "-C");
            }
            if (!(tmp___4 == 0)) {
              goto while_break;
            }
          } else {
            goto while_break;
          }
          {
            tmp___0 = name_next(0);
            dir = (char const *)tmp___0;
          }
          if (!dir) {
            {
              tmp___1 = gettext("Missing file name after -C");
              error(0, 0, (char const *)tmp___1);
              fatal_exit();
            }
          }
          {
            tmp___2 = xstrdup(dir);
            change_dir = chdir_arg((char const *)tmp___2);
          }
        }
      while_break: /* CIL Label */;
      }
      if (name) {
        {
          buffer___0->length = strlen(name);
          needed_size = ((unsigned long)(&((struct name *)0)->name) +
                         buffer___0->length) +
                        1UL;
        }
        if (allocated_size < needed_size) {
          {
            while (1) {
                                               ;
              allocated_size *= 2UL;
              if (!allocated_size) {
                {
                  xalloc_die();
                }
              }
              if (!(allocated_size < needed_size)) {
                goto while_break___0;
              }
            }
          while_break___0: /* CIL Label */;
          }
          {
            tmp___5 = xrealloc((void *)buffer___0, allocated_size);
            buffer___0 = (struct name *)tmp___5;
          }
        }
        {
          buffer___0->change_dir = change_dir;
          strcpy((char * /* __restrict  */)(buffer___0->name),
                 (char const * /* __restrict  */)name);
          buffer___0->next = (struct name *)0;
          buffer___0->found_count = (uintmax_t)0;
          namelist = buffer___0;
          nametail = &namelist->next;
        }
      } else {
        if (change_dir) {
          {
            addname((char const *)0, change_dir);
          }
        }
      }
    } else {
      change_dir___0 = 0;
      {
        while (1) {
                                           ;
          change_dir0 = change_dir___0;
          {
            while (1) {
                                               ;
              {
                tmp___9 = name_next(0);
                name = (char const *)tmp___9;
              }
              if (name) {
                {
                  tmp___10 = strcmp(name, "-C");
                }
                if (!(tmp___10 == 0)) {
                  goto while_break___2;
                }
              } else {
                goto while_break___2;
              }
              {
                tmp___6 = name_next(0);
                dir___0 = (char const *)tmp___6;
              }
              if (!dir___0) {
                {
                  tmp___7 = gettext("Missing file name after -C");
                  error(0, 0, (char const *)tmp___7);
                  fatal_exit();
                }
              }
              {
                tmp___8 = xstrdup(dir___0);
                change_dir___0 = chdir_arg((char const *)tmp___8);
              }
            }
          while_break___2: /* CIL Label */;
          }
          if (name) {
            {
              addname(name, change_dir___0);
            }
          } else {
            if (change_dir___0 != change_dir0) {
              {
                addname((char const *)0, change_dir___0);
              }
            }
            goto while_break___1;
          }
        }
      while_break___1: /* CIL Label */;
      }
    }
    return;
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
    if (string) {
      {
        tmp = strlen(string);
        tmp___0 = tmp;
      }
    } else {
      tmp___0 = (size_t)0;
    }
    {
      length = tmp___0;
      tmp___1 =
          xmalloc(((unsigned long)(&((struct name *)0)->name) + length) + 1UL);
      name = (struct name *)tmp___1;
    }
    if (string) {
      {
        name->fake = (char)0;
        strcpy((char * /* __restrict  */)(name->name),
               (char const * /* __restrict  */)string);
      }
    } else {
      name->fake = (char)1;
      name->name[0] = (char)0;
    }
    name->next = (struct name *)0;
    name->length = length;
    name->found_count = (uintmax_t)0;
    name->regexp = (char)0;
    name->firstch = (char)1;
    name->change_dir = change_dir___0;
    name->dir_contents = (char const *)0;
    if (string) {
      {
        tmp___2 = is_pattern(string);
      }
      if (tmp___2) {
        name->regexp = (char)1;
        if ((int const) * (string + 0) == 42) {
          name->firstch = (char)0;
        } else {
          if ((int const) * (string + 0) == 91) {
            name->firstch = (char)0;
          } else {
            if ((int const) * (string + 0) == 63) {
              name->firstch = (char)0;
            }
          }
        }
      }
    }
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
        if (p->firstch) {
          if ((int)p->name[0] != (int)*(path + 0)) {
            goto __Cont;
          }
        }
        if (p->regexp) {
          {
            tmp = fnmatch((char const *)(p->name), path, recursion_option);
            tmp___2 = tmp == 0;
          }
        } else {
          if (p->length <= length) {
            if ((int const) * (path + p->length) == 0) {
              goto _L___3;
            } else {
              if ((int const) * (path + p->length) == 47) {
                if (recursion_option) {
                _L___3 : /* CIL Label */
                {
                  tmp___0 = memcmp((void const *)path, (void const *)(p->name),
                                   p->length);
                }
                  if (tmp___0 == 0) {
                    tmp___1 = 1;
                  } else {
                    tmp___1 = 0;
                  }
                } else {
                  tmp___1 = 0;
                }
              } else {
                tmp___1 = 0;
              }
            }
          } else {
            tmp___1 = 0;
          }
          tmp___2 = tmp___1;
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
      while (1) {
                                     ;
        cursor = namelist;
        if (!cursor) {
          return (!files_from_option);
        }
        if (cursor->fake) {
          {
            chdir_do(cursor->change_dir);
            namelist = (struct name *)0;
            nametail = &namelist;
          }
          return (!files_from_option);
        }
        { cursor = namelist_match(path, length); }
        if (cursor) {
          if ((int const) * (path + cursor->length) == 47) {
            if (recursion_option) {
              if (cursor->found_count == 0UL) {
                (cursor->found_count)++;
              }
            } else {
              (cursor->found_count)++;
            }
          } else {
            (cursor->found_count)++;
          }
          if (starting_file_option) {
            {
              free((void *)namelist);
              namelist = (struct name *)0;
              nametail = &namelist;
            }
          }
          { chdir_do(cursor->change_dir); }
          if (occurrence_option == 0UL) {
            tmp___0 = cursor->found_count;
          } else {
            tmp___0 = (uintmax_t)(cursor->found_count == occurrence_option);
          }
          return ((int)tmp___0);
        }
        if (same_order_option) {
          if (namelist->found_count) {
            {
              name_gather();
            }
            if (namelist->found_count) {
              return (0);
            }
          } else {
            return (0);
          }
        } else {
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
    if (!p->file_name) {
      return ((_Bool)0);
    } else {
      if (occurrence_option == 0UL) {
        return ((_Bool)0);
      } else {
        if (p->had_trailing_slash) {
          return ((_Bool)0);
        }
      }
    }
    {
      len = strlen((char const *)p->file_name);
      cursor = (struct name const *)namelist;
    }
    {
      while (1) {
                                     ;
        if (!cursor) {
          goto while_break;
        }
        if (cursor->regexp) {
          return ((_Bool)0);
        } else {
          if (occurrence_option == 0UL) {
            tmp = cursor->found_count;
          } else {
            tmp = (uintmax_t const)(cursor->found_count >=
                                    (uintmax_t const)occurrence_option);
          }
          if (tmp) {
          _L___3: /* CIL Label */
            if (len >= (size_t)cursor->length) {
              if ((int)*(p->file_name + cursor->length) == 47) {
                return ((_Bool)0);
              }
            }
          } else {
            if (!cursor->fake) {
              return ((_Bool)0);
            } else {
              goto _L___3;
            }
          }
        }
        cursor = (struct name const *)cursor->next;
      }
    while_break: /* CIL Label */;
    }
    return ((_Bool)1);
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
      while (1) {
                                     ;
        if (!cursor) {
          goto while_break;
        }
        if (occurrence_option == 0UL) {
          tmp___5 = cursor->found_count;
        } else {
          tmp___5 = (uintmax_t const)(cursor->found_count >=
                                      (uintmax_t const)occurrence_option);
        }
        if (!tmp___5) {
          if (!cursor->fake) {
            if (cursor->found_count == 0UL) {
              {
                tmp = quotearg_colon((char const *)(cursor->name));
                tmp___0 = gettext("%s: Not found in archive");
                error(0, 0, (char const *)tmp___0, tmp);
                exit_status = 2;
              }
            } else {
              {
                tmp___1 = quotearg_colon((char const *)(cursor->name));
                tmp___2 =
                    gettext("%s: Required occurrence not found in archive");
                error(0, 0, (char const *)tmp___2, tmp___1);
                exit_status = 2;
              }
            }
          }
        }
        cursor = (struct name const *)cursor->next;
      }
    while_break: /* CIL Label */;
    }
    namelist = (struct name *)0;
    nametail = &namelist;
    if (same_order_option) {
      {
        while (1) {
                                           ;
          { name = name_next(1); }
          if (!((unsigned long)name != (unsigned long)((void *)0))) {
            goto while_break___0;
          }
          {
            tmp___3 = quotearg_colon((char const *)name);
            tmp___4 = gettext("%s: Not found in archive");
            error(0, 0, (char const *)tmp___4, tmp___3);
            exit_status = 2;
          }
        }
      while_break___0: /* CIL Label */;
      }
    }
    return;
  }
}
static struct name *merge_sort(struct name *list, int length,
                               int (*compare)(struct name const *,
                                              struct name const *)) {























































































}
static int compare_names(struct name const *n1, struct name const *n2) {





























}
static void add_hierarchy_to_namelist(struct name *name, dev_t device) {
























































































}
void collect_and_sort_names(void) {




























































































}
struct name *name_scan(char const *path) {









































}
char *name_from_list(void) {





























}
void blank_name_list(void) {

















}
char *new_name(char const *path, char const *name) {




































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





}
static _Bool hash_string_compare(void const *name1, void const *name2) {





}
static _Bool hash_string_insert(Hash_table **table___0, char const *string) {












































}
static _Bool hash_string_lookup(Hash_table const *table___0,
                                char const *string) {
  void *tmp;
  int tmp___0;
  {
    if (table___0) {
      {
        tmp = hash_lookup(table___0, (void const *)string);
      }
      if (tmp) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
    } else {
      tmp___0 = 0;
    }
    return ((_Bool)tmp___0);
  }
}
static Hash_table *avoided_name_table;
void add_avoided_name(char const *name) {




}
_Bool is_avoided_name(char const *name) {
  _Bool tmp;
  {
    { tmp = hash_string_lookup((Hash_table const *)avoided_name_table, name); }
    return (tmp);
  }
}
static Hash_table *prefix_table[2];
static char const *const diagnostic[2] = {
    (char const * /* const  */) "Removing leading `%s\' from member names",
    (char const
         * /* const  */) "Removing leading `%s\' from hard link targets"};
static char const *const diagnostic___0[2] = {
    (char const * /* const  */) "Substituting `.\' for empty member name",
    (char const * /* const  */) "Substituting `.\' for empty hard link target"};
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
    if (absolute_names_option) {
      p = file_name;
    } else {
      prefix_len = (size_t)0;
      p = file_name + prefix_len;
      {
        while (1) {
                                       ;
          if (!*p) {
            goto while_break;
          }
          if ((int const) * (p + 0) == 46) {
            if ((int const) * (p + 1) == 46) {
              if ((int const) * (p + 2) == 47) {
                prefix_len = (size_t)((p + 2) - file_name);
              } else {
                if (!*(p + 2)) {
                  prefix_len = (size_t)((p + 2) - file_name);
                }
              }
            }
          }
          {
            while (1) {
                                               ;
              tmp = p;
              p++;
              c = (char)*tmp;
              if ((int)c == 47) {
                goto while_break___0;
              }
              if (!*p) {
                goto while_break___0;
              }
            }
          while_break___0: /* CIL Label */;
          }
        }
      while_break: /* CIL Label */;
      }
      p = file_name + prefix_len;
      {
        while (1) {
                                           ;
          if (!((int const) * p == 47)) {
            goto while_break___1;
          }
          goto __Cont;
        __Cont:
          p++;
        }
      while_break___1: /* CIL Label */;
      }
      prefix_len = (size_t)(p - file_name);
      if (prefix_len) {
        {
          tmp___0 = __builtin_alloca(prefix_len + 1UL);
          prefix = (char *)tmp___0;
          memcpy((void * /* __restrict  */)prefix,
                 (void const * /* __restrict  */)file_name, prefix_len);
          *(prefix + prefix_len) = (char)'\000';
          tmp___2 = hash_string_insert(&prefix_table[link_target],
                                       (char const *)prefix);
        }
        if (tmp___2) {
          {
            tmp___1 = gettext((char const *)diagnostic[link_target]);
            error(0, 0, (char const *)tmp___1, prefix);
          }
        }
      }
    }
    if (!*p) {
      if ((unsigned long)p == (unsigned long)file_name) {
        {
          tmp___3 = gettext((char const *)diagnostic___0[link_target]);
          error(0, 0, (char const *)tmp___3);
        }
      }
      p = ".";
    }
    return ((char *)p);
  }
}
size_t stripped_prefix_len(char const *file_name, size_t num) {











































}
_Bool contains_dot_dot(char const *name) {





































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
char const *rmt_command_option;
void sys_reset_uid_gid(void);
size_t rmt_write__(int handle, char *buffer___2, size_t length);
static int from_remote[4][2] = {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}};
static int to_remote[4][2] = {{-1, -1}, {-1, -1}, {-1, -1}, {-1, -1}};
static void _rmt_shutdown(int handle, int errno_value) {












}
static int do_command(int handle, char const *buffer___2) {























}
static char *get_status_string(int handle, char *command_buffer) {






























































































}
static long get_status(int handle) {



























}
static off_t get_status_off(int handle) {

















































































}
static void encode_oflag(char *buf, int oflag) {













































































































}
int rmt_open__(char const *path, int open_mode, int bias,
               char const *remote_shell) {


































































































































































































































}
int rmt_close__(int handle) {
















}
size_t rmt_read__(int handle, char *buffer___2, size_t length) {
























































}
size_t rmt_write__(int handle, char *buffer___2, size_t length) {









































}
off_t rmt_lseek__(int handle, off_t offset, int whence) {








































































}
int rmt_ioctl__(int handle, int operation, char *argument) {




































































































































}
/* #pragma merger("0","00c.sparse.o.i","") */
static _Bool tar_sparse_member_p(struct tar_sparse_file *file) {
  _Bool tmp;
  {
    if ((file->optab)->sparse_member_p) {
      {
        tmp = (*((file->optab)->sparse_member_p))(file);
      }
      return (tmp);
    }
    return ((_Bool)0);
  }
}
static _Bool tar_sparse_init(struct tar_sparse_file *file) {











}
static _Bool tar_sparse_done(struct tar_sparse_file *file) {










}
static _Bool tar_sparse_scan(struct tar_sparse_file *file,
                             enum sparse_scan_state state, void *block) {










}
static _Bool tar_sparse_dump_region(struct tar_sparse_file *file, size_t i) {










}
static _Bool tar_sparse_extract_region(struct tar_sparse_file *file, size_t i) {










}
static _Bool tar_sparse_dump_header(struct tar_sparse_file *file) {










}
static _Bool tar_sparse_decode_header(struct tar_sparse_file *file) {










}
static _Bool tar_sparse_fixup_header(struct tar_sparse_file *file) {










}
static _Bool lseek_or_error(struct tar_sparse_file *file, off_t offset,
                            int whence) {












}
static _Bool zero_block_p(char *buffer___2, size_t size) {





















}
static void sparse_add_map(struct tar_sparse_file *file, struct sp_array *sp) {




























}
static char buffer___1[512];
static _Bool sparse_scan_file(struct tar_sparse_file *file) {























































































}
static struct tar_sparse_optab oldgnu_optab;
static struct tar_sparse_optab star_optab;
static struct tar_sparse_optab pax_optab;
static _Bool sparse_select_optab(struct tar_sparse_file *file) {
  unsigned int tmp;
  {
    if ((unsigned int)current_format == 0U) {
      tmp = (unsigned int)archive_format;
    } else {
      tmp = (unsigned int)current_format;
    }
    {
      if (tmp == 1U) {
        goto case_1;
      }
      if (tmp == 3U) {
        goto case_1;
      }
      if (tmp == 2U) {
        goto case_2;
      }
      if (tmp == 6U) {
        goto case_2;
      }
      if (tmp == 4U) {
        goto case_4;
      }
      if (tmp == 5U) {
        goto case_5;
      }
      goto switch_default;
    case_1: /* CIL Label */
                           
       return ((_Bool)0);
    case_2: /* CIL Label */
                           
       file->optab = &oldgnu_optab;
      goto switch_break;
    case_4: /* CIL Label */
      file->optab = &pax_optab;
      goto switch_break;
    case_5: /* CIL Label */
      file->optab = &star_optab;
      goto switch_break;
    switch_default: /* CIL Label */
      return ((_Bool)0);
    switch_break: /* CIL Label */;
    }
    return ((_Bool)1);
  }
}
static _Bool sparse_dump_region(struct tar_sparse_file *file, size_t i) {





















































}
static _Bool sparse_extract_region(struct tar_sparse_file *file, size_t i) {







































































}
enum dump_status sparse_dump_file(int fd, struct tar_stat_info *st) {



































































}
_Bool sparse_file_p(struct tar_stat_info *st) {





}
_Bool sparse_member_p(struct tar_stat_info *st) {
  struct tar_sparse_file file;
  _Bool tmp;
  _Bool tmp___0;
  {
    { tmp = sparse_select_optab(&file); }
    if (!tmp) {
      return ((_Bool)0);
    }
    {
      file.stat_info = st;
      tmp___0 = tar_sparse_member_p(&file);
    }
    return (tmp___0);
  }
}
_Bool sparse_fixup_header(struct tar_stat_info *st) {














}
enum dump_status sparse_extract_file(int fd, struct tar_stat_info *st,
                                     off_t *size) {





























































}
enum dump_status sparse_skip_file(struct tar_stat_info *st) {







































}
static char diff_buffer___0[512];
static _Bool check_sparse_region(struct tar_sparse_file *file, off_t beg,
                                 off_t end) {














































}
static _Bool check_data_region(struct tar_sparse_file *file, size_t i) {












































































}
_Bool sparse_diff_file(int fd, struct tar_stat_info *st) {









































































}
static _Bool oldgnu_sparse_member_p(struct tar_sparse_file *file
                                    __attribute__((__unused__))) {
  { return ((_Bool)((int)current_header->header.typeflag == 83)); }
}
static enum oldgnu_add_status oldgnu_add_sparse(struct tar_sparse_file *file,
                                                struct sparse *s) {

























}
static _Bool oldgnu_fixup_header(struct tar_sparse_file *file) {









}
static enum oldgnu_add_status rc;
static _Bool oldgnu_get_sparse_info(struct tar_sparse_file *file) {
















































































}
static void oldgnu_store_sparse_info(struct tar_sparse_file *file,
                                     size_t *pindex, struct sparse *sp,
                                     size_t sparse_size) {

























}
static _Bool oldgnu_dump_header(struct tar_sparse_file *file) {















































}
static struct tar_sparse_optab oldgnu_optab = {
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    &oldgnu_sparse_member_p,
    &oldgnu_dump_header,
    &oldgnu_fixup_header,
    &oldgnu_get_sparse_info,
    (_Bool(*)(struct tar_sparse_file *, enum sparse_scan_state, void *))(
        (void *)0),
    &sparse_dump_region,
    &sparse_extract_region};
static _Bool star_sparse_member_p(struct tar_sparse_file *file
                                  __attribute__((__unused__))) {

}
static _Bool star_fixup_header(struct tar_sparse_file *file) {









}
static enum oldgnu_add_status rc___0;
static _Bool star_get_sparse_info(struct tar_sparse_file *file) {
























































































}
static struct tar_sparse_optab star_optab = {
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    &star_sparse_member_p,
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    &star_fixup_header,
    &star_get_sparse_info,
    (_Bool(*)(struct tar_sparse_file *, enum sparse_scan_state, void *))(
        (void *)0),
    (_Bool(*)(struct tar_sparse_file *, size_t))((void *)0),
    &sparse_extract_region};
static _Bool pax_sparse_member_p(struct tar_sparse_file *file) {




}
static _Bool pax_dump_header(struct tar_sparse_file *file) {












































}
static struct tar_sparse_optab pax_optab = {
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    &pax_sparse_member_p,
    &pax_dump_header,
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    (_Bool(*)(struct tar_sparse_file *))((void *)0),
    (_Bool(*)(struct tar_sparse_file *, enum sparse_scan_state, void *))(
        (void *)0),
    &sparse_dump_region,
    &sparse_extract_region};
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
ino_t ar_ino;
void sys_stat_nanoseconds(struct tar_stat_info *st) {
  {
    st->atime_nsec = (unsigned long)st->stat.st_atim.tv_nsec;
    st->mtime_nsec = (unsigned long)st->stat.st_mtim.tv_nsec;
    st->ctime_nsec = (unsigned long)st->stat.st_ctim.tv_nsec;
    return;
  }
}
static struct stat archive_stat;
_Bool sys_get_archive_stat(void) {
  int tmp;
  {
    { tmp = fstat(archive, &archive_stat); }
    return ((_Bool)(tmp == 0));
  }
}
_Bool sys_file_is_archive(struct tar_stat_info *p) {
  int tmp;
  {
    if (ar_dev) {
      if (p->stat.st_dev == ar_dev) {
        if (p->stat.st_ino == ar_ino) {
          tmp = 1;
        } else {
          tmp = 0;
        }
      } else {
        tmp = 0;
      }
    } else {
      tmp = 0;
    }
    return ((_Bool)tmp);
  }
}
void sys_save_archive_dev_ino(void) {
  {
    if (!(archive >= 1 << 30)) {
      if ((archive_stat.st_mode & 61440U) == 32768U) {
        ar_dev = archive_stat.st_dev;
        ar_ino = archive_stat.st_ino;
      } else {
        ar_dev = (dev_t)0;
      }
    } else {
      ar_dev = (dev_t)0;
    }
    return;
  }
}
static char const dev_null[10] = {
    (char const)'/', (char const)'d',   (char const)'e', (char const)'v',
    (char const)'/', (char const)'n',   (char const)'u', (char const)'l',
    (char const)'l', (char const)'\000'};
void sys_detect_dev_null_output(void) {
  struct stat dev_null_stat;
  int tmp;
  int tmp___0;
  int tmp___1;
                   
  {
    { tmp = strcmp(*(archive_name_array + 0), dev_null); }
    if (tmp == 0) {
      tmp___1 = 1;
    } else {
      if (!(archive >= 1 << 30)) {
        if ((archive_stat.st_mode & 61440U) == 8192U) {
          {
            tmp___0 = stat((char const * /* __restrict  */)(dev_null),
                           (struct stat * /* __restrict  */)(&dev_null_stat));
          }
          if (tmp___0 == 0) {
            if (archive_stat.st_dev == dev_null_stat.st_dev) {
              if (archive_stat.st_ino == dev_null_stat.st_ino) {
                tmp___1 = 1;
              } else {
                tmp___1 = 0;
              }
            } else {
              tmp___1 = 0;
            }
          } else {
            tmp___1 = 0;
          }
        } else {
          tmp___1 = 0;
        }
      } else {
        tmp___1 = 0;
      }
    }
    dev_null_output = (_Bool)tmp___1;
    return;
  }
}
void sys_drain_input_pipe(void) {
  size_t r;
  size_t tmp;
  size_t tmp___0;
  {
    if ((unsigned int)access_mode == 0U) {
      if (!(archive >= 1 << 30)) {
        if ((archive_stat.st_mode & 61440U) == 4096U) {
          goto _L___3;
        } else {
          if ((archive_stat.st_mode & 61440U) == 49152U) {
          _L___3 : /* CIL Label */
          {
            while (1) {
            while_continue: /* CIL Label */;
              if (archive >= 1 << 30) {
                {
                  tmp = rmt_read__(archive - (1 << 30), record_start->buffer,
                                   record_size);
                  r = tmp;
                }
              } else {
                {
                  tmp___0 = safe_read(archive, (void *)(record_start->buffer),
                                      record_size);
                  r = tmp___0;
                }
              }
              if (r != 0UL) {
                if (!(r != 0xffffffffffffffffUL)) {
                  goto while_break;
                }
              } else {
                goto while_break;
              }
              goto while_continue;
            }
          while_break: /* CIL Label */;
          }
          }
        }
      }
    }
    return;
  }
}
void sys_wait_for_child(pid_t child_pid___0) {
  int wait_status;
  int *tmp;
  __pid_t tmp___0;
  union __anonunion_56 __constr_expr_0;
  char *tmp___1;
  union __anonunion_57 __constr_expr_1;
  char *tmp___2;
  union __anonunion_58 __constr_expr_2;
  union __anonunion_59 __constr_expr_3;
                    
                    
  {
    if (child_pid___0) {
      {
        while (1) {
                                       ;
          { tmp___0 = waitpid(child_pid___0, &wait_status, 0); }
          if (!(tmp___0 == -1)) {
            goto while_break;
          }
          { tmp = __errno_location(); }
          if (*tmp != 4) {
            {
              waitpid_error(use_compress_program_option);
            }
            goto while_break;
          }
        }
      while_break: /* CIL Label */;
      }
      __constr_expr_3.__in = wait_status;
      if ((int)((signed char)((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
        {
          __constr_expr_0.__in = wait_status;
          tmp___1 = gettext("Child died with signal %d");
          error(0, 0, (char const *)tmp___1, __constr_expr_0.__i & 127);
          exit_status = 2;
        }
      } else {
        __constr_expr_2.__in = wait_status;
        if ((__constr_expr_2.__i & 65280) >> 8 != 0) {
          {
            __constr_expr_1.__in = wait_status;
            tmp___2 = gettext("Child returned status %d");
            error(0, 0, (char const *)tmp___2,
                  (__constr_expr_1.__i & 65280) >> 8);
            exit_status = 2;
          }
        }
      }
    }
    return;
  }
}
void sys_spawn_shell(void) {











































}
_Bool sys_compare_uid(struct stat *a, struct stat *b) {

}
_Bool sys_compare_gid(struct stat *a, struct stat *b) {

}
_Bool sys_compare_links(struct stat *link_data, struct stat *stat_data) {













}
int sys_truncate(int fd) {



















}
void sys_reset_uid_gid(void) {











}
static int is_regular_file(char const *name) {
  struct stat stbuf;
  int *tmp;
  int tmp___0;
                   
  {
    {
      tmp___0 = stat((char const * /* __restrict  */)name,
                     (struct stat * /* __restrict  */)(&stbuf));
    }
    if (tmp___0 == 0) {
      return ((stbuf.st_mode & 61440U) == 32768U);
    } else {
      { tmp = __errno_location(); }
      return (*tmp == 2);
    }
  }
}
size_t sys_write_archive_buffer(void) {
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  {
    if (archive >= 1 << 30) {
      {
        tmp =
            rmt_write__(archive - (1 << 30), record_start->buffer, record_size);
        tmp___1 = tmp;
      }
    } else {
      {
        tmp___0 = full_write(archive, (void const *)(record_start->buffer),
                             record_size);
        tmp___1 = tmp___0;
      }
    }
    return (tmp___1);
  }
}
static void xdup2(int from, int into) {
  int status;
  int tmp;
  int e;
  int *tmp___0;
  char *tmp___1;
  int *tmp___2;
  int e___0;
  int *tmp___3;
  char *tmp___4;
                    
                    
  {
    if (from != into) {
      {
        tmp = close(into);
        status = tmp;
      }
      if (status != 0) {
        {
          tmp___2 = __errno_location();
        }
        if (*tmp___2 != 9) {
          {
            tmp___0 = __errno_location();
            e = *tmp___0;
            tmp___1 = gettext("Cannot close");
            error(0, e, (char const *)tmp___1);
            fatal_exit();
          }
        }
      }
      { status = dup(from); }
      if (status != into) {
        if (status < 0) {
          {
            tmp___3 = __errno_location();
            e___0 = *tmp___3;
            tmp___4 = gettext("Cannot dup");
            error(0, e___0, (char const *)tmp___4);
            fatal_exit();
          }
        }
        { abort(); }
      }
      { xclose(from); }
    }
    return;
  }
}
pid_t sys_child_open_for_compress(void) {
  int parent_pipe[2];
  int child_pipe[2];
  pid_t grandchild_pid;
  pid_t child_pid___0;
  int wait_status;
  char *tmp;
  int saved_errno;
  int *tmp___0;
  int *tmp___1;
  int tmp___2;
  void *tmp___3;
  int tmp___4;
  char *tmp___5;
  int tmp___7;
  int tmp___8;
  void *tmp___9;
  int tmp___10;
  size_t status;
  char *cursor;
  size_t length;
  size_t size;
  int *tmp___11;
  __pid_t tmp___12;
  union __anonunion_60 __constr_expr_4;
  union __anonunion_61 __constr_expr_5;
  union __anonunion_62 __constr_expr_6;
  union __anonunion_63 __constr_expr_7;
                    
                    
                    
                    
  {
    {
      xpipe(parent_pipe);
      child_pid___0 = xfork();
    }
    if (child_pid___0 > 0) {
      {
        archive = parent_pipe[1];
        xclose(parent_pipe[0]);
      }
      return (child_pid___0);
    }
    {
      tmp = gettext("tar (child)");
      program_name = (char const *)tmp;
      xdup2(parent_pipe[0], 0);
      xclose(parent_pipe[1]);
      tmp___2 = strcmp(*(archive_name_array + 0), "-");
    }
    if (tmp___2 != 0) {
      if (!force_local_option) {
        {
          rmt_path__ = strchr(*(archive_name_array + 0), ':');
        }
        if (rmt_path__) {
          if ((unsigned long)rmt_path__ >
              (unsigned long)*(archive_name_array + 0)) {
            {
              tmp___3 = memchr(
                  (void const *)*(archive_name_array + 0), '/',
                  (size_t)(rmt_path__ - (char *)*(archive_name_array + 0)));
            }
            if (tmp___3) {
              goto _L___1;
            }
          } else {
            goto _L___1;
          }
        } else {
          goto _L___1;
        }
      } else {
      _L___1 : { tmp___4 = is_regular_file(*(archive_name_array + 0)); }
        if (tmp___4) {
          if (backup_option) {
            {
              maybe_backup_file(*(archive_name_array + 0), 1);
            }
          }
          {
            archive = creat(*(archive_name_array + 0),
                            (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                     ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
          }
          if (archive < 0) {
            {
              tmp___0 = __errno_location();
              saved_errno = *tmp___0;
            }
            if (backup_option) {
              {
                undo_last_backup();
              }
            }
            {
              tmp___1 = __errno_location();
              *tmp___1 = saved_errno;
              open_fatal(*(archive_name_array + 0));
            }
          }
          {
            xdup2(archive, 1);
            execlp(use_compress_program_option, use_compress_program_option,
                   (char *)0);
            exec_fatal(use_compress_program_option);
          }
        }
      }
    }
    {
      xpipe(child_pipe);
      grandchild_pid = xfork();
    }
    if (grandchild_pid == 0) {
      {
        tmp___5 = gettext("tar (grandchild)");
        program_name = (char const *)tmp___5;
        xdup2(child_pipe[1], 1);
        xclose(child_pipe[0]);
        execlp(use_compress_program_option, use_compress_program_option,
               (char *)0);
        exec_fatal(use_compress_program_option);
      }
    }
    {
      xdup2(child_pipe[0], 0);
      xclose(child_pipe[1]);
      tmp___10 = strcmp(*(archive_name_array + 0), "-");
    }
    if (tmp___10 == 0) {
      archive = 1;
    } else {
      if (!force_local_option) {
        {
          rmt_path__ = strchr(*(archive_name_array + 0), ':');
        }
        if (rmt_path__) {
          if ((unsigned long)rmt_path__ >
              (unsigned long)*(archive_name_array + 0)) {
            {
              tmp___9 = memchr(
                  (void const *)*(archive_name_array + 0), '/',
                  (size_t)(rmt_path__ - (char *)*(archive_name_array + 0)));
            }
            if (tmp___9) {
              {
                tmp___8 =
                    creat(*(archive_name_array + 0),
                          (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
                archive = tmp___8;
              }
            } else {
              {
                tmp___7 = rmt_open__(*(archive_name_array + 0), 65, 1 << 30,
                                     rsh_command_option);
                archive = tmp___7;
              }
            }
          } else {
            {
              tmp___8 =
                  creat(*(archive_name_array + 0),
                        (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                 ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
              archive = tmp___8;
            }
          }
        } else {
          {
            tmp___8 = creat(*(archive_name_array + 0),
                            (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                     ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
            archive = tmp___8;
          }
        }
      } else {
        {
          tmp___8 = creat(*(archive_name_array + 0),
                          (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                   ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
          archive = tmp___8;
        }
      }
      if (archive < 0) {
        {
          open_fatal(*(archive_name_array + 0));
        }
      }
    }
    {
      while (1) {
                                     ;
        status = (size_t)0;
        length = (size_t)0;
        cursor = record_start->buffer;
        {
          while (1) {
                                             ;
            if (!(length < record_size)) {
              goto while_break___0;
            }
            {
              size = record_size - length;
              status = safe_read(0, (void *)cursor, size);
            }
            if (status == 0xffffffffffffffffUL) {
              {
                read_fatal(use_compress_program_option);
              }
            }
            if (status == 0UL) {
              goto while_break___0;
            }
            length += status;
            cursor += status;
          }
        while_break___0: /* CIL Label */;
        }
        if (status == 0UL) {
          if (length > 0UL) {
            {
              memset((void *)(record_start->buffer + length), 0,
                     record_size - length);
              status = sys_write_archive_buffer();
            }
            if (status != record_size) {
              {
                archive_write_error((ssize_t)status);
              }
            }
          }
          goto while_break;
        }
        { status = sys_write_archive_buffer(); }
        if (status != record_size) {
          {
            archive_write_error((ssize_t)status);
          }
        }
      }
    while_break: /* CIL Label */;
    }
    {
      while (1) {
                                         ;
        { tmp___12 = waitpid(grandchild_pid, &wait_status, 0); }
        if (!(tmp___12 == -1)) {
          goto while_break___1;
        }
        { tmp___11 = __errno_location(); }
        if (*tmp___11 != 4) {
          {
            waitpid_error(use_compress_program_option);
          }
          goto while_break___1;
        }
      }
    while_break___1: /* CIL Label */;
    }
    __constr_expr_7.__in = wait_status;
    if ((int)((signed char)((__constr_expr_7.__i & 127) + 1)) >> 1 > 0) {
      {
        __constr_expr_4.__in = wait_status;
        kill(child_pid___0, __constr_expr_4.__i & 127);
        exit_status = 2;
      }
    } else {
      __constr_expr_6.__in = wait_status;
      if ((__constr_expr_6.__i & 65280) >> 8 != 0) {
        __constr_expr_5.__in = wait_status;
        exit_status = (__constr_expr_5.__i & 65280) >> 8;
      }
    }
    { exit(exit_status); }
  }
}
pid_t sys_child_open_for_uncompress(void) {
  int parent_pipe[2];
                    
                       
  pid_t child_pid___0;
                  
  char *tmp;
  int tmp___0;
                
  int tmp___2;
                
              
              
                
              
               
                 
               
                
                 
                  
                  
                
                   
                                       
                                       
                                        
                                        
                    
                    
                    
                    
  {
    {
      xpipe(parent_pipe);
      child_pid___0 = xfork();
    }
    if (child_pid___0 > 0) {
      {
        read_full_records_option = (_Bool)1;
        archive = parent_pipe[0];
        xclose(parent_pipe[1]);
      }
      return (child_pid___0);
    }
    {
      tmp = gettext("tar (child)");
      program_name = (char const *)tmp;
      xdup2(parent_pipe[1], 1);
      xclose(parent_pipe[0]);
      tmp___0 = strcmp(*(archive_name_array + 0), "-");
    }
    if (tmp___0 != 0) {
      if (!force_local_option) {
        {
          rmt_path__ = strchr(*(archive_name_array + 0), ':');
        }
        if (rmt_path__) {













        } else {
          goto _L___1;
        }
      } else {
      _L___1 : { tmp___2 = is_regular_file(*(archive_name_array + 0)); }
        if (tmp___2) {
          {
            archive = open(*(archive_name_array + 0), 0,
                           ((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                               ((256 | (256 >> 3)) | ((256 >> 3) >> 3)));
          }
                            
             

             
           
          {
            xdup2(archive, 0);
            execlp(use_compress_program_option, use_compress_program_option,
                   "-d", (char *)0);
            exec_fatal(use_compress_program_option);
          }
        }
      }
    }
    {


    }











    {



    }



























































    {




















































    }

    {















    }















  }
}
/* #pragma merger("0","00e.tar.o.i","") */
extern char *optarg;
extern int optind;
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
char const *simple_backup_suffix;
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
static char const *stdin_used_by;
void request_stdin(char const *option) {
            
                   
  {
                        
       



       
     
    stdin_used_by = option;
    return;
  }
}
static FILE *confirm_file;
static int confirm_file_EOF;
int confirm(char const *message_action, char const *message_name) {













































































}
static struct fmttab const fmttab[6] = {
    {"v7", (enum archive_format)1},
    {"oldgnu", (enum archive_format)2},
    {"ustar", (enum archive_format)3},
    {"posix", (enum archive_format)4},
    {"gnu", (enum archive_format)6},
    {(char const *)((void *)0), (enum archive_format)0}};
static void set_archive_format(char const *name) {





























}
static char const *archive_format_string(enum archive_format fmt) {



















}
static void assert_format(unsigned int fmt_mask) {












}
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
                
                
                
                
                
                
                
                
                
                
                 
                 
                 
                 
                 
                       
                 
                 
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    if (status != 0) {
      {
        tmp = gettext("Try `%s --help\' for more information.\n");
        fprintf((FILE * /* __restrict  */) stderr,
                (char const * /* __restrict  */)tmp, program_name);
      }
    } else {
      {










































































































































































































      }
    }
    { exit(status); }
  }
}
static void set_subcommand_option(enum subcommand subcommand) {
  char *tmp;
                   
  {
    if ((unsigned int)subcommand_option != 0U) {
      if ((unsigned int)subcommand_option != (unsigned int)subcommand) {
        {
          tmp = gettext("You may not specify more than one `-Acdtrux\' option");
          error(0, 0, (char const *)tmp);
          usage(2);
        }
      }
    }
    subcommand_option = subcommand;
    return;
  }
}
static void set_use_compress_program_option(char const *string) {
            
              
                   
  {
                                      
       

       







     
    use_compress_program_option = string;
    return;
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
      textual_date_option = (char const *)0;
      version_control_string = (char const *)0;
      exclude_options = 1 << 28;
      o_option = (_Bool)0;
      pax_option = 0;
      subcommand_option = (enum subcommand)0;
      archive_format = (enum archive_format)0;
      blocking_factor = 20;
      record_size = (size_t)10240;
      excluded = new_exclude();
      newer_mtime_option.tv_sec = -1L << (sizeof(time_t) * 8UL - 1UL);
      newer_mtime_option.tv_nsec = (__syscall_slong_t)-1;
      recursion_option = 1 << 3;
      owner_option = (uid_t)-1;
      group_option = (gid_t)-1;
      tmp = getenv("SIMPLE_BACKUP_SUFFIX");
      backup_suffix_string = (char const *)tmp;
    }
    if (argc > 1) {
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
          tmp___3 = in;
          in++;
          *tmp___2 = (char *)*tmp___3;
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
            if (cursor) {
              if ((int const) * (cursor + 1) == 58) {
                if ((unsigned long)in < (unsigned long)(argv + argc)) {
                  tmp___7 = out;
                  out++;
                  tmp___8 = in;
                  in++;
                  *tmp___7 = (char *)*tmp___8;
                } else {
                  {
                    tmp___9 = gettext("Old option `%c\' requires an argument.");
                    error(0, 0, (char const *)tmp___9, (int const) * letter);
                    usage(2);
                  }
                }
              }
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
        *out = (char *)0;
        argc = new_argc;
        argv = new_argv;
      }
    }
    {
      input_files = 0;
      tmp___12 = getenv("TAR_OPTIONS");
      prepend_default_options((char const *)tmp___12, &argc, &argv);
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
          if (optchar == 63) {
            goto case_63;
          }
          if (optchar == 0) {
            goto case_0;
          }
          if (optchar == 1) {
            goto case_1;
          }
          if (optchar == 65) {
            goto case_65;
          }
          if (optchar == 98) {
            goto case_98;
          }
          if (optchar == 66) {
            goto case_66;
          }
          if (optchar == 99) {
            goto case_99;
          }
          if (optchar == 67) {
            goto case_67;
          }
          if (optchar == 100) {
            goto case_100;
          }
          if (optchar == 102) {
            goto case_102;
          }
          if (optchar == 70) {
            goto case_70;
          }
          if (optchar == 103) {
            goto case_103;
          }
          if (optchar == 71) {
            goto case_71;
          }
          if (optchar == 104) {
            goto case_104;
          }
          if (optchar == 105) {
            goto case_105;
          }
          if (optchar == 73) {
            goto case_73;
          }
          if (optchar == 106) {
            goto case_106;
          }
          if (optchar == 107) {
            goto case_107;
          }
          if (optchar == 75) {
            goto case_75;
          }
          if (optchar == 108) {
            goto case_108;
          }
          if (optchar == 76) {
            goto case_76;
          }
          if (optchar == 109) {
            goto case_109;
          }
          if (optchar == 77) {
            goto case_77;
          }
          if (optchar == 78) {
            goto case_78;
          }
          if (optchar == 142) {
            goto case_142;
          }
          if (optchar == 111) {
            goto case_111;
          }
          if (optchar == 79) {
            goto case_79;
          }
          if (optchar == 112) {
            goto case_112;
          }
          if (optchar == 80) {
            goto case_80;
          }
          if (optchar == 114) {
            goto case_114;
          }
          if (optchar == 82) {
            goto case_82;
          }
          if (optchar == 115) {
            goto case_115;
          }
          if (optchar == 83) {
            goto case_83;
          }
          if (optchar == 116) {
            goto case_116;
          }
          if (optchar == 84) {
            goto case_84;
          }
          if (optchar == 117) {
            goto case_117;
          }
          if (optchar == 85) {
            goto case_85;
          }
          if (optchar == 167) {
            goto case_167;
          }
          if (optchar == 118) {
            goto case_118;
          }
          if (optchar == 86) {
            goto case_86;
          }
          if (optchar == 119) {
            goto case_119;
          }
          if (optchar == 87) {
            goto case_87;
          }
          if (optchar == 120) {
            goto case_120;
          }
          if (optchar == 88) {
            goto case_88;
          }
          if (optchar == 121) {
            goto case_121;
          }
          if (optchar == 122) {
            goto case_122;
          }
          if (optchar == 90) {
            goto case_90;
          }
          if (optchar == 128) {
            goto case_128;
          }
          if (optchar == 129) {
            goto case_129;
          }
          if (optchar == 131) {
            goto case_131;
          }
          if (optchar == 130) {
            goto case_130;
          }
          if (optchar == 132) {
            goto case_132;
          }
          if (optchar == 133) {
            goto case_133;
          }
          if (optchar == 134) {
            goto case_134;
          }
          if (optchar == 135) {
            goto case_135;
          }
          if (optchar == 139) {
            goto case_139;
          }
          if (optchar == 137) {
            goto case_137;
          }
          if (optchar == 138) {
            goto case_138;
          }
          if (optchar == 140) {
            goto case_140;
          }
          if (optchar == 136) {
            goto case_136;
          }
          if (optchar == 141) {
            goto case_141;
          }
          if (optchar == 143) {
            goto case_143;
          }
          if (optchar == 144) {
            goto case_144;
          }
          if (optchar == 145) {
            goto case_145;
          }
          if (optchar == 146) {
            goto case_146;
          }
          if (optchar == 147) {
            goto case_147;
          }
          if (optchar == 148) {
            goto case_148;
          }
          if (optchar == 149) {
            goto case_149;
          }
          if (optchar == 150) {
            goto case_150;
          }
          if (optchar == 151) {
            goto case_151;
          }
          if (optchar == 152) {
            goto case_152;
          }
          if (optchar == 153) {
            goto case_153;
          }
          if (optchar == 154) {
            goto case_154;
          }
          if (optchar == 155) {
            goto case_155;
          }
          if (optchar == 156) {
            goto case_156;
          }
          if (optchar == 157) {
            goto case_157;
          }
          if (optchar == 158) {
            goto case_158;
          }
          if (optchar == 159) {
            goto case_159;
          }
          if (optchar == 160) {
            goto case_160;
          }
          if (optchar == 161) {
            goto case_161;
          }
          if (optchar == 163) {
            goto case_163;
          }
          if (optchar == 164) {
            goto case_164;
          }
          if (optchar == 165) {
            goto case_165;
          }
          if (optchar == 166) {
            goto case_166;
          }
          if (optchar == 168) {
            goto case_168;
          }
          if (optchar == 169) {
            goto case_169;
          }
          if (optchar == 170) {
            goto case_170;
          }
          if (optchar == 48) {
            goto case_48;
          }
          if (optchar == 49) {
            goto case_48;
          }
          if (optchar == 50) {
            goto case_48;
          }
          if (optchar == 51) {
            goto case_48;
          }
          if (optchar == 52) {
            goto case_48;
          }
          if (optchar == 53) {
            goto case_48;
          }
          if (optchar == 54) {
            goto case_48;
          }
          if (optchar == 55) {
            goto case_48;
          }
          goto switch_break;
        case_63 : /* CIL Label */
        {
          usage(2);
        }
        case_0: /* CIL Label */
          goto switch_break;
        case_1 : /* CIL Label */
        {
          name_add((char const *)optarg);
          input_files++;
        }
          goto switch_break;
        case_65 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)2);
        }
          goto switch_break;
        case_98 : /* CIL Label */
        {
          tmp___15 = xstrtoumax((char const *)optarg, (char **)0, 10, &u, "");
        }
          if ((unsigned int)tmp___15 == 0U) {
            blocking_factor = (int)u;
            if (u == (uintmax_t)blocking_factor) {
              if (0 < blocking_factor) {
                record_size = u * 512UL;
                if (!(u == record_size / 512UL)) {
                  {
                    tmp___13 = gettext("Invalid blocking factor");
                    tmp___14 = quotearg_colon((char const *)optarg);
                    error(0, 0, "%s: %s", tmp___14, tmp___13);
                    usage(2);
                  }
                }
              } else {
                {
                  tmp___13 = gettext("Invalid blocking factor");
                  tmp___14 = quotearg_colon((char const *)optarg);
                  error(0, 0, "%s: %s", tmp___14, tmp___13);
                  usage(2);
                }
              }
            } else {
              {
                tmp___13 = gettext("Invalid blocking factor");
                tmp___14 = quotearg_colon((char const *)optarg);
                error(0, 0, "%s: %s", tmp___14, tmp___13);
                usage(2);
              }
            }
          } else {
            {
              tmp___13 = gettext("Invalid blocking factor");
              tmp___14 = quotearg_colon((char const *)optarg);
              error(0, 0, "%s: %s", tmp___14, tmp___13);
              usage(2);
            }
          }
          goto switch_break;
        case_66: /* CIL Label */
          read_full_records_option = (_Bool)1;
          goto switch_break;
        case_99 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)3);
        }
          goto switch_break;
        case_67 : /* CIL Label */
        {
          name_add("-C");
          name_add((char const *)optarg);
        }
          goto switch_break;
        case_100 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)5);
        }
          goto switch_break;
        case_102: /* CIL Label */
          if (archive_names == allocated_archive_names) {
            {
              allocated_archive_names *= 2;
              tmp___16 = xrealloc((void *)archive_name_array,
                                  sizeof(char const *) *
                                      (unsigned long)allocated_archive_names);
              archive_name_array = (char const **)tmp___16;
            }
          }
          tmp___17 = archive_names;
          archive_names++;
          *(archive_name_array + tmp___17) = (char const *)optarg;
          goto switch_break;
        case_70: /* CIL Label */
          info_script_option = (char const *)optarg;
          multi_volume_option = (_Bool)1;
          goto switch_break;
        case_103: /* CIL Label */
          listed_incremental_option = (char const *)optarg;
          after_date_option = 1;
        case_71: /* CIL Label */
          incremental_option = (_Bool)1;
          goto switch_break;
        case_104: /* CIL Label */
          dereference_option = (_Bool)1;
          goto switch_break;
        case_105: /* CIL Label */
          ignore_zeros_option = (_Bool)1;
          goto switch_break;
        case_73 : /* CIL Label */
        {
          tmp___18 = gettext("Warning: the -I option is not supported; perhaps "
                             "you meant -j or -T?");
          error(0, 0, (char const *)tmp___18);
          usage(2);
        }
          goto switch_break;
        case_106 : /* CIL Label */
        {
          set_use_compress_program_option("bzip2");
        }
          goto switch_break;
        case_107: /* CIL Label */
          old_files_option = (enum old_files)4;
          goto switch_break;
        case_75 : /* CIL Label */
        {
          starting_file_option = (_Bool)1;
          addname((char const *)optarg, 0);
        }
          goto switch_break;
        case_108: /* CIL Label */
          one_file_system_option = (_Bool)1;
          goto switch_break;
        case_76 : /* CIL Label */
        {
          tmp___21 =
              xstrtoumax((char const *)optarg, (char **)0, 10, &u___0, "");
        }
          if ((unsigned int)tmp___21 != 0U) {
            {
              tmp___19 = gettext("Invalid tape length");
              tmp___20 = quotearg_colon((char const *)optarg);
              error(0, 0, "%s: %s", tmp___20, tmp___19);
              usage(2);
            }
          }
          tape_length_option = (tarlong)1024 * (tarlong)u___0;
          multi_volume_option = (_Bool)1;
          goto switch_break;
        case_109: /* CIL Label */
          touch_option = (_Bool)1;
          goto switch_break;
        case_77: /* CIL Label */
          multi_volume_option = (_Bool)1;
          goto switch_break;
        case_78: /* CIL Label */
          after_date_option = 1;
        case_142: /* CIL Label */
          if (0L <= newer_mtime_option.tv_nsec) {
            {
              tmp___22 = gettext("More than one threshold date");
              error(0, 0, (char const *)tmp___22);
              usage(2);
            }
          }
          if ((int)*optarg == 47) {
            goto _L___3;
          } else {
            if ((int)*optarg == 46) {
            _L___3 : /* CIL Label */
            {
              tmp___24 =
                  deref_stat(dereference_option, (char const *)optarg, &st);
            }
              if (tmp___24 != 0) {
                {
                  stat_error((char const *)optarg);
                  tmp___23 = gettext("Date file not found");
                  error(0, 0, (char const *)tmp___23);
                  usage(2);
                }
              }
              newer_mtime_option.tv_sec = st.st_mtim.tv_sec;
              newer_mtime_option.tv_nsec = st.st_mtim.tv_nsec;
            } else {
              {
                tmp___28 = get_date(&newer_mtime_option, (char const *)optarg,
                                    (struct timespec const *)((void *)0));
              }
              if (tmp___28) {
                textual_date_option = (char const *)optarg;
              } else {
                {
                  tmp___25 = quote((char const *)optarg);
                  tmp___26 = tartime(newer_mtime_option.tv_sec);
                  tmp___27 =
                      gettext("Substituting %s for unknown date format %s");
                  error(0, 0, (char const *)tmp___27, tmp___26, tmp___25);
                  newer_mtime_option.tv_nsec = (__syscall_slong_t)0;
                }
              }
            }
          }
          goto switch_break;
        case_111: /* CIL Label */
          o_option = (_Bool)1;
          goto switch_break;
        case_79: /* CIL Label */
          to_stdout_option = (_Bool)1;
          goto switch_break;
        case_112: /* CIL Label */
          same_permissions_option = 1;
          goto switch_break;
        case_80: /* CIL Label */
          absolute_names_option = (_Bool)1;
          goto switch_break;
        case_114 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)1);
        }
          goto switch_break;
        case_82: /* CIL Label */
          block_number_option = (_Bool)1;
          goto switch_break;
        case_115: /* CIL Label */
          same_order_option = (_Bool)1;
          goto switch_break;
        case_83: /* CIL Label */
          sparse_option = (_Bool)1;
          goto switch_break;
        case_116 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)7);
          verbose_option++;
        }
          goto switch_break;
        case_84: /* CIL Label */
          files_from_option = (char const *)optarg;
          goto switch_break;
        case_117 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)8);
        }
          goto switch_break;
        case_85: /* CIL Label */
          old_files_option = (enum old_files)3;
          goto switch_break;
        case_167: /* CIL Label */
          utc_option = (_Bool)1;
          goto switch_break;
        case_118: /* CIL Label */
          verbose_option++;
          goto switch_break;
        case_86: /* CIL Label */
          volume_label_option = (char const *)optarg;
          goto switch_break;
        case_119: /* CIL Label */
          interactive_option = (_Bool)1;
          goto switch_break;
        case_87: /* CIL Label */
          verify_option = (_Bool)1;
          goto switch_break;
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
          if (tmp___31 != 0) {
            {
              tmp___29 = __errno_location();
              e = *tmp___29;
              tmp___30 = quotearg_colon((char const *)optarg);
              error(0, e, "%s", tmp___30);
              fatal_exit();
            }
          }
          goto switch_break;
        case_121 : /* CIL Label */
        {
          tmp___32 = gettext(
              "Warning: the -y option is not supported; perhaps you meant -j?");
          error(0, 0, (char const *)tmp___32);
          usage(2);
        }
          goto switch_break;
        case_122 : /* CIL Label */
        {
          set_use_compress_program_option("gzip");
        }
          goto switch_break;
        case_90 : /* CIL Label */
        {
          set_use_compress_program_option("compress");
        }
          goto switch_break;
        case_128: /* CIL Label */
          exclude_options |= 1 << 30;
          goto switch_break;
        case_129: /* CIL Label */
          atime_preserve_option = (_Bool)1;
          goto switch_break;
        case_131: /* CIL Label */
          checkpoint_option = (_Bool)1;
          goto switch_break;
        case_130: /* CIL Label */
          backup_option = (_Bool)1;
          if (optarg) {
            version_control_string = (char const *)optarg;
          }
          goto switch_break;
        case_132 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)4);
        }
          goto switch_break;
        case_133 : /* CIL Label */
        {
          add_exclude(excluded, (char const *)optarg,
                      exclude_options | recursion_option);
        }
          goto switch_break;
        case_134: /* CIL Label */
          force_local_option = (_Bool)1;
          goto switch_break;
        case_135 : /* CIL Label */
        {
          set_archive_format((char const *)optarg);
        }
          goto switch_break;
        case_139: /* CIL Label */
          index_file_name = (char const *)optarg;
          goto switch_break;
        case_137: /* CIL Label */
          exclude_options |= 1 << 4;
          goto switch_break;
        case_138: /* CIL Label */
          ignore_failed_read_option = (_Bool)1;
          goto switch_break;
        case_140: /* CIL Label */
          old_files_option = (enum old_files)5;
          goto switch_break;
        case_136 : /* CIL Label */
        {
          tmp___36 = strlen((char const *)optarg);
        }
          if (tmp___36 < 32UL) {
            {
              tmp___37 = gname_to_gid((char const *)optarg, &group_option);
            }
            if (!tmp___37) {
              goto _L;
            }
          } else {
          _L : {
            tmp___35 = xstrtoumax((char const *)optarg, (char **)0, 10, &g, "");
          }
            if ((unsigned int)tmp___35 == 0U) {
              if (g == (uintmax_t)((gid_t)g)) {
                group_option = (gid_t)g;
              } else {
                {
                  tmp___33 = gettext("%s: Invalid group");
                  tmp___34 = quotearg_colon((char const *)optarg);
                  error(0, 0, "%s: %s", tmp___34, tmp___33);
                  fatal_exit();
                }
              }
            } else {
              {
                tmp___33 = gettext("%s: Invalid group");
                tmp___34 = quotearg_colon((char const *)optarg);
                error(0, 0, "%s: %s", tmp___34, tmp___33);
                fatal_exit();
              }
            }
          }
          goto switch_break;
        case_141 : /* CIL Label */
        {
          mode_option = mode_compile((char const *)optarg, 7U);
        }
          if ((unsigned long)mode_option ==
              (unsigned long)((struct mode_change *)0)) {
            {
              tmp___38 = gettext("Invalid mode given on option");
              error(0, 0, (char const *)tmp___38);
              fatal_exit();
            }
          }
          if ((unsigned long)mode_option ==
              (unsigned long)((struct mode_change *)1)) {
            {
              xalloc_die();
            }
          }
          goto switch_break;
        case_143: /* CIL Label */
          exclude_options &= ~(1 << 30);
          goto switch_break;
        case_144: /* CIL Label */
          exclude_options &= ~(1 << 4);
          goto switch_break;
        case_145: /* CIL Label */
          old_files_option = (enum old_files)1;
          goto switch_break;
        case_146: /* CIL Label */
          exclude_options &= ~(1 << 28);
          goto switch_break;
        case_147: /* CIL Label */
          exclude_options |= 1;
          goto switch_break;
        case_148: /* CIL Label */
          filename_terminator = (char)'\000';
          goto switch_break;
        case_149: /* CIL Label */
          numeric_owner_option = (_Bool)1;
          goto switch_break;
        case_150: /* CIL Label */
          if (!optarg) {
            occurrence_option = (uintmax_t)1;
          } else {
            {
              tmp___41 =
                  xstrtoumax((char const *)optarg, (char **)0, 10, &u___1, "");
            }
            if ((unsigned int)tmp___41 == 0U) {
              occurrence_option = u___1;
            } else {
              {
                tmp___39 = gettext("Invalid number");
                tmp___40 = quotearg_colon((char const *)optarg);
                error(0, 0, "%s: %s", tmp___40, tmp___39);
                fatal_exit();
              }
            }
          }
          goto switch_break;
        case_151: /* CIL Label */
          old_files_option = (enum old_files)2;
          goto switch_break;
        case_152 : /* CIL Label */
        {
          tmp___45 = strlen((char const *)optarg);
        }
          if (tmp___45 < 32UL) {
            {
              tmp___46 = uname_to_uid((char const *)optarg, &owner_option);
            }
            if (!tmp___46) {
              goto _L___0;
            }
          } else {
          _L___0 : {
            tmp___44 =
                xstrtoumax((char const *)optarg, (char **)0, 10, &u___2, "");
          }
            if ((unsigned int)tmp___44 == 0U) {
              if (u___2 == (uintmax_t)((uid_t)u___2)) {
                owner_option = (uid_t)u___2;
              } else {
                {
                  tmp___42 = gettext("Invalid owner");
                  tmp___43 = quotearg_colon((char const *)optarg);
                  error(0, 0, "%s: %s", tmp___43, tmp___42);
                  fatal_exit();
                }
              }
            } else {
              {
                tmp___42 = gettext("Invalid owner");
                tmp___43 = quotearg_colon((char const *)optarg);
                error(0, 0, "%s: %s", tmp___43, tmp___42);
                fatal_exit();
              }
            }
          }
          goto switch_break;
        case_153 : /* CIL Label */
        {
          pax_option++;
          xheader_set_option(optarg);
        }
          goto switch_break;
        case_154 : /* CIL Label */
        {
          set_archive_format("posix");
        }
          goto switch_break;
        case_155: /* CIL Label */
          same_permissions_option = 1;
          same_order_option = (_Bool)1;
          goto switch_break;
        case_156 : /* CIL Label */
        {
          tmp___49 =
              xstrtoumax((char const *)optarg, (char **)0, 10, &u___3, "");
        }
          if ((unsigned int)tmp___49 == 0U) {
            if (!(u___3 == u___3)) {
              {
                tmp___47 = gettext("Invalid record size");
                tmp___48 = quotearg_colon((char const *)optarg);
                error(0, 0, "%s: %s", tmp___48, tmp___47);
                usage(2);
              }
            }
          } else {
            {
              tmp___47 = gettext("Invalid record size");
              tmp___48 = quotearg_colon((char const *)optarg);
              error(0, 0, "%s: %s", tmp___48, tmp___47);
              usage(2);
            }
          }
          record_size = u___3;
          if (record_size % 512UL != 0UL) {
            {
              tmp___50 = gettext("Record size must be a multiple of %d.");
              error(0, 0, (char const *)tmp___50, 512);
              usage(2);
            }
          }
          blocking_factor = (int)(record_size / 512UL);
          goto switch_break;
        case_157: /* CIL Label */
          recursive_unlink_option = (_Bool)1;
          goto switch_break;
        case_158: /* CIL Label */
          remove_files_option = (_Bool)1;
          goto switch_break;
        case_159: /* CIL Label */
          rmt_command_option = (char const *)optarg;
          goto switch_break;
        case_160: /* CIL Label */
          rsh_command_option = (char const *)optarg;
          goto switch_break;
        case_161 : /* CIL Label */
        {
          tmp___51 = archive_format_string((enum archive_format)6);
          printf((char const * /* __restrict  */) "--format=%s -f%s -b%d\n",
                 tmp___51, "-", 20);
          exit(0);
        }
        case_163 : /* CIL Label */
        {
          tmp___54 =
              xstrtoumax((char const *)optarg, (char **)0, 10, &u___4, "");
        }
          if ((unsigned int)tmp___54 == 0U) {
            if (!(u___4 == u___4)) {
              {
                tmp___52 = gettext("Invalid number of elements");
                tmp___53 = quotearg_colon((char const *)optarg);
                error(0, 0, "%s: %s", tmp___53, tmp___52);
                usage(2);
              }
            }
          } else {
            {
              tmp___52 = gettext("Invalid number of elements");
              tmp___53 = quotearg_colon((char const *)optarg);
              error(0, 0, "%s: %s", tmp___53, tmp___52);
              usage(2);
            }
          }
          strip_path_elements = u___4;
          goto switch_break;
        case_164: /* CIL Label */
          backup_option = (_Bool)1;
          backup_suffix_string = (char const *)optarg;
          goto switch_break;
        case_165: /* CIL Label */
          totals_option = (_Bool)1;
          goto switch_break;
        case_166 : /* CIL Label */
        {
          set_use_compress_program_option((char const *)optarg);
        }
          goto switch_break;
        case_168: /* CIL Label */
          volno_file_option = (char const *)optarg;
          goto switch_break;
        case_169: /* CIL Label */
          exclude_options |= 1 << 28;
          goto switch_break;
        case_170: /* CIL Label */
          exclude_options &= -2;
          goto switch_break;
        case_48:  /* CIL Label */
                                 
                                  
                                  
                                  
                                  
                                  
                                  
         {
          tmp___55 =
              gettext("Options `-[0-7][lmh]\' not supported by *this* tar");
          error(0, 0, (char const *)tmp___55);
          usage(2);
        }
        switch_break: /* CIL Label */;
        }
      }
    while_break___1: /* CIL Label */;
    }
    if (o_option) {
      if ((unsigned int)subcommand_option == 3U) {
        {
          set_archive_format("v7");
        }
      } else {
        same_owner_option = 1;
      }
    }
    {
      while (1) {
                                         ;
        if (!(optind < argc)) {
          goto while_break___2;
        }
        {
          name_add((char const *)*(argv + optind));
          input_files++;
          optind++;
        }
      }
    while_break___2: /* CIL Label */;
    }
    if (show_version) {
      {
        printf((char const * /* __restrict  */) "tar (%s) %s\n%s\n", "GNU tar",
               "1.14", "Copyright (C) 2004 Free Software Foundation, Inc.");
        tmp___56 = gettext(
            "This program comes with NO WARRANTY, to the extent permitted by "
            "law.\nYou may redistribute it under the terms of the GNU General "
            "Public License;\nsee the file named COPYING for details.");
        puts((char const *)tmp___56);
        tmp___57 = gettext("Written by John Gilmore and Jay Fenlason.");
        puts((char const *)tmp___57);
        exit(0);
      }
    }
    if (show_help) {
      {
        usage(0);
      }
    }
    if ((unsigned int)archive_format == 0U) {
      if (pax_option) {
        archive_format = (enum archive_format)4;
      } else {
        archive_format = (enum archive_format)6;
      }
    }
    if (volume_label_option) {
      if ((unsigned int)subcommand_option == 3U) {
        {
          assert_format((unsigned int)((1 << 2) | (1 << 6)));
        }
      }
    }
    if (incremental_option) {
      {
        assert_format((unsigned int)((1 << 2) | (1 << 6)));
      }
    } else {
      if (multi_volume_option) {
        {
          assert_format((unsigned int)((1 << 2) | (1 << 6)));
        }
      }
    }
    if (sparse_option) {
      {
        assert_format((unsigned int)(((1 << 2) | (1 << 6)) | (1 << 4)));
      }
    }
    if (occurrence_option) {
      if (!input_files) {
        if (!files_from_option) {
          {
            tmp___58 =
                gettext("--occurrence is meaningless without a file list");
            error(0, 0, (char const *)tmp___58);
            usage(2);
          }
        }
      }
      if ((unsigned int)subcommand_option != 4U) {
        if ((unsigned int)subcommand_option != 5U) {
          if ((unsigned int)subcommand_option != 6U) {
            if ((unsigned int)subcommand_option != 7U) {
              {
                tmp___59 = gettext("--occurrence cannot be used in the "
                                   "requested operation mode");
                error(0, 0, (char const *)tmp___59);
                usage(2);
              }
            }
          }
        }
      }
    }
    if (archive_names == 0) {
      {
        archive_names = 1;
        tmp___60 = getenv("TAPE");
        *(archive_name_array + 0) = (char const *)tmp___60;
      }
      if (!*(archive_name_array + 0)) {
        *(archive_name_array + 0) = "-";
      }
    }
    if (archive_names > 1) {
      if (!multi_volume_option) {
        {
          tmp___61 = gettext("Multiple archive files require `-M\' option");
          error(0, 0, (char const *)tmp___61);
          usage(2);
        }
      }
    }
    if (listed_incremental_option) {
      if (0L <= newer_mtime_option.tv_nsec) {
        {
          tmp___62 =
              gettext("Cannot combine --listed-incremental with --newer");
          error(0, 0, (char const *)tmp___62);
          usage(2);
        }
      }
    }
    if (volume_label_option) {
      if (multi_volume_option) {
        tmp___79 =
            ((sizeof(" Volume ") - 1UL) +
             ((((sizeof(int) * 8UL - 1UL) * 302UL) / 1000UL + 1UL) + 1UL)) -
            1UL;
      } else {
        tmp___79 = 0UL;
      }
      {
        volume_label_max_len =
            (sizeof(current_header->header.name) - 1UL) - tmp___79;
        tmp___65 = strlen(volume_label_option);
      }
      if (volume_label_max_len < tmp___65) {
        {
          tmp___63 = quotearg_colon(volume_label_option);
          tmp___64 =
              ngettext("%s: Volume label is too long (limit is %lu byte)",
                       "%s: Volume label is too long (limit is %lu bytes)",
                       volume_label_max_len);
          error(0, 0, (char const *)tmp___64, tmp___63, volume_label_max_len);
          usage(2);
        }
      }
    }
    if (verify_option) {
      if (multi_volume_option) {
        {
          tmp___66 = gettext("Cannot verify multi-volume archives");
          error(0, 0, (char const *)tmp___66);
          usage(2);
        }
      }
      if (use_compress_program_option) {
        {
          tmp___67 = gettext("Cannot verify compressed archives");
          error(0, 0, (char const *)tmp___67);
          usage(2);
        }
      }
    }
    if (use_compress_program_option) {
      if (multi_volume_option) {
        {
          tmp___68 = gettext("Cannot use multi-volume compressed archives");
          error(0, 0, (char const *)tmp___68);
          usage(2);
        }
      }
      if ((unsigned int)subcommand_option == 8U) {
        {
          tmp___69 = gettext("Cannot update compressed archives");
          error(0, 0, (char const *)tmp___69);
          usage(2);
        }
      }
    }
    if (pax_option) {
      if ((unsigned int)archive_format != 4U) {
        if ((unsigned int)subcommand_option != 6U) {
          {
            tmp___70 =
                gettext("--pax-option can be used only on POSIX archives");
            error(0, 0, (char const *)tmp___70);
            usage(2);
          }
        } else {
          if ((unsigned int)subcommand_option != 5U) {
            {
              tmp___70 =
                  gettext("--pax-option can be used only on POSIX archives");
              error(0, 0, (char const *)tmp___70);
              usage(2);
            }
          } else {
            if ((unsigned int)subcommand_option != 7U) {
              {
                tmp___70 =
                    gettext("--pax-option can be used only on POSIX archives");
                error(0, 0, (char const *)tmp___70);
                usage(2);
              }
            }
          }
        }
      }
    }
    if (recursive_unlink_option) {
      old_files_option = (enum old_files)3;
    }
    if (utc_option) {
      verbose_option = 2;
    }
    if (!rmt_command_option) {
      rmt_command_option = "/usr/local/libexec/rmt";
    }
    {
      if ((unsigned int)subcommand_option == 3U) {
        goto case_3;
      }
      if ((unsigned int)subcommand_option == 6U) {
        goto case_6;
      }
      if ((unsigned int)subcommand_option == 7U) {
        goto case_6;
      }
      if ((unsigned int)subcommand_option == 5U) {
        goto case_6;
      }
      if ((unsigned int)subcommand_option == 2U) {
        goto case_2;
      }
      if ((unsigned int)subcommand_option == 8U) {
        goto case_2;
      }
      if ((unsigned int)subcommand_option == 1U) {
        goto case_2;
      }
      goto switch_default;
    case_3: /* CIL Label */
      if (input_files == 0) {
        if (!files_from_option) {
          {
            tmp___71 = gettext("Cowardly refusing to create an empty archive");
            error(0, 0, (char const *)tmp___71);
            usage(2);
          }
        }
      }
      goto switch_break___0;
    case_6: /* CIL Label */
                           
                            
       archive_name_cursor = archive_name_array;
      {
        while (1) {
                                           ;
          if (!((unsigned long)archive_name_cursor <
                (unsigned long)(archive_name_array + archive_names))) {
            goto while_break___3;
          }
          { tmp___72 = strcmp(*archive_name_cursor, "-"); }
          if (!tmp___72) {
            {
              request_stdin("-f");
            }
          }
          archive_name_cursor++;
        }
      while_break___3: /* CIL Label */;
      }
      goto switch_break___0;
    case_2:     /* CIL Label */
                               
                                
       archive_name_cursor = archive_name_array;
      {
        while (1) {
                                           ;
          if (!((unsigned long)archive_name_cursor <
                (unsigned long)(archive_name_array + archive_names))) {
            goto while_break___4;
          }
          { tmp___74 = strcmp(*archive_name_cursor, "-"); }
          if (!tmp___74) {
            {
              tmp___73 =
                  gettext("Options `-Aru\' are incompatible with `-f -\'");
              error(0, 0, (char const *)tmp___73);
              usage(2);
            }
          }
          archive_name_cursor++;
        }
      while_break___4: /* CIL Label */;
      }
    switch_default: /* CIL Label */
      goto switch_break___0;
    switch_break___0: /* CIL Label */;
    }
    archive_name_cursor = archive_name_array;
    if (backup_suffix_string) {
      {
        tmp___75 = xstrdup(backup_suffix_string);
        simple_backup_suffix = (char const *)tmp___75;
      }
    }
    if (backup_option) {
      {
        backup_type = xget_version("--backup", version_control_string);
      }
    }
    if (verbose_option) {
      if (textual_date_option) {
        {
          tmp___76 = tartime(newer_mtime_option.tv_sec);
          treated_as = tmp___76;
          tmp___78 = strcmp(textual_date_option, treated_as);
        }
        if (tmp___78 != 0) {
          {
            tmp___77 = gettext("Treating date `%s\' as %s + %ld nanoseconds");
            error(0, 0, (char const *)tmp___77, textual_date_option, treated_as,
                  newer_mtime_option.tv_nsec);
          }
        }
      }
    }
    return;
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
    if (tmp != 0) {
      {
        start_timespec.tv_sec = time((time_t *)0);
      }
    }
    {
      program_name = (char const *)*(argv + 0);
      setlocale(6, "");
      bindtextdomain("tar", "/usr/local/share/locale");
      textdomain("tar");
      exit_status = 0;
      filename_terminator = (char)'\n';
      set_quoting_style((struct quoting_options *)0, (enum quoting_style)4);
      allocated_archive_names = 10;
      tmp___0 = xmalloc(sizeof(char const *) *
                        (unsigned long)allocated_archive_names);
      archive_name_array = (char const **)tmp___0;
      archive_names = 0;
      signal(17, (void (*)(int))0);
      init_names();
      decode_options(argc, argv);
      name_init();
    }
    if (volno_file_option) {
      {
        init_volume_number();
      }
    }
    {
      if ((unsigned int)subcommand_option == 0U) {
        goto case_0;
      }
      if ((unsigned int)subcommand_option == 2U) {
        goto case_2;
      }
      if ((unsigned int)subcommand_option == 8U) {
        goto case_2;
      }
      if ((unsigned int)subcommand_option == 1U) {
        goto case_2;
      }
      if ((unsigned int)subcommand_option == 4U) {
        goto case_4;
      }
      if ((unsigned int)subcommand_option == 3U) {
        goto case_3;
      }
      if ((unsigned int)subcommand_option == 6U) {
        goto case_6;
      }
      if ((unsigned int)subcommand_option == 7U) {
        goto case_7;
      }
      if ((unsigned int)subcommand_option == 5U) {
        goto case_5;
      }
      goto switch_break;
    case_0 : /* CIL Label */
    {
      tmp___1 = gettext("You must specify one of the `-Acdtrux\' options");
      error(0, 0, (char const *)tmp___1);
      usage(2);
    }
    case_2:  /* CIL Label */
                            
                             
     {
      update_archive();
    }
      goto switch_break;
    case_4 : /* CIL Label */
    {
      delete_archive_members();
    }
      goto switch_break;
    case_3 : /* CIL Label */
    {
      create_archive();
      name_close();
    }
      if (totals_option) {
        {
          print_total_written();
        }
      }
      goto switch_break;
    case_6 : /* CIL Label */
    {
      extr_init();
      read_and(&extract_archive);
      extract_finish();
    }
      goto switch_break;
    case_7 : /* CIL Label */
    {
      read_and(&list_archive);
    }
      goto switch_break;
    case_5 : /* CIL Label */
    {
      diff_init();
      read_and(&diff_archive);
    }
      goto switch_break;
    switch_break: /* CIL Label */;
    }
    if (check_links_option) {
      {
        check_links();
      }
    }
    if (volno_file_option) {
      {
        closeout_volume_number();
      }
    }
    {
      free((void *)archive_name_array);
      name_term();
    }
    if ((unsigned long)stdlis != (unsigned long)stderr) {
      {
        tmp___3 = ferror_unlocked(stdlis);
      }
      if (tmp___3) {
        {
          tmp___2 = gettext("Error in writing to standard output");
          error(0, 0, (char const *)tmp___2);
          fatal_exit();
        }
      } else {
        { tmp___4 = fclose(stdlis); }
        if (tmp___4 != 0) {
          {
            tmp___2 = gettext("Error in writing to standard output");
            error(0, 0, (char const *)tmp___2);
            fatal_exit();
          }
        }
      }
    }
    if (exit_status == 2) {
      {
        tmp___5 = gettext("Error exit delayed from previous errors");
        error(0, 0, (char const *)tmp___5);
      }
    }
    { tmp___6 = ferror_unlocked(stderr); }
    if (tmp___6) {
      exit_status = 2;
    } else {
      { tmp___7 = fclose(stderr); }
      if (tmp___7 != 0) {
        exit_status = 2;
      }
    }
    return (exit_status);
  }
}
void tar_stat_init(struct tar_stat_info *st) {
  {
    { memset((void *)st, 0, sizeof(*st)); }
    return;
  }
}
void tar_stat_destroy(struct tar_stat_info *st) {
  {
    {
      free((void *)st->orig_file_name);
      free((void *)st->file_name);
      free((void *)st->link_name);
      free((void *)st->uname);
      free((void *)st->gname);
      free((void *)st->sparse_map);
      memset((void *)st, 0, sizeof(*st));
    }
    return;
  }
}
/* #pragma merger("0","00f.update.o.i","") */
static void append_file(char *path) {





























































































}
void update_archive(void) {
























































































































































































}
/* #pragma merger("0","010.utf8.o.i","") */
static iconv_t conv_desc[2] = {(iconv_t)-1, (iconv_t)-1};
static iconv_t utf8_init(_Bool to_utf) {










}
_Bool utf8_convert(_Bool to_utf, char const *input, char **output) {







































}
_Bool string_ascii_p(char const *str) {


















}
/* #pragma merger("0","011.addext.o.i","") */
extern
    __attribute__((__nothrow__)) long(__attribute__((__nonnull__(1), __leaf__))
                                      pathconf)(char const *__path, int __name);
void addext(char *filename, char const *ext, int e);
size_t base_len(char const *name);
void addext(char *filename, char const *ext, int e) {










































































}
/* #pragma merger("0","012.argmatch.o.i","") */
int argmatch(char const *arg, char const *const *arglist, char const *vallist,
             size_t valsize);
void (*argmatch_die)(void);
void argmatch_invalid(char const *context, char const *value, int problem);
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize);
int __xargmatch_internal(char const *context, char const *arg,
                         char const *const *arglist, char const *vallist,
                         size_t valsize, void (*exit_fn)(void));
int volatile exit_failure;
static void __argmatch_die(void) {



}
void (*argmatch_die)(void) = &__argmatch_die;
int argmatch(char const *arg, char const *const *arglist, char const *vallist,
             size_t valsize) {
























































}
void argmatch_invalid(char const *context, char const *value, int problem) {




























}
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize) {






















































}
int __xargmatch_internal(char const *context, char const *arg,
                         char const *const *arglist, char const *vallist,
                         size_t valsize, void (*exit_fn)(void)) {

















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
char *find_backup_file_name(char const *file,
                            enum backup_type backup_type___0) {

















































































}
static int max_backup_version(char const *file, char const *dir) {















































}
static int version_number(char const *base, char const *backup,
                          size_t base_length) {



































}
static char const *const backup_args[9] = {
    (char const * /* const  */) "none",
    (char const * /* const  */) "off",
    (char const * /* const  */) "simple",
    (char const * /* const  */) "never",
    (char const * /* const  */) "existing",
    (char const * /* const  */) "nil",
    (char const * /* const  */) "numbered",
    (char const * /* const  */) "t",
    (char const * /* const  */)0};
static enum backup_type const backup_types[8] = {
    (enum backup_type const)0, (enum backup_type const)0,
    (enum backup_type const)1, (enum backup_type const)1,
    (enum backup_type const)2, (enum backup_type const)2,
    (enum backup_type const)3, (enum backup_type const)3};
enum backup_type get_version(char const *context, char const *version) {

















}
enum backup_type xget_version(char const *context, char const *version) {





























}
/* #pragma merger("0","014.basename.o.i","") */
char *base_name(char const *name) {
  char const *base;
  char const *p;
  {
    base = name + 0;
    p = base;
    {
      while (1) {
                                     ;
        if (!*p) {
          goto while_break;
        }
        if ((int const) * p == 47) {
          {
            while (1) {
                                               ;
              p++;
              if (!((int const) * p == 47)) {
                goto while_break___0;
              }
            }
          while_break___0: /* CIL Label */;
          }
          if (!*p) {
            if ((int const) * base == 47) {
              base = p - 1;
            }
            goto while_break;
          }
          base = p;
        }
        p++;
      }
    while_break: /* CIL Label */;
    }
    return ((char *)base);
  }
}
size_t base_len(char const *name) {
  size_t len;
  {
    { len = strlen(name); }
    {
      while (1) {
                                     ;
        if (1UL < len) {
          if (!((int const) * (name + (len - 1UL)) == 47)) {
            goto while_break;
          }
        } else {
          goto while_break;
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
size_t dir_len(char const *path) {

























}
char *dir_name(char const *path) {
























}
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
    if (exclude_count == 0UL) {
      return ((_Bool)0);
    } else {
      exclude = (struct patopts const *)ex->exclude;
      excluded___0 =
          (_Bool)(!(!((exclude + 0)->options & (int const)(1 << 29))));
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
              matcher = &fnmatch;
            } else {
              matcher = &fnmatch_no_wildcards;
            }
            {
              tmp = (*matcher)(pattern, f, options);
              matched = (_Bool)(tmp == 0);
            }
            if (!(options & (1 << 30))) {
              p = f;
              {
                while (1) {
                                                   ;
                  if (*p) {
                    if (!(!matched)) {
                      goto while_break___0;
                    }
                  } else {
                    goto while_break___0;
                  }
                  if ((int const) * p == 47) {
                    if ((int const) * (p + 1) != 47) {
                      {
                        tmp___0 = (*matcher)(pattern, p + 1, options);
                        matched = (_Bool)(tmp___0 == 0);
                      }
                    }
                  }
                  p++;
                }
              while_break___0: /* CIL Label */;
              }
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
      {
        tmp = x2nrealloc((void *)ex->exclude, &ex->exclude_alloc,
                         sizeof(*(ex->exclude)));
        ex->exclude = (struct patopts *)tmp;
      }
    }
    tmp___0 = ex->exclude_count;
    (ex->exclude_count)++;
    patopts = ex->exclude + tmp___0;
    patopts->pattern = pattern;
    patopts->options = options;
    return;
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
               
  int tmp___2;
               
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
    if ((int const) * (filename + 0) == 45) {





    } else {
      tmp___9 = 0;
    }
    use_stdin = (_Bool)tmp___9;
    buf = (char *)((void *)0);
    buf_alloc = (size_t)0;
    buf_count = (size_t)0;
    e = 0;
    if (use_stdin) {

    } else {
      {
        in = fopen((char const * /* __restrict  */)filename,
                   (char const * /* __restrict  */) "r");
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
          {
            tmp = x2realloc((void *)buf, &buf_alloc);
            buf = (char *)tmp;
          }
        }
        tmp___0 = buf_count;
        buf_count++;
        *(buf + tmp___0) = (char)c;
      }
    while_break: /* CIL Label */;
    }
    { tmp___2 = ferror_unlocked(in); }
                  
       


       
     
    if (!use_stdin) {
      {
        tmp___4 = fclose(in);
      }
                         
         


         
       
    }
    {
      tmp___5 = xrealloc((void *)buf, buf_count + 1UL);
      buf = (char *)tmp___5;
      *(buf + buf_count) = line_end;
    }
    if (buf_count == 0UL) {

    } else {
      if ((int)*(buf + (buf_count - 1UL)) == (int)line_end) {
        tmp___10 = 0;
      } else {

      }
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
            tmp___7 = is_space((unsigned char)line_end);
          }
          if (tmp___7) {
            {
              while (1) {
                                                 ;
                if ((unsigned long)pattern_end == (unsigned long)pattern) {

                } else {
                  { tmp___6 = is_space((unsigned char)*(pattern_end + -1)); }
                  if (!tmp___6) {
                    goto while_break___1;
                  }
                }

              }
            while_break___1: /* CIL Label */;
            }
          }
          {
            *pattern_end = (char)'\000';
            (*add_func)(ex, pattern, options);
          }
                     ;
          pattern = (char const *)(p + 1);
        }
        p++;
      }
    while_break___0: /* CIL Label */;
    }
    {
      tmp___8 = __errno_location();
      *tmp___8 = e;
    }
    if (e) {

    } else {
      tmp___11 = 0;
    }
    return (tmp___11);
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
      while (1) {
                                     ;
        if (!(count > 0UL)) {
          goto while_break;
        }
        {
          tmp = safe_write(fd, (void const *)ptr, count);
          n_rw = tmp;
        }
        if (n_rw == 0xffffffffffffffffUL) {
          goto while_break;
        }
        if (n_rw == 0UL) {
          {
            tmp___0 = __errno_location();
            *tmp___0 = 28;
          }
          goto while_break;
        }
        total += n_rw;
        ptr += n_rw;
        count -= n_rw;
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
static char const yytranslate[275] = {
    (char const)0,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)23, (char const)2,  (char const)2,  (char const)24,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)22, (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)21, (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)2,  (char const)2,  (char const)2,  (char const)2,
    (char const)1,  (char const)3,  (char const)4,  (char const)5,
    (char const)6,  (char const)7,  (char const)8,  (char const)9,
    (char const)10, (char const)11, (char const)12, (char const)13,
    (char const)14, (char const)15, (char const)16, (char const)17,
    (char const)18, (char const)19, (char const)20};
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
static short const yyr2[66] = {
    (short const)0, (short const)1, (short const)1, (short const)2,
    (short const)0, (short const)2, (short const)1, (short const)1,
    (short const)1, (short const)1, (short const)1, (short const)1,
    (short const)1, (short const)2, (short const)4, (short const)4,
    (short const)6, (short const)6, (short const)1, (short const)2,
    (short const)1, (short const)1, (short const)2, (short const)1,
    (short const)2, (short const)2, (short const)3, (short const)5,
    (short const)3, (short const)3, (short const)3, (short const)2,
    (short const)4, (short const)2, (short const)3, (short const)2,
    (short const)1, (short const)2, (short const)2, (short const)1,
    (short const)2, (short const)2, (short const)1, (short const)2,
    (short const)2, (short const)1, (short const)2, (short const)2,
    (short const)1, (short const)2, (short const)2, (short const)1,
    (short const)2, (short const)2, (short const)2, (short const)2,
    (short const)1, (short const)1, (short const)1, (short const)1,
    (short const)1, (short const)1, (short const)1, (short const)1,
    (short const)0, (short const)1};
static short const yydefact[81] = {
    (short const)4,  (short const)0,  (short const)1,  (short const)2,
    (short const)60, (short const)62, (short const)59, (short const)61,
    (short const)3,  (short const)57, (short const)58, (short const)23,
    (short const)45, (short const)21, (short const)48, (short const)18,
    (short const)51, (short const)0,  (short const)42, (short const)56,
    (short const)39, (short const)20, (short const)0,  (short const)63,
    (short const)0,  (short const)0,  (short const)5,  (short const)6,
    (short const)7,  (short const)8,  (short const)10, (short const)9,
    (short const)11, (short const)36, (short const)12, (short const)24,
    (short const)19, (short const)0,  (short const)31, (short const)22,
    (short const)44, (short const)47, (short const)50, (short const)41,
    (short const)53, (short const)38, (short const)25, (short const)43,
    (short const)46, (short const)13, (short const)49, (short const)33,
    (short const)40, (short const)52, (short const)37, (short const)0,
    (short const)0,  (short const)0,  (short const)54, (short const)55,
    (short const)35, (short const)30, (short const)0,  (short const)29,
    (short const)34, (short const)28, (short const)64, (short const)26,
    (short const)32, (short const)65, (short const)15, (short const)0,
    (short const)14, (short const)0,  (short const)64, (short const)27,
    (short const)17, (short const)16, (short const)0,  (short const)0,
    (short const)0};
static short const yydefgoto[16] = {
    (short const)78, (short const)2,  (short const)3,  (short const)26,
    (short const)27, (short const)28, (short const)29, (short const)30,
    (short const)31, (short const)32, (short const)33, (short const)8,
    (short const)9,  (short const)10, (short const)34, (short const)72};
static short const yypact[81] = {
    (short const) - 19,    (short const)29,       (short const) - 32768,
    (short const)15,       (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 8,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const)36,       (short const) - 32768, (short const) - 4,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const)38,       (short const)30,       (short const) - 5,
    (short const)39,       (short const)40,       (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const)49,       (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const)41,       (short const)32,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const)33,       (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const)42,       (short const)43,
    (short const)44,       (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const)45,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 6,     (short const)46,       (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const)19,
    (short const) - 32768, (short const)47,       (short const)8,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const)56,       (short const)57,       (short const) - 32768};
static short const yypgoto[16] = {
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 32768, (short const) - 32768,
    (short const) - 32768, (short const) - 11,    (short const) - 32768,
    (short const) - 10};
static short const yytable[71] = {
    (short const)46, (short const)47, (short const)1,  (short const)48,
    (short const)69, (short const)49, (short const)50, (short const)51,
    (short const)52, (short const)53, (short const)54, (short const)70,
    (short const)55, (short const)37, (short const)38, (short const)35,
    (short const)71, (short const)56, (short const)69, (short const)57,
    (short const)11, (short const)12, (short const)13, (short const)14,
    (short const)15, (short const)76, (short const)16, (short const)17,
    (short const)18, (short const)19, (short const)20, (short const)21,
    (short const)22, (short const)23, (short const)24, (short const)25,
    (short const)40, (short const)5,  (short const)41, (short const)7,
    (short const)36, (short const)42, (short const)39, (short const)43,
    (short const)44, (short const)45, (short const)4,  (short const)5,
    (short const)6,  (short const)7,  (short const)63, (short const)64,
    (short const)60, (short const)58, (short const)59, (short const)62,
    (short const)79, (short const)80, (short const)61, (short const)65,
    (short const)74, (short const)66, (short const)67, (short const)68,
    (short const)77, (short const)75, (short const)0,  (short const)0,
    (short const)0,  (short const)0,  (short const)73};
static short const yycheck[71] = {
    (short const)5,    (short const)6,    (short const)21,   (short const)8,
    (short const)10,   (short const)10,   (short const)11,   (short const)12,
    (short const)13,   (short const)14,   (short const)15,   (short const)17,
    (short const)17,   (short const)17,   (short const)18,   (short const)23,
    (short const)22,   (short const)22,   (short const)10,   (short const)24,
    (short const)5,    (short const)6,    (short const)7,    (short const)8,
    (short const)9,    (short const)17,   (short const)11,   (short const)12,
    (short const)13,   (short const)14,   (short const)15,   (short const)16,
    (short const)17,   (short const)18,   (short const)19,   (short const)20,
    (short const)6,    (short const)18,   (short const)8,    (short const)20,
    (short const)4,    (short const)11,   (short const)4,    (short const)13,
    (short const)14,   (short const)15,   (short const)17,   (short const)18,
    (short const)19,   (short const)20,   (short const)17,   (short const)18,
    (short const)3,    (short const)14,   (short const)14,   (short const)23,
    (short const)0,    (short const)0,    (short const)17,   (short const)17,
    (short const)71,   (short const)18,   (short const)18,   (short const)18,
    (short const)74,   (short const)18,   (short const) - 1, (short const) - 1,
    (short const) - 1, (short const) - 1, (short const)24};
int yyparse(void *parm);
int yyparse(void *parm) {





































































































































































































































































































































































































































































































































































































































































































































}
static table const meridian_table[5] = {{"AM", 264, 0},
                                        {"A.M.", 264, 0},
                                        {"PM", 264, 1},
                                        {"P.M.", 264, 1},
                                        {(char const *)0, 0, 0}};
static table const dst_table[1] = {{"DST", 258, 0}};
static table const month_and_day_table[25] = {
    {"JANUARY", 266, 1},    {"FEBRUARY", 266, 2}, {"MARCH", 266, 3},
    {"APRIL", 266, 4},      {"MAY", 266, 5},      {"JUNE", 266, 6},
    {"JULY", 266, 7},       {"AUGUST", 266, 8},   {"SEPTEMBER", 266, 9},
    {"SEPT", 266, 9},       {"OCTOBER", 266, 10}, {"NOVEMBER", 266, 11},
    {"DECEMBER", 266, 12},  {"SUNDAY", 259, 0},   {"MONDAY", 259, 1},
    {"TUESDAY", 259, 2},    {"TUES", 259, 2},     {"WEDNESDAY", 259, 3},
    {"WEDNES", 259, 3},     {"THURSDAY", 259, 4}, {"THUR", 259, 4},
    {"THURS", 259, 4},      {"FRIDAY", 259, 5},   {"SATURDAY", 259, 6},
    {(char const *)0, 0, 0}};
static table const time_units_table[11] = {
    {"YEAR", 269, 1},   {"MONTH", 267, 1},      {"FORTNIGHT", 260, 14},
    {"WEEK", 260, 7},   {"DAY", 260, 1},        {"HOUR", 262, 1},
    {"MINUTE", 265, 1}, {"MIN", 265, 1},        {"SECOND", 268, 1},
    {"SEC", 268, 1},    {(char const *)0, 0, 0}};
static table const relative_time_table[20] = {
    {"TOMORROW", 260, 1}, {"YESTERDAY", 260, -1}, {"TODAY", 260, 0},
    {"NOW", 260, 0},      {"LAST", 272, -1},      {"THIS", 272, 0},
    {"NEXT", 272, 1},     {"FIRST", 272, 1},      {"THIRD", 272, 3},
    {"FOURTH", 272, 4},   {"FIFTH", 272, 5},      {"SIXTH", 272, 6},
    {"SEVENTH", 272, 7},  {"EIGHTH", 272, 8},     {"NINTH", 272, 9},
    {"TENTH", 272, 10},   {"ELEVENTH", 272, 11},  {"TWELFTH", 272, 12},
    {"AGO", 257, 1},      {(char const *)0, 0, 0}};
static table const time_zone_table[51] = {
    {"GMT", 270, 0},     {"UT", 270, 0},     {"UTC", 270, 0},
    {"WET", 270, 0},     {"WEST", 261, 0},   {"BST", 261, 0},
    {"ART", 270, -180},  {"BRT", 270, -180}, {"BRST", 261, -180},
    {"NST", 270, -210},  {"NDT", 261, -210}, {"AST", 270, -240},
    {"ADT", 261, -240},  {"CLT", 270, -240}, {"CLST", 261, -240},
    {"EST", 270, -300},  {"EDT", 261, -300}, {"CST", 270, -360},
    {"CDT", 261, -360},  {"MST", 270, -420}, {"MDT", 261, -420},
    {"PST", 270, -480},  {"PDT", 261, -480}, {"AKST", 270, -540},
    {"AKDT", 261, -540}, {"HST", 270, -600}, {"HAST", 270, -600},
    {"HADT", 261, -600}, {"SST", 270, -720}, {"WAT", 270, 60},
    {"CET", 270, 60},    {"CEST", 261, 60},  {"MET", 270, 60},
    {"MEZ", 270, 60},    {"MEST", 261, 60},  {"MESZ", 261, 60},
    {"EET", 270, 120},   {"EEST", 261, 120}, {"CAT", 270, 120},
    {"SAST", 270, 120},  {"EAT", 270, 180},  {"MSK", 270, 180},
    {"MSD", 261, 180},   {"IST", 270, 330},  {"SGT", 270, 480},
    {"KST", 270, 540},   {"JST", 270, 540},  {"GST", 270, 600},
    {"NZST", 270, 720},  {"NZDT", 261, 720}, {(char const *)0, 0, 0}};
static table const military_table[26] = {
    {"A", 270, -60},  {"B", 270, -120},       {"C", 270, -180},
    {"D", 270, -240}, {"E", 270, -300},       {"F", 270, -360},
    {"G", 270, -420}, {"H", 270, -480},       {"I", 270, -540},
    {"K", 270, -600}, {"L", 270, -660},       {"M", 270, -720},
    {"N", 270, 60},   {"O", 270, 120},        {"P", 270, 180},
    {"Q", 270, 240},  {"R", 270, 300},        {"S", 270, 360},
    {"T", 270, 420},  {"U", 270, 480},        {"V", 270, 540},
    {"W", 270, 600},  {"X", 270, 660},        {"Y", 270, 720},
    {"Z", 270, 0},    {(char const *)0, 0, 0}};
static int to_hour(long hours, int meridian) {





































































}
static long to_year(textint textyear) {


















}
static table const *lookup_zone(parser_control const *pc, char const *name) {




































}
static table const *lookup_word(parser_control const *pc, char *word) {




































































































































































































}
static int yylex(YYSTYPE *lvalp, parser_control *pc) {



















































































































































































































































































}
static int yyerror(char *s __attribute__((__unused__))) {

}
_Bool get_date(struct timespec *result, char const *p,
               struct timespec const *now) {









































































































































































































































































}
/* #pragma merger("0","01a.getopt1.o.i","") */
/* #pragma merger("0","01b.getopt.o.i","") */
/* #pragma merger("0","01c.gettime.o.i","") */
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1), __leaf__))
    gettimeofday)(struct timeval *__restrict __tv, __timezone_ptr_t __tz);
int gettime(struct timespec *ts) {




















}
/* #pragma merger("0","01d.hash.o.i","") */
_Bool hash_rehash(Hash_table *table___0, size_t candidate);
static struct hash_tuning const default_tuning = {
    (float)0.0, (float)1.0, (float)0.8, (float)1.414, (_Bool)0};
void *hash_lookup(Hash_table const *table___0, void const *entry) {





































}
void *hash_get_first(Hash_table const *table___0) {























}
void *hash_get_next(Hash_table const *table___0, void const *entry) {












































}
size_t hash_do_for_each(Hash_table const *table___0,
                        _Bool (*processor)(void *, void *),
                        void *processor_data) {





































}
size_t hash_string(char const *string, size_t n_buckets) {


















}
static _Bool is_prime(size_t candidate) {





























}
static size_t next_prime(size_t candidate) {



















}
static _Bool check_tuning(Hash_table *table___0) {

























}
Hash_table *hash_initialize(size_t candidate, Hash_tuning const *tuning,
                            size_t (*hasher)(void const *, size_t),
                            _Bool (*comparator)(void const *, void const *),
                            void (*data_freer)(void *)) {









































































}
static struct hash_entry *allocate_entry(Hash_table *table___0) {














}
static void free_entry(Hash_table *table___0, struct hash_entry *entry) {






}
static void *hash_find_entry(Hash_table *table___0, void const *entry,
                             struct hash_entry **bucket_head, _Bool delete) {



































































}
_Bool hash_rehash(Hash_table *table___0, size_t candidate) {




























































































}
void *hash_insert(Hash_table *table___0, void const *entry) {
































































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
static long double adjust_value(int inexact_style, long double value) {




















}
static char *group_number(char *number, size_t numberlen, char const *grouping,
                          char const *thousands_sep) {




















































}
char *human_readable(uintmax_t n, char *buf, int opts,
                     uintmax_t from_block_size, uintmax_t to_block_size) {










































































































































































































































































































































































}
static char const *const block_size_args[3] = {
    (char const * /* const  */) "human-readable",
    (char const * /* const  */) "si", (char const * /* const  */)0};
static int const block_size_opts[2] = {(int const)112, (int const)80};
/* #pragma merger("0","01f.mktime.o.i","") */
extern __attribute__((__nothrow__)) struct tm *(
    __attribute__((__leaf__))
    localtime_r)(time_t const *__restrict __timer, struct tm *__restrict __tp);
__inline static int leapyear(int year) {

















}
static unsigned short const __mon_yday[2][13] = {
    {(unsigned short const)0, (unsigned short const)31,
     (unsigned short const)59, (unsigned short const)90,
     (unsigned short const)120, (unsigned short const)151,
     (unsigned short const)181, (unsigned short const)212,
     (unsigned short const)243, (unsigned short const)273,
     (unsigned short const)304, (unsigned short const)334,
     (unsigned short const)365},
    {(unsigned short const)0, (unsigned short const)31,
     (unsigned short const)60, (unsigned short const)91,
     (unsigned short const)121, (unsigned short const)152,
     (unsigned short const)182, (unsigned short const)213,
     (unsigned short const)244, (unsigned short const)274,
     (unsigned short const)305, (unsigned short const)335,
     (unsigned short const)366}};
__inline static time_t ydhms_diff(long year1, long yday1, int hour1, int min1,
                                  int sec1, int year0, int yday0, int hour0,
                                  int min0, int sec0) {






























}
static time_t guess_time_tm(long year, long yday, int hour, int min, int sec,
                            time_t const *t, struct tm const *tp) {
































}
static struct tm *ranged_convert(struct tm *(*convert)(time_t const *,
                                                       struct tm *),
                                 time_t *t, struct tm *tp) {






















































}
time_t mktime_internal(struct tm *tp,
                       struct tm *(*convert)(time_t const *, struct tm *),
                       time_t *offset) {
































































































































































































































































}
static time_t localtime_offset;
__attribute__((__nothrow__))
time_t(__attribute__((__leaf__)) rpl_mktime)(struct tm *tp);
time_t(__attribute__((__leaf__)) rpl_mktime)(struct tm *tp) {









}
/* #pragma merger("0","020.modechange.o.i","") */
void mode_free(struct mode_change *changes);
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes);
static struct mode_change *make_node_op_equals(mode_t new_mode) {

















}
static void mode_append_entry(struct mode_change **head,
                              struct mode_change **tail,
                              struct mode_change *e) {












}
struct mode_change *mode_compile(char const *mode_string,
                                 unsigned int masked_ops) {












































































































































































































































































































































































}
mode_t mode_adjust(mode_t oldmode, struct mode_change const *changes) {



















































































































}
void mode_free(struct mode_change *changes) {


















}
/* #pragma merger("0","021.prepargs.o.i","") */
static int prepend_args(char const *options, char *buf, char **argv) {








































































}
void prepend_default_options(char const *options, int *pargc, char ***pargv) {
  char *buf;
  size_t tmp;
  void *tmp___0;
  int prepended;
  int tmp___1;
  int argc;
  char *const *argv;
  char **pp;
  void *tmp___2;
  char **tmp___3;
  char *const *tmp___4;
  int tmp___5;
  char **tmp___6;
  char *tmp___7;
  char *const *tmp___8;
  {
    if (options) {
      {
        tmp = strlen(options);
        tmp___0 = xmalloc(tmp + 1UL);
        buf = (char *)tmp___0;
        tmp___1 = prepend_args(options, buf, (char **)0);
        prepended = tmp___1;
        argc = *pargc;
        argv = (char *const *)*pargv;
        tmp___2 =
            xmalloc((unsigned long)((prepended + argc) + 1) * sizeof(*pp));
        pp = (char **)tmp___2;
        *pargc = prepended + argc;
        *pargv = pp;
        tmp___3 = pp;
        pp++;
        tmp___4 = argv;
        argv++;
        *tmp___3 = (char *)*tmp___4;
        tmp___5 = prepend_args(options, buf, pp);
        pp += tmp___5;
      }
      {
        while (1) {
        while_continue: /* CIL Label */;
          tmp___6 = pp;
          pp++;
          tmp___8 = argv;
          argv++;
          tmp___7 = (char *)*tmp___8;
          *tmp___6 = tmp___7;
          if (!tmp___7) {
            goto while_break;
          }
          goto while_continue;
        }
      while_break: /* CIL Label */;
      }
    }
    return;
  }
}
/* #pragma merger("0","022.quotearg.o.i","") */
char const *const quoting_style_args[8];
enum quoting_style const quoting_style_vals[7];
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
char const *const quoting_style_args[8] = {
    (char const * /* const  */) "literal",
    (char const * /* const  */) "shell",
    (char const * /* const  */) "shell-always",
    (char const * /* const  */) "c",
    (char const * /* const  */) "escape",
    (char const * /* const  */) "locale",
    (char const * /* const  */) "clocale",
    (char const * /* const  */)0};
enum quoting_style const quoting_style_vals[7] = {
    (enum quoting_style const)0, (enum quoting_style const)1,
    (enum quoting_style const)2, (enum quoting_style const)3,
    (enum quoting_style const)4, (enum quoting_style const)5,
    (enum quoting_style const)6};
static struct quoting_options default_quoting_options;
struct quoting_options *clone_quoting_options(struct quoting_options *o___0) {

























}
void set_quoting_style(struct quoting_options *o___0, enum quoting_style s) {
  struct quoting_options *tmp;
  {
    if (o___0) {
      tmp = o___0;
    } else {
      tmp = &default_quoting_options;
    }
    tmp->style = s;
    return;
  }
}
int set_char_quoting(struct quoting_options *o___0, char c, int i) {
  unsigned char uc;
  int *p;
  int shift;
  int r;
  struct quoting_options *tmp;
  {
    uc = (unsigned char)c;
    if (o___0) {
      tmp = o___0;
    } else {

    }
    p = tmp->quote_these_too + (unsigned long)uc / (sizeof(int) * 8UL);
    shift = (int)((unsigned long)uc % (sizeof(int) * 8UL));
    r = (*p >> shift) & 1;
    *p ^= ((i & 1) ^ r) << shift;
    return (r);
  }
}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {















}
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
                   
                      
                    
                      
  unsigned char c;
                    
              
           
                
                                 
                    
            
               
                 
           
              
              
              
                 
              
  int tmp___9;
                    
                    
                    
                    
                    
  {
    {
      len = (size_t)0;
      quote_string = (char const *)0;
      quote_string_len = (size_t)0;
      backslash_escapes = 0;
      tmp = __ctype_get_mb_cur_max();
      unibyte_locale = tmp == 1UL;
    }
    {
                                              

       
      if ((unsigned int)quoting_style == 4U) {
        goto case_4;
      }










              ;/* CIL Label */
    {









    }




    case_4: ;/* CIL Label */
      backslash_escapes = 1;
      goto switch_break;
              ;/* CIL Label */
              ;/* CIL Label */
    {





    }
      {



















      }
      {



      }

              ;/* CIL Label */
    {









    }



                     ;/* CIL Label */

    switch_break: /* CIL Label */;
    }
    i = (size_t)0;
    {
      while (1) {
                                         ;
        if (argsize == 0xffffffffffffffffUL) {
          tmp___9 = (int const) * (arg + i) == 0;
        } else {

        }
        if (tmp___9) {
          goto while_break___3;
        }
                                
                                 



















           
         
        c = (unsigned char)*(arg + i);
        {
                            

           
                             

           
                            

           
                            

           
                             

           
                             

           
                             

           
                            

           
                             

           
                             

           
                              

           
                              

           
                             

           
                              

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                              

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
                             

           
          if ((int)c == 97) {
            goto case_37;
          }
          if ((int)c == 98) {
            goto case_37;
          }
                             

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
                              

           
          if ((int)c == 114) {
            goto case_37;
          }

























                 ;/* CIL Label */





































                   ;/* CIL Label */
        {







                 ;/* CIL Label */

                     ;/* CIL Label */

















































































                             ;/* CIL Label */


        }

                 ;/* CIL Label */


                 ;/* CIL Label */


                  ;/* CIL Label */


                  ;/* CIL Label */


                  ;/* CIL Label */


                 ;/* CIL Label */


                  ;/* CIL Label */


                  ;/* CIL Label */


                           ;



                 ;





                   ;/* CIL Label */
                   ;/* CIL Label */








                   ;/* CIL Label */
                   ;/* CIL Label */



                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */




                       ;/* CIL Label */
        {







                     ;/* CIL Label */

                      ;/* CIL Label */
        {









        }
          {









          }
          {









          }

                             ;/* CIL Label */


        }

        case_37:     ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
                      ;/* CIL Label */
          goto switch_break___0;
                             ;/* CIL Label */



















































































































































































        switch_break___0: /* CIL Label */;
        }
        if (backslash_escapes) {
          if (!(o___0->quote_these_too[(unsigned long)c / (sizeof(int) * 8UL)] &
                (1 << (unsigned long)c % (sizeof(int) * 8UL)))) {
            goto store_c;
          }
        } else {

        }











      store_c : {
        while (1) {
                                            ;
          if (len < buffersize) {
            *(buffer___2 + len) = (char)c;
          }
          len++;
          goto while_break___23;
        }
      while_break___23: /* CIL Label */;
      }
        i++;
      }
    while_break___3: /* CIL Label */;
    }
                   



     
                       
       



















       
     
    if (len < buffersize) {
      *(buffer___2 + len) = (char)'\000';
    }
    return (len);





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

    }
    {
      tmp = __errno_location();
      e = *tmp;
      tmp___0 = quotearg_buffer_restyled(buffer___2, buffersize, arg, argsize,
                                         (enum quoting_style)p->style, p);
      r = tmp___0;
      tmp___1 = __errno_location();
      *tmp___1 = e;
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
                  
                
                
  size_t size;
  char *val;
  size_t qsize;
  size_t tmp___2;
                
  int *tmp___4;
              
  {
    {
      tmp = __errno_location();
      e = *tmp;
      n0 = (unsigned int)n;
    }
                
       

       
     
                       


















       






       
     
    {
      size = (slotvec + n)->size;
      val = (slotvec + n)->val;
      tmp___2 = quotearg_buffer(val, size, arg, argsize, options);
      qsize = tmp___2;
    }
                        







       




       
     
    {
      tmp___4 = __errno_location();
      *tmp___4 = e;
    }
    return (val);
  }
}
char *quotearg_n(int n, char const *arg) {









}
char *quotearg(char const *arg) {





}
static struct quoting_options
quoting_options_from_style(enum quoting_style style) {









}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {














}
char *quotearg_char(char const *arg, char ch) {
  struct quoting_options options;
  char *tmp;
                   
  {
    {
      options = default_quoting_options;
      set_char_quoting(&options, ch, 1);
      tmp = quotearg_n_options(0, arg, (size_t)-1,
                               (struct quoting_options const *)(&options));
    }
    return (tmp);
  }
}
char *quotearg_colon(char const *arg) {
  char *tmp;
  {
    { tmp = quotearg_char(arg, (char)':'); }
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
    if (count > 2147483647UL) {
      count = (size_t)2147475456;
    }
    {
      while (1) {
                                     ;
        { result = read(fd, buf, count); }
        if (result < 0L) {
          {
            tmp = __errno_location();
          }
          if (!(*tmp == 4)) {
            goto while_break;
          }
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
    if (count > 2147483647UL) {
      count = (size_t)2147475456;
    }
    {
      while (1) {
                                     ;
        { result = write(fd, buf, count); }
        if (result < 0L) {
          {
            tmp = __errno_location();
          }
          if (!(*tmp == 4)) {
            goto while_break;
          }
        } else {
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
  {
    cwd->desc = -1;
    cwd->name = (char *)((void *)0);
    if (have_working_fchdir) {
      {
        cwd->desc = open(".", 65536);
      }
      if (cwd->desc < 0) {
        return (1);
      }
    }
    if (!have_working_fchdir) {
      {
        cwd->name = xgetcwd();
      }
      if ((unsigned long)cwd->name == (unsigned long)((void *)0)) {
        return (1);
      }
    }
    return (0);
  }
}
int restore_cwd(struct saved_cwd const *cwd) {













}
/* #pragma merger("0","027.savedir.o.i","") */
char *savedir(char const *dir) {
  DIR *dirp;
  struct dirent *dp;
  char *name_space;
  size_t allocated;
  size_t used;
  int save_errno;
  void *tmp;
  int *tmp___0;
  char const *entry;
  size_t entry_size;
  size_t tmp___1;
  void *tmp___2;
  int *tmp___3;
  int *tmp___4;
  int tmp___5;
  int *tmp___6;
  int tmp___7;
  int tmp___8;
  {
    {
      allocated = (size_t)512;
      used = (size_t)0;
      dirp = opendir(dir);
    }
    if ((unsigned long)dirp == (unsigned long)((void *)0)) {
      return ((char *)((void *)0));
    }
    {
      tmp = xmalloc(allocated);
      name_space = (char *)tmp;
      tmp___0 = __errno_location();
      *tmp___0 = 0;
    }
    {
      while (1) {
                                     ;
        { dp = readdir(dirp); }
        if (!((unsigned long)dp != (unsigned long)((void *)0))) {
          goto while_break;
        }
        entry = (char const *)(dp->d_name);
        if ((int const) * (entry + 0) != 46) {
          tmp___8 = 0;
        } else {
          if ((int const) * (entry + 1) != 46) {
            tmp___7 = 1;
          } else {
            tmp___7 = 2;
          }
          tmp___8 = tmp___7;
        }
        if ((int const) * (entry + tmp___8) != 0) {
          {
            tmp___1 = strlen(entry);
            entry_size = tmp___1 + 1UL;
          }
          if (used + entry_size < used) {
            {
              xalloc_die();
            }
          }
          if (allocated <= used + entry_size) {
            {
              while (1) {
                                                 ;
                if (2UL * allocated < allocated) {
                  {
                    xalloc_die();
                  }
                }
                allocated *= 2UL;
                if (!(allocated <= used + entry_size)) {
                  goto while_break___0;
                }
              }
            while_break___0: /* CIL Label */;
            }
            {
              tmp___2 = xrealloc((void *)name_space, allocated);
              name_space = (char *)tmp___2;
            }
          }
          {
            memcpy((void * /* __restrict  */)(name_space + used),
                   (void const * /* __restrict  */)entry, entry_size);
            used += entry_size;
          }
        }
      }
    while_break: /* CIL Label */;
    }
    {
      *(name_space + used) = (char)'\000';
      tmp___3 = __errno_location();
      save_errno = *tmp___3;
      tmp___5 = closedir(dirp);
    }
    if (tmp___5 != 0) {
      {
        tmp___4 = __errno_location();
        save_errno = *tmp___4;
      }
    }
    if (save_errno != 0) {
      {
        free((void *)name_space);
        tmp___6 = __errno_location();
        *tmp___6 = save_errno;
      }
      return ((char *)((void *)0));
    }
    return (name_space);
  }
}
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
char *xgetcwd(void) {




















}
/* #pragma merger("0","02a.xmalloc.o.i","") */
char const xalloc_msg_memory_exhausted[17];
void *xclone(void const *p, size_t s);
extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);
void (*xalloc_fail_func)(void) = (void (*)(void))0;
char const xalloc_msg_memory_exhausted[17] = {
    (char const)'m',   (char const)'e', (char const)'m', (char const)'o',
    (char const)'r',   (char const)'y', (char const)' ', (char const)'e',
    (char const)'x',   (char const)'h', (char const)'a', (char const)'u',
    (char const)'s',   (char const)'t', (char const)'e', (char const)'d',
    (char const)'\000'};
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {













}
__inline static void *xnmalloc_inline(size_t n, size_t s) {
  void *p;
  int tmp;
  {
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp = -1;
    } else {
      tmp = -2;
    }
    if ((size_t)tmp / s < n) {
      {
        xalloc_die();
      }
    } else {
      { p = malloc(n * s); }
      if (!p) {
        {
          xalloc_die();
        }
      }
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
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp = -1;
    } else {
      tmp = -2;
    }
    if ((size_t)tmp / s < n) {
      {
        xalloc_die();
      }
    } else {
      { p = realloc(p, n * s); }
      if (!p) {
        {
          xalloc_die();
        }
      }
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
    if (!p) {
      if (!n) {
        n = 64UL / s;
        n += (size_t)(!n);
      }
    } else {






    }
    {
      *pn = n;
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
static strtol_error bkm_scale___0(unsigned long *x, int scale_factor) {








}
static strtol_error bkm_scale_by_power___0(unsigned long *x, int base,
                                           int power) {






















}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes) {






























































































































































































































































}
/* #pragma merger("0","02e.xstrtoumax.o.i","") */
extern __attribute__((__nothrow__))
uintmax_t(__attribute__((__leaf__)) strtoumax)(char const *__restrict __nptr,
                                               char **__restrict __endptr,
                                               int __base);
static strtol_error bkm_scale___1(uintmax_t *x, int scale_factor) {








}
static strtol_error bkm_scale_by_power___1(uintmax_t *x, int base, int power) {






















}
strtol_error xstrtoumax(char const *s, char **ptr, int strtol_base,
                        uintmax_t *val, char const *valid_suffixes) {






























































































































































































































































}
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