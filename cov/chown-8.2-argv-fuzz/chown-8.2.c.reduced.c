#include "argv-fuzz-inl.h"
typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
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
typedef long __time_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __syscall_slong_t;
typedef __mode_t mode_t;
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
typedef __ino_t ino_t;
typedef __dev_t dev_t;
struct hash_table;
struct hash_table;
struct hash_table;
typedef struct hash_table Hash_table;
struct F_triple {
  char *name;
  ino_t st_ino;
  dev_t st_dev;
};
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef int wchar_t;
union __anonunion___value_4 {
  unsigned int __wch;
  char __wchb[4];
};
struct __anonstruct___mbstate_t_3 {
  int __count;
  union __anonunion___value_4 __value;
};
typedef struct __anonstruct___mbstate_t_3 __mbstate_t;
typedef unsigned int wint_t;
struct hash_tuning {
  float shrink_threshold;
  float shrink_factor;
  float growth_threshold;
  float growth_factor;
  _Bool is_n_buckets;
};
typedef struct hash_tuning Hash_tuning;
typedef __mbstate_t mbstate_t;
struct mbchar {
  char const *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
struct mbuiter_multi {
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
typedef __gid_t gid_t;
typedef __uid_t uid_t;
typedef unsigned long uintmax_t;
struct dev_ino {
  ino_t st_ino;
  dev_t st_dev;
};
struct cycle_check_state {
  struct dev_ino dev_ino;
  uintmax_t chdir_counter;
  int magic;
};
typedef long ptrdiff_t;
struct dirent {
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
};
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
enum quoting_style {
  literal_quoting_style = 0,
  shell_quoting_style = 1,
  shell_always_quoting_style = 2,
  c_quoting_style = 3,
  c_maybe_quoting_style = 4,
  escape_quoting_style = 5,
  locale_quoting_style = 6,
  clocale_quoting_style = 7,
  custom_quoting_style = 8
};
enum strtol_error {
  LONGINT_OK = 0,
  LONGINT_OVERFLOW = 1,
  LONGINT_INVALID_SUFFIX_CHAR = 2,
  LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = 3,
  LONGINT_INVALID = 4
};
typedef enum strtol_error strtol_error;
struct option {
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
typedef long intmax_t;
typedef __nlink_t nlink_t;
struct I_ring {
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
struct _ftsent;
struct _ftsent;
struct _ftsent;
union __anonunion_fts_cycle_29 {
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_28 {
  struct _ftsent *fts_cur;
  struct _ftsent *fts_child;
  struct _ftsent **fts_array;
  dev_t fts_dev;
  char *fts_path;
  int fts_rfd;
  int fts_cwd_fd;
  size_t fts_pathlen;
  size_t fts_nitems;
  int (*fts_compar)(struct _ftsent const **, struct _ftsent const **);
  int fts_options;
  struct hash_table *fts_leaf_optimization_works_ht;
  union __anonunion_fts_cycle_29 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_28 FTS;
struct _ftsent {
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  long fts_number;
  void *fts_pointer;
  char *fts_accpath;
  char *fts_path;
  int fts_errno;
  int fts_symfd;
  size_t fts_pathlen;
  FTS *fts_fts;
  ptrdiff_t fts_level;
  size_t fts_namelen;
  nlink_t fts_n_dirs_remaining;
  unsigned short fts_info;
  unsigned short fts_flags;
  unsigned short fts_instr;
  struct stat fts_statp[1];
  char fts_name[1];
};
typedef struct _ftsent FTSENT;
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
typedef unsigned long reg_syntax_t;
struct quoting_options;
struct quoting_options;
struct quoting_options;
struct quoting_options {
  enum quoting_style style;
  int flags;
  unsigned int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
  char const *left_quote;
  char const *right_quote;
};
struct slotvec {
  size_t size;
  char *val;
};
struct hash_entry {
  void *data;
  struct hash_entry *next;
};
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
struct __anonstruct___fsid_t_1 {
  int __val[2];
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
struct Active_dir {
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};
struct statfs {
  __fsword_t f_type;
  __fsword_t f_bsize;
  __fsblkcnt_t f_blocks;
  __fsblkcnt_t f_bfree;
  __fsblkcnt_t f_bavail;
  __fsfilcnt_t f_files;
  __fsfilcnt_t f_ffree;
  __fsid_t f_fsid;
  __fsword_t f_namelen;
  __fsword_t f_frsize;
  __fsword_t f_flags;
  __fsword_t f_spare[4];
};
struct LCO_ent {
  dev_t st_dev;
  _Bool opt_ok;
};
enum Change_status {
  CH_NOT_APPLIED = 1,
  CH_SUCCEEDED = 2,
  CH_FAILED = 3,
  CH_NO_CHANGE_REQUESTED = 4
};
enum Verbosity { V_high = 0, V_changes_only = 1, V_off = 2 };
struct Chown_option {
  enum Verbosity verbosity;
  _Bool recurse;
  struct dev_ino *root_dev_ino;
  _Bool affect_symlink_referent;
  _Bool force_silent;
  char *user_name;
  char *group_name;
};
enum RCH_status {
  RC_ok = 2,
  RC_excluded = 3,
  RC_inode_changed = 4,
  RC_do_ordinary_chown = 5,
  RC_error = 6
};
extern __attribute__((__nothrow__)) int *(
    __attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern int close(int __fd);
extern int(__attribute__((__nonnull__(1))) open)(char const *__file,
                                                 int __oflag, ...);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        tolower)(int __c);
extern __attribute__((__nothrow__))
size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s)
    __attribute__((__pure__));
extern int fclose(FILE *__stream);
int dup_safer(int fd);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strcmp)(char const *__s1, char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    strncmp)(char const *__s1, char const *__s2, size_t __n)
    __attribute__((__pure__));
__attribute__((__noreturn__)) void xalloc_die(void);
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           malloc)(size_t __size)
    __attribute__((__malloc__));
char *last_component(char const *name);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           gettext)(char const *__msgid)
    __attribute__((__format_arg__(1)));
void *hash_lookup(Hash_table const *table___0, void const *entry);
void *(__attribute__((__warn_unused_result__))
       hash_insert)(Hash_table *table___0, void const *entry);
void triple_free(void *x);
void *xmalloc(size_t n) __attribute__((__malloc__));
char *xstrdup(char const *string) __attribute__((__malloc__));
extern DIR *fdopendir(int __fd);
DIR *rpl_fdopendir(int fd);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fstat)(int __fd, struct stat *__buf);
DIR *rpl_fdopendir(int fd) {
  struct stat st;
  int tmp;
               
  DIR *tmp___1;
  {
    tmp = fstat(fd, &st);
              

     
                                             



     
    tmp___1 = fdopendir(fd);
    return (tmp___1);
  }
}
int fd_safer(int fd);
int fd_safer(int fd) {
        
          
        
               
               
  {
                  
                    








       
     
    return (fd);
  }
}
int volatile exit_failure;
int volatile exit_failure = (int volatile)1;
extern __attribute__((__nothrow__)) unsigned short const **(
    __attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        ferror_unlocked)(FILE *__stream);
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __ctype_get_mb_cur_max)(void);
extern __attribute__((__nothrow__)) void(__attribute__((__leaf__))
                                         free)(void *__ptr);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       abort)(void);
extern
    __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1),
                                                       __leaf__))
                                        memset)(void *__s, int __c, size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strchr)(char const *__s, int __c)
    __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1),
                                                          __leaf__))
                                           strrchr)(char const *__s, int __c)
    __attribute__((__pure__));
int mbscasecmp(char const *s1, char const *s2);
extern __attribute__((__nothrow__))
wint_t(__attribute__((__leaf__)) towlower)(wint_t __wc);
size_t hash_string(char const *string, size_t n_buckets);
Hash_table *(__attribute__((__warn_unused_result__))
             hash_initialize)(size_t candidate, Hash_tuning const *tuning,
                              size_t (*hasher)(void const *, size_t),
                              _Bool (*comparator)(void const *, void const *),
                              void (*data_freer)(void *));
void hash_free(Hash_table *table___0);
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((
    __leaf__)) __assert_fail)(char const *__assertion, char const *__file,
                              unsigned int __line, char const *__function);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        mbsinit)(mbstate_t const *__ps)
    __attribute__((__pure__));
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__))
       mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s,
                size_t __n, mbstate_t *__restrict __p);
