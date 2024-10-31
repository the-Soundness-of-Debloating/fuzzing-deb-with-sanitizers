#include "path_check.h"
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
typedef __off_t off_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
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
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef long __ssize_t;
typedef __ssize_t ssize_t;
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
struct option {
  char const *name;
  int has_arg;
  int *flag;
  int val;
};
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
union __anonunion_fts_cycle_26 {
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_25 {
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
  union __anonunion_fts_cycle_26 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_25 FTS;
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
struct __anonstruct___fsid_t___1 {
  int __val[2];
};
typedef struct __anonstruct___fsid_t___1 __fsid_t__;
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
  __fsid_t__ f_fsid;
  __fsword_t f_namelen;
  __fsword_t f_frsize;
  __fsword_t f_flags;
  __fsword_t f_spare[4];
};
struct LCO_ent {
  dev_t st_dev;
  _Bool opt_ok;
};
enum rm_interactive { RMI_ALWAYS = 3,
                      RMI_SOMETIMES = 4,
                      RMI_NEVER = 5 };
struct rm_options {
  _Bool ignore_missing_files;
  enum rm_interactive interactive;
  _Bool one_file_system;
  _Bool recursive;
  struct dev_ino *root_dev_ino;
  _Bool stdin_tty;
  _Bool verbose;
  _Bool require_restore_cwd;
};
enum RM_status {
  RM_OK = 2,
  RM_USER_DECLINED = 3,
  RM_ERROR = 4,
  RM_NONEMPTY_DIR = 5
};
enum Ternary { T_UNKNOWN = 2,
               T_NO = 3,
               T_YES = 4 };
typedef enum Ternary Ternary;
enum Prompt_action { PA_DESCEND_INTO_DIR = 2,
                     PA_REMOVE_DIR = 3 };
enum interactive_type {
  interactive_never = 0,
  interactive_once = 1,
  interactive_always = 2
};
size_t freadahead(FILE *fp);
size_t freadahead(FILE *fp) {
  long tmp;
  {
    if ((unsigned long)fp->_IO_write_ptr > (unsigned long)fp->_IO_write_base) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (fp->_flags & 256) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      tmp = 0L;
    }
    return ((size_t)((fp->_IO_read_end - fp->_IO_read_ptr) + tmp));
  }
}
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        tolower)(int __c);
extern __attribute__((__nothrow__))
size_t(__attribute__((__nonnull__(1), __leaf__)) strlen)(char const *__s)
    __attribute__((__pure__));
extern int fclose(FILE *__stream);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fileno)(FILE *__stream);
extern __attribute__((__nothrow__)) int *(
    __attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
extern int close(int __fd);
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
size_t base_len(char const *name);
char *last_component(char const *name);
char const *file_type(struct stat const *st);
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           gettext)(char const *__msgid)
    __attribute__((__format_arg__(1)));
char const *file_type(struct stat const *st) {
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char const *tmp___2;
  char const *tmp___3;
  char const *tmp___4;
  char const *tmp___5;
  char const *tmp___6;
  char const *tmp___7;
  char const *tmp___8;
  char const *tmp___9;
  char const *tmp___10;
  char const *tmp___12;
  {
    if ((st->st_mode & 61440U) == 32768U) {
      if (st->st_size == 0L) {
        tmp = gettext("regular empty file");
        tmp___1 = tmp;
      } else {

         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      return ((char const *)tmp___1);
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);





































  }
}
void *hash_lookup(Hash_table const *table___0, void const *entry);
void *(__attribute__((__warn_unused_result__))
       hash_insert)(Hash_table *table___0, void const *entry);
void triple_free(void *x);
void *xmalloc(size_t n) __attribute__((__malloc__));
extern int fflush(FILE *__stream);
int rpl_fflush(FILE *stream);
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset,
                                                int whence);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        __freading)(FILE *__fp);