unsigned int const is_basic_table[8];
__inline static _Bool is_basic(char c) {





}
size_t strnlen1(char const *string, size_t maxlen);
__inline static void mbuiter_multi_next(struct mbuiter_multi *iter) {

































































}
void *xrealloc(void *p, size_t n);
extern int fcntl(int __fd, int __cmd, ...);
int dup_safer(int fd) {
  int tmp;
  {
    tmp = fcntl(fd, 0, 3);
    return (tmp);
  }
}
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fchown)(int __fd, __uid_t __owner,
                                                __gid_t __group);
char const diacrit_base[256];
char const diacrit_diac[256];
char const diacrit_base[256] = {
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)'A', (char const)'B', (char const)'C',
    (char const)'D', (char const)'E', (char const)'F', (char const)'G',
    (char const)'H', (char const)'I', (char const)'J', (char const)'K',
    (char const)'L', (char const)'M', (char const)'N', (char const)'O',
    (char const)'P', (char const)'Q', (char const)'R', (char const)'S',
    (char const)'T', (char const)'U', (char const)'V', (char const)'W',
    (char const)'X', (char const)'Y', (char const)'Z', (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)'a', (char const)'b', (char const)'c',
    (char const)'d', (char const)'e', (char const)'f', (char const)'g',
    (char const)'h', (char const)'i', (char const)'j', (char const)'k',
    (char const)'l', (char const)'m', (char const)'n', (char const)'o',
    (char const)'p', (char const)'q', (char const)'r', (char const)'s',
    (char const)'t', (char const)'u', (char const)'v', (char const)'w',
    (char const)'x', (char const)'y', (char const)'z', (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)0,   (char const)0,   (char const)0,   (char const)0,
    (char const)'A', (char const)'A', (char const)'A', (char const)'A',
    (char const)'A', (char const)'A', (char const)'A', (char const)'C',
    (char const)'E', (char const)'E', (char const)'E', (char const)'E',
    (char const)'I', (char const)'I', (char const)'I', (char const)'I',
    (char const)0,   (char const)'N', (char const)'O', (char const)'O',
    (char const)'O', (char const)'O', (char const)'O', (char const)0,
    (char const)'O', (char const)'U', (char const)'U', (char const)'U',
    (char const)'U', (char const)'Y', (char const)0,   (char const)0,
    (char const)'a', (char const)'a', (char const)'a', (char const)'a',
    (char const)'a', (char const)'a', (char const)'a', (char const)'c',
    (char const)'e', (char const)'e', (char const)'e', (char const)'e',
    (char const)'i', (char const)'i', (char const)'i', (char const)'i',
    (char const)0,   (char const)'n', (char const)'o', (char const)'o',
    (char const)'o', (char const)'o', (char const)'o', (char const)0,
    (char const)'o', (char const)'u', (char const)'u', (char const)'u',
    (char const)'u', (char const)'y', (char const)0,   (char const)'y'};
char const diacrit_diac[256] = {
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)4,
    (char const)0, (char const)3, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)6, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)3, (char const)2, (char const)4,
    (char const)6, (char const)5, (char const)8, (char const)1, (char const)7,
    (char const)3, (char const)2, (char const)4, (char const)5, (char const)3,
    (char const)2, (char const)4, (char const)5, (char const)0, (char const)6,
    (char const)3, (char const)2, (char const)4, (char const)6, (char const)5,
    (char const)0, (char const)9, (char const)3, (char const)2, (char const)4,
    (char const)5, (char const)2, (char const)0, (char const)0, (char const)3,
    (char const)2, (char const)4, (char const)6, (char const)5, (char const)8,
    (char const)1, (char const)7, (char const)3, (char const)2, (char const)4,
    (char const)5, (char const)3, (char const)2, (char const)4, (char const)5,
    (char const)0, (char const)6, (char const)3, (char const)2, (char const)4,
    (char const)6, (char const)5, (char const)0, (char const)9, (char const)3,
    (char const)2, (char const)4, (char const)5, (char const)2, (char const)0,
    (char const)0};
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb);
__inline static _Bool is_zero_or_power_of_two(uintmax_t i) {
  { return ((_Bool)((i & (i - 1UL)) == 0UL)); }
}
void cycle_check_init(struct cycle_check_state *state) {
  {
    state->chdir_counter = (uintmax_t)0;
    state->magic = 9827862;
    return;
  }
}
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb) {
  _Bool tmp;
  {
                                     




     
                               
                                                               



       
     
    (state->chdir_counter)++;
    tmp = is_zero_or_power_of_two(state->chdir_counter);
    if (tmp) {
                                        

       
      state->dev_ino.st_dev = (dev_t)sb->st_dev;
      state->dev_ino.st_ino = (ino_t)sb->st_ino;
    }
    return ((_Bool)0);
  }
}
extern void error(int __status, int __errnum, char const *__format, ...);
char const *quote(char const *name);
void close_stdout(void);
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
char *quotearg_colon(char const *arg);
static char const *file_name;
static _Bool ignore_EPIPE;
void close_stdout(void) {
                          
                  
                
               
               
  int tmp___3;
               
  int tmp___5;
  {
    tmp___3 = close_stream(stdout);
                       



















     
    tmp___5 = close_stream(stderr);
                       

     
    return;
  }
}
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
int close_stream(FILE *stream) {
  _Bool some_pending;
  size_t tmp;
  _Bool prev_fail;
  int tmp___0;
  _Bool fclose_fail;
  int tmp___1;
               
               
  {
    tmp = __fpending(stream);
    some_pending = (_Bool)(tmp != 0UL);
    tmp___0 = ferror_unlocked(stream);
    prev_fail = (_Bool)(tmp___0 != 0);
    tmp___1 = fclose(stream);
    fclose_fail = (_Bool)(tmp___1 != 0);
                    

            
                        













       
     
    return (0);
  }
}
int set_cloexec_flag(int desc, _Bool value);
int set_cloexec_flag(int desc, _Bool value) {
  int flags;
  int tmp;
  int newflags;
  int tmp___0;
  int tmp___1;
  {
    tmp = fcntl(desc, 1, 0);
    flags = tmp;
    if (0 <= flags) {
      if (value) {
        tmp___0 = flags | 1;
      } else {

      }
      newflags = tmp___0;
      if (flags == newflags) {

      } else {
        tmp___1 = fcntl(desc, 2, newflags);
        if (tmp___1 != -1) {
          return (0);
        }
      }
    }

  }
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fchdir)(int __fd);
extern int(__attribute__((__nonnull__(2))) openat)(int __fd, char const *__file,
                                                   int __oflag, ...);
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1), __leaf__))
    memchr)(void const *__s, int __c, size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memmove)(void *__dest, void const *__src, size_t __n);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    lstat)(char const *__restrict __file, struct stat *__restrict __buf);
size_t triple_hash(void const *x, size_t table_size);
_Bool triple_compare_ino_str(void const *x, void const *y);
char *last_component(char const *name) {































}
char const *simple_backup_suffix;
void (*argmatch_die)(void);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcmp)(void const *__s1, void const *__s2, size_t __n)
    __attribute__((__pure__));
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
DIR *opendir_safer(char const *name);
char const *simple_backup_suffix = "~";
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format,
                   ...);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char const *quote_n(int n, char const *name);
__attribute__((__noreturn__)) void usage(int status);
extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
__inline static void *xnmalloc(size_t n, size_t s) {














}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes);
extern __attribute__((__nothrow__)) unsigned long(__attribute__((
    __nonnull__(1), __leaf__)) strtoul)(char const *__restrict __nptr,
                                        char **__restrict __endptr, int __base);
static strtol_error bkm_scale___0(unsigned long *x, int scale_factor) {








}
static strtol_error bkm_scale_by_power___0(unsigned long *x, int base,
                                           int power) {

















}
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes) {



















































































































































































































}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__));
extern
    __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                        calloc)(size_t __nmemb, size_t __size)
        __attribute__((__malloc__));
void *xmalloc(size_t n) __attribute__((__malloc__));
void *xmalloc(size_t n) {
  void *p;
  void *tmp;
  {
    tmp = malloc(n);
    p = tmp;
             



     
    return (p);
  }
}
void *xrealloc(void *p, size_t n) {









}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__));
void *xmemdup(void const *p, size_t s) {
  void *tmp;
  void *tmp___0;
  {
    tmp = xmalloc(s);
    tmp___0 = memcpy(tmp, p, s);
    return (tmp___0);
  }
}
char *xstrdup(char const *string) __attribute__((__malloc__));
char *xstrdup(char const *string) {
  size_t tmp;
  char *tmp___0;
  {
    tmp = strlen(string);
    tmp___0 = (char *)xmemdup((void const *)string, tmp + 1UL);
    return (tmp___0);
  }
}
__attribute__((__nothrow__))
FTS *(__attribute__((__warn_unused_result__, __leaf__))
      fts_open)(char *const *argv, int options,
                int (*compar)(FTSENT const **, FTSENT const **));
FTS *xfts_open(char *const *argv, int options,
               int (*compar)(FTSENT const **, FTSENT const **));
_Bool cycle_warning_required(FTS const *fts, FTSENT const *ent);
FTS *xfts_open(char *const *argv, int options,
               int (*compar)(FTSENT const **, FTSENT const **)) {
  FTS *fts;
  FTS *tmp;
               
  {
    tmp = fts_open(argv, options | 512, compar);
    fts = tmp;
                                                           








     
    return (fts);
  }
}
_Bool cycle_warning_required(FTS const *fts, FTSENT const *ent) {


























}
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {






}
extern int printf(char const *__restrict __format, ...);
extern int fputs_unlocked(char const *__restrict __s,
                          FILE *__restrict __stream);
char const version_etc_copyright[47];
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors) {



















































































































}
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors) {






















}
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {







}
char const version_etc_copyright[47] = {
    (char const)'C', (char const)'o', (char const)'p',   (char const)'y',
    (char const)'r', (char const)'i', (char const)'g',   (char const)'h',
    (char const)'t', (char const)' ', (char const)'%',   (char const)'s',
    (char const)' ', (char const)'%', (char const)'d',   (char const)' ',
    (char const)'F', (char const)'r', (char const)'e',   (char const)'e',
    (char const)' ', (char const)'S', (char const)'o',   (char const)'f',
    (char const)'t', (char const)'w', (char const)'a',   (char const)'r',
    (char const)'e', (char const)' ', (char const)'F',   (char const)'o',
    (char const)'u', (char const)'n', (char const)'d',   (char const)'a',
    (char const)'t', (char const)'i', (char const)'o',   (char const)'n',
    (char const)',', (char const)' ', (char const)'I',   (char const)'n',
    (char const)'c', (char const)'.', (char const)'\000'};
char const *parse_user_spec(char const *spec, uid_t *uid, gid_t *gid,
                            char **username, char **groupname);
extern void endpwent(void);
extern struct passwd *getpwnam(char const *__name);
extern void endgrent(void);
extern struct group *getgrgid(__gid_t __gid);
extern struct group *getgrnam(char const *__name);
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i,
                                                          char *buf___1);
static char const *parse_with_separator(char const *spec, char const *separator,
                                        uid_t *uid, gid_t *gid, char **username,
                                        char **groupname);
static char const *E_invalid_user = "invalid user";
static char const *E_invalid_group = "invalid group";
static char const *E_bad_spec = "invalid spec";
static char const *parse_with_separator(char const *spec, char const *separator,
                                        uid_t *uid, gid_t *gid, char **username,
                                        char **groupname) {
  char const *error_msg;
  struct passwd *pwd;
  struct group *grp;
  char *u;
  char const *g;
  char *gname;
  uid_t unum;
  gid_t gnum;
  char *tmp;
  size_t ulen;
  struct passwd *tmp___0;
                        
              
                        
                       
                                                                          
                
                
  struct group *tmp___6;
                        
                       
  char const *tmp___9;
  {
    gname = (char *)((void *)0);
    unum = *uid;
    gnum = *gid;
    error_msg = (char const *)((void *)0);
    tmp = (char *)((void *)0);
    *groupname = tmp;
    *username = tmp;
    u = (char *)((void *)0);
    if ((unsigned long)separator == (unsigned long)((void *)0)) {



    } else {
      ulen = (size_t)(separator - spec);
      if (ulen != 0UL) {
        u = (char *)xmemdup((void const *)spec, ulen + 1UL);
        *(u + ulen) = (char)'\000';
      }
    }
    if ((unsigned long)separator == (unsigned long)((void *)0)) {

    } else {
      if ((int const) * (separator + 1) == 0) {

      } else {
        g = separator + 1;
      }
    }
    if ((unsigned long)u != (unsigned long)((void *)0)) {
      if ((int)*u == 43) {

      } else {
        tmp___0 = getpwnam((char const *)u);
        pwd = tmp___0;
      }
      if ((unsigned long)pwd == (unsigned long)((void *)0)) {





























      } else {
        unum = pwd->pw_uid;
                                                             












         
      }
      endpwent();
    }
    if ((unsigned long)g != (unsigned long)((void *)0)) {
      if ((unsigned long)error_msg == (unsigned long)((void *)0)) {
        if ((int const) * g == 43) {

        } else {
          tmp___6 = getgrnam(g);
          grp = tmp___6;
        }
        if ((unsigned long)grp == (unsigned long)((void *)0)) {














        } else {
          gnum = grp->gr_gid;
        }
        endgrent();
        gname = xstrdup(g);
      }
    }
    if ((unsigned long)error_msg == (unsigned long)((void *)0)) {
      *uid = unum;
      *gid = gnum;
      *username = u;
      *groupname = gname;
      u = (char *)((void *)0);
    } else {

    }
    free((void *)u);
    tmp___9 = (char const *)gettext(error_msg);
    return (tmp___9);
  }
}
char const *parse_user_spec(char const *spec, uid_t *uid, gid_t *gid,
                            char **username, char **groupname) {
  char const *colon;
  char const *tmp;
  char const *error_msg;
  char const *tmp___0;
                  
                      
                      
  {
    tmp = (char const *)strchr(spec, ':');
    colon = tmp;
    tmp___0 = parse_with_separator(spec, colon, uid, gid, username, groupname);
    error_msg = tmp___0;
                 











     
    return (error_msg);
  }
}
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i,
                                                          char *buf___1) {















}
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
size_t strnlen1(char const *string, size_t maxlen) {











}
int open_safer(char const *file, int flags, ...);
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i);
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i) {











}
reg_syntax_t rpl_re_syntax_options;
char const *const quoting_style_args[9];
enum quoting_style const quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__));
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__));
__inline static char *xcharalloc(size_t n) {













}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        iswprint)(wint_t __wc);
char const *const quoting_style_args[9] = {
    "literal", "shell",   "shell-always", "c", "c-maybe", "escape",
    "locale",  "clocale", (char const *)0};
enum quoting_style const quoting_style_vals[8] = {
    (enum quoting_style const)0, (enum quoting_style const)1,
    (enum quoting_style const)2, (enum quoting_style const)3,
    (enum quoting_style const)4, (enum quoting_style const)5,
    (enum quoting_style const)6, (enum quoting_style const)7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i) {


















}
static struct quoting_options
quoting_options_from_style(enum quoting_style style) {







}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {












}
static size_t
quotearg_buffer_restyled(char *buffer, size_t buffersize, char const *arg,
                         size_t argsize, enum quoting_style quoting_style,
                         int flags, unsigned int const *quote_these_too,
                         char const *left_quote, char const *right_quote) {













































































































































































































































































































































































































































































































































































































































































































































































































































































































































































}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options) {








































































}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {










}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {









}
char *quotearg_char(char const *arg, char ch) {





}
char *quotearg_colon(char const *arg) {





}
char const *quote_n(int n, char const *name) {





}
char const *quote(char const *name) {





}
char const *program_name;
void set_program_name(char const *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0) {
  char const *slash;
  char const *base;
          
              
  {
                                                             


     
    slash = (char const *)strrchr(argv0, '/');
    if ((unsigned long)slash != (unsigned long)((void *)0)) {
      base = slash + 1;
    } else {

    }
                             









     
    program_name = argv0;
    program_invocation_name = (char *)argv0;
    return;
  }
}
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stpcpy)(char *__restrict __dest, char const *__restrict __src);
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     dirfd)(DIR *__dirp);
DIR *opendir_safer(char const *name) {



































}
int openat_safer(int fd, char const *file, int flags, ...);
int openat_safer(int fd, char const *file, int flags, ...) {
  mode_t mode;
             
  int tmp;
  int tmp___0;
  {
    mode = (mode_t)0;
                     



     
    tmp = openat(fd, file, flags, mode);
    tmp___0 = fd_safer(tmp);
    return (tmp___0);
  }
}
int open_safer(char const *file, int flags, ...) {















}
int mbscasecmp(char const *s1, char const *s2) {





















































































































































































}
unsigned int const is_basic_table[8] = {
    (unsigned int const)6656, (unsigned int const)4294967279U,
    (unsigned int const)4294967294U, (unsigned int const)2147483646};
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       exit)(int __status);
extern int optind;
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__)) getopt_long)(
    int ___argc, char *const *___argv, char const *__shortopts,
    struct option const *__longopts, int *__longind);
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
extern struct passwd *getpwuid(__uid_t __uid);
void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(I_ring const *ir);
void i_ring_init(I_ring *ir, int default_val) {
  int i;
  {
    ir->ir_empty = (_Bool)1;
    ir->ir_front = 0U;
    ir->ir_back = 0U;
    i = 0;
    while (1) {
      if (!(i < 4)) {
        goto while_break;
      }
      ir->ir_data[i] = default_val;
      i++;
    }
  while_break:;
    ir->ir_default_val = default_val;
    return;
  }
}
_Bool i_ring_empty(I_ring const *ir) {
  { return ((_Bool)ir->ir_empty); }
}
int i_ring_push(I_ring *ir, int val) {
  unsigned int dest_idx;
  int old_val;
  {
    dest_idx = (ir->ir_front + (unsigned int)(!ir->ir_empty)) % 4U;
    old_val = ir->ir_data[dest_idx];
    ir->ir_data[dest_idx] = val;
    ir->ir_front = dest_idx;
    if (dest_idx == ir->ir_back) {
      ir->ir_back = (ir->ir_back + (unsigned int)(!ir->ir_empty)) % 4U;
    }
    ir->ir_empty = (_Bool)0;
    return (old_val);
  }
}
int i_ring_pop(I_ring *ir) {
  int top_val;
  _Bool tmp;
  {
    tmp = i_ring_empty((I_ring const *)ir);
              

     
    top_val = ir->ir_data[ir->ir_front];
    ir->ir_data[ir->ir_front] = ir->ir_default_val;
    if (ir->ir_front == ir->ir_back) {
      ir->ir_empty = (_Bool)1;
    } else {
      ir->ir_front = ((ir->ir_front + 4U) - 1U) % 4U;
    }
    return (top_val);
  }
}
_Bool(__attribute__((__warn_unused_result__))
      hash_rehash)(Hash_table *table___0, size_t candidate);