__inline static void clear_ungetc_buffer_preserving_position(FILE *fp) {






}
int rpl_fflush(FILE *stream) {


















}
int fd_safer(int fd);
int fd_safer(int fd) {
  int f;
  int tmp;
  int e;
  int *tmp___0;
  int *tmp___1;
  {
    if (0 <= fd) {
      if (fd <= 2) {







         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    return (fd);
  }
}
extern int(__attribute__((__nonnull__(1))) open)(char const *__file,
                                                 int __oflag, ...);
extern int fcntl(int __fd, int __cmd, ...);
int rpl_fcntl(int fd, int action, ...);
static int have_dupfd_cloexec = 0;
int rpl_fcntl(int fd, int action, ...) {
  va_list arg;
  int result;
  int target;
  int tmp;
  int *tmp___0;
  int flags;
  int tmp___1;
  int saved_errno;
  int *tmp___2;
  int *tmp___3;
  int tmp___4;
  void *p;
  void *tmp___5;
  {
    result = -1;
    __builtin_va_start(arg, action);
    if (action == 1030) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    goto switch_default;
  case_1030:;










































  switch_default:;
    tmp___5 = __builtin_va_arg(arg, void *);
    p = tmp___5;
    result = fcntl(fd, action, p);
    goto switch_break;
  switch_break:;
    __builtin_va_end(arg);
    return (result);
  }
}
int volatile exit_failure;
int volatile exit_failure = (int volatile)1;
extern __attribute__((__nothrow__)) unsigned short const **(
    __attribute__((__leaf__)) __ctype_b_loc)(void)__attribute__((__const__));
extern struct _IO_FILE *stdin;
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
                                           strrchr)(char const *__s, int __c)
    __attribute__((__pure__));
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1,
                                                   char const *s2);
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
_Bool euidaccess_stat(struct stat const *st, int mode);
extern __attribute__((__nothrow__))
__uid_t(__attribute__((__leaf__)) geteuid)(void);
extern __attribute__((__nothrow__))
__gid_t(__attribute__((__leaf__)) getegid)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        group_member)(__gid_t __gid);
_Bool euidaccess_stat(struct stat const *st, int mode) {









































































































































}
int dup_safer(int fd) {
  int tmp;
  {
    tmp = rpl_fcntl(fd, 0, 3);
    return (tmp);
  }
}
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fstat)(int __fd, struct stat *__buf);
char const diacrit_base[256];
char const diacrit_diac[256];
char const diacrit_base[256] = {
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)'A', (char const)'B', (char const)'C',
    (char const)'D', (char const)'E', (char const)'F', (char const)'G',
    (char const)'H', (char const)'I', (char const)'J', (char const)'K',
    (char const)'L', (char const)'M', (char const)'N', (char const)'O',
    (char const)'P', (char const)'Q', (char const)'R', (char const)'S',
    (char const)'T', (char const)'U', (char const)'V', (char const)'W',
    (char const)'X', (char const)'Y', (char const)'Z', (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)'a', (char const)'b', (char const)'c',
    (char const)'d', (char const)'e', (char const)'f', (char const)'g',
    (char const)'h', (char const)'i', (char const)'j', (char const)'k',
    (char const)'l', (char const)'m', (char const)'n', (char const)'o',
    (char const)'p', (char const)'q', (char const)'r', (char const)'s',
    (char const)'t', (char const)'u', (char const)'v', (char const)'w',
    (char const)'x', (char const)'y', (char const)'z', (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)0, (char const)0, (char const)0, (char const)0,
    (char const)'A', (char const)'A', (char const)'A', (char const)'A',
    (char const)'A', (char const)'A', (char const)'A', (char const)'C',
    (char const)'E', (char const)'E', (char const)'E', (char const)'E',
    (char const)'I', (char const)'I', (char const)'I', (char const)'I',
    (char const)0, (char const)'N', (char const)'O', (char const)'O',
    (char const)'O', (char const)'O', (char const)'O', (char const)0,
    (char const)'O', (char const)'U', (char const)'U', (char const)'U',
    (char const)'U', (char const)'Y', (char const)0, (char const)0,
    (char const)'a', (char const)'a', (char const)'a', (char const)'a',
    (char const)'a', (char const)'a', (char const)'a', (char const)'c',
    (char const)'e', (char const)'e', (char const)'e', (char const)'e',
    (char const)'i', (char const)'i', (char const)'i', (char const)'i',
    (char const)0, (char const)'n', (char const)'o', (char const)'o',
    (char const)'o', (char const)'o', (char const)'o', (char const)0,
    (char const)'o', (char const)'u', (char const)'u', (char const)'u',
    (char const)'u', (char const)'y', (char const)0, (char const)'y'};
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
    if (!(state->magic == 9827862)) {



           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (state->chdir_counter) {




       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    (state->chdir_counter)++;
    tmp = is_zero_or_power_of_two(state->chdir_counter);
    if (tmp) {
      if (state->chdir_counter == 0UL) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
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
  char const *write_error;
  char const *tmp;
  char *tmp___0;
  int *tmp___1;
  int *tmp___2;
  int tmp___3;
  int *tmp___4;
  int tmp___5;
  {
    tmp___3 = close_stream(stdout);
    if (tmp___3 != 0) {


















       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___5 = close_stream(stderr);
    if (tmp___5 != 0) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    return;
  }
}
void close_stdin(void);
static char const *file_name___0;
void close_stdin(void) {
  _Bool fail;
  int tmp;
  int tmp___0;
  size_t tmp___1;
  int tmp___2;
  char const *close_error;
  char const *tmp___3;
  char *tmp___4;
  int *tmp___5;
  int *tmp___6;
  {
    fail = (_Bool)0;
    tmp___1 = freadahead(stdin);
    if (tmp___1 > 0UL) {






       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___2 = close_stream(stdin);
    if (tmp___2 != 0) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (fail) {









       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    close_stdout();
    if (fail) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
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
  int *tmp___2;
  int *tmp___3;
  {
    tmp = __fpending(stream);
    some_pending = (_Bool)(tmp != 0UL);
    tmp___0 = ferror_unlocked(stream);
    prev_fail = (_Bool)(tmp___0 != 0);
    tmp___1 = fclose(stream);
    fclose_fail = (_Bool)(tmp___1 != 0);
    if (prev_fail) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      if (fclose_fail) {












         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
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
    tmp = rpl_fcntl(desc, 1, 0);
    flags = tmp;
    if (0 <= flags) {
      if (value) {
        tmp___0 = flags | 1;
      } else {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      newflags = tmp___0;
      if (flags == newflags) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      } else {
        tmp___1 = rpl_fcntl(desc, 2, newflags);
        if (tmp___1 != -1) {
          return (0);
        }
      }
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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
  char const *base;
  char const *p;
  _Bool saw_slash;
  {
    base = name + 0;
    saw_slash = (_Bool)0;
    while (1) {
      if (!((int const) * base == 47)) {
        goto while_break;
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
  while_break:;
    p = base;
    while (1) {
      if (!*p) {
        goto while_break___0;
      }
      if ((int const) * p == 47) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      } else {
        if (saw_slash) {

           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      }
      p++;
    }
  while_break___0:;
    return ((char *)base);
  }
}
size_t base_len(char const *name) {
  size_t len;
  size_t prefix_len;
  {
    prefix_len = (size_t)0;
    len = strlen(name);
    while (1) {
      if (1UL < len) {
        if (!((int const) * (name + (len - 1UL)) == 47)) {
          goto while_break;
        }
      } else {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    __Cont:;

    }
  while_break:;
    return (len);
  }
}
char const *simple_backup_suffix;
void (*argmatch_die)(void);
ptrdiff_t __xargmatch_internal(char const *context, char const *arg,
                               char const *const *arglist, char const *vallist,
                               size_t valsize, void (*exit_fn)(void));
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcmp)(void const *__s1, void const *__s2, size_t __n)
    __attribute__((__pure__));
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
DIR *opendir_safer(char const *name);
char const *simple_backup_suffix = "~";
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize);
void argmatch_invalid(char const *context, char const *value,
                      ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize);
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format,
                   ...);
extern int putc_unlocked(int __c, FILE *__stream);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char const *quote_n(int n, char const *name);
__attribute__((__noreturn__)) void usage(int status);
static void __argmatch_die(void) {




}
void (*argmatch_die)(void) = &__argmatch_die;
ptrdiff_t argmatch(char const *arg, char const *const *arglist,
                   char const *vallist, size_t valsize) {














































}
void argmatch_invalid(char const *context, char const *value,
                      ptrdiff_t problem) {




















}
void argmatch_valid(char const *const *arglist, char const *vallist,
                    size_t valsize) {
































}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg,
                               char const *const *arglist, char const *vallist,
                               size_t valsize, void (*exit_fn)(void)) {













}
extern
    __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__,
                                                       __leaf__))
                                        realloc)(void *__ptr, size_t __size);
_Bool yesno(void);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     rpmatch)(char const *__response);
extern __ssize_t getline(char **__restrict __lineptr, size_t *__restrict __n,
                         FILE *__restrict __stream);
_Bool yesno(void) {
  _Bool yes;
  char *response;
  size_t response_size;
  ssize_t response_len;
  ssize_t tmp;
  int tmp___0;
  {
    response = (char *)((void *)0);
    response_size = (size_t)0;
    tmp = getline(&response, &response_size, stdin);
    response_len = tmp;
    if (response_len <= 0L) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      *(response + (response_len - 1L)) = (char)'\000';
      tmp___0 = rpmatch((char const *)response);
      yes = (_Bool)(0 < tmp___0);
    }
    free((void *)response);
    return (yes);
  }
}
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
__inline static void *xnmalloc(size_t n, size_t s) {














}
extern
    __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                        calloc)(size_t __nmemb, size_t __size)
        __attribute__((__malloc__));
void *xmalloc(size_t n) __attribute__((__malloc__));
void *xmalloc(size_t n) {












}
void *xrealloc(void *p, size_t n) {









}
__attribute__((__nothrow__))
FTS *(__attribute__((__warn_unused_result__, __leaf__))
      fts_open)(char *const *argv, int options,
                int (*compar)(FTSENT const **, FTSENT const **));
FTS *xfts_open(char *const *argv, int options,
               int (*compar)(FTSENT const **, FTSENT const **));
FTS *xfts_open(char *const *argv, int options,
               int (*compar)(FTSENT const **, FTSENT const **)) {
  FTS *fts;
  FTS *tmp;
  int *tmp___0;
  {
    tmp = fts_open(argv, options | 512, compar);
    fts = tmp;
    if ((unsigned long)fts == (unsigned long)((void *)0)) {






       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    return (fts);
  }
}
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {





   printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
}
_Bool can_write_any_file(void);
static _Bool initialized;
static _Bool can_write;
_Bool can_write_any_file(void) {
  _Bool can;
  __uid_t tmp;
  {
    if (!initialized) {
      can = (_Bool)0;
      tmp = geteuid();
      can = (_Bool)(tmp == 0U);
      can_write = can;
      initialized = (_Bool)1;
    }
    return (can_write);
  }
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
    (char const)'C', (char const)'o', (char const)'p', (char const)'y',
    (char const)'r', (char const)'i', (char const)'g', (char const)'h',
    (char const)'t', (char const)' ', (char const)'%', (char const)'s',
    (char const)' ', (char const)'%', (char const)'d', (char const)' ',
    (char const)'F', (char const)'r', (char const)'e', (char const)'e',
    (char const)' ', (char const)'S', (char const)'o', (char const)'f',
    (char const)'t', (char const)'w', (char const)'a', (char const)'r',
    (char const)'e', (char const)' ', (char const)'F', (char const)'o',
    (char const)'u', (char const)'n', (char const)'d', (char const)'a',
    (char const)'t', (char const)'i', (char const)'o', (char const)'n',
    (char const)',', (char const)' ', (char const)'I', (char const)'n',
    (char const)'c', (char const)'.', (char const)'\000'};
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
size_t strnlen1(char const *string, size_t maxlen) {











}
_Bool strip_trailing_slashes(char *file);
_Bool strip_trailing_slashes(char *file) {
  char *base;
  char *tmp;
  char *base_lim;
  _Bool had_slash;
  size_t tmp___0;
  {
    tmp = last_component((char const *)file);
    base = tmp;
    if (!*base) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___0 = base_len((char const *)base);
    base_lim = base + tmp___0;
    had_slash = (_Bool)((int)*base_lim != 0);
    *base_lim = (char)'\000';
    return (had_slash);
  }
}
int open_safer(char const *file, int flags, ...);
extern DIR *fdopendir(int __fd);
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i);
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i) {
  struct stat statbuf;
  int tmp;
  {
    tmp = lstat("/", &statbuf);
    if (tmp) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    root_d_i->st_ino = statbuf.st_ino;
    root_d_i->st_dev = statbuf.st_dev;
    return (root_d_i);
  }
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
    "literal", "shell", "shell-always", "c", "c-maybe", "escape",
    "locale", "clocale", (char const *)0};
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
  struct quoting_options o;
  {
    o.style = style;
    o.flags = 0;
    memset((void *)(o.quote_these_too), 0, sizeof(o.quote_these_too));
    return (o);
  }
}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {
  char const *translation;
  char const *tmp;
  {
    tmp = (char const *)gettext(msgid);
    translation = tmp;
    if ((unsigned long)translation == (unsigned long)msgid) {
      if ((unsigned int)s == 7U) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    return (translation);
  }
}
static size_t
quotearg_buffer_restyled(char *buffer, size_t buffersize, char const *arg,
                         size_t argsize, enum quoting_style quoting_style,
                         int flags, unsigned int const *quote_these_too,
                         char const *left_quote, char const *right_quote) {
  size_t i;
  size_t len;
  char const *quote_string;
  size_t quote_string_len;
  _Bool backslash_escapes;
  _Bool unibyte_locale;
  size_t tmp;
  _Bool elide_outer_quotes;
  unsigned char c;
  unsigned char esc;
  _Bool is_right_quote;
  int tmp___0;
  int tmp___1;
  size_t m;
  _Bool printable;
  unsigned short const **tmp___2;
  mbstate_t mbstate;
  wchar_t w;
  size_t bytes;
  size_t tmp___3;
  size_t j;
  int tmp___4;
  int tmp___5;
  size_t ilim;
  int tmp___6;
  size_t tmp___7;
  {
    len = (size_t)0;
    quote_string = (char const *)0;
    quote_string_len = (size_t)0;
    backslash_escapes = (_Bool)0;
    tmp = __ctype_get_mb_cur_max();
    unibyte_locale = (_Bool)(tmp == 1UL);
    elide_outer_quotes = (_Bool)((flags & 2) != 0);
    if ((unsigned int)quoting_style == 4U) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((unsigned int)quoting_style == 3U) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((unsigned int)quoting_style == 5U) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((unsigned int)quoting_style == 6U) {
      goto case_6;
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);















  case_4:;


  case_3:;














  case_5:;



  case_6:;
    if ((unsigned int)quoting_style != 8U) {
      left_quote = gettext_quote("`", quoting_style);
      right_quote = gettext_quote("\'", quoting_style);
    }
    if (!elide_outer_quotes) {
      quote_string = left_quote;
      while (1) {
        if (!*quote_string) {
          goto while_break___0;
        }
        while (1) {
          if (len < buffersize) {
            *(buffer + len) = (char)*quote_string;
          }
          len++;
          goto while_break___1;
        }
      while_break___1:;
        quote_string++;
      }
    while_break___0:;
    }
    backslash_escapes = (_Bool)1;
    quote_string = right_quote;
    quote_string_len = strlen(quote_string);
    goto switch_break;
  case_1:;


  case_2:;













  case_0:;


  switch_default:;

  switch_break:;
    i = (size_t)0;
    while (1) {
      if (argsize == 0xffffffffffffffffUL) {
        tmp___6 = (int const) * (arg + i) == 0;
      } else {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if (tmp___6) {
        goto while_break___3;
      }
      is_right_quote = (_Bool)0;
      if (backslash_escapes) {
        if (quote_string_len) {
          if (i + quote_string_len <= argsize) {
            tmp___0 = memcmp((void const *)(arg + i),
                             (void const *)quote_string, quote_string_len);
            if (tmp___0 == 0) {



               printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
          }
        }
      }
      c = (unsigned char)*(arg + i);
      if ((int)c == 0) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 63) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 7) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 8) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 12) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 10) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 13) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 9) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 11) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 92) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 123) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 125) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 35) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 126) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 32) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 33) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 34) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 36) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 38) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 40) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 41) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 42) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 59) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 60) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 61) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 62) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 91) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 94) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 96) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 124) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 39) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 37) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 43) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 44) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 45) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 46) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 47) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 48) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 49) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 50) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 51) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 52) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 53) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 54) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 55) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 56) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 57) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 58) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 65) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 66) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 67) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 68) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 69) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 70) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 71) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 72) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 73) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 74) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 75) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 76) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 77) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 78) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 79) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 80) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 81) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 82) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 83) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 84) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 85) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 86) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 87) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 88) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 89) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 90) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 93) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 95) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 97) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 98) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 99) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 100) {
        goto case_37;
      }
      if ((int)c == 101) {
        goto case_37;
      }
      if ((int)c == 102) {
        goto case_37;
      }
      if ((int)c == 103) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 104) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 105) {
        goto case_37;
      }
      if ((int)c == 106) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 107) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 108) {
        goto case_37;
      }
      if ((int)c == 109) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 110) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 111) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 112) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 113) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)c == 114) {
        goto case_37;
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
























    case_0___0:;









































    case_63:;







    case_2___0:;




    case_3___0:;













































































    switch_default___1:;



    case_7___0:;


    case_8___0:;


    case_12:;


    case_10:;


    case_13:;


    case_9:;


    case_11:;


    case_92:;








    c_and_shell_escape:;





    c_escape:;





    case_123:;








    case_35:;



    case_32:;






    case_39___0:;






























    case_37:;
      goto switch_break___0;
    switch_default___2:;






























































































































































    switch_break___0:;
      if (backslash_escapes) {
        goto _L___3;
      } else {
        if (elide_outer_quotes) {
        _L___3:;
          if (quote_these_too) {
            if (!(*(quote_these_too + (unsigned long)c / (sizeof(int) * 8UL)) &
                  (unsigned int const)(1 << (unsigned long)c %
                                                (sizeof(int) * 8UL)))) {
              goto _L___2;
            }
          } else {
             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
        } else {
        _L___2:;
          if (!is_right_quote) {
            goto store_c;
          }
        }
      }
    store_escape:;











    store_c:;
      while (1) {
        if (len < buffersize) {
          *(buffer + len) = (char)c;
        }
        len++;
        goto while_break___24;
      }
    while_break___24:;
    __Cont:;
      i++;
    }
  while_break___3:;
    if (len == 0UL) {




       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (quote_string) {
      if (!elide_outer_quotes) {
        while (1) {
          if (!*quote_string) {
            goto while_break___25;
          }
          while (1) {
            if (len < buffersize) {
              *(buffer + len) = (char)*quote_string;
            }
            len++;
            goto while_break___26;
          }
        while_break___26:;
          quote_string++;
        }
      while_break___25:;
      }
    }
    if (len < buffersize) {
      *(buffer + len) = (char)'\000';
    }
    return (len);
  force_outer_quoting_style:;




  }
}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize,
                                struct quoting_options const *options) {
  int e;
  int *tmp;
  unsigned int n0;
  struct slotvec *sv;
  size_t n1;
  _Bool preallocated;
  int tmp___0;
  struct slotvec *tmp___1;
  size_t size;
  char *val;
  int flags;
  size_t qsize;
  size_t tmp___2;
  int *tmp___3;
  {
    tmp = __errno_location();
    e = *tmp;
    n0 = (unsigned int)n;
    sv = slotvec;
    if (n < 0) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (nslots <= n0) {





















       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    size = (sv + n)->size;
    val = (sv + n)->val;
    flags = (int)(options->flags | 1);
    tmp___2 = quotearg_buffer_restyled(
        val, size, arg, argsize, (enum quoting_style)options->style, flags,
        (unsigned int const *)(options->quote_these_too),
        (char const *)options->left_quote, (char const *)options->right_quote);
    qsize = tmp___2;
    if (size <= qsize) {











                                printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___3 = __errno_location();
    *tmp___3 = e;
    return (val);
  }
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
  {
    tmp = quoting_options_from_style(s);
    o = tmp;
    tmp___0 = quotearg_n_options(n, arg, (size_t)-1,
                                 (struct quoting_options const *)(&o));
    return (tmp___0);
  }
}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {









}
char *quotearg_char(char const *arg, char ch) {





}
char *quotearg_colon(char const *arg) {





}
char const *quote_n(int n, char const *name) {
  char const *tmp;
  {
    tmp = (char const *)quotearg_n_style(n, (enum quoting_style)6, name);
    return (tmp);
  }
}
char const *quote(char const *name) {
  char const *tmp;
  {
    tmp = quote_n(0, name);
    return (tmp);
  }
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
  int tmp;
  int tmp___0;
  {
    if ((unsigned long)argv0 == (unsigned long)((void *)0)) {

       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    slash = (char const *)strrchr(argv0, '/');
    if ((unsigned long)slash != (unsigned long)((void *)0)) {
      base = slash + 1;
    } else {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (base - argv0 >= 7L) {








       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    program_name = argv0;
    program_invocation_name = (char *)argv0;
    return;
  }
}
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     dirfd)(DIR *__dirp);
DIR *opendir_safer(char const *name) {



































}
int openat_safer(int fd, char const *file, int flags, ...);
int openat_safer(int fd, char const *file, int flags, ...) {
  mode_t mode;
  va_list ap;
  int tmp;
  int tmp___0;
  {
    mode = (mode_t)0;
    if (flags & 64) {


       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp = openat(fd, file, flags, mode);
    tmp___0 = fd_safer(tmp);
    return (tmp___0);
  }
}
int open_safer(char const *file, int flags, ...) {















}
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1,
                                                   char const *s2) {





















































































































































































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
    if (tmp) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
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





       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      fts->fts_cycle.state =
          (struct cycle_check_state *)malloc(sizeof(*(fts->fts_cycle.state)));
      if (!fts->fts_cycle.state) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      cycle_check_init(fts->fts_cycle.state);
    }
    return ((_Bool)1);
  }
}
static _Bool enter_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
  struct Active_dir *ad;
  struct Active_dir *tmp;
  struct Active_dir *ad_from_table;
  _Bool tmp___0;
  {
    if (fts->fts_options & 258) {


















       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      tmp___0 = cycle_check(fts->fts_cycle.state,
                            (struct stat const *)(ent->fts_statp));
      if (tmp___0) {

         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    return ((_Bool)1);
  }
}
static void leave_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
  struct Active_dir obj;
  void *found;
  FTSENT *parent;
  {
    st = (struct stat const *)(ent->fts_statp);
    if (fts->fts_options & 258) {






       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      parent = ent->fts_parent;
      if ((unsigned long)parent != (unsigned long)((void *)0)) {
        if (0L <= parent->fts_level) {














         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      }
    }
    return;
  }
}
static void free_dir(FTS *sp) {
  {
    if (sp->fts_options & 258) {


       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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















}
__inline static DIR *opendirat(int fd, char const *dir) {
  int new_fd;
  int tmp;
  DIR *dirp;
  int saved_errno;
  int *tmp___0;
  int *tmp___1;
  {
    tmp = openat_safer(fd, dir, 67840);
    new_fd = tmp;
    if (new_fd < 0) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    set_cloexec_flag(new_fd, (_Bool)1);
    dirp = fdopendir(new_fd);
    if ((unsigned long)dirp == (unsigned long)((void *)0)) {




       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
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
      if (!(old != fd)) {
        if (!(old == -100)) {
           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      }
      goto while_break;
    }
  while_break:;
    if (chdir_down_one) {
      tmp = i_ring_push(&sp->fts_fd_ring, old);
      prev_fd_in_slot = tmp;
      if (0 <= prev_fd_in_slot) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    } else {




       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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
  register FTS *sp;
  register FTSENT *p;
  register FTSENT *root;
  register size_t nitems;
  FTSENT *parent;
  FTSENT *tmp;
  _Bool defer_stat;
  int *tmp___0;
  int *tmp___1;
  int *tmp___2;
  size_t maxarglen;
  size_t tmp___4;
  size_t tmp___5;
  _Bool tmp___6;
  int tmp___7;
  size_t len;
  size_t tmp___8;
  struct _ftsent *tmp___9;
  _Bool tmp___10;
  int tmp___11;
  {
    parent = (FTSENT *)((void *)0);
    tmp = (FTSENT *)((void *)0);
    if (options & -2048) {


       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (options & 4) {




       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (!(options & 18)) {


       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    sp = (FTS *)malloc(sizeof(FTS));
    if ((unsigned long)sp == (unsigned long)((void *)0)) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    memset((void *)sp, 0, sizeof(FTS));
    sp->fts_compar = compar;
    sp->fts_options = options;
    if (sp->fts_options & 2) {

       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    sp->fts_cwd_fd = -100;
    tmp___4 = fts_maxarglen(argv);
    maxarglen = tmp___4;
    if (maxarglen > 4096UL) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      tmp___5 = (size_t)4096;
    }
    tmp___6 = fts_palloc(sp, tmp___5);
    if (!tmp___6) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((unsigned long)*argv != (unsigned long)((void *)0)) {
      parent = fts_alloc(sp, "", (size_t)0);
      if ((unsigned long)parent == (unsigned long)((void *)0)) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      parent->fts_level = (ptrdiff_t)-1;
    }
    if ((unsigned long)compar == (unsigned long)((void *)0)) {
      tmp___7 = 1;
    } else {




       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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
      if ((unsigned long)p == (unsigned long)((void *)0)) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      p->fts_level = (ptrdiff_t)0;
      p->fts_parent = parent;
      p->fts_accpath = p->fts_name;
      if (defer_stat) {
        if ((unsigned long)root != (unsigned long)((void *)0)) {

           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        } else {
          p->fts_info = fts_stat(sp, p, (_Bool)0);
        }
      } else {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if (compar) {

         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      } else {
        p->fts_link = (struct _ftsent *)((void *)0);
        if ((unsigned long)root == (unsigned long)((void *)0)) {
          root = p;
          tmp = root;
        } else {

           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      }
      argv++;
      nitems++;
    }
  while_break:;
    if (compar) {


       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___9 = fts_alloc(sp, "", (size_t)0);
    sp->fts_cur = tmp___9;
    if ((unsigned long)tmp___9 == (unsigned long)((void *)0)) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    (sp->fts_cur)->fts_link = root;
    (sp->fts_cur)->fts_info = (unsigned short)9;
    tmp___10 = setup_dir(sp);
    if (!tmp___10) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (!(sp->fts_options & 4)) {
      if (!(sp->fts_options & 512)) {




         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    i_ring_init(&sp->fts_fd_ring, -1);
    return (sp);
  mem3:;


  mem2:;

  mem1:;


  }
}
static void fts_load(FTS *sp, FTSENT *p) {
  register size_t len;
  register char *cp;
  size_t tmp;
  char *tmp___0;
  {
    tmp = p->fts_namelen;
    p->fts_pathlen = tmp;
    len = tmp;
    memmove((void *)sp->fts_path, (void const *)(p->fts_name), len + 1UL);
    cp = strrchr((char const *)(p->fts_name), '/');
    if (cp) {












       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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
  register FTSENT *freep;
  register FTSENT *p;
  int saved_errno;
  int *tmp;
  int tmp___0;
  int *tmp___1;
  int tmp___2;
  int *tmp___3;
  int tmp___4;
  int *tmp___5;
  {
    saved_errno = 0;
    if (sp->fts_cur) {













    while_break:;
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (sp->fts_child) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    free((void *)sp->fts_array);
    free((void *)sp->fts_path);
    if (sp->fts_options & 512) {
      if (0 <= sp->fts_cwd_fd) {




         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    } else {













       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    fd_ring_clear(&sp->fts_fd_ring);
    if (sp->fts_leaf_optimization_works_ht) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    free_dir(sp);
    free((void *)sp);
    if (saved_errno) {


       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
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
  register FTSENT *p;
  register FTSENT *tmp;
  register unsigned short instr;
  register char *t;
  int *tmp___0;
  int tmp___1;
  int *tmp___2;
  int tmp___3;
  struct _ftsent *tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int *tmp___10;
  int tmp___11;
  size_t tmp___12;
  char *tmp___13;
  FTSENT *parent;
  _Bool tmp___14;
  int *tmp___15;
  _Bool tmp___16;
  int *tmp___17;
  struct _ftsent *tmp___18;
  int *tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  int tmp___24;
  int saved_errno;
  int *tmp___25;
  int *tmp___26;
  int *tmp___27;
  int tmp___28;
  int tmp___29;
  int *tmp___30;
  int tmp___31;
  FTSENT *tmp___32;
  {
    if ((unsigned long)sp->fts_cur == (unsigned long)((void *)0)) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      if (sp->fts_options & 8192) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    p = sp->fts_cur;
    instr = p->fts_instr;
    p->fts_instr = (unsigned short)3;
    if ((int)instr == 1) {

       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((int)instr == 2) {





















       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((int)p->fts_info == 1) {
      if ((int)instr == 4) {
        goto _L___0;
      } else {
        if (sp->fts_options & 64) {
          if (p->fts_statp[0].st_dev != sp->fts_dev) {
          _L___0:;
            if ((int)p->fts_flags & 2) {
               printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
            if (sp->fts_child) {

               printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
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




         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((unsigned long)sp->fts_child != (unsigned long)((void *)0)) {














         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      } else {
        tmp___4 = fts_build(sp, 3);
        sp->fts_child = tmp___4;
        if ((unsigned long)tmp___4 == (unsigned long)((void *)0)) {
          if (sp->fts_options & 8192) {
             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          if (p->fts_errno) {


             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          while (1) {
            leave_dir(sp, p);
            goto while_break___1;
          }
        while_break___1:;
          return (p);
        }
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);


    }
  next:;
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
               printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
            cwd_advance_fd(sp, tmp___5, (_Bool)1);
            tmp___8 = 0;
          } else {






             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          if (tmp___8) {
             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          } else {
            tmp___9 = 0;
          }
        } else {
           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
        if (tmp___9) {

           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
        free_dir(sp);
        fts_load(sp, p);
        setup_dir(sp);
        goto check_for_dir;
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);



















    name:;











    check_for_dir:;
      sp->fts_cur = p;
      if ((int)p->fts_info == 11) {






































         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if ((int)p->fts_info == 1) {
        if (p->fts_level == 0L) {
          sp->fts_dev = p->fts_statp[0].st_dev;
        }
        tmp___16 = enter_dir(sp, p);
        if (!tmp___16) {


           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
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
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);





  while_break___3:;





















































































  }
}
__attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                 fts_set)(FTS *sp __attribute__((__unused__)),
                                          FTSENT *p, int instr);
int(__attribute__((__leaf__)) fts_set)(FTS *sp __attribute__((__unused__)),
                                       FTSENT *p, int instr) {
  int *tmp;
  {
    if (instr != 0) {
      if (instr != 1) {
        if (instr != 2) {
          if (instr != 3) {
            if (instr != 4) {


               printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
          }
        }
      }
    }
    p->fts_instr = (unsigned short)instr;
    return (0);
  }
}
static int fts_compare_ino(struct _ftsent const **a, struct _ftsent const **b) {















}
static void set_stat_type(struct stat *st, unsigned int dtype) {



















































}
static FTSENT *fts_build(FTS *sp, int type) {
  register struct dirent *dp;
  register FTSENT *p;
  register FTSENT *head;
  register size_t nitems;
  FTSENT *cur;
  FTSENT *tail;
  DIR *dirp;
  void *oldaddr;
  int saved_errno;
  _Bool descend;
  _Bool doadjust;
  ptrdiff_t level;
  nlink_t nlinks;
  _Bool nostat;
  size_t len;
  size_t maxlen;
  size_t new_len;
  char *cp;
  int *tmp;
  DIR *tmp___0;
  DIR *tmp___1;
  int *tmp___2;
  _Bool tmp___3;
  int tmp___4;
  int dir_fd;
  int tmp___5;
  int *tmp___6;
  int tmp___7;
  char *tmp___8;
  _Bool is_dir;
  size_t tmp___9;
  int *tmp___10;
  int *tmp___11;
  size_t tmp___12;
  _Bool tmp___13;
  size_t tmp___14;
  size_t tmp___15;
  int *tmp___16;
  _Bool skip_stat;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  int tmp___23;
  int tmp___24;
  int tmp___25;
  int tmp___26;
  _Bool tmp___27;
  {
    cur = sp->fts_cur;
    if (!(sp->fts_options & 4)) {
      if (sp->fts_options & 512) {
        tmp___0 = opendirat(sp->fts_cwd_fd, (char const *)cur->fts_accpath);
        dirp = tmp___0;
      } else {

         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    } else {

       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((unsigned long)dirp == (unsigned long)((void *)0)) {





       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((int)cur->fts_info == 11) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      if (sp->fts_options & 256) {




      while_break:;






         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if (type == 2) {

       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      if (sp->fts_options & 8) {
        if (sp->fts_options & 16) {
          if (sp->fts_options & 32) {
             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          } else {
            tmp___4 = 2;
          }
          nlinks = cur->fts_statp[0].st_nlink - (__nlink_t)tmp___4;
          nostat = (_Bool)1;
        } else {

           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      } else {

         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if (nlinks) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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
           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        } else {
          tmp___7 =
              fts_safe_changedir(sp, cur, dir_fd, (char const *)((void *)0));
          if (tmp___7) {
          _L:;















          } else {
            descend = (_Bool)1;
          }
        }
      } else {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if ((int)*(cur->fts_path + (cur->fts_pathlen - 1UL)) == 47) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      len = cur->fts_pathlen;
    }
    if (sp->fts_options & 4) {



       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
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
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
























































































































    __Cont:;
    }
  while_break___0:;
    if (dirp) {
      closedir(dirp);
    }
    if (doadjust) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (sp->fts_options & 4) {







       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (descend) {
      if (type == 1) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      } else {
        if (!nitems) {
        _L___2:;
          if (cur->fts_level == 0L) {
            fd_ring_clear(&sp->fts_fd_ring);
            if (!(sp->fts_options & 4)) {
              if (sp->fts_options & 512) {
                if (sp->fts_options & 512) {
                  tmp___20 = -100;
                } else {
                   printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
                }
                cwd_advance_fd(sp, tmp___20, (_Bool)1);
                tmp___23 = 0;
              } else {






                 printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
              }
              if (tmp___23) {
                 printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
              } else {
                tmp___24 = 0;
              }
            } else {
               printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
            tmp___26 = tmp___24;
          } else {

             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          if (tmp___26) {



             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
        }
      }
    }
    if (!nitems) {
      if (type == 3) {
        cur->fts_info = (unsigned short)6;
      }
      fts_lfree(head);
      return ((FTSENT *)((void *)0));
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);

















  }
}
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow) {
  struct stat *sbp;
  int saved_errno;
  int *tmp;
  int *tmp___0;
  int *tmp___1;
  int tmp___2;
  int tmp___3;
  int *tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  {
    sbp = p->fts_statp;
    if (p->fts_level == 0L) {
      if (sp->fts_options & 1) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if (sp->fts_options & 2) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      if (follow) {
      _L:;
















      } else {
        tmp___5 =
            fstatat(sp->fts_cwd_fd, (char const *)p->fts_accpath, sbp, 256);
        if (tmp___5) {
          tmp___4 = __errno_location();
          p->fts_errno = *tmp___4;
        err:;
          memset((void *)sbp, 0, sizeof(struct stat));
          return ((unsigned short)10);
        }
      }
    }
    if ((sbp->st_mode & 61440U) == 16384U) {
      if (sp->fts_options & 32) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      } else {
        tmp___6 = 2;
      }
      p->fts_n_dirs_remaining = sbp->st_nlink - (__nlink_t)tmp___6;
      if ((int)p->fts_name[0] == 46) {














         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      return ((unsigned short)1);
    }
    if ((sbp->st_mode & 61440U) == 40960U) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((sbp->st_mode & 61440U) == 32768U) {
      return ((unsigned short)8);
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
  }
}
static int fts_compar(void const *a, void const *b) {









}
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems) {
































































}
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen) {
  register FTSENT *p;
  size_t len;
  {
    len = sizeof(FTSENT) + namelen;
    p = (FTSENT *)malloc(len);
    if ((unsigned long)p == (unsigned long)((void *)0)) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
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
  register FTSENT *p;
  {
    while (1) {
      p = head;
      if (!p) {
        goto while_break;
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);

    }
  while_break:;
    return;
  }
}
static _Bool fts_palloc(FTS *sp, size_t more) {
  char *p;
  size_t new_len;
  int *tmp;
  {
    new_len = (sp->fts_pathlen + more) + 256UL;
    if (new_len < sp->fts_pathlen) {




       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    sp->fts_pathlen = new_len;
    p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
    if ((unsigned long)p == (unsigned long)((void *)0)) {


       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
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
  int ret;
  _Bool is_dotdot;
  int tmp;
  int tmp___0;
  int newfd;
  int parent_fd;
  _Bool tmp___1;
  struct stat sb;
  int tmp___2;
  int *tmp___3;
  int tmp___4;
  int oerrno;
  int *tmp___5;
  int *tmp___6;
  {
    if (dir) {





       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      tmp___0 = 0;
    }
    is_dotdot = (_Bool)tmp___0;
    if (sp->fts_options & 4) {





       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (fd < 0) {












       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    newfd = fd;
    if (fd < 0) {



       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (sp->fts_options & 2) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      if (dir) {





















         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if (sp->fts_options & 512) {
      cwd_advance_fd(sp, newfd, (_Bool)(!is_dotdot));
      return (0);
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
  bail:;








  }
}
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __attribute__((__nothrow__))
__off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset,
                                         int __whence);
int(__attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp, off_t offset,
                                                int whence) {







































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
char const *Version = "8.4";
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     euidaccess)(char const *__name,
                                                 int __type);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     faccessat)(int __fd, char const *__file,
                                                int __type, int __flag);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     unlinkat)(int __fd, char const *__name,
                                               int __flag);
__inline static int lstatat(int fd, char const *name, struct stat *st) {





}
__inline static _Bool dot_or_dotdot(char const *file_name___3) {
  char sep;
  int tmp;
  {
    if ((int const) * (file_name___3 + 0) == 46) {











       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      return ((_Bool)0);
    }
  }
}
__inline static struct dirent const *
readdir_ignoring_dot_and_dotdot(DIR *dirp) {


















}
__inline static _Bool is_empty_dir(int fd_cwd, char const *dir) {



































}
enum RM_status rm(char *const *file, struct rm_options const *x);
static int cache_fstatat(int fd, char const *file, struct stat *st, int flag) {
  int *tmp;
  int tmp___0;
  int *tmp___1;
  {
    if (st->st_size == -1L) {
      tmp___0 = fstatat(fd, file, st, flag);
      if (tmp___0 != 0) {


         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if (0L <= st->st_size) {
      return (0);
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);


  }
}
__inline static struct stat *cache_stat_init(struct stat *st) {
  {
    st->st_size = (__off_t)-1;
    return (st);
  }
}
static int write_protected_non_symlink(int fd_cwd, char const *file,
                                       char const *full_name,
                                       struct stat *buf___1) {
  _Bool tmp;
  int tmp___0;
  int tmp___1;
  size_t file_name_len;
  size_t tmp___2;
  _Bool tmp___3;
  int tmp___4;
  int tmp___5;
  int *tmp___6;
  int *tmp___7;
  {
    tmp = can_write_any_file();
    if (tmp) {
      return (0);
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
































  }
}
static enum RM_status prompt(FTS const *fts, FTSENT const *ent, _Bool is_dir,
                             struct rm_options const *x,
                             enum Prompt_action mode, Ternary *is_empty_p) {
  int fd_cwd;
  char const *full_name;
  char const *filename;
  struct stat st;
  struct stat *sbuf;
  int dirent_type;
  int tmp;
  int write_protected;
  int wp_errno;
  int *tmp___0;
  int *tmp___1;
  int tmp___2;
  char const *quoted_name;
  char const *tmp___3;
  char *tmp___4;
  _Bool is_empty;
  char *tmp___5;
  char *tmp___6;
  char *tmp___7;
  char *tmp___8;
  int *tmp___9;
  int tmp___10;
  char const *tmp___11;
  char *tmp___12;
  char *tmp___13;
  char *tmp___14;
  _Bool tmp___15;
  {
    fd_cwd = (int)fts->fts_cwd_fd;
    full_name = (char const *)ent->fts_path;
    filename = (char const *)ent->fts_accpath;
    if (is_empty_p) {
      *is_empty_p = (Ternary)2;
    }
    sbuf = &st;
    cache_stat_init(sbuf);
    if (is_dir) {
      tmp = 4;
    } else {
      tmp = 0;
    }
    dirent_type = tmp;
    write_protected = 0;
    if (ent->fts_number) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((unsigned int const)x->interactive == 5U) {
      return ((enum RM_status)2);
    }
    wp_errno = 0;
    if (!x->ignore_missing_files) {
      if ((unsigned int const)x->interactive == 3U) {
        goto _L;
      } else {
        if (x->stdin_tty) {
        _L:;
          if (dirent_type != 10) {
            write_protected =
                write_protected_non_symlink(fd_cwd, filename, full_name, sbuf);
            tmp___0 = __errno_location();
            wp_errno = *tmp___0;
          }
        }
      }
    }
    if (write_protected) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      if ((unsigned int const)x->interactive == 3U) {
      _L___2:;
        if (0 <= write_protected) {
          if (dirent_type == 0) {
            tmp___2 = cache_fstatat(fd_cwd, filename, sbuf, 256);
            if (tmp___2 == 0) {
              if ((sbuf->st_mode & 61440U) == 40960U) {
                 printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
              } else {
                if ((sbuf->st_mode & 61440U) == 16384U) {
                   printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
                }
              }
            } else {


               printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
          }
        }
        if (0 <= write_protected) {
          if (dirent_type == 10) {
             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          if (dirent_type == 4) {
             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          goto switch_break;
        case_10:;




        case_4:;





        switch_break:;
        }
        tmp___3 = quote(full_name);
        quoted_name = tmp___3;
        if (write_protected < 0) {


           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
        if (is_empty_p) {





           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        } else {
          is_empty = (_Bool)0;
        }
        if (dirent_type == 4) {
















           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        } else {
        _L___1:;
          tmp___10 = cache_fstatat(fd_cwd, filename, sbuf, 256);
          if (tmp___10 != 0) {



             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          tmp___11 = file_type((struct stat const *)sbuf);
          if (write_protected) {

             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          } else {
            tmp___13 = gettext("%s: remove %s %s? ");
            tmp___14 = tmp___13;
          }
          fprintf(stderr, (char const *)tmp___14, program_name, tmp___11,
                  quoted_name);
        }
        tmp___15 = yesno();
        if (!tmp___15) {
          return ((enum RM_status)3);
        }
      }
    }
    return ((enum RM_status)2);
  }
}
__inline static _Bool nonexistent_file_errno(int errnum) {














}
__inline static _Bool ignorable_missing(struct rm_options const *x,
                                        int errnum) {
  _Bool tmp;
  int tmp___0;
  {
    if (x->ignore_missing_files) {





       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    } else {
      tmp___0 = 0;
    }
    return ((_Bool)tmp___0);
  }
}
static void fts_skip_tree(FTS *fts, FTSENT *ent) {
  {
    fts_set(fts, ent, 4);
    ent = fts_read(fts);
    return;
  }
}
static void mark_ancestor_dirs(FTSENT *ent) {
  FTSENT *p;
  {
    p = ent->fts_parent;
    while (1) {
      if (!(0L <= p->fts_level)) {
        goto while_break;
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);




    }
  while_break:;
    return;
  }
}
static enum RM_status excise(FTS *fts, FTSENT *ent, struct rm_options const *x,
                             _Bool is_dir) {
  int flag;
  int tmp;
  char const *tmp___0;
  char *tmp___1;
  char *tmp___2;
  char *tmp___3;
  int tmp___4;
  struct stat st;
  int *tmp___5;
  int tmp___6;
  int *tmp___7;
  int *tmp___8;
  int *tmp___9;
  _Bool tmp___10;
  int *tmp___11;
  char const *tmp___12;
  char *tmp___13;
  int *tmp___14;
  {
    if (is_dir) {
      tmp = 512;
    } else {
      tmp = 0;
    }
    flag = tmp;
    tmp___4 = unlinkat(fts->fts_cwd_fd, (char const *)ent->fts_accpath, flag);
    if (tmp___4 == 0) {
      if (x->verbose) {








         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      return ((enum RM_status)2);
    }
    tmp___8 = __errno_location();
    if (*tmp___8 == 30) {










       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___9 = __errno_location();
    tmp___10 = ignorable_missing(x, *tmp___9);
    if (tmp___10) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((int)ent->fts_info == 4) {

       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___12 = quote((char const *)ent->fts_path);
    tmp___13 = gettext("cannot remove %s");
    tmp___14 = __errno_location();
    error(0, *tmp___14, (char const *)tmp___13, tmp___12);
    mark_ancestor_dirs(ent);
    return ((enum RM_status)4);
  }
}
static enum RM_status rm_fts(FTS *fts, FTSENT *ent,
                             struct rm_options const *x) {
  char const *tmp;
  char *tmp___0;
  _Bool tmp___1;
  char const *tmp___2;
  char *tmp___3;
  char *tmp___4;
  _Bool tmp___5;
  char const *tmp___6;
  char *tmp___7;
  char const *tmp___8;
  char const *tmp___9;
  char *tmp___10;
  int tmp___11;
  char *tmp___12;
  Ternary is_empty_directory;
  enum RM_status s;
  enum RM_status tmp___13;
  char const *tmp___14;
  char *tmp___15;
  _Bool is_dir;
  int tmp___16;
  enum RM_status s___0;
  enum RM_status tmp___17;
  enum RM_status tmp___18;
  char const *tmp___19;
  char *tmp___20;
  char const *tmp___21;
  char *tmp___22;
  char const *tmp___23;
  char *tmp___24;
  {
    if ((int)ent->fts_info == 1) {
      goto case_1;
    }
    if ((int)ent->fts_info == 8) {
      goto case_8;
    }
    if ((int)ent->fts_info == 10) {
      goto case_8;
    }
    if ((int)ent->fts_info == 12) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((int)ent->fts_info == 13) {
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if ((int)ent->fts_info == 6) {
      goto case_8;
    }
     printf("<This branch is removed by Cov debloating tool>\n"); exit(6);















  case_1:;
    if (!x->recursive) {
      tmp = quote((char const *)ent->fts_path);
      tmp___0 = gettext("cannot remove %s");
      error(0, 21, (char const *)tmp___0, tmp);
      mark_ancestor_dirs(ent);
      fts_skip_tree(fts, ent);
      return ((enum RM_status)4);
    }
    if (ent->fts_level == 0L) {
      tmp___1 = strip_trailing_slashes(ent->fts_path);
      if (tmp___1) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      tmp___4 = last_component((char const *)ent->fts_accpath);
      tmp___5 = dot_or_dotdot((char const *)tmp___4);
      if (tmp___5) {




         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if (x->root_dev_ino) {
        if (ent->fts_statp[0].st_ino == (x->root_dev_ino)->st_ino) {























           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      }
    }
    tmp___13 = prompt((FTS const *)fts, (FTSENT const *)ent, (_Bool)1, x,
                      (enum Prompt_action)2, &is_empty_directory);
    s = tmp___13;
    if ((unsigned int)s == 2U) {
      if ((unsigned int)is_empty_directory == 4U) {

         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if ((unsigned int)s != 2U) {

       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    return (s);
  case_8:;
    if ((int)ent->fts_info == 6) {
      if (x->one_file_system) {









         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    if ((int)ent->fts_info == 6) {
      tmp___16 = 1;
    } else {
      if ((int)ent->fts_info == 4) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      } else {
        tmp___16 = 0;
      }
    }
    is_dir = (_Bool)tmp___16;
    tmp___17 = prompt((FTS const *)fts, (FTSENT const *)ent, is_dir, x,
                      (enum Prompt_action)3, (Ternary *)((void *)0));
    s___0 = tmp___17;
    if ((unsigned int)s___0 != 2U) {
      return (s___0);
    }
    tmp___18 = excise(fts, ent, x, is_dir);
    return (tmp___18);
  case_2:;









  while_break___0:;


  case_7:;





  switch_default:;







  }
}
enum RM_status rm(char *const *file, struct rm_options const *x) {
  enum RM_status rm_status;
  int bit_flags;
  FTS *fts;
  FTS *tmp;
  FTSENT *ent;
  char *tmp___0;
  int *tmp___1;
  int *tmp___2;
  enum RM_status s;
  enum RM_status tmp___3;
  char *tmp___4;
  int *tmp___5;
  int tmp___6;
  {
    rm_status = (enum RM_status)2;
    if (*file) {
      bit_flags = 536;
      if (x->one_file_system) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      tmp = xfts_open(file, bit_flags,
                      (int (*)(FTSENT const **, FTSENT const **))((void *)0));
      fts = tmp;
      while (1) {
        ent = fts_read(fts);
        if ((unsigned long)ent == (unsigned long)((void *)0)) {
          tmp___2 = __errno_location();
          if (*tmp___2 != 0) {



             printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
          }
          goto while_break;
        }
        tmp___3 = rm_fts(fts, ent, x);
        s = tmp___3;
        if (!((unsigned int)s == 2U)) {
          if (!((unsigned int)s == 3U)) {
            if (!((unsigned int)s == 4U)) {




                   printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
            }
          }
        }
        while (1) {
          if ((unsigned int)s == 4U) {
            rm_status = s;
          } else {
            if ((unsigned int)s == 3U) {
              if ((unsigned int)rm_status == 2U) {
                rm_status = s;
              }
            }
          }
          goto while_break___0;
        }
      while_break___0:;
      }
    while_break:;
      tmp___6 = fts_close(fts);
      if (tmp___6 != 0) {



         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
    }
    return (rm_status);
  }
}
extern char *optarg;
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        isatty)(int __fd);
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
__inline static int priv_set_remove_linkdir(void) {
  { return (-1); }
}
static struct option const long_opts[12] = {
    {"directory", 0, (int *)((void *)0), 'd'},
    {"force", 0, (int *)((void *)0), 'f'},
    {"interactive", 2, (int *)((void *)0), 128},
    {"one-file-system", 0, (int *)((void *)0), 129},
    {"no-preserve-root", 0, (int *)((void *)0), 130},
    {"preserve-root", 0, (int *)((void *)0), 131},
    {"-presume-input-tty", 0, (int *)((void *)0), 132},
    {"recursive", 0, (int *)((void *)0), 'r'},
    {"verbose", 0, (int *)((void *)0), 'v'},
    {"help", 0, (int *)((void *)0), -130},
    {"version", 0, (int *)((void *)0), -131},
    {(char const *)((void *)0), 0, (int *)((void *)0), 0}};
static char const *const interactive_args[7] = {
    "never", "no", "none", "once", "always", "yes", (char const *)((void *)0)};
static enum interactive_type const interactive_types[6] = {
    (enum interactive_type const)0, (enum interactive_type const)0,
    (enum interactive_type const)0, (enum interactive_type const)1,
    (enum interactive_type const)2, (enum interactive_type const)2};
static void diagnose_leading_hyphen(int argc, char **argv) {































}
__attribute__((__noreturn__)) void usage(int status);
void usage(int status) {
































































   printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
}
static void rm_option_init(struct rm_options *x) {
  {
    x->ignore_missing_files = (_Bool)0;
    x->interactive = (enum rm_interactive)4;
    x->one_file_system = (_Bool)0;
    x->recursive = (_Bool)0;
    x->root_dev_ino = (struct dev_ino *)((void *)0);
    x->stdin_tty = (_Bool)isatty(0);
    x->verbose = (_Bool)0;
    x->require_restore_cwd = (_Bool)0;
    return;
  }
}
static struct dev_ino dev_ino_buf;
int main(int argc, char **argv) {
AFL_INIT_SET0("./rm");
  path_check(argc,argv); 
  _Bool preserve_root;
  struct rm_options x;
  _Bool prompt_once;
  int c;
  int i;
  ptrdiff_t tmp;
  char *tmp___0;
  char const *tmp___1;
  char *tmp___2;
  int *tmp___3;
  size_t n_files;
  char **file;
  char *tmp___4;
  char *tmp___5;
  char *tmp___6;
  _Bool tmp___7;
  enum RM_status status;
  enum RM_status tmp___8;
  int tmp___9;
  {
    preserve_root = (_Bool)1;
    prompt_once = (_Bool)0;
    set_program_name((char const *)*(argv + 0));
    setlocale(6, "");
    bindtextdomain("coreutils", "/usr/local/share/locale");
    textdomain("coreutils");
    atexit(&close_stdin);
    rm_option_init(&x);
    priv_set_remove_linkdir();
    while (1) {
      c = getopt_long(argc, (char *const *)argv, "dfirvIR", long_opts,
                      (int *)((void *)0));
      if (!(c != -1)) {
        goto while_break;
      }
      if (c == 100) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if (c == 102) {
        goto case_102;
      }
      if (c == 105) {
        goto case_105;
      }
      if (c == 73) {
         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
      }
      if (c == 114) {
        goto case_114;
      }
       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);



























    case_100:;

    case_102:;
      x.interactive = (enum rm_interactive)5;
      x.ignore_missing_files = (_Bool)1;
      prompt_once = (_Bool)0;
      goto switch_break;
    case_105:;
      x.interactive = (enum rm_interactive)3;
      x.ignore_missing_files = (_Bool)0;
      prompt_once = (_Bool)0;
      goto switch_break;
    case_73:;




    case_114:;
      x.recursive = (_Bool)1;
      goto switch_break;
    case_128:;



















    case_0:;



    case_1:;




    case_2:;






    case_129:;


    case_130:;


    case_131:;


    case_132:;


    case_118:;


    case_neg_130:;


    case_neg_131:;





    switch_default:;


    switch_break:;
    }
  while_break:;
    if (argc <= optind) {






       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    if (x.recursive) {
      if (preserve_root) {
        x.root_dev_ino = get_root_dev_ino(&dev_ino_buf);
        if ((unsigned long)x.root_dev_ino == (unsigned long)((void *)0)) {



           printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      }
    }
    n_files = (size_t)(argc - optind);
    file = argv + optind;
    if (prompt_once) {


















       printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
    }
    tmp___8 = rm((char *const *)file, (struct rm_options const *)(&x));
    status = tmp___8;
    if (!((unsigned int)status == 2U)) {
      if (!((unsigned int)status == 3U)) {
        if (!((unsigned int)status == 4U)) {



                         printf("<This branch is removed by Cov debloating tool>\n"); exit(6);
        }
      }
    }
    if ((unsigned int)status == 4U) {
      tmp___9 = 1;
    } else {
      tmp___9 = 0;
    }
    exit(tmp___9);
  }
}