void *hash_delete(Hash_table *table___0, void const *entry);
__inline static size_t rotr_sz(size_t x, int n) {




}
static struct hash_tuning const default_tuning = {
    (float)0.0, (float)1.0, (float)0.8, (float)1.414, (_Bool)0};
void *hash_lookup(Hash_table const *table___0, void const *entry) {































}
size_t hash_string(char const *string, size_t n_buckets) {















}
static _Bool is_prime(size_t candidate) {


























}
static size_t next_prime(size_t candidate) {




















}
static size_t raw_hasher(void const *data, size_t n) {







}
static _Bool raw_comparator(void const *a, void const *b) {

}
static _Bool check_tuning(Hash_table *table___0) {




























}
static size_t compute_bucket_size(size_t candidate, Hash_tuning const *tuning) {






















}
Hash_table *(__attribute__((__warn_unused_result__))
             hash_initialize)(size_t candidate, Hash_tuning const *tuning,
                              size_t (*hasher)(void const *, size_t),
                              _Bool (*comparator)(void const *, void const *),
                              void (*data_freer)(void *)) {











































}
void hash_free(Hash_table *table___0) {




























































}
static struct hash_entry *allocate_entry(Hash_table *table___0) {










}
static void free_entry(Hash_table *table___0, struct hash_entry *entry) {






}
static void *hash_find_entry(Hash_table *table___0, void const *entry,
                             struct hash_entry **bucket_head, _Bool delete) {
































































}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe) {







































































}
_Bool(__attribute__((__warn_unused_result__))
      hash_rehash)(Hash_table *table___0, size_t candidate) {























































}
void *(__attribute__((__warn_unused_result__))
       hash_insert)(Hash_table *table___0, void const *entry) {
































































}
void *hash_delete(Hash_table *table___0, void const *entry) {




















































}
size_t hash_pjw(void const *x, size_t tablesize);
size_t triple_hash(void const *x, size_t table_size) {









}
_Bool triple_compare_ino_str(void const *x, void const *y) {























}
void triple_free(void *x) {







}
size_t hash_pjw(void const *x, size_t tablesize) {















}
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           setlocale)(int __category,
                                                      char const *__locale);
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(2, 3), __leaf__))
    fstatat)(int __fd, char const *__restrict __file,
             struct stat *__restrict __buf, int __flag);
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__,
                                                __leaf__)) fts_close)(FTS *sp);
__attribute__((__nothrow__))
FTSENT *(__attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp);
__attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                 fts_set)(FTS *sp __attribute__((__unused__)),
                                          FTSENT *p, int instr);
extern void(__attribute__((__nonnull__(1, 4)))
            qsort)(void *__base, size_t __nmemb, size_t __size,
                   int (*__compar)(void const *, void const *));
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen);
static FTSENT *fts_build(FTS *sp, int type);
static void fts_lfree(FTSENT *head);
static void fts_load(FTS *sp, FTSENT *p);
static size_t fts_maxarglen(char *const *argv);
static void fts_padjust(FTS *sp, FTSENT *head);
static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir);
static _Bool AD_compare(void const *x, void const *y) {

















}
static size_t AD_hash(void const *x, size_t table_size) {





}
static _Bool setup_dir(FTS *fts) {
  {
    if (fts->fts_options & 258) {






    } else {
      fts->fts_cycle.state =
          (struct cycle_check_state *)malloc(sizeof(*(fts->fts_cycle.state)));
                                  

       
      cycle_check_init(fts->fts_cycle.state);
    }
    return ((_Bool)1);
  }
}
static _Bool enter_dir(FTS *fts, FTSENT *ent) {
                        
                        
                         
                                   
  _Bool tmp___0;
  {
    if (fts->fts_options & 258) {



















    } else {
      tmp___0 = cycle_check(fts->fts_cycle.state,
                            (struct stat const *)(ent->fts_statp));
                    


       
    }
    return ((_Bool)1);
  }
}
static void leave_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
                        
              
  FTSENT *parent;
  {
    st = (struct stat const *)(ent->fts_statp);
    if (fts->fts_options & 258) {







    } else {
      parent = ent->fts_parent;
      if ((unsigned long)parent != (unsigned long)((void *)0)) {
        if (0L <= parent->fts_level) {
          while (1) {
                                                               

             
            if ((fts->fts_cycle.state)->dev_ino.st_ino == (ino_t)st->st_ino) {
              if ((fts->fts_cycle.state)->dev_ino.st_dev == (dev_t)st->st_dev) {
                (fts->fts_cycle.state)->dev_ino.st_dev =
                    parent->fts_statp[0].st_dev;
                (fts->fts_cycle.state)->dev_ino.st_ino =
                    parent->fts_statp[0].st_ino;
              }
            }
            goto while_break;
          }
        while_break:;
        }
      }
    }
    return;
  }
}
static void free_dir(FTS *sp) {
  {
    if (sp->fts_options & 258) {



    } else {
      free((void *)sp->fts_cycle.state);
    }
    return;
  }
}
static void fd_ring_clear(I_ring *fd_ring) {
  int fd;
  int tmp;
  _Bool tmp___0;
  {
    while (1) {
      tmp___0 = i_ring_empty((I_ring const *)fd_ring);
      if (tmp___0) {
        goto while_break;
      }
      tmp = i_ring_pop(fd_ring);
      fd = tmp;
      if (0 <= fd) {
        close(fd);
      }
    }
  while_break:;
    return;
  }
}
static void fts_set_stat_required(FTSENT *p, _Bool required) {
  {
    while (1) {
                                      

       
      goto while_break;
    }
  while_break:;
    if (required) {
      p->fts_statp[0].st_size = (__off_t)2;
    } else {
      p->fts_statp[0].st_size = (__off_t)1;
    }
    return;
  }
}
__inline static DIR *opendirat(int fd, char const *dir) {
  int new_fd;
  int tmp;
  DIR *dirp;
                  
               
               
  {
    tmp = openat_safer(fd, dir, 67840);
    new_fd = tmp;
                     

     
    set_cloexec_flag(new_fd, (_Bool)1);
    dirp = rpl_fdopendir(new_fd);
                                                            





     
    return (dirp);
  }
}
static void cwd_advance_fd(FTS *sp, int fd, _Bool chdir_down_one) {
  int old;
  int prev_fd_in_slot;
  int tmp;
  {
    old = sp->fts_cwd_fd;
    while (1) {
                         
                             

         
       
      goto while_break;
    }
  while_break:;
    if (chdir_down_one) {
      tmp = i_ring_push(&sp->fts_fd_ring, old);
      prev_fd_in_slot = tmp;
                                 

       
    } else {
      if (!(sp->fts_options & 4)) {
        if (0 <= old) {
          close(old);
        }
      }
    }
    sp->fts_cwd_fd = fd;
    return;
  }
}
__inline static int diropen(FTS const *sp, char const *dir) {


























}
__attribute__((__nothrow__))
FTS *(__attribute__((__warn_unused_result__, __leaf__))
      fts_open)(char *const *argv, int options,
                int (*compar)(FTSENT const **, FTSENT const **));
FTS *(__attribute__((__warn_unused_result__, __leaf__))
      fts_open)(char *const *argv, int options,
                int (*compar)(FTSENT const **, FTSENT const **)) {
  FTS *sp;
  FTSENT *p;
  FTSENT *root;
  size_t nitems;
  FTSENT *parent;
  FTSENT *tmp;
  _Bool defer_stat;
               
               
               
  size_t maxarglen;
  size_t tmp___4;
  size_t tmp___5;
  _Bool tmp___6;
  int tmp___7;
  size_t len;
  size_t tmp___8;
  struct _ftsent *tmp___9;
  _Bool tmp___10;
               
  {
    parent = (FTSENT *)((void *)0);
    tmp = (FTSENT *)((void *)0);
                          



     
                      





     
                          



     
    sp = (FTS *)malloc(sizeof(FTS));
                                                          

     
    memset((void *)sp, 0, sizeof(FTS));
    sp->fts_compar = compar;
    sp->fts_options = options;
                              


     
    sp->fts_cwd_fd = -100;
    tmp___4 = fts_maxarglen(argv);
    maxarglen = tmp___4;
    if (maxarglen > 4096UL) {

    } else {
      tmp___5 = (size_t)4096;
    }
    tmp___6 = fts_palloc(sp, tmp___5);
                   

     
    if ((unsigned long)*argv != (unsigned long)((void *)0)) {
      parent = fts_alloc(sp, "", (size_t)0);
                                                                

       
      parent->fts_level = (ptrdiff_t)-1;
    }
    if ((unsigned long)compar == (unsigned long)((void *)0)) {
      tmp___7 = 1;
    } else {





    }
    defer_stat = (_Bool)tmp___7;
    root = (FTSENT *)((void *)0);
    nitems = (size_t)0;
    while (1) {
      if (!((unsigned long)*argv != (unsigned long)((void *)0))) {
        goto while_break;
      }
      tmp___8 = strlen((char const *)*argv);
      len = tmp___8;
      p = fts_alloc(sp, (char const *)*argv, len);
                                                           

       
      p->fts_level = (ptrdiff_t)0;
      p->fts_parent = parent;
      p->fts_accpath = p->fts_name;
      if (defer_stat) {
        if ((unsigned long)root != (unsigned long)((void *)0)) {


        } else {
          p->fts_info = fts_stat(sp, p, (_Bool)0);
        }
      } else {

      }
      if (compar) {


      } else {
        p->fts_link = (struct _ftsent *)((void *)0);
        if ((unsigned long)root == (unsigned long)((void *)0)) {
          root = p;
          tmp = root;
        } else {


        }
      }
      argv++;
      nitems++;
    }
  while_break:;
                 



     
    tmp___9 = fts_alloc(sp, "", (size_t)0);
    sp->fts_cur = tmp___9;
                                                               

     
    (sp->fts_cur)->fts_link = root;
    (sp->fts_cur)->fts_info = (unsigned short)9;
    tmp___10 = setup_dir(sp);
                    

     
                                 
                                     





       
     
    i_ring_init(&sp->fts_fd_ring, -1);
    return (sp);
       ;


       ;

       ;


  }
}
static void fts_load(FTS *sp, FTSENT *p) {
  size_t len;
  char *cp;
  size_t tmp;
  char *tmp___0;
  {
    tmp = p->fts_namelen;
    p->fts_pathlen = tmp;
    len = tmp;
    memmove((void *)sp->fts_path, (void const *)(p->fts_name), len + 1UL);
    cp = strrchr((char const *)(p->fts_name), '/');
    if (cp) {
      if ((unsigned long)cp != (unsigned long)(p->fts_name)) {
        cp++;
        len = strlen((char const *)cp);
        memmove((void *)(p->fts_name), (void const *)cp, len + 1UL);
        p->fts_namelen = len;
      } else {






      }
    }
    tmp___0 = sp->fts_path;
    p->fts_path = tmp___0;
    p->fts_accpath = tmp___0;
    return;
  }
}
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__,
                                                __leaf__)) fts_close)(FTS *sp);
int(__attribute__((__warn_unused_result__, __leaf__)) fts_close)(FTS *sp) {
                
            
  int saved_errno;
           
              
               
              
               
              
               
  {
    saved_errno = 0;
                      













                 

     
                        

     
    free((void *)sp->fts_array);
    free((void *)sp->fts_path);
                                
                                





       
            














     
    fd_ring_clear(&sp->fts_fd_ring);
                                             

     
    free_dir(sp);
    free((void *)sp);
                      



     
    return (0);
  }
}
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fstatfs)(int __fildes,
                                              struct statfs *__buf);
static _Bool dirent_inode_sort_may_be_useful(int dir_fd) {




















}
static _Bool leaf_optimization_applies(int dir_fd) {

















}
static size_t LCO_hash(void const *x, size_t table_size) {





}
static _Bool LCO_compare(void const *x, void const *y) {







}
static _Bool link_count_optimize_ok(FTSENT const *p) {


















































}
__attribute__((__nothrow__))
FTSENT *(__attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp);
FTSENT *(__attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp) {
  FTSENT *p;
  FTSENT *tmp;
  unsigned short instr;
  char *t;
               
              
               
              
  struct _ftsent *tmp___4;
  int tmp___5;
              
              
  int tmp___8;
  int tmp___9;
                
               
  size_t tmp___12;
  char *tmp___13;
  FTSENT *parent;
                 
                
  _Bool tmp___16;
  int *tmp___17;
  struct _ftsent *tmp___18;
                
  int tmp___20;
               
               
  int tmp___23;
  int tmp___24;
                  
                
                
                
               
               
                
  int tmp___31;
  FTSENT *tmp___32;
  {
                                                                   

            
                                   

       
     
    p = sp->fts_cur;
    instr = p->fts_instr;
    p->fts_instr = (unsigned short)3;
                          


     
                          






















     
    if ((int)p->fts_info == 1) {
      if ((int)instr == 4) {
        goto _L___0;
      } else {
        if (sp->fts_options & 64) {
          if (p->fts_statp[0].st_dev != sp->fts_dev) {
          _L___0:;
                                        

             
                                


             
            p->fts_info = (unsigned short)6;
            while (1) {
              leave_dir(sp, p);
              goto while_break;
            }
          while_break:;
            return (p);
          }
        }
      }
                                                                       





       
      if ((unsigned long)sp->fts_child != (unsigned long)((void *)0)) {















      } else {
        tmp___4 = fts_build(sp, 3);
        sp->fts_child = tmp___4;
                                                                   














         
      }
      p = sp->fts_child;
      sp->fts_child = (struct _ftsent *)((void *)0);
      goto name;
    }
       ;
    tmp = p;
    p = p->fts_link;
    if ((unsigned long)p != (unsigned long)((void *)0)) {
      sp->fts_cur = p;
      free((void *)tmp);
      if (p->fts_level == 0L) {
        fd_ring_clear(&sp->fts_fd_ring);
        if (!(sp->fts_options & 4)) {
          if (sp->fts_options & 512) {
            if (sp->fts_options & 512) {
              tmp___5 = -100;
            } else {

            }
            cwd_advance_fd(sp, tmp___5, (_Bool)1);
            tmp___8 = 0;
          } else {







          }
          if (tmp___8) {

          } else {
            tmp___9 = 0;
          }
        } else {

        }
                      


         
        free_dir(sp);
        fts_load(sp, p);
        setup_dir(sp);
        goto check_for_dir;
      }




















    name:;
      if ((int)*((p->fts_parent)->fts_path +
                 ((p->fts_parent)->fts_pathlen - 1UL)) == 47) {

      } else {
        tmp___12 = (p->fts_parent)->fts_pathlen;
      }
      t = sp->fts_path + tmp___12;
      tmp___13 = t;
      t++;
      *tmp___13 = (char)'/';
      memmove((void *)t, (void const *)(p->fts_name), p->fts_namelen + 1UL);
    check_for_dir:;
      sp->fts_cur = p;
      if ((int)p->fts_info == 11) {
        if (p->fts_statp[0].st_size == 2L) {
          parent = p->fts_parent;
          if (0L < p->fts_level) {
            if (parent->fts_n_dirs_remaining == 0UL) {












            } else {
              goto _L___4;
            }
          } else {
          _L___4:;
            p->fts_info = fts_stat(sp, p, (_Bool)0);
            if ((p->fts_statp[0].st_mode & 61440U) == 16384U) {
              if (p->fts_level != 0L) {
                if (parent->fts_n_dirs_remaining) {
                  (parent->fts_n_dirs_remaining)--;
                }
              }
            }
          }
        } else {
          while (1) {
                                                   

             
            goto while_break___2;
          }
        while_break___2:;
        }
      }
      if ((int)p->fts_info == 1) {
        if (p->fts_level == 0L) {
          sp->fts_dev = p->fts_statp[0].st_dev;
        }
        tmp___16 = enter_dir(sp, p);
                        



         
      }
      return (p);
    }
    p = tmp->fts_parent;
    sp->fts_cur = p;
    free((void *)tmp);
    if (p->fts_level == -1L) {
      free((void *)p);
      tmp___17 = __errno_location();
      *tmp___17 = 0;
      tmp___18 = (struct _ftsent *)((void *)0);
      sp->fts_cur = tmp___18;
      return (tmp___18);
    }
    while (1) {
                                      

       
      goto while_break___3;
    }
  while_break___3:;
    *(sp->fts_path + p->fts_pathlen) = (char)'\000';
    if (p->fts_level == 0L) {
      fd_ring_clear(&sp->fts_fd_ring);
      if (!(sp->fts_options & 4)) {
        if (sp->fts_options & 512) {
          if (sp->fts_options & 512) {
            tmp___20 = -100;
          } else {

          }
          cwd_advance_fd(sp, tmp___20, (_Bool)1);
          tmp___23 = 0;
        } else {







        }
        if (tmp___23) {

        } else {
          tmp___24 = 0;
        }
      } else {

      }
                     



       
    } else {
      if ((int)p->fts_flags & 2) {




















      } else {
        if (!((int)p->fts_flags & 1)) {
          tmp___31 = fts_safe_changedir(sp, p->fts_parent, -1, "..");
                         



           
        }
      }
    }
    if (p->fts_errno) {

    } else {
      p->fts_info = (unsigned short)6;
    }
    if (p->fts_errno == 0) {
      while (1) {
        leave_dir(sp, p);
        goto while_break___4;
      }
    while_break___4:;
    }
    if (sp->fts_options & 8192) {

    } else {
      tmp___32 = p;
    }
    return (tmp___32);
  }
}
__attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                 fts_set)(FTS *sp __attribute__((__unused__)),
                                          FTSENT *p, int instr);
int(__attribute__((__leaf__)) fts_set)(FTS *sp __attribute__((__unused__)),
                                       FTSENT *p, int instr) {
           
  {
                     
                       
                         
                           
                             



             
           
         
       
     
    p->fts_instr = (unsigned short)instr;
    return (0);
  }
}
static int fts_compare_ino(struct _ftsent const **a, struct _ftsent const **b) {















}
static void set_stat_type(struct stat *st, unsigned int dtype) {
  mode_t type;
  {
                      

     
                      

     
    if (dtype == 4U) {
      goto case_4;
    }
                      

     
                       

     
    if (dtype == 8U) {
      goto case_8;
    }




         ;


         ;


  case_4:;
    type = (mode_t)16384;
    goto switch_break;
         ;


          ;


  case_8:;
    type = (mode_t)32768;
    goto switch_break;
          ;


                 ;

  switch_break:;
    st->st_mode = type;
    return;
  }
}
static FTSENT *fts_build(FTS *sp, int type) {
  struct dirent *dp;
  FTSENT *p;
  FTSENT *head;
  size_t nitems;
  FTSENT *cur;
  FTSENT *tail;
  DIR *dirp;
                
                  
  _Bool descend;
  _Bool doadjust;
  ptrdiff_t level;
  nlink_t nlinks;
  _Bool nostat;
  size_t len;
  size_t maxlen;
  size_t new_len;
  char *cp;
           
  DIR *tmp___0;
               
               
                
  int tmp___4;
  int dir_fd;
  int tmp___5;
               
  int tmp___7;
                
  _Bool is_dir;
  size_t tmp___9;
                
                
                  
                 
  size_t tmp___14;
  size_t tmp___15;
                
  _Bool skip_stat;
  int tmp___17;
  int tmp___18;
               
               
               
               
               
               
               
               
                 
  {
    cur = sp->fts_cur;
    if (!(sp->fts_options & 4)) {
      if (sp->fts_options & 512) {
        tmp___0 = opendirat(sp->fts_cwd_fd, (char const *)cur->fts_accpath);
        dirp = tmp___0;
      } else {


      }
    } else {


    }
                                                            






     
                                   

            
                                  




                   







       
     
    if (type == 2) {


    } else {
      if (sp->fts_options & 8) {
        if (sp->fts_options & 16) {
          if (sp->fts_options & 32) {

          } else {
            tmp___4 = 2;
          }
          nlinks = cur->fts_statp[0].st_nlink - (__nlink_t)tmp___4;
          nostat = (_Bool)1;
        } else {


        }
      } else {


      }
    }
    if (nlinks) {
      goto _L___0;
    } else {
      if (type == 3) {
      _L___0:;
        tmp___5 = dirfd(dirp);
        dir_fd = tmp___5;
        if (sp->fts_options & 512) {
          if (0 <= dir_fd) {
            dir_fd = dup_safer(dir_fd);
            set_cloexec_flag(dir_fd, (_Bool)1);
          }
        }
        if (dir_fd < 0) {

        } else {
          tmp___7 =
              fts_safe_changedir(sp, cur, dir_fd, (char const *)((void *)0));
          if (tmp___7) {
             ;















          } else {
            descend = (_Bool)1;
          }
        }
      } else {

      }
    }
    if ((int)*(cur->fts_path + (cur->fts_pathlen - 1UL)) == 47) {

    } else {
      len = cur->fts_pathlen;
    }
    if (sp->fts_options & 4) {




    } else {
      cp = (char *)((void *)0);
    }
    len++;
    maxlen = sp->fts_pathlen - len;
    level = cur->fts_level + 1L;
    doadjust = (_Bool)0;
    tail = (FTSENT *)((void *)0);
    head = tail;
    nitems = (size_t)0;
    while (1) {
      if (dirp) {
        dp = readdir(dirp);
        if (!dp) {
          goto while_break___0;
        }
      } else {

      }
      if (!(sp->fts_options & 32)) {
        if ((int)dp->d_name[0] == 46) {
          if (!dp->d_name[1]) {
            goto __Cont;
          } else {
            if ((int)dp->d_name[1] == 46) {
              if (!dp->d_name[2]) {
                goto __Cont;
              }
            }
          }
        }
      }
      tmp___9 = strlen((char const *)(dp->d_name));
      p = fts_alloc(sp, (char const *)(dp->d_name), tmp___9);
                                                           

       
      tmp___14 = strlen((char const *)(dp->d_name));
                               























       
      tmp___15 = strlen((char const *)(dp->d_name));
      new_len = len + tmp___15;
                          








       
      p->fts_level = level;
      p->fts_parent = sp->fts_cur;
      p->fts_pathlen = new_len;
      p->fts_statp[0].st_ino = dp->d_ino;
      if (sp->fts_options & 4) {


      } else {
        p->fts_accpath = p->fts_name;
      }
      if ((unsigned long)sp->fts_compar == (unsigned long)((void *)0) ||
          sp->fts_options & 1024) {
        if (sp->fts_options & 16) {
          if (sp->fts_options & 8) {
            if ((int)dp->d_type != 0) {
              if (!((int)dp->d_type == 4)) {
                tmp___17 = 1;
              } else {
                tmp___17 = 0;
              }
            } else {

            }
          } else {

          }
        } else {

        }
        skip_stat = (_Bool)tmp___17;
        p->fts_info = (unsigned short)11;
        set_stat_type(p->fts_statp, (unsigned int)dp->d_type);
        fts_set_stat_required(p, (_Bool)(!skip_stat));
        if (sp->fts_options & 16) {
          if ((int)dp->d_type == 4) {
            tmp___18 = 1;
          } else {
            tmp___18 = 0;
          }
        } else {

        }
        is_dir = (_Bool)tmp___18;
      } else {















      }
      if (nlinks > 0UL) {
        if (is_dir) {
          nlinks -= (nlink_t)nostat;
        }
      }
      p->fts_link = (struct _ftsent *)((void *)0);
      if ((unsigned long)head == (unsigned long)((void *)0)) {
        tail = p;
        head = tail;
      } else {


      }
      nitems++;
    __Cont:;
    }
  while_break___0:;
    if (dirp) {
      closedir(dirp);
    }
                   

     
                              








     
                  
                                 







































       
     
                  





     
                           











     
                         



     
    return (head);
  }
}
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow) {
  struct stat *sbp;
                  
           
               
               
              
              
               
  int tmp___5;
  int tmp___6;
              
  {
    sbp = p->fts_statp;
                             
                                

       
     
    if (sp->fts_options & 2) {

    } else {
      if (follow) {
         ;
















      } else {
        tmp___5 =
            fstatat(sp->fts_cwd_fd, (char const *)p->fts_accpath, sbp, 256);
                      


             


         
      }
    }
    if ((sbp->st_mode & 61440U) == 16384U) {
      if (sp->fts_options & 32) {

      } else {
        tmp___6 = 2;
      }
      p->fts_n_dirs_remaining = sbp->st_nlink - (__nlink_t)tmp___6;
                                      















       
      return ((unsigned short)1);
    }
    if ((sbp->st_mode & 61440U) == 40960U) {
      return ((unsigned short)12);
    }
    if ((sbp->st_mode & 61440U) == 32768U) {
      return ((unsigned short)8);
    }

  }
}
static int fts_compar(void const *a, void const *b) {









}
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems) {
































































}
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen) {
  FTSENT *p;
  size_t len;
  {
    len = sizeof(FTSENT) + namelen;
    p = (FTSENT *)malloc(len);
                                                         

     
    memmove((void *)(p->fts_name), (void const *)name, namelen);
    p->fts_name[namelen] = (char)'\000';
    p->fts_namelen = namelen;
    p->fts_fts = sp;
    p->fts_path = sp->fts_path;
    p->fts_errno = 0;
    p->fts_flags = (unsigned short)0;
    p->fts_instr = (unsigned short)3;
    p->fts_number = 0L;
    p->fts_pointer = (void *)0;
    return (p);
  }
}
static void fts_lfree(FTSENT *head) {













}
static _Bool fts_palloc(FTS *sp, size_t more) {
  char *p;
  size_t new_len;
           
  {
    new_len = (sp->fts_pathlen + more) + 256UL;
                                    





     
    sp->fts_pathlen = new_len;
    p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
                                                         



     
    sp->fts_path = p;
    return ((_Bool)1);
  }
}
static void fts_padjust(FTS *sp, FTSENT *head) {










































}
static size_t fts_maxarglen(char *const *argv) {
  size_t len;
  size_t max;
  {
    max = (size_t)0;
    while (1) {
      if (!*argv) {
        goto while_break;
      }
      len = strlen((char const *)*argv);
      if (len > max) {
        max = len;
      }
      argv++;
    }
  while_break:;
    return (max + 1UL);
  }
}
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir) {
          
  _Bool is_dotdot;
  int tmp;
  int tmp___0;
  int newfd;
  int parent_fd;
  _Bool tmp___1;
                 
              
               
              
             
               
               
  {
    if (dir) {
      tmp = strcmp(dir, "..");
      if (tmp == 0) {
        tmp___0 = 1;
      } else {

      }
    } else {
      tmp___0 = 0;
    }
    is_dotdot = (_Bool)tmp___0;
                              






     
    if (fd < 0) {
      if (is_dotdot) {
        if (sp->fts_options & 512) {
          tmp___1 = i_ring_empty((I_ring const *)(&sp->fts_fd_ring));
          if (!tmp___1) {
            parent_fd = i_ring_pop(&sp->fts_fd_ring);
            is_dotdot = (_Bool)1;
            if (0 <= parent_fd) {
              fd = parent_fd;
              dir = (char const *)((void *)0);
            }
          }
        }
      }
    }
    newfd = fd;
                 




     
                              

            
                






















       
     
    if (sp->fts_options & 512) {
      cwd_advance_fd(sp, newfd, (_Bool)(!is_dotdot));
      return (0);
    }

       ;








  }
}
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
#pragma weak pthread_mutex_init
#pragma weak pthread_mutex_lock
#pragma weak pthread_mutex_unlock
#pragma weak pthread_mutex_destroy
#pragma weak pthread_rwlock_init
#pragma weak pthread_rwlock_rdlock
#pragma weak pthread_rwlock_wrlock
#pragma weak pthread_rwlock_unlock
#pragma weak pthread_rwlock_destroy
#pragma weak pthread_once
#pragma weak pthread_cond_init
#pragma weak pthread_cond_wait
#pragma weak pthread_cond_signal
#pragma weak pthread_cond_broadcast
#pragma weak pthread_cond_destroy
#pragma weak pthread_mutexattr_init
#pragma weak pthread_mutexattr_settype
#pragma weak pthread_mutexattr_destroy
#pragma weak pthread_self
#pragma weak pthread_cancel
char const *Version = "8.2";
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fchownat)(int __fd, char const *__file,
                                               __uid_t __owner, __gid_t __group,
                                               int __flag);
__inline static int chownat(int fd, char const *file, uid_t owner,
                            gid_t group) {
  int tmp;
  {
    tmp = fchownat(fd, file, owner, group, 0);
    return (tmp);
  }
}
__inline static int lchownat(int fd, char const *file, uid_t owner,
                             gid_t group) {
  int tmp;
  {
    tmp = fchownat(fd, file, owner, group, 256);
    return (tmp);
  }
}
extern void chopt_init(struct Chown_option *chopt);
extern void chopt_free(struct Chown_option *chopt __attribute__((__unused__)));
extern char *gid_to_name(gid_t gid);
extern char *uid_to_name(uid_t uid);
extern _Bool chown_files(char **files, int bit_flags, uid_t uid, gid_t gid,
                         uid_t required_uid, gid_t required_gid,
                         struct Chown_option const *chopt);
__inline static void ignore_ptr(void *p) {

}
extern void chopt_init(struct Chown_option *chopt) {
  {
    chopt->verbosity = (enum Verbosity)2;
    chopt->root_dev_ino = (struct dev_ino *)((void *)0);
    chopt->affect_symlink_referent = (_Bool)1;
    chopt->recurse = (_Bool)0;
    chopt->force_silent = (_Bool)0;
    chopt->user_name = (char *)((void *)0);
    chopt->group_name = (char *)((void *)0);
    return;
  }
}
extern void chopt_free(struct Chown_option *chopt __attribute__((__unused__))) {
  {
    return;
  }
}
extern char *gid_to_name(gid_t gid) {




















}
extern char *uid_to_name(uid_t uid) {




















}
static void describe_change(char const *file, enum Change_status changed,
                            char const *user, char const *group) {













































































































}
static enum RCH_status restricted_chown(int cwd_fd, char const *file,
                                        struct stat const *orig_st, uid_t uid,
                                        gid_t gid, uid_t required_uid,
                                        gid_t required_gid) {
  enum RCH_status status;
                 
  int open_flags;
         
              
               
               
              
              
              
                  
               
               
  {
    status = (enum RCH_status)2;
    open_flags = 2304;
    if (required_uid == 4294967295U) {
      if (required_gid == 4294967295U) {
        return ((enum RCH_status)5);
      }
    }











































































  }
}
static _Bool change_file_owner(FTS *fts, FTSENT *ent, uid_t uid, gid_t gid,
                               uid_t required_uid, gid_t required_gid,
                               struct Chown_option const *chopt) {
  char const *file_full_name;
  char const *file;
  struct stat const *file_stats;
  struct stat stat_buf;
  _Bool ok;
  _Bool do_chown;
  _Bool symlink_changed;
                  
                
                      
                      
                
              
                
                  
                      
                
                      
                 
                       
                 
                       
                 
                 
                       
                 
                
  int tmp___19;
  int tmp___20;
                       
                 
                       
                       
                 
               
                 
  int tmp___28;
                
  enum RCH_status err;
  enum RCH_status tmp___30;
  int tmp___31;
                       
                 
                 
                 
                
                
               
                               
               
               
               
  {
    file_full_name = (char const *)ent->fts_path;
    file = (char const *)ent->fts_accpath;
    ok = (_Bool)1;
    symlink_changed = (_Bool)1;
    if ((int)ent->fts_info == 1) {
      goto case_1;
    }
    if ((int)ent->fts_info == 6) {
      goto case_6;
    }
                                   

     
                                  

     
                                  

     
                                  

     
    goto switch_default;
  case_1:;
    if (chopt->recurse) {
                                




























       
      return ((_Bool)1);
    }
    goto switch_break;
  case_6:;
    if (!chopt->recurse) {
      return ((_Bool)1);
    }
    goto switch_break;
          ;














         ;







         ;







         ;















  switch_default:;
    goto switch_break;
  switch_break:;
    if (!ok) {


    } else {
      if (required_uid == 4294967295U) {
        if (required_gid == 4294967295U) {
          if ((unsigned int const)chopt->verbosity == 2U) {
            if (!chopt->root_dev_ino) {
              if (!chopt->affect_symlink_referent) {
                do_chown = (_Bool)1;
                file_stats = (struct stat const *)(ent->fts_statp);
              } else {
                goto _L___3;
              }
            } else {

            }
          } else {

          }
        } else {

        }
      } else {
      _L___3:;
        file_stats = (struct stat const *)(ent->fts_statp);
        if (chopt->affect_symlink_referent) {
          if ((file_stats->st_mode & 61440U) == 40960U) {
            tmp___19 = fstatat(fts->fts_cwd_fd, file, &stat_buf, 0);
                                







             
            file_stats = (struct stat const *)(&stat_buf);
          }
        }
        if (ok) {
          if (required_uid == 4294967295U) {
            goto _L;
          } else {
            if (required_uid == (uid_t)file_stats->st_uid) {
            _L:;
              if (required_gid == 4294967295U) {
                tmp___20 = 1;
              } else {





              }
            } else {

            }
          }
        } else {

        }
        do_chown = (_Bool)tmp___20;
      }
    }
    if (ok) {
      if ((int)ent->fts_info == 1) {
        goto _L___4;
      } else {
        if ((int)ent->fts_info == 2) {

        } else {
          if ((int)ent->fts_info == 6) {
            goto _L___4;
          } else {
            if ((int)ent->fts_info == 4) {
            _L___4:;
                                        



























               
            }
          }
        }
      }
    }
    if (do_chown) {
      if (!chopt->affect_symlink_referent) {
        tmp___28 = lchownat(fts->fts_cwd_fd, file, uid, gid);
        ok = (_Bool)(tmp___28 == 0);
                  





         
      } else {
        tmp___30 = restricted_chown(fts->fts_cwd_fd, file, file_stats, uid, gid,
                                    required_uid, required_gid);
        err = tmp___30;
                                      

         
        if ((unsigned int)err == 5U) {
          goto case_5;
        }










                 ;

      case_5:;
        tmp___31 = chownat(fts->fts_cwd_fd, file, uid, gid);
        ok = (_Bool)(tmp___31 == 0);
        goto switch_break___0;
                 ;


                 ;



                         ;

      switch_break___0:;
      }
                     
                  












         
       
    }
                                                     

























































     
    if (!chopt->recurse) {
      fts_set(fts, ent, 4);
    }
    return (ok);
  }
}
extern _Bool chown_files(char **files, int bit_flags, uid_t uid, gid_t gid,
                         uid_t required_uid, gid_t required_gid,
                         struct Chown_option const *chopt) {
  _Bool ok;
  int stat_flags;
  int tmp;
  FTS *fts;
  FTS *tmp___0;
  FTSENT *ent;
                
               
  int *tmp___3;
  _Bool tmp___4;
                
               
  int tmp___7;
  {
    ok = (_Bool)1;
    if (required_uid != 4294967295U) {

    } else {
      if (required_gid != 4294967295U) {

      } else {
        if (chopt->affect_symlink_referent) {
          tmp = 0;
        } else {
          if ((unsigned int const)chopt->verbosity != 2U) {

          } else {
            tmp = 8;
          }
        }
      }
    }
    stat_flags = tmp;
    tmp___0 = xfts_open((char *const *)files, bit_flags | stat_flags,
                        (int (*)(FTSENT const **, FTSENT const **))((void *)0));
    fts = tmp___0;
    while (1) {
      ent = fts_read(fts);
      if ((unsigned long)ent == (unsigned long)((void *)0)) {
        tmp___3 = __errno_location();
                            






         
        goto while_break;
      }
      tmp___4 = change_file_owner(fts, ent, uid, gid, required_uid,
                                  required_gid, chopt);
      ok = (_Bool)((int)ok & (int)tmp___4);
    }
  while_break:;
    tmp___7 = fts_close(fts);
                       




     
    return (ok);
  }
}
extern char *optarg;
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     atexit)(void (*__func)(void));
extern
    __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                        textdomain)(char const *__domainname);
extern __attribute__((__nothrow__)) char *(__attribute__((
    __leaf__)) bindtextdomain)(char const *__domainname, char const *__dirname);
__inline static void emit_ancillary_info(void) {





































}
__inline static char *bad_cast(char const *s) {

}
static char *reference_file;
static struct option const long_options___1[14] = {
    {"recursive", 0, (int *)((void *)0), 'R'},
    {"changes", 0, (int *)((void *)0), 'c'},
    {"dereference", 0, (int *)((void *)0), 128},
    {"from", 1, (int *)((void *)0), 129},
    {"no-dereference", 0, (int *)((void *)0), 'h'},
    {"no-preserve-root", 0, (int *)((void *)0), 130},
    {"preserve-root", 0, (int *)((void *)0), 131},
    {"quiet", 0, (int *)((void *)0), 'f'},
    {"silent", 0, (int *)((void *)0), 'f'},
    {"reference", 1, (int *)((void *)0), 132},
    {"verbose", 0, (int *)((void *)0), 'v'},
    {"help", 0, (int *)((void *)0), -130},
    {"version", 0, (int *)((void *)0), -131},
    {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
__attribute__((__noreturn__)) void usage(int status);
void usage(int status) {


















































































}
static struct dev_ino dev_ino_buf;
int main(int argc, char **argv) {
  AFL_INIT_SET0(chown);
  _Bool preserve_root;
  uid_t uid;
  gid_t gid;
  uid_t required_uid;
  gid_t required_gid;
  int bit_flags;
  int dereference;
  struct Chown_option chopt;
  _Bool ok;
  int optc;
                
                
                
                  
                      
                
                
                      
                
  int tmp___5;
                        
                      
                
               
              
  char const *e___0;
  char const *tmp___10;
                       
                       
                 
                
  int tmp___15;
  {
    preserve_root = (_Bool)0;
    uid = (uid_t)-1;
    gid = (gid_t)-1;
    required_uid = (uid_t)-1;
    required_gid = (gid_t)-1;
    bit_flags = 16;
    dereference = -1;
    set_program_name((char const *)*(argv + 0));
    setlocale(6, "");
    bindtextdomain("coreutils", "/usr/local/share/locale");
    textdomain("coreutils");
    atexit(&close_stdout);
    chopt_init(&chopt);
    while (1) {
      optc = getopt_long(argc, (char *const *)argv, "HLPRcfhv",
                         long_options___1, (int *)((void *)0));
      if (!(optc != -1)) {
        goto while_break;
      }
                       

       
                       

       
                       

       
      if (optc == 104) {
        goto case_104;
      }
                        

       
                        

       
                        

       
                        

       
                        

       
      if (optc == 82) {
        goto case_82;
      }
















            ;


            ;


            ;


    case_104:;
      dereference = 0;
      goto switch_break;
             ;


             ;


             ;


             ;


             ;








    case_82:;
      chopt.recurse = (_Bool)1;
      goto switch_break;
            ;


             ;


             ;


                 ;


                 ;




                   ;

    switch_break:;
    }
  while_break:;
    if (chopt.recurse) {
      if (bit_flags == 16) {
                               


         
        dereference = 0;
      }
    } else {
      bit_flags = 16;
    }
    chopt.affect_symlink_referent = (_Bool)(dereference != 0);
    if (reference_file) {

    } else {
      tmp___5 = 2;
    }
                                  









     
    if (reference_file) {











    } else {
      tmp___10 = parse_user_spec((char const *)*(argv + optind), &uid, &gid,
                                 &chopt.user_name, &chopt.group_name);
      e___0 = tmp___10;
                  


       
                             



       
      optind++;
    }
                        
                          







       
     
    bit_flags |= 1024;
    ok = chown_files(argv + optind, bit_flags, uid, gid, required_uid,
                     required_gid, (struct Chown_option const *)(&chopt));
    chopt_free(&chopt);
    if (ok) {
      tmp___15 = 0;
    } else {

    }
    exit(tmp___15);
  }
}