#include "argv-fuzz-inl.h"
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
typedef long ptrdiff_t;
typedef unsigned long size_t;
typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
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
struct mbchar {
  char const *ptr;
  size_t bytes;
  _Bool wc_valid;
  wchar_t wc;
  char buf[24];
};
typedef struct mbchar mbchar_t;
struct mbiter_multi {
  char const *limit;
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbiter_multi mbi_iterator_t;
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
struct mbuiter_multi {
  _Bool in_shift;
  mbstate_t state;
  _Bool next_done;
  struct mbchar cur;
};
typedef struct mbuiter_multi mbui_iterator_t;
struct __dirstream;
struct __dirstream;
struct __dirstream;
typedef struct __dirstream DIR;
typedef unsigned int __mode_t;
typedef __mode_t mode_t;
typedef unsigned long uintptr_t;
typedef unsigned long longword;
struct preliminary_header {
  void *next;
  int magic;
};
struct __anonstruct_magic_22 {
  char room[(((sizeof(struct preliminary_header) + 16UL) - 1UL) / 16UL) * 16UL - sizeof(int)];
  int word;
};
union header {
  void *next;
  struct __anonstruct_magic_22 magic;
};
typedef int nl_item;
struct I_ring {
  int ir_data[4];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;
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
struct hash_table;
typedef struct hash_table Hash_table;
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
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __nlink_t;
struct __anonstruct___fsid_t_1 {
  int __val[2];
};

typedef long __time_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;
typedef long __fsword_t;
typedef long __syscall_slong_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __nlink_t nlink_t;
struct timespec {
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
struct dirent {
  __ino_t d_ino;
  __off_t d_off;
  unsigned short d_reclen;
  unsigned char d_type;
  char d_name[256];
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
struct _ftsent;
struct _ftsent;
struct _ftsent;
struct cycle_check_state;
struct cycle_check_state;
struct cycle_check_state;
union __anonunion_fts_cycle_19 {
  struct hash_table *ht;
  struct cycle_check_state *state;
};
struct __anonstruct_FTS_18 {
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
  union __anonunion_fts_cycle_19 fts_cycle;
  I_ring fts_fd_ring;
};
typedef struct __anonstruct_FTS_18 FTS;
struct _ftsent {
  struct _ftsent *fts_cycle;
  struct _ftsent *fts_parent;
  struct _ftsent *fts_link;
  DIR *fts_dirp;
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
typedef unsigned long __re_long_size_t;
typedef unsigned long reg_syntax_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_dfa_t;
struct re_pattern_buffer {
  struct re_dfa_t *buffer;
  __re_long_size_t allocated;
  __re_long_size_t used;
  reg_syntax_t syntax;
  char *fastmap;
  unsigned char *translate;
  size_t re_nsub;
  unsigned int can_be_null : 1;
  unsigned int regs_allocated : 2;
  unsigned int fastmap_accurate : 1;
  unsigned int no_sub : 1;
  unsigned int not_bol : 1;
  unsigned int not_eol : 1;
  unsigned int newline_anchor : 1;
};
typedef struct re_pattern_buffer regex_t;
typedef int regoff_t;
struct __anonstruct_regmatch_t_29 {
  regoff_t rm_so;
  regoff_t rm_eo;
};
typedef struct __anonstruct_regmatch_t_29 regmatch_t;
struct exclude;
struct exclude;
struct exclude;
union __anonunion_v_33 {
  char const *pattern;
  regex_t re;
};
struct patopts {
  int options;
  union __anonunion_v_33 v;
};
struct exclude_pattern {
  struct patopts *exclude;
  size_t exclude_alloc;
  size_t exclude_count;
};
enum exclude_type {
  exclude_hash = 0,
  exclude_pattern = 1
};
union __anonunion_v_34 {
  Hash_table *table;
  struct exclude_pattern pat;
};
struct exclude_segment {
  struct exclude_segment *next;
  enum exclude_type type;
  int options;
  union __anonunion_v_34 v;
};
struct pattern_buffer {
  struct pattern_buffer *next;
  char *base;
};
struct exclude {
  struct exclude_segment *head;
  struct pattern_buffer *patbuf;
};
struct real_pcre;
struct real_pcre;
struct real_pcre;
typedef struct real_pcre pcre;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
struct real_pcre_jit_stack;
typedef struct real_pcre_jit_stack pcre_jit_stack;
struct pcre_extra {
  unsigned long flags;
  void *study_data;
  unsigned long match_limit;
  void *callout_data;
  unsigned char const *tables;
  unsigned long match_limit_recursion;
  unsigned char **mark;
  void *executable_jit;
};
typedef struct pcre_extra pcre_extra;
struct kwsmatch {
  size_t index;
  size_t offset[1];
  size_t size[1];
};
struct kwset;
struct kwset;
struct kwset;
typedef struct kwset *kwset_t;
typedef signed char mb_len_map_t;
struct obstack;
struct obstack;
struct obstack;
struct _obstack_chunk {
  char *limit;
  struct _obstack_chunk *prev;
  char contents[4];
};
union __anonunion_temp_56 {
  long tempint;
  void *tempptr;
};
struct obstack {
  long chunk_size;
  struct _obstack_chunk *chunk;
  char *object_base;
  char *next_free;
  char *chunk_limit;
  union __anonunion_temp_56 temp;
  int alignment_mask;
  struct _obstack_chunk *(*chunkfun)(void *, long);
  void (*freefun)(void *, struct _obstack_chunk *);
  void *extra_arg;
  unsigned int use_extra_arg : 1;
  unsigned int maybe_empty_object : 1;
  unsigned int alloc_failed : 1;
};
struct trie;
struct trie;
struct trie;
struct tree {
  struct tree *llink;
  struct tree *rlink;
  struct trie *trie;
  unsigned char label;
  char balance;
};
struct trie {
  size_t accepting;
  struct tree *links;
  struct trie *parent;
  struct trie *next;
  struct trie *fail;
  int depth;
  int shift;
  int maxshift;
};
struct kwset {
  struct obstack obstack;
  ptrdiff_t words;
  struct trie *trie;
  int mind;
  int maxd;
  unsigned char delta[256];
  struct trie *next[256];
  char *target;
  int *shift;
  char const *trans;
  char gc1;
  char gc2;
  int gc1help;
};
enum __anonenum_dirs_58 {
  L = 0,
  R = 1
};
typedef int __re_idx_t;
typedef unsigned int __re_size_t;
struct re_registers {
  __re_size_t num_regs;
  regoff_t *start;
  regoff_t *end;
};
struct dfamust {
  _Bool exact;
  _Bool begline;
  _Bool endline;
  char *must;
  struct dfamust *next;
};
struct dfa;
struct dfa;
struct dfa;
struct patterns {
  struct re_pattern_buffer regexbuf;
  struct re_registers regs;
};
enum __anonenum_mode_60 {
  DW_NONE = 0,
  DW_POSIX = 1,
  DW_GNU = 2
};
typedef unsigned long wctype_t;
typedef unsigned int charclass_word;
typedef charclass_word charclass[8];
typedef ptrdiff_t token;
struct __anonstruct_position_35 {
  size_t index;
  unsigned int constraint;
};
typedef struct __anonstruct_position_35 position;
struct __anonstruct_position_set_36 {
  position *elems;
  size_t nelem;
  size_t alloc;
};
typedef struct __anonstruct_position_set_36 position_set;
struct __anonstruct_leaf_set_37 {
  size_t *elems;
  size_t nelem;
};
typedef struct __anonstruct_leaf_set_37 leaf_set;
struct __anonstruct_dfa_state_38 {
  size_t hash;
  position_set elems;
  unsigned char context;
  _Bool has_backref;
  _Bool has_mbcset;
  unsigned short constraint;
  token first_end;
  position_set mbps;
};
typedef struct __anonstruct_dfa_state_38 dfa_state;
typedef ptrdiff_t state_num;
struct __anonstruct_ranges_39 {
  wchar_t beg;
  wchar_t end;
};
struct mb_char_classes {
  ptrdiff_t cset;
  _Bool invert;
  wchar_t *chars;
  size_t nchars;
  wctype_t *ch_classes;
  size_t nch_classes;
  struct __anonstruct_ranges_39 *ranges;
  size_t nranges;
  char **equivs;
  size_t nequivs;
  char **coll_elems;
  size_t ncoll_elems;
};
struct dfa {
  charclass *charclasses;
  size_t cindex;
  size_t calloc;
  token *tokens;
  size_t tindex;
  size_t talloc;
  size_t depth;
  size_t nleaves;
  size_t nregexps;
  _Bool fast;
  _Bool multibyte;
  token utf8_anychar_classes[5];
  mbstate_t mbs;
  int *multibyte_prop;
  wint_t mbrtowc_cache[256];
  struct mb_char_classes *mbcsets;
  size_t nmbcsets;
  size_t mbcsets_alloc;
  struct dfa *superset;
  dfa_state *states;
  state_num sindex;
  size_t salloc;
  position_set *follows;
  _Bool searchflag;
  state_num tralloc;
  int trcount;
  state_num **trans;
  state_num **fails;
  int *success;
  state_num *newlines;
  struct dfamust *musts;
  position_set mb_follows;
  int *mb_match_lens;
};
typedef int predicate(int);
struct dfa_ctype {
  char const *name;
  predicate *func;
  _Bool single_byte_only;
};
struct __anonstruct_stkalloc_43 {
  _Bool nullable;
  size_t nfirstpos;
  size_t nlastpos;
};
enum __anonenum_status_transit_state_44 {
  TRANSIT_STATE_IN_PROGRESS = 0,
  TRANSIT_STATE_DONE = 1,
  TRANSIT_STATE_END_BUFFER = 2
};
typedef enum __anonenum_status_transit_state_44 status_transit_state;
struct must;
struct must;
struct must;
typedef struct must must;
struct must {
  char **in;
  char *left;
  char *right;
  char *is;
  _Bool begline;
  _Bool endline;
  must *prev;
};
typedef __off_t off_t;
struct color_cap {
  char const *name;
  char const **var;
  void (*fct)(void);
};
enum directories_type {
  READ_DIRECTORIES = 2,
  RECURSE_DIRECTORIES = 3,
  SKIP_DIRECTORIES = 4
};
enum __anonenum_devices_71 {
  READ_COMMAND_LINE_DEVICES = 0,
  READ_DEVICES = 1,
  SKIP_DEVICES = 2
};
enum __anonenum_binary_files_72 {
  BINARY_BINARY_FILES = 0,
  TEXT_BINARY_FILES = 1,
  WITHOUT_MATCH_BINARY_FILES = 2
};
enum __anonenum_File_type_73 {
  UNKNOWN = 0,
  DOS_BINARY = 1,
  DOS_TEXT = 2,
  UNIX_TEXT = 3
};
typedef enum __anonenum_File_type_73 File_type;
struct dos_map {
  off_t pos;
  off_t add;
};
struct matcher {
  char const name[16];
  void (*compile)(char const *, size_t);
  size_t (*execute)(char const *, size_t, size_t *, char const *);
};
extern __attribute__((__nothrow__)) unsigned short const **__ctype_b_loc(void) __attribute__((__const__));
extern __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const *__assertion,
                                                                     char const *__file,
                                                                     unsigned int __line,
                                                                     char const *__function);
extern __attribute__((__nothrow__)) int *__errno_location(void) __attribute__((__const__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strchr)(char const *__s,
                                                                                   int __c) __attribute__((__pure__));
extern __attribute__((__nothrow__, __noreturn__)) void abort(void);
extern void error(int __status, int __errnum, char const *__format, ...);
int volatile exit_failure;
extern __attribute__((__nothrow__)) char *gettext(char const *__msgid) __attribute__((__format_arg__(1)));
extern __attribute__((__nothrow__)) intmax_t strtoimax(char const *__restrict __nptr,
                                                       char **__restrict __endptr,
                                                       int __base);
strtol_error xstrtoimax(char const *s, char **ptr, int strtol_base, intmax_t *val,
                        char const *valid_suffixes);
static strtol_error bkm_scale___1(intmax_t *x, int scale_factor) {












}
static strtol_error bkm_scale_by_power___1(intmax_t *x, int base, int power) {























}
strtol_error xstrtoimax(char const *s, char **ptr, int strtol_base, intmax_t *val,
                        char const *valid_suffixes) {


























































































































































































































}
__attribute__((__noreturn__)) void xalloc_die(void);
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xnmalloc(size_t n, size_t s) {
  int tmp;
  void *tmp___0;
  {
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp = -1;
    } else {

    }
                              
       

       
     
    {
      tmp___0 = xmalloc(n * s);
    }
    return (tmp___0);
  }
}
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s) __attribute__((__alloc_size__(2, 3)));
void *xnrealloc(void *p, size_t n, size_t s) {
  int tmp;
  void *tmp___0;
  {
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp = -1;
    } else {

    }
                              
       

       
     
    {
      tmp___0 = xrealloc(p, n * s);
    }
    return (tmp___0);
  }
}
void *x2nrealloc(void *p, size_t *pn, size_t s) {
  size_t n;
  void *tmp;
  {
    n = *pn;
    if (!p) {
      if (!n) {
        n = 128UL / s;
        n += (size_t)(!n);
      }
    } else {
      if (0xaaaaaaaaaaaaaaaaUL / s <= n) {
        {
          xalloc_die();
        }
      }
      n += n / 2UL + 1UL;
    }
    {
      *pn = n;
      tmp = xrealloc(p, n * s);
    }
    return (tmp);
  }
}
char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
char *xcharalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
char *xcharalloc(size_t n) {

















}
void *xzalloc(size_t s) __attribute__((__malloc__, __alloc_size__(1)));
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *x2realloc(void *p, size_t *pn);
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
char *xstrdup(char const *string) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *malloc(size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *calloc(size_t __nmemb, size_t __size) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) void *(__attribute__((__warn_unused_result__)) realloc)(void *__ptr,
                                                                                            size_t __size);
extern __attribute__((__nothrow__)) void free(void *__ptr);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) memcpy)(void *__restrict __dest,
                                                                                      void const *__restrict __src,
                                                                                      size_t __n);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memset)(void *__s,
                                                                                   int __c,
                                                                                   size_t __n);
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1))) strlen)(char const *__s) __attribute__((__pure__));
void *xmalloc(size_t n) __attribute__((__malloc__, __alloc_size__(1)));
void *xmalloc(size_t n) {
  void *p;
  void *tmp;
  {
    {
      tmp = malloc(n);
      p = tmp;
    }
    if (!p) {
      if (n != 0UL) {
        {
          xalloc_die();
        }
      }
    }
    return (p);
  }
}
void *xrealloc(void *p, size_t n) __attribute__((__alloc_size__(2)));
void *xrealloc(void *p, size_t n) {
  {
             






     
    {
      p = realloc(p, n);
    }
             





     
    return (p);
  }
}
void *x2realloc(void *p, size_t *pn) {







}
void *xzalloc(size_t s) __attribute__((__malloc__, __alloc_size__(1)));
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
void *xcalloc(size_t n, size_t s) __attribute__((__malloc__, __alloc_size__(1, 2)));
void *xcalloc(size_t n, size_t s) {
  void *p;
  {
    {
      p = calloc(n, s);
    }
    if (!p) {
      {
        xalloc_die();
      }
    }
    return (p);
  }
}
void *xmemdup(void const *p, size_t s) __attribute__((__malloc__, __alloc_size__(2)));
void *xmemdup(void const *p, size_t s) {
  void *tmp;
  void *tmp___0;
  {
    {
      tmp = xmalloc(s);
      tmp___0 = memcpy((void * /* __restrict  */)tmp, (void const * /* __restrict  */)p,
                       s);
    }
    return (tmp___0);
  }
}
char *xstrdup(char const *string) __attribute__((__malloc__));
char *xstrdup(char const *string) {
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = strlen(string);
      tmp___0 = (char *)xmemdup((void const *)string, tmp + 1UL);
    }
    return (tmp___0);
  }
}
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {









}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcmp)(char const *__s1,
                                                                                   char const *__s2) __attribute__((__pure__));
extern struct _IO_FILE *stdout;
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int printf(char const *__restrict __format, ...);
extern int fputs_unlocked(char const *__restrict __s, FILE *__restrict __stream);
char const version_etc_copyright[47];
void version_etc_arn(FILE *stream, char const *command_name, char const *package,
                     char const *version, char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc_arn(FILE *stream, char const *command_name, char const *package,
                     char const *version, char const *const *authors, size_t n_authors) {

















































































































































}
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors) {






























}
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {









}
char const version_etc_copyright[47] =
    {(char const)'C', (char const)'o', (char const)'p', (char const)'y',
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
char *trim2(char const *s, int how);
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) memmove)(void *__dest,
                                                                                       void const *__src,
                                                                                       size_t __n);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strdup)(char const *__s) __attribute__((__malloc__));
extern __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void);
extern __attribute__((__nothrow__)) int mbsinit(mbstate_t const *__ps) __attribute__((__pure__));
extern __attribute__((__nothrow__)) size_t mbrtowc(wchar_t *__restrict __pwc,
                                                   char const *__restrict __s,
                                                   size_t __n, mbstate_t *__restrict __p);
extern __attribute__((__nothrow__)) int iswspace(wint_t __wc);
void mb_copy(mbchar_t *new_mbc, mbchar_t const *old_mbc) {



















}
unsigned int const is_basic_table[8];
_Bool is_basic(char c) {



}
void mbiter_multi_next(struct mbiter_multi *iter) {




































































}
char *trim2(char const *s, int how) {
































































































































































































































}
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memchr)(void const *__s,
                                                                                   int __c,
                                                                                   size_t __n) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) {













}
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
extern int close(int __fd);
extern __attribute__((__nothrow__)) int fchdir(int __fd);
int set_cloexec_flag(int desc, _Bool value);
int open_safer(char const *file, int flags, ...);
size_t safe_read(int fd, void *buf, size_t count);
extern ssize_t read(int __fd, void *__buf, size_t __nbytes);
size_t safe_read(int fd, void *buf, size_t count) {
  ssize_t result;
  ssize_t tmp;
  int *tmp___0;
  int *tmp___1;
  {
    {
      while (1) {
                                     ;
        {
          tmp = read(fd, buf, count);
          result = tmp;
        }
        if (0L <= result) {
          return ((size_t)result);
        } else {
          {
            tmp___1 = __errno_location();
          }
          if (*tmp___1 == 4) {
            goto __Cont;
          } else {
            {
              tmp___0 = __errno_location();
            }
            if (*tmp___0 == 22) {
              if (2147475456UL < count) {
                count = (size_t)2147475456;
              } else {
                return ((size_t)result);
              }
            } else {
              return ((size_t)result);
            }
          }
        }
      __Cont:;
      }
                                ;
    }
    return (0UL);
  }
}
char const *const quoting_style_args[9];
enum quoting_style const quoting_style_vals[8];
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
char *quotearg_colon(char const *arg);
struct quoting_options quote_quoting_options;
char const *quote_n_mem(int n, char const *arg, size_t argsize);
char const *quote_n(int n, char const *arg);
char const *quote(char const *arg);
char const *locale_charset(void);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) memcmp)(void const *__s1,
                                                                                   void const *__s2,
                                                                                   size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int iswprint(wint_t __wc);
char const *const quoting_style_args[9] =
    {(char const * /* const  */) "literal", (char const * /* const  */) "shell", (char const * /* const  */) "shell-always", (char const * /* const  */) "c",
     (char const * /* const  */) "c-maybe", (char const * /* const  */) "escape", (char const * /* const  */) "locale", (char const * /* const  */) "clocale",
     (char const * /* const  */)((char const *)0)};
enum quoting_style const quoting_style_vals[8] =
    {(enum quoting_style const)0, (enum quoting_style const)1, (enum quoting_style const)2, (enum quoting_style const)3,
     (enum quoting_style const)4, (enum quoting_style const)5, (enum quoting_style const)6, (enum quoting_style const)7};
static struct quoting_options default_quoting_options;
int set_char_quoting(struct quoting_options *o, char c, int i) {


















}
static struct quoting_options quoting_options_from_style(enum quoting_style style) {






























}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {






















































}
static size_t quotearg_buffer_restyled(char *buffer___0, size_t buffersize, char const *arg,
                                       size_t argsize, enum quoting_style quoting_style,
                                       int flags, unsigned int const *quote_these_too,
                                       char const *left_quote, char const *right_quote) {



































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize, struct quoting_options const *options) {























































































}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {













}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {











}
char *quotearg_char(char const *arg, char ch) {







}
char *quotearg_colon(char const *arg) {







}
struct quoting_options quote_quoting_options = {(enum quoting_style)6, 0, {0U}, (char const *)((void *)0), (char const *)((void *)0)};
char const *quote_n_mem(int n,
                        char const *arg, size_t argsize) {







}
char const *quote_n(int n, char const *arg) {







}
char const *quote(char const *arg) {







}
char const *proper_name(char const *name);
extern __attribute__((__nothrow__)) int sprintf(char *__restrict __s, char const *__restrict __format, ...);
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int iswalnum(wint_t __wc);
void mbuiter_multi_next(struct mbuiter_multi *iter) {










































































}
static _Bool mbsstr_trimmed_wordbounded(char const *string, char const *sub) {






















































































































































































































































}
char const *proper_name(char const *name) {


















































}
char const *program_name;
void set_program_name(char const *argv0);
extern char *program_invocation_name;
extern char *program_invocation_short_name;
extern struct _IO_FILE *stderr;
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strncmp)(char const *__s1,
                                                                                    char const *__s2,
                                                                                    size_t __n) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) strrchr)(char const *__s,
                                                                                    int __c) __attribute__((__pure__));
char const *program_name = (char const *)((void *)0);
void set_program_name(char const *argv0) {
  char const *slash;
  char const *base;
  int tmp;
  int tmp___0;
  {
    if ((unsigned long)argv0 == (unsigned long)((void *)0)) {
      {
        fputs((char const * /* __restrict  */) "A NULL argv[0] was passed through an exec system call.\n",
              (FILE * /* __restrict  */) stderr);
        abort();
      }
    }
    {
      slash = (char const *)strrchr(argv0, '/');
    }
    if ((unsigned long)slash != (unsigned long)((void *)0)) {
      base = slash + 1;
    } else {
      base = argv0;
    }
    if (base - argv0 >= 7L) {
      {
        tmp___0 = strncmp(base - 7, "/.libs/", (size_t)7);
      }
      if (tmp___0 == 0) {
        {
          argv0 = base;
          tmp = strncmp(base, "lt-", (size_t)3);
        }
        if (tmp == 0) {
          argv0 = base + 3;
          program_invocation_short_name = (char *)argv0;
        }
      }
    }
    program_name = argv0;
    program_invocation_name = (char *)argv0;
    return;
  }
}
int fd_safer(int fd);
extern DIR *fdopendir(int __fd);
extern int(__attribute__((__nonnull__(1))) closedir)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) dirfd)(DIR *__dirp);
int dup_safer(int fd);
int openat_safer(int fd, char const *file, int flags, ...);
extern int(__attribute__((__nonnull__(2))) openat)(int __fd, char const *__file,
                                                   int __oflag, ...);
int openat_safer(int fd, char const *file, int flags, ...) {
  mode_t mode___0;
  va_list ap;
  int tmp;
  int tmp___0;
  {
    mode___0 = (mode_t)0;
    if (flags & 64) {
      {
        __builtin_va_start(ap, flags);
        mode___0 = __builtin_va_arg(ap, mode_t);
        __builtin_va_end(ap);
      }
    }
    {
      tmp = openat(fd, file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
    return (tmp___0);
  }
}
extern int(__attribute__((__nonnull__(1))) open)(char const *__file, int __oflag, ...);
int open_safer(char const *file, int flags, ...) {



















}
void *memchr2(void const *s, int c1_in, int c2_in, size_t n) __attribute__((__pure__));
void *memchr2(void const *s, int c1_in, int c2_in, size_t n) __attribute__((__pure__));
void *memchr2(void const *s, int c1_in, int c2_in, size_t n) {
  unsigned char const *char_ptr;
  void const *void_ptr;
  longword const *longword_ptr;
  longword repeated_one;
  longword repeated_c1;
  longword repeated_c2;
  unsigned char c1;
  unsigned char c2;
  void *tmp;
  size_t i;
  longword longword1;
  longword longword2;
  {
    c1 = (unsigned char)c1_in;
    c2 = (unsigned char)c2_in;
    if ((int)c1 == (int)c2) {
      {
        tmp = memchr(s, (int)c1, n);
      }
      return (tmp);
    }
    void_ptr = s;
    {
      while (1) {
                                     ;
        if (n > 0UL) {
          if (!((uintptr_t)void_ptr % sizeof(longword) != 0UL)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        char_ptr = (unsigned char const *)void_ptr;
        if ((int const) * char_ptr == (int const)c1) {
          return ((void *)void_ptr);
        } else {
          if ((int const) * char_ptr == (int const)c2) {
            return ((void *)void_ptr);
          }
        }
        void_ptr = (void const *)(char_ptr + 1);
        n--;
      }
                                    ;
    }
  while_break:
    longword_ptr = (longword const *)void_ptr;
    repeated_one = (longword)16843009;
    repeated_c1 = (longword)((int)c1 | ((int)c1 << 8));
    repeated_c2 = (longword)((int)c2 | ((int)c2 << 8));
    repeated_c1 |= repeated_c1 << 16;
    repeated_c2 |= repeated_c2 << 16;
    repeated_one |= (repeated_one << 31) << 1;
    repeated_c1 |= (repeated_c1 << 31) << 1;
    repeated_c2 |= (repeated_c2 << 31) << 1;
    if (8UL < sizeof(longword)) {
      i = (size_t)64;
      {
        while (1) {
                                           ;
          if (!(i < sizeof(longword) * 8UL)) {
            goto while_break___0;
          }
          repeated_one |= repeated_one << i;
          repeated_c1 |= repeated_c1 << i;
          repeated_c2 |= repeated_c2 << i;
          i *= 2UL;
        }
                                      ;
      }
    while_break___0:;
    }
    {
      while (1) {
                                         ;
        if (!(n >= sizeof(longword))) {
          goto while_break___1;
        }
        longword1 = (longword)(*longword_ptr ^ (unsigned long const)repeated_c1);
        longword2 = (longword)(*longword_ptr ^ (unsigned long const)repeated_c2);
        if (((((longword1 - repeated_one) & ~longword1) | ((longword2 - repeated_one) & ~longword2)) & (repeated_one << 7)) != 0UL) {
          goto while_break___1;
        }
        longword_ptr++;
        n -= sizeof(longword);
      }
                                    ;
    }
  while_break___1:
    char_ptr = (unsigned char const *)longword_ptr;
    {
      while (1) {
                                         ;
        if (!(n > 0UL)) {
          goto while_break___2;
        }
        if ((int const) * char_ptr == (int const)c1) {
          return ((void *)char_ptr);
        } else {
          if ((int const) * char_ptr == (int const)c2) {
            return ((void *)char_ptr);
          }
        }
        n--;
        char_ptr++;
      }
                                    ;
    }
  while_break___2:;
    return ((void *)0);
  }
}
extern __attribute__((__nothrow__)) size_t(__attribute__((__nonnull__(1))) strnlen)(char const *__string,
                                                                                    size_t __maxlen) __attribute__((__pure__));
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) __attribute__((__pure__));
void *mmalloca(size_t n);
void freea(void *p);
static _Bool knuth_morris_pratt(unsigned char const *haystack, unsigned char const *needle,
                                size_t needle_len, unsigned char const **resultp) {










































































































}
static _Bool knuth_morris_pratt_multibyte(char const *haystack, char const *needle,
                                          char const **resultp) {





























































































































































































































































































}
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) {




















































































































































































































































































































































































}
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) __attribute__((__pure__));
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) {




















































}
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int tolower(int __c);
extern __attribute__((__nothrow__)) wint_t towlower(wint_t __wc);
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) {




























































































































































































































}
unsigned int const is_basic_table[8] = {(unsigned int const)6656, (unsigned int const)4294967279U, (unsigned int const)4294967294U, (unsigned int const)2147483646};
static void *mmalloca_results[257];
void *mmalloca(size_t n) {
























}
void freea(void *p) {


































}
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
extern int fclose(FILE *__stream);
extern __attribute__((__nothrow__)) FILE *fdopen(int __fd, char const *__modes);
extern int fscanf(FILE *__restrict __stream, char const *__restrict __format, ...);
extern int getc_unlocked(FILE *__stream);
extern int ungetc(int __c, FILE *__stream);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2))) strcpy)(char *__restrict __dest,
                                                                                      char const *__restrict __src);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1))) getenv)(char const *__name);
extern __attribute__((__nothrow__)) char *nl_langinfo(nl_item __item);
static char const *volatile charset_aliases;
static char const *get_charset_aliases(void) {







































































































































































































}
char const *locale_charset(void) {



























































}
void i_ring_init(I_ring *ir, int default_val);
int i_ring_push(I_ring *ir, int val);
int i_ring_pop(I_ring *ir);
_Bool i_ring_empty(I_ring const *ir) __attribute__((__pure__));
void i_ring_init(I_ring *ir, int default_val) {
  int i;
  {
    ir->ir_empty = (_Bool)1;
    ir->ir_front = 0U;
    ir->ir_back = 0U;
    i = 0;
    {
      while (1) {
                                     ;
        if (!(i < 4)) {
          goto while_break;
        }
        ir->ir_data[i] = default_val;
        i++;
      }

    }
  while_break:;
    ir->ir_default_val = default_val;
    return;
  }
}
_Bool i_ring_empty(I_ring const *ir) __attribute__((__pure__));
_Bool i_ring_empty(I_ring const *ir) {
  {
    return ((_Bool)ir->ir_empty);
  }
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
    {
      tmp = i_ring_empty((I_ring const *)ir);
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
void *hash_lookup(Hash_table const *table, void const *entry);
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate,
                                                                      Hash_tuning const *tuning,
                                                                      size_t (*hasher)(void const *,
                                                                                       size_t),
                                                                      _Bool (*comparator)(void const *,
                                                                                          void const *),
                                                                      void (*data_freer)(void *));
void hash_free(Hash_table *table);
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate);
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table, void const *entry);
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent);
void *hash_delete(Hash_table *table, void const *entry);
size_t rotr_sz(size_t x, int n) {



}
static struct hash_tuning const default_tuning = {0.0f, 1.0f, 0.8f, 1.414f, (_Bool)0};
static struct hash_entry *safe_hasher(Hash_table const *table, void const *key) {
  size_t n;
  size_t tmp;
  {
    {
      tmp = (*(table->hasher))(key, (size_t)table->n_buckets);
      n = tmp;
    }
                                          
       

       
     
    return ((struct hash_entry *)(table->bucket + n));
  }
}
void *hash_lookup(Hash_table const *table, void const *entry) {




































}
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
size_t hash_string(char const *string, size_t n_buckets) {



















}
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate) __attribute__((__const__));
static _Bool is_prime(size_t candidate) {
  size_t divisor;
  size_t square;
  int tmp;
  {
    divisor = (size_t)3;
    square = divisor * divisor;
    {
      while (1) {
                                     ;
        if (square < candidate) {
          if (!(candidate % divisor)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        divisor++;
        square += 4UL * divisor;
        divisor++;
      }

    }
  while_break:;
    if (candidate % divisor) {
      tmp = 1;
    } else {
      tmp = 0;
    }
    return ((_Bool)tmp);
  }
}
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) __attribute__((__const__));
static size_t next_prime(size_t candidate) {
  _Bool tmp;
  {
                           

     
    candidate |= 1UL;
    {
      while (1) {
                                     ;
        if (0xffffffffffffffffUL != candidate) {
          {
            tmp = is_prime(candidate);
          }
          if (tmp) {
            goto while_break;
          }
        } else {

        }
        candidate += 2UL;
      }

    }
  while_break:;
    return (candidate);
  }
}
static size_t raw_hasher(void const *data, size_t n) {









}
static _Bool raw_comparator(void const *a, void const *b) {



}
static _Bool check_tuning(Hash_table *table) {
  Hash_tuning const *tuning;
                
  {
    tuning = table->tuning;
    if ((unsigned long)tuning == (unsigned long)(&default_tuning)) {
      return ((_Bool)1);
    }


















  }
}
static size_t __attribute__((__pure__)) compute_bucket_size(size_t candidate, Hash_tuning const *tuning) {
  float new_candidate;
  int tmp;
  {
    if (!tuning->is_n_buckets) {
      new_candidate = (float)((float const)candidate / tuning->growth_threshold);
                                                         

       
      candidate = (size_t)new_candidate;
    }
    {
      candidate = next_prime(candidate);
    }
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp = -1;
    } else {

    }
                                                                

     
    return ((size_t __attribute__((__pure__)))candidate);
  }
}
Hash_table *(__attribute__((__warn_unused_result__)) hash_initialize)(size_t candidate,
                                                                      Hash_tuning const *tuning,
                                                                      size_t (*hasher)(void const *,
                                                                                       size_t),
                                                                      _Bool (*comparator)(void const *,
                                                                                          void const *),
                                                                      void (*data_freer)(void *)) {
  Hash_table *table;
  _Bool tmp;
  {
                                                              

     
                                                                  

     
    {
      table = (Hash_table *)malloc(sizeof(*table));
    }
                                                             

     
    if (!tuning) {
      tuning = &default_tuning;
    }
    {
      table->tuning = tuning;
      tmp = check_tuning(table);
    }
               

     
    {
      table->n_buckets = (size_t)compute_bucket_size(candidate, tuning);
    }
                            

     
    {
      table->bucket = (struct hash_entry *)calloc(table->n_buckets, sizeof(*(table->bucket)));
    }
                                                                     

     
    table->bucket_limit = (struct hash_entry const *)(table->bucket + table->n_buckets);
    table->n_buckets_used = (size_t)0;
    table->n_entries = (size_t)0;
    table->hasher = hasher;
    table->comparator = comparator;
    table->data_freer = data_freer;
    table->free_entry_list = (struct hash_entry *)((void *)0);
    return (table);




  }
}
void hash_free(Hash_table *table) {
  struct hash_entry *bucket;
  struct hash_entry *cursor;
                          
  {
                            
                             

         

























         

       
     
    bucket = table->bucket;
    {
      while (1) {
                                         ;
        if (!((unsigned long)bucket < (unsigned long)table->bucket_limit)) {
          goto while_break___1;
        }
        cursor = bucket->next;
        {
          while (1) {
                                             ;
            if (!cursor) {
              goto while_break___2;
            }
            {



            }
          }

        }
      while_break___2:;
        bucket++;
      }

    }
  while_break___1:;
    cursor = table->free_entry_list;
    {
      while (1) {
                                         ;
        if (!cursor) {
          goto while_break___3;
        }
        {



        }
      }

    }
  while_break___3 : {
    free((void *)table->bucket);
    free((void *)table);
  }
    return;
  }
}
static struct hash_entry *allocate_entry(Hash_table *table) {












}
static void free_entry(Hash_table *table, struct hash_entry *entry) {






}
static void *hash_find_entry(Hash_table *table, void const *entry, struct hash_entry **bucket_head,
                             _Bool delete___0) {
  struct hash_entry *bucket;
  struct hash_entry *tmp;
                            
  void *data;
                          
  _Bool tmp___0;
                 
                              
                
  {
    {
      tmp = safe_hasher((Hash_table const *)table, entry);
      bucket = tmp;
      *bucket_head = bucket;
    }
    if ((unsigned long)bucket->data == (unsigned long)((void *)0)) {
      return ((void *)0);
    }
    if ((unsigned long)entry == (unsigned long)bucket->data) {

    } else {
      {
        tmp___0 = (*(table->comparator))(entry, (void const *)bucket->data);
      }
      if (tmp___0) {
         ;
        data = bucket->data;
        if (delete___0) {
          if (bucket->next) {
            {



            }
          } else {
            bucket->data = (void *)0;
          }
        }
        return (data);
      }
    }

    {



























    }


  }
}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe) {













































































}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate) {







































































}
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent) {
  void *data;
  struct hash_entry *bucket;
                            
                  
            
                
                
                               
                             
  {
                 
       

       
     
    {
      data = hash_find_entry(table, entry, &bucket, (_Bool)0);
    }
                                                            




     
                                                                                                                 
       

       


























     
                       
       


       








     
    bucket->data = (void *)entry;
    (table->n_entries)++;
    (table->n_buckets_used)++;
    return (1);
  }
}
void *(__attribute__((__warn_unused_result__)) hash_insert)(Hash_table *table, void const *entry) {
  void const *matched_ent;
  int err;
  int tmp;
  void const *tmp___0;
  void *tmp___1;
  {
    {
      tmp = hash_insert_if_absent(table, entry, &matched_ent);
      err = tmp;
    }
    if (err == -1) {

    } else {
      if (err == 0) {

      } else {
        tmp___0 = entry;
      }
      tmp___1 = (void *)tmp___0;
    }
    return (tmp___1);
  }
}
void *hash_delete(Hash_table *table, void const *entry) {
  void *data;
  struct hash_entry *bucket;
                            
                   
            
                            
                          
                
  {
    {
      data = hash_find_entry(table, entry, &bucket, (_Bool)1);
    }
                

     
    (table->n_entries)--;
    if (!bucket->data) {
      (table->n_buckets_used)--;
                                                                                                                   
         

         































       
    }
    return (data);
  }
}
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) stat)(char const *__restrict __file,
                                                                                 struct stat *__restrict __buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2))) fstat)(int __fd,
                                                                               struct stat *__buf);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2, 3))) fstatat)(int __fd,
                                                                                    char const *__restrict __file,
                                                                                    struct stat *__restrict __buf,
                                                                                    int __flag);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) lstat)(char const *__restrict __file,
                                                                                  struct stat *__restrict __buf);
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp);
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv,
                                                                                     int options,
                                                                                     int (*compar)(FTSENT const **,
                                                                                                   FTSENT const **));
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp);
__attribute__((__nothrow__)) int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p,
                                         int instr);
extern void(__attribute__((__nonnull__(1, 4))) qsort)(void *__base, size_t __nmemb,
                                                      size_t __size, int (*__compar)(void const *, void const *));
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen);
static FTSENT *fts_build(FTS *sp, int type);
static void fts_lfree(FTSENT *head);
static void fts_load(FTS *sp, FTSENT *p);
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv);
static void fts_padjust(FTS *sp, FTSENT *head);
static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir);
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb);
static _Bool AD_compare(void const *x, void const *y) {
  struct Active_dir const *ax;
  struct Active_dir const *ay;
  int tmp;
  {
    ax = (struct Active_dir const *)x;
    ay = (struct Active_dir const *)y;
    if (ax->ino == ay->ino) {
      if (ax->dev == ay->dev) {
        tmp = 1;
      } else {

      }
    } else {

    }
    return ((_Bool)tmp);
  }
}
static size_t AD_hash(void const *x, size_t table_size) {
  struct Active_dir const *ax;
  {
    ax = (struct Active_dir const *)x;
    return ((uintmax_t)ax->ino % table_size);
  }
}
static _Bool setup_dir(FTS *fts) {
  {
    if (fts->fts_options & 258) {
      {
        fts->fts_cycle.ht = hash_initialize((size_t)31, (Hash_tuning const *)((void *)0),
                                            &AD_hash, &AD_compare, &free);
      }
                               

       
    } else {
      {

      }



      {

      }
    }
    return ((_Bool)1);
  }
}
static _Bool enter_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
  struct Active_dir *ad;
  struct Active_dir *tmp;
  struct Active_dir *ad_from_table;
                
  {
    if (fts->fts_options & 258) {
      {
        st = (struct stat const *)(ent->fts_statp);
        tmp = (struct Active_dir *)malloc(sizeof(*ad));
        ad = tmp;
      }
                

       
      {
        ad->dev = (dev_t)st->st_dev;
        ad->ino = (ino_t)st->st_ino;
        ad->fts_ent = ent;
        ad_from_table = (struct Active_dir *)hash_insert(fts->fts_cycle.ht, (void const *)ad);
      }
                                                              
         

         





       
    } else {
      {

      }




    }
    return ((_Bool)1);
  }
}
static void leave_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
  struct Active_dir obj;
  void *found;
                 
  {
    st = (struct stat const *)(ent->fts_statp);
    if (fts->fts_options & 258) {
      {
        obj.dev = (dev_t)st->st_dev;
        obj.ino = (ino_t)st->st_ino;
        found = hash_delete(fts->fts_cycle.ht, (void const *)(&obj));
      }
                   
         

         
       
      {
        free(found);
      }
    } else {
























    }
    return;
  }
}
static void free_dir(FTS *sp) {
  {
    if (sp->fts_options & 258) {
      if (sp->fts_cycle.ht) {
        {
          hash_free(sp->fts_cycle.ht);
        }
      }
    } else {
      {

      }
    }
    return;
  }
}
static void fd_ring_clear(I_ring *fd_ring) {
  int fd;
  int tmp;
  _Bool tmp___0;
  {
    {
      while (1) {
                                     ;
        {
          tmp___0 = i_ring_empty((I_ring const *)fd_ring);
        }
        if (tmp___0) {
          goto while_break;
        }
        {
          tmp = i_ring_pop(fd_ring);
          fd = tmp;
        }
        if (0 <= fd) {
          {
            close(fd);
          }
        }
      }

    }
  while_break:;
    return;
  }
}
static void fts_set_stat_required(FTSENT *p, _Bool required) {
  {
    {
      while (1) {
                                     ;
                                        
           

           
         
        goto while_break;
      }

    }
  while_break:;
    if (required) {

    } else {
      p->fts_statp[0].st_size = (__off_t)1;
    }
    return;
  }
}
static DIR *opendirat(int fd, char const *dir, int extra_flags, int *pdir_fd) {
  int new_fd;
  int tmp;
  DIR *dirp;
                  
               
               
  {
    {
      tmp = openat_safer(fd, dir, 67840 | extra_flags);
      new_fd = tmp;
    }
                     

     
    {
      set_cloexec_flag(new_fd, (_Bool)1);
      dirp = fdopendir(new_fd);
    }
    if (dirp) {
      *pdir_fd = new_fd;
    } else {
      {





      }
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
    {
      while (1) {
                                     ;
                           
                               
             

             
           
         
        goto while_break;
      }

    }
  while_break:;
    if (chdir_down_one) {
      {
        tmp = i_ring_push(&sp->fts_fd_ring, old);
        prev_fd_in_slot = tmp;
      }
                                 
         

         
       
    } else {







    }
    sp->fts_cwd_fd = fd;
    return;
  }
}
static int restore_initial_cwd(FTS *sp) {
  int fail;
  int tmp;
              
              
  int tmp___2;
  int tmp___3;
  {
    if (!(sp->fts_options & 4)) {
      if (sp->fts_options & 512) {
        if (sp->fts_options & 512) {
          tmp = -100;
        } else {

        }
        {
          cwd_advance_fd(sp, tmp, (_Bool)1);
          tmp___2 = 0;
        }
      } else {





        {


        }
      }
      if (tmp___2) {

      } else {
        tmp___3 = 0;
      }
    } else {

    }
    {
      fail = tmp___3;
      fd_ring_clear(&sp->fts_fd_ring);
    }
    return (fail);
  }
}
static int diropen(FTS const *sp, char const *dir) {






































}
__attribute__((__nothrow__)) FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv,
                                                                                     int options,
                                                                                     int (*compar)(FTSENT const **,
                                                                                                   FTSENT const **));
FTS *(__attribute__((__warn_unused_result__)) fts_open)(char *const *argv, int options,
                                                        int (*compar)(FTSENT const **,
                                                                      FTSENT const **)) {
  register FTS *sp;
  register FTSENT *p;
  register FTSENT *root;
  register size_t nitems;
  FTSENT *parent;
  FTSENT *tmp;
  _Bool defer_stat;
               
               
               
  size_t maxarglen;
  size_t tmp___5;
  size_t tmp___6;
  _Bool tmp___7;
  int tmp___8;
  size_t len;
  size_t tmp___9;
  char const *v;
  struct _ftsent *tmp___10;
  _Bool tmp___11;
               
                    
                    
                    
                    
  {
    parent = (FTSENT *)((void *)0);
    tmp = (FTSENT *)((void *)0);
                          
       


       

     
                      







     
                          
       


       

     
    {
      sp = (FTS *)malloc(sizeof(FTS));
    }
                                                          

     
    {
      memset((void *)sp, 0, sizeof(FTS));
      sp->fts_compar = compar;
      sp->fts_options = options;
    }
                              


     
    {
      sp->fts_cwd_fd = -100;
      tmp___5 = (size_t)fts_maxarglen(argv);
      maxarglen = tmp___5;
    }
    if (maxarglen > 4096UL) {

    } else {
      tmp___6 = (size_t)4096;
    }
    {
      tmp___7 = fts_palloc(sp, tmp___6);
    }
                   

     
    if ((unsigned long)*argv != (unsigned long)((void *)0)) {
      {
        parent = fts_alloc(sp, "", (size_t)0);
      }
                                                                

       
      parent->fts_level = (ptrdiff_t)-1;
    }
    if ((unsigned long)compar == (unsigned long)((void *)0)) {
      tmp___8 = 1;
    } else {





    }
    defer_stat = (_Bool)tmp___8;
    root = (FTSENT *)((void *)0);
    nitems = (size_t)0;
    {
      while (1) {
                                     ;
        if (!((unsigned long)*argv != (unsigned long)((void *)0))) {
          goto while_break;
        }
        {
          tmp___9 = strlen((char const *)*argv);
          len = tmp___9;
        }
        if (!(options & 4096)) {
          v = (char const *)*argv;
                          
                                                        
               












               

             
           
        }
        {
          p = fts_alloc(sp, (char const *)*argv, len);
        }
                                                             

         
        p->fts_level = (ptrdiff_t)0;
        p->fts_parent = parent;
        p->fts_accpath = p->fts_name;
        if (defer_stat) {
          if ((unsigned long)root != (unsigned long)((void *)0)) {
            {


            }
          } else {
            {
              p->fts_info = fts_stat(sp, p, (_Bool)0);
            }
          }
        } else {
          {

          }
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

    }
  while_break:;
                 





     
    {
      tmp___10 = fts_alloc(sp, "", (size_t)0);
      sp->fts_cur = tmp___10;
    }
                                                                

     
    {
      (sp->fts_cur)->fts_link = root;
      (sp->fts_cur)->fts_info = (unsigned short)9;
      tmp___11 = setup_dir(sp);
    }
                    

     
                                 
                                     
         


         



       
     
    {
      i_ring_init(&sp->fts_fd_ring, -1);
    }
    return (sp);











  }
}
static void fts_load(FTS *sp, FTSENT *p) {
  register size_t len;
  register char *cp;
  size_t tmp;
  char *tmp___0;
  {
    {
      tmp = p->fts_namelen;
      p->fts_pathlen = tmp;
      len = tmp;
      memmove((void *)sp->fts_path, (void const *)(p->fts_name), len + 1UL);
      cp = strrchr((char const *)(p->fts_name), '/');
    }
             

















     
    tmp___0 = sp->fts_path;
    p->fts_path = tmp___0;
    p->fts_accpath = tmp___0;
    return;
  }
}
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp);
int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp) {
                         
                     
  int saved_errno;
           
              
               
              
               
              
               
  {
    saved_errno = 0;
                      

       
















       



     
                        
       

       
     
    {
      free((void *)sp->fts_array);
      free((void *)sp->fts_path);
    }
                                
                                
         

         






       
            






















     
    {
      fd_ring_clear(&sp->fts_fd_ring);
    }
                                             
       

       
     
    {
      free_dir(sp);
      free((void *)sp);
    }
                      
       


       

     
    return (0);
  }
}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2))) fstatfs)(int __fildes,
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
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp);
FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp) {
  register FTSENT *p;
  register FTSENT *tmp;
  register unsigned short instr;
  register char *t;
               
              
               
              
  struct _ftsent *tmp___4;
  int tmp___5;
               
              
  size_t tmp___8;
  char *tmp___9;
                 
                 
                
  _Bool tmp___12;
  int *tmp___13;
  struct _ftsent *tmp___14;
                
  int tmp___16;
                  
                
                
                
               
               
                
               
  FTSENT *tmp___24;
                    
                    
                    
  {
                                                                   

            
                                    

       
     
    p = sp->fts_cur;
    instr = p->fts_instr;
    p->fts_instr = (unsigned short)3;
                          
       

       

     
                          



























     
    if ((int)p->fts_info == 1) {
                            

              
                                   



























         
       
                                                                       







       
      if ((unsigned long)sp->fts_child != (unsigned long)((void *)0)) {
        {

        }




















      } else {
        {
          tmp___4 = fts_build(sp, 3);
          sp->fts_child = tmp___4;
        }
                                                                   








           








           


         
      }
      p = sp->fts_child;
      sp->fts_child = (struct _ftsent *)((void *)0);
      goto name;
    }
       ;
    tmp = p;
                                                                   
                                      
         




         






         

         

       
     
    p = p->fts_link;
    if ((unsigned long)p != (unsigned long)((void *)0)) {
      {
        sp->fts_cur = p;
        free((void *)tmp);
      }
      if (p->fts_level == 0L) {
        {
          tmp___5 = restore_initial_cwd(sp);
        }
                      


         
        {
          free_dir(sp);
          fts_load(sp, p);
          setup_dir(sp);
        }
        goto check_for_dir;
      }
                                   

       
                                   
         

         


















       
    name:;
      if ((int)*((p->fts_parent)->fts_path + ((p->fts_parent)->fts_pathlen - 1UL)) == 47) {

      } else {
        tmp___8 = (p->fts_parent)->fts_pathlen;
      }
      {
        t = sp->fts_path + tmp___8;
        tmp___9 = t;
        t++;
        *tmp___9 = (char)'/';
        memmove((void *)t, (void const *)(p->fts_name), p->fts_namelen + 1UL);
      }
    check_for_dir:;
      sp->fts_cur = p;
      if ((int)p->fts_info == 11) {
        if (p->fts_statp[0].st_size == 2L) {
































        } else {
          {
            while (1) {
                                               ;
                                                     
                 

                 
               
              goto while_break___2;
            }

          }
        while_break___2:;
        }
      }
      if ((int)p->fts_info == 1) {
        if (p->fts_level == 0L) {
          sp->fts_dev = p->fts_statp[0].st_dev;
        }
        {
          tmp___12 = enter_dir(sp, p);
        }
                        
           


           

         
      }
      return (p);
    }
                {
    p = tmp->fts_parent;
    sp->fts_cur = p;
    free((void *)tmp);
  }
    if (p->fts_level == -1L) {
      {
        free((void *)p);
        tmp___13 = __errno_location();
        *tmp___13 = 0;
        tmp___14 = (struct _ftsent *)((void *)0);
        sp->fts_cur = tmp___14;
      }
      return (tmp___14);
    }
    {
      while (1) {
                                         ;
                                        
           

           
         
        goto while_break___3;
      }

    }
  while_break___3:;
    *(sp->fts_path + p->fts_pathlen) = (char)'\000';
    if (p->fts_level == 0L) {
      {
        tmp___16 = restore_initial_cwd(sp);
      }
                     
         



         
       
    } else {











































    }
    if (p->fts_errno) {

    } else {
      p->fts_info = (unsigned short)6;
    }
    if (p->fts_errno == 0) {
      {
        while (1) {
                                           ;
          {
            leave_dir(sp, p);
          }
          goto while_break___4;
        }

      }
    while_break___4:;
    }
    if (sp->fts_options & 16384) {

    } else {
      tmp___24 = p;
    }
    return (tmp___24);
  }
}
__attribute__((__nothrow__)) int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p,
                                         int instr);
int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr) {




















}
static int fts_compare_ino(struct _ftsent const **a, struct _ftsent const **b) {















}
static void set_stat_type(struct stat *st, unsigned int dtype) {
  mode_t type;
  {
                      

     
                      

     
                      

     
                      

     
                       

     
    if (dtype == 8U) {
      goto case_8;
    }




         ;


         ;


         ;


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
  register FTSENT *p;
  register FTSENT *head;
  register size_t nitems;
  FTSENT *tail;
                
                  
  _Bool descend;
  _Bool doadjust;
  ptrdiff_t level;
  nlink_t nlinks;
  _Bool nostat;
  size_t len;
  size_t maxlen;
  size_t new_len;
  char *cp;
  int dir_fd;
  FTSENT *cur;
  _Bool continue_readdir;
          
           
               
  DIR *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
               
  _Bool tmp___6;
  size_t max_entries;
  unsigned long tmp___7;
  int tmp___8;
               
  int tmp___10;
                 
  _Bool is_dir;
  size_t d_namelen;
  struct dirent *dp___0;
  struct dirent *tmp___12;
                
                
                 
                
  _Bool skip_stat;
  int tmp___17;
  int tmp___18;
               
               
               
               
                 
                    
  {
    cur = sp->fts_cur;
    continue_readdir = (_Bool)(!(!cur->fts_dirp));
    if (continue_readdir) {
      {


      }






















    } else {
      if (sp->fts_options & 16) {
        if (sp->fts_options & 1) {
          if (cur->fts_level == 0L) {
            tmp___2 = 0;
          } else {

          }
        } else {

        }
      } else {

      }
      if (sp->fts_options & 2048) {

      } else {
        tmp___3 = 0;
      }
      if (!(sp->fts_options & 4)) {
        if (sp->fts_options & 512) {
          tmp___4 = sp->fts_cwd_fd;
        } else {

        }
      } else {

      }
      {
        tmp___1 = opendirat(tmp___4, (char const *)cur->fts_accpath, tmp___2 | tmp___3,
                            &dir_fd);
        cur->fts_dirp = tmp___1;
      }
                                                                 








       
      if ((int)cur->fts_info == 11) {
        {

        }
      } else {
        if (sp->fts_options & 256) {
          {
            while (1) {
                                               ;
              {
                leave_dir(sp, cur);
              }
              goto while_break___0;
            }

          }
        while_break___0 : {
          fts_stat(sp, cur, (_Bool)0);
          tmp___6 = enter_dir(sp, cur);
        }
                         
             


             

           
        }
      }
    }
    if ((unsigned long)sp->fts_compar == (unsigned long)((void *)0)) {
      tmp___7 = 100000UL;
    } else {

    }
    max_entries = tmp___7;
    if (type == 2) {


    } else {
      if (sp->fts_options & 8) {
        if (sp->fts_options & 16) {
          if (sp->fts_options & 32) {

          } else {
            tmp___8 = 2;
          }
          nlinks = cur->fts_statp[0].st_nlink - (__nlink_t)tmp___8;
          nostat = (_Bool)1;
        } else {


        }
      } else {


      }
    }
    if (continue_readdir) {

    } else {
      if (nlinks) {

      } else {
        if (type == 3) {
               ;
          if (sp->fts_options & 512) {
            {
              dir_fd = dup_safer(dir_fd);
            }
            if (0 <= dir_fd) {
              {
                set_cloexec_flag(dir_fd, (_Bool)1);
              }
            }
          }
          if (dir_fd < 0) {

          } else {
            {
              tmp___10 = fts_safe_changedir(sp, cur, dir_fd, (char const *)((void *)0));
            }
            if (tmp___10) {
               ;










              {









              }









            } else {
              descend = (_Bool)1;
            }
          }
        } else {

        }
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
    head = (FTSENT *)((void *)0);
    tail = (FTSENT *)((void *)0);
    nitems = (size_t)0;
    {
      while (1) {
                                         ;
      while_continue___2:;
                             

         
        {
          tmp___12 = readdir(cur->fts_dirp);
          dp___0 = tmp___12;
        }
        if ((unsigned long)dp___0 == (unsigned long)((void *)0)) {
          goto while_break___2;
        }
        if (!(sp->fts_options & 32)) {
          if ((int)dp___0->d_name[0] == 46) {
            if (!dp___0->d_name[1]) {
              goto while_continue___2;
            } else {
              if ((int)dp___0->d_name[1] == 46) {
                if (!dp___0->d_name[2]) {
                  goto while_continue___2;
                }
              }
            }
          }
        }
        {
          d_namelen = strlen((char const *)(dp___0->d_name));
          p = fts_alloc(sp, (char const *)(dp___0->d_name), d_namelen);
        }
                 

         
                                  
           


           

































         
        new_len = len + d_namelen;
                            
           


           
           









           







         
        p->fts_level = level;
        p->fts_parent = sp->fts_cur;
        p->fts_pathlen = new_len;
        p->fts_statp[0].st_ino = dp___0->d_ino;
        if (sp->fts_options & 4) {
          {


          }
        } else {
          p->fts_accpath = p->fts_name;
        }
        if ((unsigned long)sp->fts_compar == (unsigned long)((void *)0)) {
          goto _L___1;
        } else {
          if (sp->fts_options & 1024) {
          _L___1:;
            if (sp->fts_options & 16) {
              if (sp->fts_options & 8) {
                if ((int)dp___0->d_type != 0) {
                  if (!((int)dp___0->d_type == 4)) {
                    tmp___17 = 1;
                  } else {

                  }
                } else {

                }
              } else {

              }
            } else {

            }
            {
              skip_stat = (_Bool)tmp___17;
              p->fts_info = (unsigned short)11;
              set_stat_type(p->fts_statp, (unsigned int)dp___0->d_type);
              fts_set_stat_required(p, (_Bool)(!skip_stat));
            }
            if (sp->fts_options & 16) {
              if ((int)dp___0->d_type == 4) {

              } else {
                tmp___18 = 0;
              }
            } else {

            }
            is_dir = (_Bool)tmp___18;
          } else {
            {

            }














          }
        }
                           



         
        p->fts_link = (struct _ftsent *)((void *)0);
        if ((unsigned long)head == (unsigned long)((void *)0)) {
          tail = p;
          head = tail;
        } else {
          tail->fts_link = p;
          tail = p;
        }
        nitems++;
                                    

         
      }

    }
  while_break___2:;
    if (cur->fts_dirp) {
      {
        while (1) {
                                           ;
          {
            closedir(cur->fts_dirp);
            cur->fts_dirp = (DIR *)((void *)0);
          }
          goto while_break___5;
        }

      }
    while_break___5:;
    }
                         ;
                   
       

       
     
                              








     
                            
                    
                        

                
                        
                  



















           
         
       
     
                  



       

       

     
                           














     
                         





     
    return (head);
  }
}
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow) {
  struct stat *sbp;
                  
           
               
               
              
  int tmp___3;
               
              
  int tmp___6;
              
  {
    sbp = p->fts_statp;
    if (p->fts_level == 0L) {
      if (sp->fts_options & 1) {
        follow = (_Bool)1;
      }
    }
    if (sp->fts_options & 2) {

    } else {
      if (follow) {
            {
        tmp___3 = stat((char const * /* __restrict  */)((char const *)p->fts_accpath),
                       (struct stat * /* __restrict  */) sbp);
      }
                      
           



           















         
      } else {
        {


        }










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
    {
      len = sizeof(FTSENT) + namelen;
      p = (FTSENT *)malloc(len);
    }
                                                         

     
    {
      memcpy((void * /* __restrict  */)((void *)(p->fts_name)), (void const * /* __restrict  */)((void const *)name),
             namelen);
      p->fts_name[namelen] = (char)'\000';
      p->fts_namelen = namelen;
      p->fts_fts = sp;
      p->fts_path = sp->fts_path;
      p->fts_errno = 0;
      p->fts_dirp = (DIR *)((void *)0);
      p->fts_flags = (unsigned short)0;
      p->fts_instr = (unsigned short)3;
      p->fts_number = 0L;
      p->fts_pointer = (void *)0;
    }
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
                                    
       




       

     
    {
      sp->fts_pathlen = new_len;
      p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
    }
                                                         
       


       

     
    sp->fts_path = p;
    return ((_Bool)1);
  }
}
static void fts_padjust(FTS *sp, FTSENT *head) {


























































}
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv) {
  size_t len;
  size_t max;
  {
    max = (size_t)0;
    {
      while (1) {
                                     ;
        if (!*argv) {
          goto while_break;
        }
        {
          len = strlen((char const *)*argv);
        }
        if (len > max) {
          max = len;
        }
        argv++;
      }

    }
  while_break:;
    return ((size_t __attribute__((__pure__)))(max + 1UL));
  }
}
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir) {
          
  _Bool is_dotdot;
          
  int tmp___0;
  int newfd;
                
                
                 
              
               
              
             
               
               
                    
  {
    if (dir) {
      {

      }





    } else {
      tmp___0 = 0;
    }
    is_dotdot = (_Bool)tmp___0;
                              








     
                 

















     
    newfd = fd;
                 
       

       



     
                              

            
                
         

         


























       
     
    if (sp->fts_options & 512) {
      {
        cwd_advance_fd(sp, newfd, (_Bool)(!is_dotdot));
      }
      return (0);
    }
    {

    }
       ;










  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) mempcpy)(void *__restrict __dest,
                                                                                       void const *__restrict __src,
                                                                                       size_t __n);
int fd_safer(int fd) {
  int f;
  int tmp;
  int e;
  int *tmp___0;
  int *tmp___1;
  {
    if (0 <= fd) {
      if (fd <= 2) {
        {
          tmp = dup_safer(fd);
          f = tmp;
          tmp___0 = __errno_location();
          e = *tmp___0;
          close(fd);
          tmp___1 = __errno_location();
          *tmp___1 = e;
          fd = f;
        }
      }
    }
    return (fd);
  }
}
extern int fcntl(int __fd, int __cmd, ...);
int rpl_fcntl(int fd, int action, ...);
static int have_dupfd_cloexec = 0;
int rpl_fcntl(int fd, int action, ...) {
  va_list arg;
  int result;
             
          
               
            
              
                  
               
               
              
  void *p;
  void *tmp___5;
  {
    {
      result = -1;
      __builtin_va_start(arg, action);
    }
                         

     
    goto switch_default;
               {


  }





















































  switch_default : {
    tmp___5 = __builtin_va_arg(arg, void *);
    p = tmp___5;
    result = fcntl(fd, action, p);
  }
    goto switch_break;
  switch_break : {
    __builtin_va_end(arg);
  }
    return (result);
  }
}
int volatile exit_failure = (int volatile)1;
extern struct _IO_FILE *stdin;
extern FILE *fopen(char const *__restrict __filename, char const *__restrict __modes);
extern __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream);
extern int regcomp(regex_t *__restrict __preg, char const *__restrict __pattern,
                   int __cflags);
extern int regexec(regex_t const *__restrict __preg, char const *__restrict __string,
                   size_t __nmatch, regmatch_t *__restrict __pmatch, int __eflags);
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) __attribute__((__pure__));
struct exclude *new_exclude(void);
void add_exclude(struct exclude *ex, char const *pattern, int options);
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int),
                     struct exclude *ex, char const *file_name___1, int options,
                     char line_end);
int add_exclude_fp(void (*add_func)(struct exclude *, char const *, int, void *),
                   struct exclude *ex, FILE *fp, int options, char line_end, void *data);
_Bool excluded_file_name(struct exclude const *ex, char const *f);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf);
_Bool exclude_fnmatch(char const *pattern, char const *f, int options);
extern int fnmatch(char const *__pattern, char const *__name, int __flags);
void exclude_add_pattern_buffer(struct exclude *ex, char *buf) {












}
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) __attribute__((__pure__));
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) {























































































}
static void unescape_pattern(char *str) {



































}
struct exclude *new_exclude(void) {








}
static size_t string_hasher(void const *data, size_t n_buckets) {









}
static size_t string_hasher_ci(void const *data, size_t n_buckets) {





















































}
static _Bool string_compare(void const *data1, void const *data2) {











}
static _Bool string_compare_ci(void const *data1, void const *data2) {











}
static void string_free(void *data) {






}
static void new_exclude_segment(struct exclude *ex, enum exclude_type type, int options) {









































}
static int fnmatch_no_wildcards(char const *pattern, char const *f, int options) {















































































}
_Bool exclude_fnmatch(char const *pattern, char const *f, int options) {













































}
_Bool exclude_patopts(struct patopts const *opts, char const *f) {





















}
static _Bool file_pattern_matches(struct exclude_segment const *seg, char const *f) {



























}
static _Bool file_name_matches(struct exclude_segment const *seg, char const *f,
                               char *buffer___0) {

























































}
_Bool excluded_file_name(struct exclude const *ex, char const *f) {


















































}
void add_exclude(struct exclude *ex, char const *pattern, int options) {
























































































































































}
int add_exclude_fp(void (*add_func)(struct exclude *, char const *, int, void *),
                   struct exclude *ex, FILE *fp, int options, char line_end, void *data) {



























































































































}
static void call_addfn(struct exclude *ex, char const *pattern, int options,
                       void *data) {








}
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int),
                     struct exclude *ex, char const *file_name___1, int options,
                     char line_end) {








































}
int dup_safer(int fd) {
  int tmp;
  {
    {
      tmp = rpl_fcntl(fd, 0, 3);
    }
    return (tmp);
  }
}
static _Bool is_zero_or_power_of_two(uintmax_t i) {



}
void cycle_check_init(struct cycle_check_state *state) {





}
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb) {




























}
int should_colorize(void);
void init_colorize(void);
void print_start_colorize(char const *sgr_start___0, char const *sgr_seq);
void print_end_colorize(char const *sgr_end___0);
int should_colorize(void) {
























}
void init_colorize(void) {
  {
    return;
  }
}
void print_start_colorize(char const *sgr_start___0, char const *sgr_seq) {






}
void print_end_colorize(char const *sgr_end___0) {






}
void close_stdout(void);
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
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
    {
      tmp___3 = close_stream(stdout);
    }
    if (tmp___3 != 0) {
      if (ignore_EPIPE) {
        {
          tmp___4 = __errno_location();
        }
        if (!(*tmp___4 == 32)) {
          goto _L;
        }
      } else {
      _L : {
        tmp = (char const *)gettext("write error");
        write_error = tmp;
      }
        if (file_name) {
          {
            tmp___0 = quotearg_colon(file_name);
            tmp___1 = __errno_location();
            error(0, *tmp___1, "%s: %s", tmp___0, write_error);
          }
        } else {
          {
            tmp___2 = __errno_location();
            error(0, *tmp___2, "%s", write_error);
          }
        }
        {
          _exit((int)exit_failure);
        }
      }
    }
    {
      tmp___5 = close_stream(stderr);
    }
    if (tmp___5 != 0) {
      {
        _exit((int)exit_failure);
      }
    }
    return;
  }
}
extern __attribute__((__nothrow__)) size_t __fpending(FILE *__fp);
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
    {
      tmp = __fpending(stream);
      some_pending = (_Bool)(tmp != 0UL);
      tmp___0 = ferror_unlocked(stream);
      prev_fail = (_Bool)(tmp___0 != 0);
      tmp___1 = fclose(stream);
      fclose_fail = (_Bool)(tmp___1 != 0);
    }
    if (prev_fail) {
      goto _L___0;
    } else {
      if (fclose_fail) {
        if (some_pending) {
          goto _L___0;
        } else {
          {
            tmp___3 = __errno_location();
          }
          if (*tmp___3 != 9) {
          _L___0:
            if (!fclose_fail) {
              {
                tmp___2 = __errno_location();
                *tmp___2 = 0;
              }
            }
            return (-1);
          }
        }
      }
    }
    return (0);
  }
}
int set_cloexec_flag(int desc, _Bool value) {
  int flags;
  int tmp;
  int newflags;
  int tmp___0;
  int tmp___1;
  {
    {
      tmp = rpl_fcntl(desc, 1, 0);
      flags = tmp;
    }
    if (0 <= flags) {
      if (value) {
        tmp___0 = flags | 1;
      } else {

      }
      newflags = tmp___0;
      if (flags == newflags) {

      } else {
        {
          tmp___1 = rpl_fcntl(desc, 2, newflags);
        }
        if (tmp___1 != -1) {
          return (0);
        }
      }
    }

  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memrchr)(void const *__s,
                                                                                    int __c,
                                                                                    size_t __n) __attribute__((__pure__));
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_strcasecmp(char const *s1, char const *s2) {































}
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) __attribute__((__const__));
_Bool c_isspace(int c) {





























}
int c_tolower(int c) __attribute__((__const__));
int c_tolower(int c) {













}
int set_binary_mode(int fd, int mode___0) {
  {
    return (0);
  }
}
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) __attribute__((__pure__));
void (*argmatch_die)(void);
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem);
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize);
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist,
                               char const *vallist, size_t valsize, void (*exit_fn)(void));
extern int putc_unlocked(int __c, FILE *__stream);
__attribute__((__noreturn__)) void usage(int status);
static void __argmatch_die(void) {






}
void (*argmatch_die)(void) = &__argmatch_die;
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) __attribute__((__pure__));
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) {


























































}
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem) {




























}
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize) {
























































}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist,
                               char const *vallist, size_t valsize, void (*exit_fn)(void)) {

















}
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
int match_icase;
int match_words;
int match_lines;
unsigned char eolbyte;
int using_utf8(void);
void Pcompile(char const *pattern, size_t size);
size_t Pexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
extern pcre *pcre_compile(char const *, int, char const **, int *, unsigned char const *);
extern int pcre_exec(pcre const *, pcre_extra const *, char const *, int,
                     int, int, int *, int);
extern int pcre_fullinfo(pcre const *, pcre_extra const *, int, void *);
extern unsigned char const *pcre_maketables(void);
extern pcre_extra *pcre_study(pcre const *, int, char const **);
extern pcre_jit_stack *pcre_jit_stack_alloc(int, int);
extern void pcre_assign_jit_stack(pcre_extra *, pcre_jit_stack *(*)(void *), void *);
static pcre *cre;
static pcre_extra *extra;
static pcre_jit_stack *jit_stack;
void Pcompile(char const *pattern, size_t size) {














































































































































































}
size_t Pexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {

















































































































































}
void kwsincr(kwset_t kwset___1, char const *text, size_t len);
void kwsprep(kwset_t kwset___1);
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text,
                                                size_t size, struct kwsmatch *kwsmatch);
void kwsinit(kwset_t *kwset___1);
char *mbtoupper(char const *beg, size_t *n, mb_len_map_t **len_map_p);
ptrdiff_t mb_goback(char const **mb_start, char const *cur, char const *end);
wint_t mb_prev_wc(char const *buf, char const *cur, char const *end);
wint_t mb_next_wc(char const *cur, char const *end);
void Fcompile(char const *pattern, size_t size);
size_t Fexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
static _Bool wordchar(wint_t wc) {

















}
static kwset_t kwset;
void Fcompile(char const *pattern, size_t size) {
  size_t total;
  mb_len_map_t *map;
  char const *pat;
  char *tmp___0;
  char const *tmp___1;
  size_t tmp___2;
  char const *p;
  size_t len;
  char const *sep;
  char const *tmp___3;
  char *buf;
  {
    total = size;
    map = (mb_len_map_t *)((void *)0);
    if (match_icase) {
      {
        tmp___2 = __ctype_get_mb_cur_max();
      }
      if (tmp___2 > 1UL) {
        {
          tmp___0 = mbtoupper(pattern, &total, &map);
          tmp___1 = (char const *)tmp___0;
        }
      } else {
        tmp___1 = pattern;
      }
    } else {
      tmp___1 = pattern;
    }
    {
      pat = tmp___1;
      kwsinit(&kwset);
      p = pat;
    }
    {
      while (1) {
                                     ;
        {
          tmp___3 = (char const *)memchr((void const *)p, '\n', total);
          sep = tmp___3;
        }
        if (sep) {
          len = (size_t)(sep - p);
          sep++;
          total -= len + 1UL;
        } else {
          len = total;
          total = (size_t)0;
        }
        buf = (char *)((void *)0);
        if (match_lines) {
          {
            buf = (char *)xmalloc(len + 2UL);
            *(buf + 0) = (char)eolbyte;
            memcpy((void * /* __restrict  */)((void *)(buf + 1)), (void const * /* __restrict  */)((void const *)p),
                   len);
            *(buf + (len + 1UL)) = (char)eolbyte;
            p = (char const *)buf;
            len += 2UL;
          }
        }
        {
          kwsincr(kwset, p, len);
          free((void *)buf);
          p = sep;
        }
        if (!p) {
          goto while_break;
        }
      }
                                    ;
    }
  while_break : {
    kwsprep(kwset);
  }
    return;
  }
}
static void mb_case_map_apply(mb_len_map_t const *map, size_t *off, size_t *len) {
  size_t off_incr;
  size_t len_incr;
  size_t k;
  {
    if (map) {
      off_incr = (size_t)0;
      len_incr = (size_t)0;
      k = (size_t)0;
      {
        while (1) {
                                       ;
          if (!(k < *off)) {
            goto while_break;
          }
          off_incr += (size_t) * (map + k);
          k++;
        }
                                      ;
      }
    while_break:;
      {
        while (1) {
                                           ;
          if (!(k < *off + *len)) {
            goto while_break___0;
          }
          len_incr += (size_t) * (map + k);
          k++;
        }
                                      ;
      }
    while_break___0:
      *off += off_incr;
      *len += len_incr;
    }
    return;
  }
}
size_t Fexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  char const *beg;
  char const *try
    ;
  char const *end;
  char const *mb_start;
  size_t len;
  char eol;
  struct kwsmatch kwsmatch;
  size_t ret_val;
  mb_len_map_t *map;
  char *case_buf;
  char *tmp;
  size_t tmp___0;
  size_t offset;
  size_t tmp___1;
  size_t tmp___2;
  int tmp___3;
  ptrdiff_t tmp___4;
  wint_t tmp___5;
  _Bool tmp___6;
  wint_t tmp___7;
  _Bool tmp___8;
  size_t off;
                    
                    
  {
    {
      eol = (char)eolbyte;
      map = (mb_len_map_t *)((void *)0);
      tmp___0 = __ctype_get_mb_cur_max();
    }
    if (tmp___0 > 1UL) {
      if (match_icase) {
        {
          tmp = mbtoupper(buf, &size, &map);
          case_buf = tmp;
        }
        if (start_ptr) {
          start_ptr = (char const *)(case_buf + (start_ptr - buf));
        }
        buf = (char const *)case_buf;
      }
    }
    if (start_ptr) {
      beg = start_ptr;
    } else {
      beg = buf;
    }
    mb_start = beg;
    {
      while (1) {
                                     ;
        if (!((unsigned long)beg <= (unsigned long)(buf + size))) {
          goto while_break;
        }
        {
          tmp___1 = kwsexec(kwset, beg - match_lines, (size_t)(((buf + size) - beg) + (long)match_lines),
                            &kwsmatch);
          offset = tmp___1;
        }
        if (offset == 0xffffffffffffffffUL) {
          goto failure;
        }
        len = kwsmatch.size[0] - (size_t)match_lines;
        if (!match_lines) {
          {
            tmp___2 = __ctype_get_mb_cur_max();
          }
          if (tmp___2 > 1UL) {
            {
              tmp___3 = using_utf8();
            }
            if (!tmp___3) {
              {
                tmp___4 = mb_goback(&mb_start, beg + offset, buf + size);
              }
              if (tmp___4 != 0L) {
                beg = mb_start;
                goto __Cont;
              }
            }
          }
        }
        beg += offset;
        if (start_ptr) {
          if (!match_words) {
            goto success_in_beg_and_len;
          }
        }
        if (match_lines) {
          goto success_in_beg_and_len;
        }
        if (match_words) {
          try
            = beg;
          {
            while (1) {
                                               ;
              {
                tmp___5 = mb_prev_wc(buf, try, buf + size);
                tmp___6 = wordchar(tmp___5);
              }
              if (tmp___6) {
                goto while_break___0;
              }
              {
                tmp___7 = mb_next_wc(try + len, buf + size);
                tmp___8 = wordchar(tmp___7);
              }
              if (tmp___8) {
                if (!len) {
                  goto while_break___0;
                }
                {
                  len--;
                  offset = kwsexec(kwset, beg, len, &kwsmatch);
                }
                if (offset == 0xffffffffffffffffUL) {
                  goto while_break___0;
                }
                try
                  = beg + offset;
                len = kwsmatch.size[0];
              } else {
                if (!start_ptr) {
                  goto success;
                } else {
                  goto success_in_beg_and_len;
                }
              }
            }
                                          ;
          }
        while_break___0:;
        } else {
          goto success;
        }
      __Cont:
        beg++;
      }
                                    ;
    }
  while_break:;
  failure:
    return ((size_t)-1);
  success : {
    end = (char const *)memchr((void const *)(beg + len), (int)eol, (size_t)((buf + size) - (beg + len)));
  }
    if ((unsigned long)end != (unsigned long)((void *)0)) {
      end++;
    } else {
      end = buf + size;
    }
    {
      while (1) {
                                         ;
        if ((unsigned long)buf < (unsigned long)beg) {
          if (!((int const) * (beg + -1) != (int const)eol)) {
            goto while_break___1;
          }
        } else {
          goto while_break___1;
        }
        beg--;
      }
                                    ;
    }
  while_break___1:
    len = (size_t)(end - beg);
  success_in_beg_and_len : {
    off = (size_t)(beg - buf);
    mb_case_map_apply((mb_len_map_t const *)map, &off, &len);
    *match_size = len;
    ret_val = off;
  }
    return (ret_val);
  }
}
kwset_t kwsalloc(char const *trans___0);
static unsigned char to_uchar(char ch) {
  {
    return ((unsigned char)ch);
  }
}
extern void _obstack_newchunk(struct obstack *, int);
extern int _obstack_begin(struct obstack *, int, int, void *(*)(long), void (*)(void *));
static char tr(char const *trans___0, char c) {
  unsigned char tmp;
  int tmp___0;
  {
    if (trans___0) {
      {
        tmp = to_uchar(c);
        tmp___0 = (int)*(trans___0 + (int)tmp);
      }
    } else {
      tmp___0 = (int)c;
    }
    return ((char)tmp___0);
  }
}
kwset_t kwsalloc(char const *trans___0) {
  struct kwset *kwset___1;
  struct kwset *tmp;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___0;
  char *tmp___1;
  {
    {
      tmp = (struct kwset *)xmalloc(sizeof(*kwset___1));
      kwset___1 = tmp;
      _obstack_begin(&kwset___1->obstack, 0, 0, (void *(*)(long))(&xmalloc), &free);
      kwset___1->words = (ptrdiff_t)0;
      __h = &kwset___1->obstack;
      __o = __h;
      __len = (int)sizeof(*(kwset___1->trie));
    }
                                                          
       

       
     
    __o->next_free += __len;
    __o1 = __h;
    __value = (void *)__o1->object_base;
                                                                   

     
    if (sizeof(long) < sizeof(void *)) {

    } else {
      tmp___0 = (char *)0;
    }
    if (sizeof(long) < sizeof(void *)) {

    } else {
      tmp___1 = (char *)0;
    }
    __o1->next_free = tmp___0 + (((__o1->next_free - tmp___1) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
                                                                                          

     
    __o1->object_base = __o1->next_free;
    kwset___1->trie = (struct trie *)__value;
    (kwset___1->trie)->accepting = (size_t)0;
    (kwset___1->trie)->links = (struct tree *)((void *)0);
    (kwset___1->trie)->parent = (struct trie *)((void *)0);
    (kwset___1->trie)->next = (struct trie *)((void *)0);
    (kwset___1->trie)->fail = (struct trie *)((void *)0);
    (kwset___1->trie)->depth = 0;
    (kwset___1->trie)->shift = 0;
    kwset___1->mind = 2147483647;
    kwset___1->maxd = -1;
    kwset___1->target = (char *)((void *)0);
    kwset___1->trans = trans___0;
    return (kwset___1);
  }
}
void kwsincr(kwset_t kwset___1, char const *text, size_t len) {
  struct trie *trie;
  char const *trans___0;
  unsigned char uc;
  unsigned char label___0;
  int tmp;
  struct tree *kwset_link;
  struct tree *links[12];
  enum __anonenum_dirs_58 dirs[12];
  int depth___0;
              
              
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___2;
  char *tmp___3;
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___4;
  char *tmp___5;
                 
                 
                 
                  
                  
               
               
  size_t tmp___8;
                    
                    
  {
    trie = kwset___1->trie;
    trans___0 = kwset___1->trans;
    text += len;
    {
      while (1) {
                                     ;
        tmp___8 = len;
        len--;
        if (!tmp___8) {
          goto while_break;
        }
        text--;
        uc = (unsigned char)*text;
        if (trans___0) {
          tmp = (int)*(trans___0 + (int)uc);
        } else {
          tmp = (int)uc;
        }
        label___0 = (unsigned char)tmp;
        kwset_link = trie->links;
        links[0] = (struct tree *)(&trie->links);
        dirs[0] = (enum __anonenum_dirs_58)0;
        depth___0 = 1;
        {
          while (1) {
                                             ;
            if (kwset_link) {



            } else {
              goto while_break___0;
            }












          }

        }
      while_break___0:;
        if (!kwset_link) {
          __h = &kwset___1->obstack;
          __o = __h;
          __len = (int)sizeof(*kwset_link);
                                                                
             

             
           
          __o->next_free += __len;
          __o1 = __h;
          __value = (void *)__o1->object_base;
                                                                         

           
          if (sizeof(long) < sizeof(void *)) {

          } else {
            tmp___2 = (char *)0;
          }
          if (sizeof(long) < sizeof(void *)) {

          } else {
            tmp___3 = (char *)0;
          }
          __o1->next_free = tmp___2 + (((__o1->next_free - tmp___3) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
                                                                                                

           
          __o1->object_base = __o1->next_free;
          kwset_link = (struct tree *)__value;
          kwset_link->llink = (struct tree *)((void *)0);
          kwset_link->rlink = (struct tree *)((void *)0);
          __h___0 = &kwset___1->obstack;
          __o___0 = __h___0;
          __len___0 = (int)sizeof(*(kwset_link->trie));
                                                                            
             

             
           
          __o___0->next_free += __len___0;
          __o1___0 = __h___0;
          __value___0 = (void *)__o1___0->object_base;
                                                                                 

           
          if (sizeof(long) < sizeof(void *)) {

          } else {
            tmp___4 = (char *)0;
          }
          if (sizeof(long) < sizeof(void *)) {

          } else {
            tmp___5 = (char *)0;
          }
          __o1___0->next_free = tmp___4 + (((__o1___0->next_free - tmp___5) + (long)__o1___0->alignment_mask) & (long)(~__o1___0->alignment_mask));
                                                                                                                

           
          __o1___0->object_base = __o1___0->next_free;
          kwset_link->trie = (struct trie *)__value___0;
          (kwset_link->trie)->accepting = (size_t)0;
          (kwset_link->trie)->links = (struct tree *)((void *)0);
          (kwset_link->trie)->parent = trie;
          (kwset_link->trie)->next = (struct trie *)((void *)0);
          (kwset_link->trie)->fail = (struct trie *)((void *)0);
          (kwset_link->trie)->depth = trie->depth + 1;
          (kwset_link->trie)->shift = 0;
          kwset_link->label = label___0;
          kwset_link->balance = (char)0;
          depth___0--;
          if ((unsigned int)dirs[depth___0] == 0U) {
            (links[depth___0])->llink = kwset_link;
          } else {

          }
          {
            while (1) {
                                               ;
              if (depth___0) {



              } else {
                goto while_break___1;
              }






            }

          }
        while_break___1:;
                          


























































































































           
        }
        trie = kwset_link->trie;
      }

    }
  while_break:;
    if (!trie->accepting) {
      trie->accepting = (size_t)(1L + 2L * kwset___1->words);
    }
    (kwset___1->words)++;
    if (trie->depth < kwset___1->mind) {
      kwset___1->mind = trie->depth;
    }
    if (trie->depth > kwset___1->maxd) {
      kwset___1->maxd = trie->depth;
    }
    return;
  }
}
static void enqueue(struct tree *tree, struct trie **last) {
  struct trie *tmp;
  {
    if (!tree) {
      return;
    }
    {
      enqueue(tree->llink, last);
      enqueue(tree->rlink, last);
      tmp = tree->trie;
      (*last)->next = tmp;
      *last = tmp;
    }
    return;
  }
}
static void treefails(struct tree const *tree, struct trie const *fail, struct trie *recourse) {
  struct tree *kwset_link;
  {
    if (!tree) {
      return;
    }
    {
      treefails((struct tree const *)tree->llink, fail, recourse);
      treefails((struct tree const *)tree->rlink, fail, recourse);
    }
    {
      while (1) {
                                     ;
        if (!fail) {
          goto while_break;
        }
        kwset_link = (struct tree *)fail->links;
        {
          while (1) {
                                             ;
            if (kwset_link) {
              if (!((int const)tree->label != (int const)kwset_link->label)) {
                goto while_break___0;
              }
            } else {
              goto while_break___0;
            }
            if ((int const)tree->label < (int const)kwset_link->label) {
              kwset_link = kwset_link->llink;
            } else {
              kwset_link = kwset_link->rlink;
            }
          }
                                        ;
        }
      while_break___0:;
        if (kwset_link) {
          (tree->trie)->fail = kwset_link->trie;
          return;
        }
        fail = (struct trie const *)fail->fail;
      }
                                    ;
    }
  while_break:
    (tree->trie)->fail = recourse;
    return;
  }
}
static void treedelta(struct tree const *tree, unsigned int depth___0, unsigned char *delta) {
  {
    if (!tree) {
      return;
    }
    {
      treedelta((struct tree const *)tree->llink, depth___0, delta);
      treedelta((struct tree const *)tree->rlink, depth___0, delta);
    }
    if (depth___0 < (unsigned int)*(delta + (int const)tree->label)) {
      *(delta + (int const)tree->label) = (unsigned char)depth___0;
    }
    return;
  }
}
static int __attribute__((__pure__)) hasevery(struct tree const *a, struct tree const *b) {
  int __attribute__((__pure__)) tmp;
  int __attribute__((__pure__)) tmp___0;
  {
    if (!b) {
      return ((int __attribute__((__pure__)))1);
    }
    {
      tmp = hasevery(a, (struct tree const *)b->llink);
    }
    if (!tmp) {
      return ((int __attribute__((__pure__)))0);
    }
    {
      tmp___0 = hasevery(a, (struct tree const *)b->rlink);
    }
    if (!tmp___0) {
      return ((int __attribute__((__pure__)))0);
    }
    {
      while (1) {
                                     ;
        if (a) {
          if (!((int const)b->label != (int const)a->label)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        if ((int const)b->label < (int const)a->label) {
          a = (struct tree const *)a->llink;
        } else {
          a = (struct tree const *)a->rlink;
        }
      }
                                    ;
    }
  while_break:;
    return ((int __attribute__((__pure__)))(!(!a)));
  }
}
static void treenext(struct tree const *tree, struct trie **next) {
  {
    if (!tree) {
      return;
    }
    {
      treenext((struct tree const *)tree->llink, next);
      treenext((struct tree const *)tree->rlink, next);
      *(next + (int const)tree->label) = (struct trie *)tree->trie;
    }
    return;
  }
}
void kwsprep(kwset_t kwset___1) {
  char const *trans___0;
  int i;
  unsigned char deltabuf[256];
  unsigned char *delta;
  unsigned char *tmp;
  int tmp___0;
  struct trie *curr;
  struct trie *last;
  struct trie *fail;
  int __attribute__((__pure__)) tmp___1;
  struct trie *nextbuf[256];
  struct trie **next;
  struct trie **tmp___2;
  unsigned char tmp___3;
  struct obstack *__h;
  struct obstack *__o;
  int __len;
  struct obstack *__o1;
  void *__value;
  char *tmp___4;
  char *tmp___5;
  struct obstack *__h___0;
  struct obstack *__o___0;
  int __len___0;
  struct obstack *__o1___0;
  void *__value___0;
  char *tmp___6;
  char *tmp___7;
  char gc1;
  char tmp___8;
  int gc1help;
  char const *equiv1;
  char const *tmp___9;
  char const *equiv2;
  char const *tmp___10;
  unsigned char tmp___12;
  void *tmp___13;
  unsigned char tmp___14;
                    
                    
  {
    trans___0 = kwset___1->trans;
    if (trans___0) {
      tmp = deltabuf;
    } else {
      tmp = kwset___1->delta;
    }
    delta = tmp;
    if (kwset___1->mind < 255) {
      tmp___0 = kwset___1->mind;
    } else {
      tmp___0 = 255;
    }
    {
      memset((void *)delta, tmp___0, sizeof(deltabuf));
      last = kwset___1->trie;
      curr = last;
    }
    {
      while (1) {
                                     ;
        if (!curr) {
          goto while_break;
        }
        {
          enqueue(curr->links, &last);
          curr->shift = kwset___1->mind;
          curr->maxshift = kwset___1->mind;
          treedelta((struct tree const *)curr->links, (unsigned int)curr->depth, delta);
          treefails((struct tree const *)curr->links, (struct trie const *)curr->fail,
                    kwset___1->trie);
          fail = curr->fail;
        }
        {
          while (1) {
                                             ;
            if (!fail) {
              goto while_break___0;
            }
            {
              tmp___1 = hasevery((struct tree const *)fail->links, (struct tree const *)curr->links);
            }
            if (!tmp___1) {
              if (curr->depth - fail->depth < fail->shift) {
                fail->shift = curr->depth - fail->depth;
              }
            }
            if (curr->accepting) {
              if (fail->maxshift > curr->depth - fail->depth) {
                fail->maxshift = curr->depth - fail->depth;
              }
            }
            fail = fail->fail;
          }
                                        ;
        }
      while_break___0:
        curr = curr->next;
      }
                                    ;
    }
  while_break:
    curr = (kwset___1->trie)->next;
    {
      while (1) {
                                         ;
        if (!curr) {
          goto while_break___1;
        }
        if (curr->maxshift > (curr->parent)->maxshift) {
          curr->maxshift = (curr->parent)->maxshift;
        }
        if (curr->shift > curr->maxshift) {
          curr->shift = curr->maxshift;
        }
        curr = curr->next;
      }
                                    ;
    }
  while_break___1:;
    if (trans___0) {
      tmp___2 = nextbuf;
    } else {
      tmp___2 = kwset___1->next;
    }
    {
      next = tmp___2;
      memset((void *)next, 0, sizeof(nextbuf));
      treenext((struct tree const *)(kwset___1->trie)->links, next);
    }
    if (trans___0) {
      i = 0;
      {
        while (1) {
                                           ;
          if (!(i < 256)) {
            goto while_break___2;
          }
          {
            tmp___3 = to_uchar((char)*(trans___0 + i));
            kwset___1->next[i] = *(next + (int)tmp___3);
            i++;
          }
        }
                                      ;
      }
    while_break___2:;
    }
    if (kwset___1->words == 1L) {
      __h = &kwset___1->obstack;
      __o = __h;
      __len = kwset___1->mind;
      if (__o->chunk_limit - __o->next_free < (long)__len) {
        {
          _obstack_newchunk(__o, __len);
        }
      }
      __o->next_free += __len;
      __o1 = __h;
      __value = (void *)__o1->object_base;
      if ((unsigned long)__o1->next_free == (unsigned long)__value) {
        __o1->maybe_empty_object = 1U;
      }
      if (sizeof(long) < sizeof(void *)) {
        tmp___4 = __o1->object_base;
      } else {
        tmp___4 = (char *)0;
      }
      if (sizeof(long) < sizeof(void *)) {
        tmp___5 = __o1->object_base;
      } else {
        tmp___5 = (char *)0;
      }
      __o1->next_free = tmp___4 + (((__o1->next_free - tmp___5) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
      if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) {
        __o1->next_free = __o1->chunk_limit;
      }
      __o1->object_base = __o1->next_free;
      kwset___1->target = (char *)__value;
      i = kwset___1->mind - 1;
      curr = kwset___1->trie;
      {
        while (1) {
                                           ;
          if (!(i >= 0)) {
            goto while_break___3;
          }
          *(kwset___1->target + i) = (char)(curr->links)->label;
          curr = curr->next;
          i--;
        }
                                       ;
      }
    while_break___3:;
      if (kwset___1->mind > 1) {
        __h___0 = &kwset___1->obstack;
        __o___0 = __h___0;
        __len___0 = (int)(sizeof(*(kwset___1->shift)) * (unsigned long)(kwset___1->mind - 1));
        if (__o___0->chunk_limit - __o___0->next_free < (long)__len___0) {
          {
            _obstack_newchunk(__o___0, __len___0);
          }
        }
        __o___0->next_free += __len___0;
        __o1___0 = __h___0;
        __value___0 = (void *)__o1___0->object_base;
        if ((unsigned long)__o1___0->next_free == (unsigned long)__value___0) {
          __o1___0->maybe_empty_object = 1U;
        }
        if (sizeof(long) < sizeof(void *)) {
          tmp___6 = __o1___0->object_base;
        } else {
          tmp___6 = (char *)0;
        }
        if (sizeof(long) < sizeof(void *)) {
          tmp___7 = __o1___0->object_base;
        } else {
          tmp___7 = (char *)0;
        }
        __o1___0->next_free = tmp___6 + (((__o1___0->next_free - tmp___7) + (long)__o1___0->alignment_mask) & (long)(~__o1___0->alignment_mask));
        if (__o1___0->next_free - (char *)__o1___0->chunk > __o1___0->chunk_limit - (char *)__o1___0->chunk) {
          __o1___0->next_free = __o1___0->chunk_limit;
        }
        __o1___0->object_base = __o1___0->next_free;
        kwset___1->shift = (int *)__value___0;
        i = 0;
        curr = (kwset___1->trie)->next;
        {
          while (1) {
                                             ;
            if (!(i < kwset___1->mind - 1)) {
              goto while_break___4;
            }
            *(kwset___1->shift + i) = curr->shift;
            curr = curr->next;
            i++;
          }
                                         ;
        }
      while_break___4:;
      }
      {
        tmp___8 = tr(trans___0, *(kwset___1->target + (kwset___1->mind - 1)));
        gc1 = tmp___8;
        gc1help = -1;
      }
      if (trans___0) {
        {
          tmp___9 = (char const *)memchr((void const *)trans___0, (int)gc1, (size_t)256);
          equiv1 = tmp___9;
          tmp___10 = (char const *)memchr((void const *)(equiv1 + 1), (int)gc1, (size_t)((trans___0 + 256) - (equiv1 + 1)));
          equiv2 = tmp___10;
        }
        if (equiv2) {
          {
            tmp___13 = memchr((void const *)(equiv2 + 1), (int)gc1, (size_t)((trans___0 + 256) - (equiv2 + 1)));
          }
          if (tmp___13) {
            gc1help = 256;
          } else {
            {
              tmp___12 = to_uchar(gc1);
              gc1help = (int)(((long)tmp___12 ^ (equiv1 - trans___0)) ^ (equiv2 - trans___0));
            }
          }
        }
      }
      kwset___1->gc1 = gc1;
      kwset___1->gc1help = gc1help;
      if (kwset___1->mind > 1) {
        {
          kwset___1->gc2 = tr(trans___0, *(kwset___1->target + (kwset___1->mind - 2)));
        }
      }
    }
    if (trans___0) {
      i = 0;
      {
        while (1) {
                                           ;
          if (!(i < 256)) {
            goto while_break___5;
          }
          {
            tmp___14 = to_uchar((char)*(trans___0 + i));
            kwset___1->delta[i] = *(delta + (int)tmp___14);
            i++;
          }
        }
                                       ;
      }
    while_break___5:;
    }
    return;
  }
}
static _Bool bm_delta2_search(char const **tpp, char const *ep, char const *sp,
                              int len, char const *trans___0, char gc1,
                              char gc2, unsigned char const *d1, kwset_t kwset___1) {
  char const *tp;
  int d;
  int skip;
  int i;
  char tmp;
  char tmp___0;
  char tmp___1;
  char tmp___2;
  char tmp___3;
  unsigned char tmp___4;
  char tmp___5;
  {
    tp = *tpp;
    d = len;
    skip = 0;
    {
      while (1) {
                                     ;
        {
          i = 2;
          tmp___3 = tr(trans___0, (char)*(tp + -2));
        }
        if ((int)tmp___3 == (int)gc2) {
          {
            while (1) {
                                               ;
              i++;
              if (!(i <= d)) {
                goto while_break___0;
              }
              {
                tmp = tr(trans___0, (char)*(tp + -i));
                tmp___0 = tr(trans___0, (char)*(sp + -i));
              }
              if ((int)tmp != (int)tmp___0) {
                goto while_break___0;
              }
            }
                                          ;
          }
        while_break___0:;
          if (i > d) {
            i = (d + skip) + 1;
            {
              while (1) {
                                                 ;
                if (!(i <= len)) {
                  goto while_break___1;
                }
                {
                  tmp___1 = tr(trans___0, (char)*(tp + -i));
                  tmp___2 = tr(trans___0, (char)*(sp + -i));
                }
                if ((int)tmp___1 != (int)tmp___2) {
                  goto while_break___1;
                }
                i++;
              }
                                            ;
            }
          while_break___1:;
            if (i > len) {
              *tpp = tp - len;
              return ((_Bool)1);
            }
          }
        }
        d = *(kwset___1->shift + (i - 2));
        tp += d;
        if ((unsigned long)tp > (unsigned long)ep) {
          goto while_break;
        }
        {
          tmp___5 = tr(trans___0, (char)*(tp + -1));
        }
        if ((int)tmp___5 != (int)gc1) {
          if (d1) {
            {
              tmp___4 = to_uchar((char)*(tp + -1));
              tp += (int const) * (d1 + (int)tmp___4);
            }
          }
          goto while_break;
        }
        skip = i - 1;
      }
                                    ;
    }
  while_break:
    *tpp = tp;
    return ((_Bool)0);
  }
}
static char const *memchr_kwset(char const *s, size_t n, kwset_t kwset___1) {
  char const *tmp;
  int small_heuristic;
  int small;
  size_t ntrans;
  size_t tmp___0;
  char const *slim;
  unsigned char tmp___1;
  void *tmp___2;
  void *tmp___3;
  {
    if (kwset___1->gc1help < 0) {
      {
        tmp = (char const *)memchr((void const *)s, (int)kwset___1->gc1, n);
      }
      return (tmp);
    }
    small_heuristic = 2;
    small = (int)(-((uintptr_t)s) % sizeof(long) + (unsigned long)small_heuristic * sizeof(long));
    if (kwset___1->gc1help < 256) {
      if ((size_t)small < n) {
        tmp___0 = (size_t)small;
      } else {

      }
    } else {

    }
    ntrans = tmp___0;
    slim = s + ntrans;
    {
      while (1) {
                                     ;
        if (!((unsigned long)s < (unsigned long)slim)) {
          goto while_break;
        }
        {
          tmp___1 = to_uchar((char)*s);
        }
        if ((int const) * (kwset___1->trans + (int)tmp___1) == (int const)kwset___1->gc1) {
          return (s);
        }
        s++;
      }

    }
  while_break:;
    n -= ntrans;
    if (n == 0UL) {

    } else {
      {
        tmp___2 = memchr2((void const *)s, (int)kwset___1->gc1, kwset___1->gc1help,
                          n);
        tmp___3 = tmp___2;
      }
    }
    return ((char const *)tmp___3);
  }
}
static size_t __attribute__((__pure__)) bmexec_trans(kwset_t kwset___1,
                                                     char const *text,
                                                     size_t size) {
  unsigned char const *d1;
  char const *ep;
  char const *sp;
  char const *tp;
  int d;
  int len;
  char const *trans___0;
  long tmp;
  char gc1;
  char gc2;
  char const *tp0;
  unsigned char tmp___0;
  unsigned char tmp___1;
  unsigned char tmp___2;
  unsigned char tmp___3;
  unsigned char tmp___4;
  unsigned char tmp___5;
  unsigned char tmp___6;
  unsigned char tmp___7;
  unsigned char tmp___8;
  unsigned char tmp___9;
  int advance_heuristic;
  _Bool tmp___10;
  unsigned char tmp___11;
  unsigned char tmp___12;
  _Bool tmp___13;
  {
    len = kwset___1->mind;
    trans___0 = kwset___1->trans;
    if (len == 0) {
      return ((size_t __attribute__((__pure__)))0);
    }
    if ((size_t)len > size) {
      return ((size_t __attribute__((__pure__))) - 1);
    }
    if (len == 1) {
      {
        tp = memchr_kwset(text, size, kwset___1);
      }
      if (tp) {
        tmp = tp - text;
      } else {
        tmp = -1L;
      }
      return ((size_t __attribute__((__pure__)))tmp);
    }
    d1 = (unsigned char const *)(kwset___1->delta);
    sp = (char const *)(kwset___1->target + len);
    tp = text + len;
    gc1 = kwset___1->gc1;
    gc2 = kwset___1->gc2;
    if (size > (size_t)(12 * len)) {
      ep = (text + size) - 11 * len;
      {
        while (1) {
                                       ;
          if (!((unsigned long)tp <= (unsigned long)ep)) {
            goto while_break;
          }
          {
            tp0 = tp;
            tmp___0 = to_uchar((char)*(tp + -1));
            d = (int)*(d1 + (int)tmp___0);
            tp += d;
            tmp___1 = to_uchar((char)*(tp + -1));
            d = (int)*(d1 + (int)tmp___1);
            tp += d;
          }
          if (d != 0) {
            {
              tmp___2 = to_uchar((char)*(tp + -1));
              d = (int)*(d1 + (int)tmp___2);
              tp += d;
              tmp___3 = to_uchar((char)*(tp + -1));
              d = (int)*(d1 + (int)tmp___3);
              tp += d;
              tmp___4 = to_uchar((char)*(tp + -1));
              d = (int)*(d1 + (int)tmp___4);
              tp += d;
            }
            if (d != 0) {
              {
                tmp___5 = to_uchar((char)*(tp + -1));
                d = (int)*(d1 + (int)tmp___5);
                tp += d;
                tmp___6 = to_uchar((char)*(tp + -1));
                d = (int)*(d1 + (int)tmp___6);
                tp += d;
                tmp___7 = to_uchar((char)*(tp + -1));
                d = (int)*(d1 + (int)tmp___7);
                tp += d;
              }
              if (d != 0) {
                {
                  tmp___8 = to_uchar((char)*(tp + -1));
                  d = (int)*(d1 + (int)tmp___8);
                  tp += d;
                  tmp___9 = to_uchar((char)*(tp + -1));
                  d = (int)*(d1 + (int)tmp___9);
                  tp += d;
                  advance_heuristic = (int)(16UL * sizeof(long));
                }
                if ((long)advance_heuristic <= tp - tp0) {
                  goto big_advance;
                }
                {
                  tp--;
                  tp = memchr_kwset(tp, (size_t)((text + size) - tp), kwset___1);
                }
                if (!tp) {
                  return ((size_t __attribute__((__pure__))) - 1);
                }
                tp++;
              }
            }
          }
          {
            tmp___10 = bm_delta2_search(&tp, ep, sp, len, trans___0, gc1, gc2, d1, kwset___1);
          }
          if (tmp___10) {
            return ((size_t __attribute__((__pure__)))(tp - text));
          }
        big_advance:;
        }
                                      ;
      }
    while_break:;
    }
    {
      ep = text + size;
      tmp___11 = to_uchar((char)*(tp + -1));
      d = (int)*(d1 + (int)tmp___11);
    }
    {
      while (1) {
                                         ;
      while_continue___0:;
        if (!((long)d <= ep - tp)) {
          goto while_break___0;
        }
        {
          tp += d;
          tmp___12 = to_uchar((char)*(tp + -1));
          d = (int)*(d1 + (int)tmp___12);
        }
        if (d != 0) {
          goto while_continue___0;
        }
        {
          tmp___13 = bm_delta2_search(&tp, ep, sp, len, trans___0, gc1, gc2, (unsigned char const *)((void *)0),
                                      kwset___1);
        }
        if (tmp___13) {
          return ((size_t __attribute__((__pure__)))(tp - text));
        }
      }
                                    ;
    }
  while_break___0:;
    return ((size_t __attribute__((__pure__))) - 1);
  }
}
static size_t bmexec(kwset_t kwset___1, char const *text, size_t size) {
  size_t __attribute__((__pure__)) tmp;
  size_t __attribute__((__pure__)) tmp___0;
  size_t __attribute__((__pure__)) tmp___1;
  {
    if (kwset___1->trans) {
      {
        tmp = bmexec_trans(kwset___1, text, size);
        tmp___1 = tmp;
      }
    } else {
      {
        tmp___0 = bmexec_trans(kwset___1, text, size);
        tmp___1 = tmp___0;
      }
    }
    return ((size_t)tmp___1);
  }
}
static size_t(__attribute__((__nonnull__(4))) cwexec)(kwset_t kwset___1, char const *text,
                                                      size_t len, struct kwsmatch *kwsmatch) {






















































































































































































































































}
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text,
                                                size_t size, struct kwsmatch *kwsmatch) {
  size_t ret;
  size_t tmp;
                 
  {
    if (kwset___1->words == 1L) {
      {
        tmp = bmexec(kwset___1, text, size);
        ret = tmp;
      }
      if (ret != 0xffffffffffffffffUL) {
        kwsmatch->index = (size_t)0;
        kwsmatch->offset[0] = ret;
        kwsmatch->size[0] = (size_t)kwset___1->mind;
      }
      return (ret);
    } else {
      {

      }

    }
  }
}
extern reg_syntax_t re_set_syntax(reg_syntax_t __syntax);
extern char const *re_compile_pattern(char const *__pattern, size_t __length,
                                      struct re_pattern_buffer *__buffer);
extern regoff_t re_search(struct re_pattern_buffer *__buffer, char const *__string,
                          __re_idx_t __length, __re_idx_t __start, regoff_t __range,
                          struct re_registers *__regs);
extern regoff_t re_match(struct re_pattern_buffer *__buffer, char const *__string,
                         __re_idx_t __length, __re_idx_t __start, struct re_registers *__regs);
struct dfa *dfaalloc(void);
struct dfamust *__attribute__((__pure__)) dfamusts(struct dfa const *d);
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol);
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag);
char *dfaexec(struct dfa *d, char const *begin, char *end, int allow_nl, size_t *count,
              int *backref);
struct dfa *dfasuperset(struct dfa const *d) __attribute__((__pure__));
_Bool dfaisfast(struct dfa const *d) __attribute__((__pure__));
void dfawarn(char const *mesg);
__attribute__((__noreturn__)) void dfaerror(char const *mesg);
void GEAcompile(char const *pattern, size_t size, reg_syntax_t syntax_bits___0);
size_t EGexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr);
static _Bool wordchar___0(wint_t wc) {

















}
static kwset_t kwset___0;
static struct dfa *dfa;
static struct patterns patterns0;
static struct patterns *patterns;
static size_t pcount;
static size_t kwset_exact_matches;
static _Bool begline;
__attribute__((__noreturn__)) void dfaerror(char const *mesg);
void dfaerror(char const *mesg) {






}
static enum __anonenum_mode_60 mode;
void dfawarn(char const *mesg) {




















}
static void kwsmusts(void) {
  struct dfamust const *dm;
  struct dfamust const *tmp;
  size_t old_len;
  size_t tmp___0;
  size_t new_len;
  char *must___0;
  char *tmp___1;
  char *mp;
  size_t tmp___2;
  {
    {
      tmp = (struct dfamust const *)dfamusts((struct dfa const *)dfa);
      dm = tmp;
    }
    if (dm) {
      {
        kwsinit(&kwset___0);
      }
      {
        while (1) {
                                       ;
          if (!dm) {
            goto while_break;
          }
          if (!dm->exact) {
            goto __Cont;
          }
          {
            kwset_exact_matches++;
            tmp___0 = strlen((char const *)dm->must);
            old_len = tmp___0;
            new_len = (old_len + (size_t)dm->begline) + (size_t)dm->endline;
            tmp___1 = (char *)xmalloc(new_len);
            must___0 = tmp___1;
            mp = must___0;
            *mp = (char)eolbyte;
            mp += (int const)dm->begline;
            begline = (_Bool)((int)begline | (int)dm->begline);
            memcpy((void * /* __restrict  */)((void *)mp), (void const * /* __restrict  */)((void const *)dm->must),
                   old_len);
          }
          if (dm->endline) {
            *(mp + old_len) = (char)eolbyte;
          }
          {
            kwsincr(kwset___0, (char const *)must___0, new_len);
            free((void *)must___0);
          }
        __Cont:
          dm = (struct dfamust const *)dm->next;
        }
                                      ;
      }
    while_break : {
      dm = (struct dfamust const *)dfamusts((struct dfa const *)dfa);
    }
      {
        while (1) {
                                           ;
          if (!dm) {
            goto while_break___0;
          }
          if (dm->exact) {
            goto __Cont___0;
          }
          {
            tmp___2 = strlen((char const *)dm->must);
            kwsincr(kwset___0, (char const *)dm->must, tmp___2);
          }
        __Cont___0:
          dm = (struct dfamust const *)dm->next;
        }
                                      ;
      }
    while_break___0 : {
      kwsprep(kwset___0);
    }
    }
    return;
  }
}
static char const line_beg_no_bk[3] = {(char const)'^', (char const)'(', (char const)'\000'};
static char const line_end_no_bk[3] = {(char const)')', (char const)'$', (char const)'\000'};
static char const word_beg_no_bk[19] =
    {(char const)'(', (char const)'^', (char const)'|', (char const)'[',
     (char const)'^', (char const)'[', (char const)':', (char const)'a',
     (char const)'l', (char const)'n', (char const)'u', (char const)'m',
     (char const)':', (char const)']', (char const)'_', (char const)']',
     (char const)')', (char const)'(', (char const)'\000'};
static char const word_end_no_bk[19] =
    {(char const)')', (char const)'(', (char const)'[', (char const)'^',
     (char const)'[', (char const)':', (char const)'a', (char const)'l',
     (char const)'n', (char const)'u', (char const)'m', (char const)':',
     (char const)']', (char const)'_', (char const)']', (char const)'|',
     (char const)'$', (char const)')', (char const)'\000'};
static char const line_beg_bk[4] = {(char const)'^', (char const)'\\', (char const)'(', (char const)'\000'};
static char const line_end_bk[4] = {(char const)'\\', (char const)')', (char const)'$', (char const)'\000'};
static char const word_beg_bk[23] =
    {(char const)'\\', (char const)'(', (char const)'^', (char const)'\\',
     (char const)'|', (char const)'[', (char const)'^', (char const)'[',
     (char const)':', (char const)'a', (char const)'l', (char const)'n',
     (char const)'u', (char const)'m', (char const)':', (char const)']',
     (char const)'_', (char const)']', (char const)'\\', (char const)')',
     (char const)'\\', (char const)'(', (char const)'\000'};
static char const word_end_bk[23] =
    {(char const)'\\', (char const)')', (char const)'\\', (char const)'(',
     (char const)'[', (char const)'^', (char const)'[', (char const)':',
     (char const)'a', (char const)'l', (char const)'n', (char const)'u',
     (char const)'m', (char const)':', (char const)']', (char const)'_',
     (char const)']', (char const)'\\', (char const)'|', (char const)'$',
     (char const)'\\', (char const)')', (char const)'\000'};
void GEAcompile(char const *pattern, size_t size, reg_syntax_t syntax_bits___0) {
  size_t total;
  char *motif;
  char const *p;
  size_t len;
  char const *sep;
  char const *tmp;
  char const *err;
  char const *tmp___0;
  int bk;
  char *n;
  char *tmp___1;
  char const *tmp___2;
  char const *tmp___3;
  char const *tmp___4;
  char const *tmp___5;
  char const *tmp___6;
  char const *tmp___7;
  size_t tmp___8;
  {
    total = size;
    if (match_icase) {
      syntax_bits___0 |= (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1;
    }
    {
      re_set_syntax(syntax_bits___0);
      dfasyntax(syntax_bits___0, match_icase, eolbyte);
      p = pattern;
    }
    {
      while (1) {
                                     ;
        {
          tmp = (char const *)memchr((void const *)p, '\n', total);
          sep = tmp;
        }
        if (sep) {
          len = (size_t)(sep - p);
          sep++;
          total -= len + 1UL;
        } else {
          len = total;
          total = (size_t)0;
        }
        {
          patterns = (struct patterns *)xnrealloc((void *)patterns, pcount + 1UL, sizeof(*patterns));
          *(patterns + pcount) = patterns0;
          tmp___0 = re_compile_pattern(p, len, &(patterns + pcount)->regexbuf);
          err = tmp___0;
        }
        if (err) {
          {
            error(2, 0, "%s", err);
          }
        }
        pcount++;
        p = sep;
        if (!p) {
          goto while_break;
        }
      }
                                    ;
    }
  while_break:;
    if (match_words) {
      goto _L;
    } else {
      if (match_lines) {
      _L : {
        bk = !(syntax_bits___0 & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
        tmp___1 = (char *)xmalloc(((sizeof(word_beg_bk) - 1UL) + size) + sizeof(word_end_bk));
        n = tmp___1;
      }
        if (match_lines) {
          if (bk) {
            tmp___2 = line_beg_bk;
          } else {
            tmp___2 = line_beg_no_bk;
          }
          tmp___4 = tmp___2;
        } else {
          if (bk) {
            tmp___3 = word_beg_bk;
          } else {
            tmp___3 = word_beg_no_bk;
          }
          tmp___4 = tmp___3;
        }
        {
          strcpy((char * /* __restrict  */)n, (char const * /* __restrict  */)tmp___4);
          total = strlen((char const *)n);
          memcpy((void * /* __restrict  */)((void *)(n + total)), (void const * /* __restrict  */)((void const *)pattern),
                 size);
          total += size;
        }
        if (match_lines) {
          if (bk) {
            tmp___5 = line_end_bk;
          } else {
            tmp___5 = line_end_no_bk;
          }
          tmp___7 = tmp___5;
        } else {
          if (bk) {
            tmp___6 = word_end_bk;
          } else {
            tmp___6 = word_end_no_bk;
          }
          tmp___7 = tmp___6;
        }
        {
          strcpy((char * /* __restrict  */)(n + total), (char const * /* __restrict  */)tmp___7);
          tmp___8 = strlen((char const *)(n + total));
          total += tmp___8;
          motif = n;
          pattern = (char const *)motif;
          size = total;
        }
      } else {
        motif = (char *)((void *)0);
      }
    }
    {
      dfa = dfaalloc();
      dfacomp(pattern, size, dfa, 1);
      kwsmusts();
      free((void *)motif);
    }
    return;
  }
}
size_t EGexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  char const *buflim___0;
  char const *beg;
  char const *end;
  char const *ptr;
  char const *match;
  char const *best_match;
  char const *mb_start;
  char eol;
  int backref;
  regoff_t start;
  size_t len;
  size_t best_len;
  struct kwsmatch kwsm;
  size_t i;
  struct dfa *superset;
  struct dfa *tmp;
  _Bool dfafast;
  _Bool tmp___0;
  char const *next_beg;
  char const *dfa_beg;
  size_t count;
  _Bool exact_kwset_match;
  char const *prev_beg;
  size_t offset;
  size_t tmp___1;
  long tmp___4;
  char const *tmp___5;
  long tmp___6;
  long tmp___7;
  size_t tmp___8;
  int tmp___9;
  ptrdiff_t tmp___10;
  regoff_t shorter_len;
  wint_t tmp___11;
  _Bool tmp___12;
  wint_t tmp___13;
  _Bool tmp___14;
  size_t off;
                    
                    
  {
    {
      eol = (char)eolbyte;
      tmp = dfasuperset((struct dfa const *)dfa);
      superset = tmp;
      tmp___0 = dfaisfast((struct dfa const *)dfa);
      dfafast = tmp___0;
      mb_start = buf;
      buflim___0 = buf + size;
      end = buf;
      beg = end;
    }
    {
      while (1) {
                                     ;
        if (!((unsigned long)end < (unsigned long)buflim___0)) {
          goto while_break;
        }
        end = buflim___0;
        if (!start_ptr) {
          dfa_beg = beg;
          count = (size_t)0;
          exact_kwset_match = (_Bool)0;
          if (kwset___0) {
            {
              tmp___1 = kwsexec(kwset___0, beg - (int)begline, (size_t)((buflim___0 - beg) + (long)begline),
                                &kwsm);
              offset = tmp___1;
            }
            if (offset == 0xffffffffffffffffUL) {
              goto failure;
            }
            {
              match = beg + offset;
              prev_beg = beg;
              beg = (char const *)memrchr((void const *)buf, (int)eol, (size_t)(match - buf));
            }
            if (beg) {
              beg++;
            } else {
              beg = buf;
            }
            dfa_beg = beg;
            exact_kwset_match = (_Bool)(kwsm.index < kwset_exact_matches);
            if (exact_kwset_match) {
              end = match;
            } else {
              if (!dfafast) {
                end = match;
              } else {
                if (16L > match - beg) {
                  tmp___7 = 16L;
                } else {
                  tmp___7 = match - beg;
                }
                if (tmp___7<(match - prev_beg)>> 2) {
                  end = match;
                } else {
                  if (16L > match - beg) {
                    tmp___6 = 16L;
                  } else {
                    tmp___6 = match - beg;
                  }
                  if (tmp___6<(buflim___0 - prev_beg)>> 2) {
                    if (16L > match - beg) {
                      tmp___4 = 16L;
                    } else {
                      tmp___4 = match - beg;
                    }
                    tmp___5 = prev_beg + 4L * tmp___4;
                  } else {
                    tmp___5 = buflim___0;
                  }
                  end = tmp___5;
                }
              }
            }
            {
              end = (char const *)memchr((void const *)end, (int)eol, (size_t)(buflim___0 - end));
            }
            if (end) {
              end++;
            } else {
              end = buflim___0;
            }
            if (exact_kwset_match) {
              {
                tmp___8 = __ctype_get_mb_cur_max();
              }
              if (tmp___8 == 1UL) {
                goto success;
              } else {
                {
                  tmp___9 = using_utf8();
                }
                if (tmp___9) {
                  goto success;
                }
              }
              if ((unsigned long)mb_start < (unsigned long)beg) {
                mb_start = beg;
              }
              {
                tmp___10 = mb_goback(&mb_start, match, buflim___0);
              }
              if (tmp___10 == 0L) {
                goto success;
              }
              dfa_beg = mb_start;
            }
          }
          if (superset) {
            if (!exact_kwset_match) {
              {
                while (1) {
                                                   ;
                  {
                    next_beg = (char const *)dfaexec(superset, dfa_beg, (char *)end, 1,
                                                     &count, (int *)((void *)0));
                  }
                  if (next_beg) {
                    if ((unsigned long)next_beg != (unsigned long)end) {
                      if (!(count != 0UL)) {
                        goto while_break___0;
                      }
                    } else {
                      goto while_break___0;
                    }
                  } else {
                    goto while_break___0;
                  }
                  {
                    count = (size_t)0;
                    beg = (char const *)memrchr((void const *)buf, (int)eol, (size_t)(next_beg - buf));
                    beg++;
                    dfa_beg = beg;
                  }
                }
                                              ;
              }
            while_break___0:;
              if ((unsigned long)next_beg == (unsigned long)((void *)0)) {
                goto __Cont;
              } else {
                if ((unsigned long)next_beg == (unsigned long)end) {
                  goto __Cont;
                }
              }
              {
                end = (char const *)memchr((void const *)next_beg, (int)eol, (size_t)(buflim___0 - next_beg));
              }
              if (end) {
                end++;
              } else {
                end = buflim___0;
              }
            }
          }
          {
            next_beg = (char const *)dfaexec(dfa, dfa_beg, (char *)end, 0, &count, &backref);
          }
          if ((unsigned long)next_beg == (unsigned long)((void *)0)) {
            goto __Cont;
          } else {
            if ((unsigned long)next_beg == (unsigned long)end) {
              goto __Cont;
            }
          }
          if (count != 0UL) {
            {
              beg = (char const *)memrchr((void const *)buf, (int)eol, (size_t)(next_beg - buf));
              beg++;
            }
          }
          {
            end = (char const *)memchr((void const *)next_beg, (int)eol, (size_t)(buflim___0 - next_beg));
          }
          if (end) {
            end++;
          } else {
            end = buflim___0;
          }
          if (!backref) {
            goto success;
          }
          ptr = beg;
        } else {
          ptr = start_ptr;
        }
        if ((long)(((1 << (sizeof(regoff_t) * 8UL - 2UL)) - 1) * 2 + 1) < (end - beg) - 1L) {
          {
            xalloc_die();
          }
        }
        best_match = end;
        best_len = (size_t)0;
        i = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(i < pcount)) {
              goto while_break___1;
            }
            {
              (patterns + i)->regexbuf.not_eol = 0U;
              start = re_search(&(patterns + i)->regexbuf, beg, (__re_idx_t)((end - beg) - 1L),
                                (__re_idx_t)(ptr - beg), (regoff_t)((end - ptr) - 1L), &(patterns + i)->regs);
              __msan_unpoison((patterns + i)->regs.end, 100);
            }
            if (start < -1) {
              {
                xalloc_die();
              }
            } else {
              if (0 <= start) {
                len = (size_t)(*((patterns + i)->regs.end + 0) - start);
                match = beg + start;
                if ((unsigned long)match > (unsigned long)best_match) {
                  goto __Cont___0;
                }
                if (start_ptr) {
                  if (!match_words) {
                    goto assess_pattern_match;
                  }
                }
                if (!match_lines) {
                  if (!match_words) {
                    match = ptr;
                    len = (size_t)(end - ptr);
                    goto assess_pattern_match;
                  } else {
                    goto _L;
                  }
                } else {
                _L:
                  if (match_lines) {
                    if (len == (size_t)((end - ptr) - 1L)) {
                      match = ptr;
                      len = (size_t)(end - ptr);
                      goto assess_pattern_match;
                    }
                  }
                }
                if (match_words) {
                  {
                    while (1) {
                                                       ;
                      if (!((unsigned long)match <= (unsigned long)best_match)) {
                        goto while_break___2;
                      }
                      {
                        shorter_len = 0;
                        tmp___11 = mb_prev_wc(beg, match, end - 1);
                        tmp___12 = wordchar___0(tmp___11);
                      }
                      if (!tmp___12) {
                        {
                          tmp___13 = mb_next_wc(match + len, end - 1);
                          tmp___14 = wordchar___0(tmp___13);
                        }
                        if (!tmp___14) {
                          goto assess_pattern_match;
                        }
                      }
                      if (len > 0UL) {
                        {
                          len--;
                          (patterns + i)->regexbuf.not_eol = 1U;
                          shorter_len = re_match(&(patterns + i)->regexbuf, beg, (__re_idx_t)((match + len) - ptr),
                                                 (__re_idx_t)(match - beg), &(patterns + i)->regs);
                        }
                        if (shorter_len < -1) {
                          {
                            xalloc_die();
                          }
                        }
                      }
                      if (0 < shorter_len) {
                        len = (size_t)shorter_len;
                      } else {
                        if ((unsigned long)match == (unsigned long)(end - 1)) {
                          goto while_break___2;
                        }
                        {
                          match++;
                          (patterns + i)->regexbuf.not_eol = 0U;
                          start = re_search(&(patterns + i)->regexbuf, beg, (__re_idx_t)((end - beg) - 1L),
                                            (__re_idx_t)(match - beg), (regoff_t)((end - match) - 1L),
                                            &(patterns + i)->regs);
                        }
                        if (start < 0) {
                          if (start < -1) {
                            {
                              xalloc_die();
                            }
                          }
                          goto while_break___2;
                        }
                        len = (size_t)(*((patterns + i)->regs.end + 0) - start);
                        match = beg + start;
                      }
                    }
                                                  ;
                  }
                while_break___2:;
                }
                goto __Cont___0;
              assess_pattern_match:
                if (!start_ptr) {
                  goto success;
                }
                if ((unsigned long)match < (unsigned long)best_match) {
                  best_match = match;
                  best_len = len;
                } else {
                  if ((unsigned long)match == (unsigned long)best_match) {
                    if (len > best_len) {
                      best_match = match;
                      best_len = len;
                    }
                  }
                }
              }
            }
          __Cont___0:
            i++;
          }
                                        ;
        }
      while_break___1:;
        if ((unsigned long)best_match < (unsigned long)end) {
          beg = best_match;
          len = best_len;
          goto success_in_len;
        }
      __Cont:
        beg = end;
      }
                                    ;
    }
  while_break:;
  failure:
    return ((size_t)-1);
  success:
    len = (size_t)(end - beg);
  success_in_len:
    off = (size_t)(beg - buf);
    *match_size = len;
    return (off);
  }
}
void dfafree(struct dfa *d);
void dfainit(struct dfa *d);
void dfaparse(char const *s, size_t len, struct dfa *d);
void dfaanalyze(struct dfa *d, int searchflag);
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0);
extern __attribute__((__nothrow__)) int isalnum(int);
extern __attribute__((__nothrow__)) int isalpha(int);
extern __attribute__((__nothrow__)) int iscntrl(int);
extern __attribute__((__nothrow__)) int isdigit(int);
extern __attribute__((__nothrow__)) int islower(int);
extern __attribute__((__nothrow__)) int isgraph(int);
extern __attribute__((__nothrow__)) int isprint(int);
extern __attribute__((__nothrow__)) int ispunct(int);
extern __attribute__((__nothrow__)) int isspace(int);
extern __attribute__((__nothrow__)) int isupper(int);
extern __attribute__((__nothrow__)) int isxdigit(int);
extern __attribute__((__nothrow__)) int toupper(int __c);
extern __attribute__((__nothrow__)) int isblank(int);
extern __attribute__((__nothrow__)) char *(__attribute__((__nonnull__(1, 2))) strncpy)(char *__restrict __dest,
                                                                                       char const *__restrict __src,
                                                                                       size_t __n);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcoll)(char const *__s1,
                                                                                    char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *setlocale(int __category, char const *__locale);
extern __attribute__((__nothrow__)) int wctob(wint_t __c);
extern __attribute__((__nothrow__)) size_t wcrtomb(char *__restrict __s, wchar_t __wc,
                                                   mbstate_t *__restrict __ps);
extern __attribute__((__nothrow__)) int iswalpha(wint_t __wc);
extern __attribute__((__nothrow__)) wctype_t wctype(char const *__property);
extern __attribute__((__nothrow__)) int iswctype(wint_t __wc, wctype_t __desc);
extern __attribute__((__nothrow__)) wint_t towupper(wint_t __wc);
static unsigned char to_uchar___0(char ch) {
  {
    return ((unsigned char)ch);
  }
}
static void dfamust(struct dfa *d);
static void regexp(void);
static void dfambcache(struct dfa *d) {
  int i;
  char c;
  unsigned char uc;
  mbstate_t s;
  wchar_t wc;
  size_t tmp___0;
                   
  {
    i = -128;
    {
      while (1) {
                                     ;
        if (!(i <= 127)) {
          goto while_break;
        }
        {
          c = (char)i;
          uc = (unsigned char)i;
          s.__count = 0;
          s.__value.__wch = 0U;
          tmp___0 = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */)((char const *)(&c)),
                            (size_t)1, (mbstate_t * /* __restrict  */)(&s));
        }
        if (tmp___0 <= 1UL) {
          d->mbrtowc_cache[uc] = (wint_t)wc;
        } else {
          d->mbrtowc_cache[uc] = 4294967295U;
        }
        i++;
      }

    }
  while_break:;
    return;
  }
}
static size_t mbs_to_wchar(wint_t *pwc, char const *s, size_t n, struct dfa *d) {
  unsigned char uc;
  wint_t wc;
              
                
             
  {
    uc = (unsigned char)*(s + 0);
    wc = d->mbrtowc_cache[uc];
                            
       



       






       

       
     
    *pwc = wc;
    return ((size_t)1);
  }
}
static _Bool tstbit(unsigned int b, charclass_word *const c) {
  {
    return ((_Bool)((*(c + b / 32U) >> b % 32U) & 1U));
  }
}
static void setbit(unsigned int b, charclass_word *c) {
  {
    *(c + b / 32U) |= 1U << b % 32U;
    return;
  }
}
static void clrbit(unsigned int b, charclass_word *c) {
  {
    *(c + b / 32U) &= ~(1U << b % 32U);
    return;
  }
}
static void copyset(charclass_word *const src, charclass_word *dst) {
  {
    {
      memcpy((void * /* __restrict  */)((void *)dst), (void const * /* __restrict  */)((void const *)src),
             sizeof(charclass));
    }
    return;
  }
}
static void zeroset(charclass_word *s) {
  {
    {
      memset((void *)s, 0, sizeof(charclass));
    }
    return;
  }
}
static void notset(charclass_word *s) {
  int i;
  {
    i = 0;
    {
      while (1) {
                                     ;
        if (!(i < 8)) {
          goto while_break;
        }
        *(s + i) = (((1U << 31) << 1) - 1U) & ~*(s + i);
        i++;
      }

    }
  while_break:;
    return;
  }
}
static _Bool equal(charclass_word *const s1, charclass_word *const s2) {
  int tmp;
  {
    {
      tmp = memcmp((void const *)s1, (void const *)s2, sizeof(charclass));
    }
    return ((_Bool)(tmp == 0));
  }
}
static void *maybe_realloc(void *ptr, size_t nitems, size_t *nalloc, size_t itemsize) {
  void *tmp;
  {
    if (nitems < *nalloc) {
      return (ptr);
    }
    {
      *nalloc = nitems;
      tmp = x2nrealloc(ptr, nalloc, itemsize);
    }
    return (tmp);
  }
}
static size_t dfa_charclass_index(struct dfa *d, charclass_word *const s) {
  size_t i;
  _Bool tmp;
  {
    i = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(i < d->cindex)) {
          goto while_break;
        }
        {
          tmp = equal(s, (charclass_word * /* const  */)(*(d->charclasses + i)));
        }
        if (tmp) {
          return (i);
        }
        i++;
      }
                                    ;
    }
  while_break : {
    d->charclasses = (charclass *)maybe_realloc((void *)d->charclasses, d->cindex, &d->calloc,
                                                sizeof(*(d->charclasses)));
    (d->cindex)++;
    copyset(s, *(d->charclasses + i));
  }
    return (i);
  }
}
static struct dfa *dfa___0;
static size_t charclass_index(charclass_word *const s) {
  size_t tmp;
  {
    {
      tmp = dfa_charclass_index(dfa___0, s);
    }
    return (tmp);
  }
}
static reg_syntax_t syntax_bits;
static reg_syntax_t syntax_bits_set;
static _Bool case_fold;
static unsigned char eolbyte___0;
static int sbit[256];
static charclass letters;
static charclass newline;
static int char_context(unsigned char c) {
  unsigned short const **tmp;
  {
    if ((int)c == (int)eolbyte___0) {
      return (4);
    }
    {
      tmp = __ctype_b_loc();
    }
    if ((int const) * (*tmp + (int)c) & 8) {
      return (2);
    } else {
      if ((int)c == 95) {
        return (2);
      }
    }
    return (1);
  }
}
static int wchar_context(wint_t wc) {





















}
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol) {
  unsigned int i;
  {
    syntax_bits_set = (reg_syntax_t)1;
    syntax_bits = bits;
    case_fold = (_Bool)(fold != 0);
    eolbyte___0 = eol;
    i = 0U;
    {
      while (1) {
                                     ;
        if (!(i < 256U)) {
          goto while_break;
        }
        {
          sbit[i] = char_context((unsigned char)i);
        }
        if (sbit[i] == 2) {
          goto case_2;
        }
        if (sbit[i] == 4) {
          goto case_4;
        }
        goto switch_break;
      case_2 : {
        setbit(i, letters);
      }
        goto switch_break;
      case_4 : {
        setbit(i, newline);
      }
        goto switch_break;
      switch_break:
        i++;
      }
                                    ;
    }
  while_break:;
    return;
  }
}
static _Bool setbit_wc(wint_t wc, charclass_word *c) {















}
static void setbit_case_fold_c(int b, charclass_word *c) {
  int ub;
  int tmp;
  int i;
  int tmp___0;
  {
    {
      tmp = toupper(b);
      ub = tmp;
      i = 0;
    }
    {
      while (1) {
                                     ;
        if (!(i < 256)) {
          goto while_break;
        }
        {
          tmp___0 = toupper(i);
        }
        if (tmp___0 == ub) {
          {
            setbit((unsigned int)i, c);
          }
        }
        i++;
      }
                                    ;
    }
  while_break:;
    return;
  }
}
static int utf8 = -1;
int using_utf8(void) {
  wchar_t wc;
  mbstate_t mbs;
  size_t tmp;
  int tmp___0;
                   
  {
    if (utf8 < 0) {
      {
        mbs.__count = 0;
        mbs.__value.__wch = 0U;
        tmp = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */) "\304\200",
                      (size_t)2, (mbstate_t * /* __restrict  */)(&mbs));
      }
      if (tmp == 2UL) {





      } else {
        tmp___0 = 0;
      }
      utf8 = tmp___0;
    }
    return (utf8);
  }
}
static _Bool using_simple_locale(void);
static int unibyte_c = -1;
static _Bool using_simple_locale(void) {
  char const *locale;
  char const *tmp;
  int tmp___0;
              
  int tmp___2;
  {
    if (dfa___0->multibyte) {

    } else {
      if (unibyte_c < 0) {
        {
          tmp = (char const *)setlocale(6, (char const *)((void *)0));
          locale = tmp;
        }
        if (!locale) {

        } else {
          {
            tmp___0 = strcmp(locale, "C");
          }
          if (tmp___0 == 0) {
            tmp___2 = 1;
          } else {
            {

            }





          }
        }
        unibyte_c = tmp___2;
      }
      return ((_Bool)unibyte_c);
    }
  }
}
static char const *lexptr;
static size_t lexleft;
static token lasttok;
static _Bool laststart;
static size_t parens;
static int minrep;
static int maxrep;
static int cur_mb_len = 1;
static wint_t wctok;
static short const lonesome_lower[19] =
    {(short const)181, (short const)305, (short const)383, (short const)453,
     (short const)456, (short const)459, (short const)498, (short const)837,
     (short const)962, (short const)976, (short const)977, (short const)981,
     (short const)982, (short const)1008, (short const)1009, (short const)1010,
     (short const)1013, (short const)7835, (short const)8126};
static int case_folded_counterparts(wchar_t c, wchar_t *folded) {


































































}
static struct dfa_ctype const prednames[13] =
    {{"alpha", &isalpha, (_Bool)0},
     {"upper", &isupper, (_Bool)0},
     {"lower", &islower, (_Bool)0},
     {"digit", &isdigit, (_Bool)1},
     {"xdigit", &isxdigit, (_Bool)0},
     {"space", &isspace, (_Bool)0},
     {"punct", &ispunct, (_Bool)0},
     {"alnum", &isalnum, (_Bool)0},
     {"print", &isprint, (_Bool)0},
     {"graph", &isgraph, (_Bool)0},
     {"cntrl", &iscntrl, (_Bool)0},
     {"blank", &isblank, (_Bool)0},
     {(char const *)((void *)0), (predicate *)((void *)0), (_Bool)0}};
static struct dfa_ctype const *__attribute__((__pure__)) find_pred(char const *str) {
  unsigned int i;
  int tmp;
  {
    i = 0U;
    {
      while (1) {
                                     ;
        if (!prednames[i].name) {
          goto while_break;
        }
        {
          tmp = strcmp(str, (char const *)prednames[i].name);
        }
        if (tmp == 0) {
          goto while_break;
        }
        i++;
      }
                                    ;
    }
  while_break:;
    return ((struct dfa_ctype const * /* __attribute__((__pure__)) */)(&prednames[i]));
  }
}
static charclass zeroclass;
static token parse_bracket_exp(void) {
  _Bool invert;
  int c;
  int c1;
  int c2;
  charclass ccl;
  _Bool known_bracket_exp;
  int colon_warning_state;
  wint_t wc;
  wint_t wc2;
  wint_t wc1;
  struct mb_char_classes *work_mbc;
  size_t chars_al;
  size_t ranges_al;
  size_t ch_classes_al;
  size_t equivs_al;
  size_t coll_elems_al;
  size_t tmp;
  char *tmp___0;
  char *tmp___1;
  wint_t _wc;
  size_t nbytes;
  size_t tmp___2;
  unsigned char tmp___3;
  char *tmp___4;
  char *tmp___5;
  wint_t _wc___0;
  size_t nbytes___0;
  size_t tmp___6;
  unsigned char tmp___7;
  char *tmp___8;
  char *tmp___9;
  wint_t _wc___1;
  size_t nbytes___1;
  size_t tmp___10;
  unsigned char tmp___11;
  char str[33];
  size_t len;
  char *tmp___12;
  char *tmp___13;
  wint_t _wc___2;
  size_t nbytes___2;
  size_t tmp___14;
  unsigned char tmp___15;
  size_t tmp___16;
  char *tmp___17;
  char *tmp___18;
  wint_t _wc___3;
  size_t nbytes___3;
  size_t tmp___19;
  unsigned char tmp___20;
  char const *class;
  char const *tmp___23;
  int tmp___24;
  int tmp___25;
  struct dfa_ctype const *pred;
  struct dfa_ctype const *tmp___26;
  char *tmp___27;
  wctype_t wt;
  wctype_t tmp___28;
  size_t tmp___29;
  int tmp___30;
  char *tmp___31;
  char *tmp___32;
  wint_t _wc___4;
  size_t nbytes___4;
  size_t tmp___33;
  unsigned char tmp___34;
  char *tmp___35;
  char *tmp___36;
  wint_t _wc___5;
  size_t nbytes___5;
  size_t tmp___37;
  unsigned char tmp___38;
  char *tmp___39;
  char *tmp___40;
  wint_t _wc___6;
  size_t nbytes___6;
  size_t tmp___41;
  unsigned char tmp___42;
  char *tmp___43;
  char *tmp___44;
  wint_t _wc___7;
  size_t nbytes___7;
  size_t tmp___45;
  unsigned char tmp___46;
  char *tmp___47;
  char *tmp___48;
  wint_t _wc___8;
  size_t nbytes___8;
  size_t tmp___49;
  unsigned char tmp___50;
  wint_t tmp___51;
  size_t tmp___52;
  wint_t tmp___53;
  size_t tmp___54;
  int tmp___55;
  int tmp___56;
  int uc;
  int tmp___57;
  int uc2;
  int tmp___58;
  int uc1;
  int tmp___59;
  _Bool tmp___60;
  char *tmp___61;
  char *tmp___62;
  wint_t _wc___9;
  size_t nbytes___9;
  size_t tmp___63;
  unsigned char tmp___64;
  int tmp___65;
  wchar_t folded[22];
  int i;
  int n;
  int tmp___66;
  int tmp___67;
  size_t tmp___68;
  _Bool tmp___69;
  char *tmp___70;
  size_t tmp___72;
  _Bool tmp___73;
  size_t tmp___74;
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
  {
    known_bracket_exp = (_Bool)1;
    wc1 = (wint_t)0;
    coll_elems_al = (size_t)0;
    equivs_al = coll_elems_al;
    ch_classes_al = equivs_al;
    ranges_al = ch_classes_al;
    chars_al = ranges_al;
    if (dfa___0->multibyte) {
      {
        dfa___0->mbcsets = (struct mb_char_classes *)maybe_realloc((void *)dfa___0->mbcsets,
                                                                   dfa___0->nmbcsets,
                                                                   &dfa___0->mbcsets_alloc,
                                                                   sizeof(*(dfa___0->mbcsets)));
        tmp = dfa___0->nmbcsets;
        (dfa___0->nmbcsets)++;
        work_mbc = dfa___0->mbcsets + tmp;
        memset((void *)work_mbc, 0, sizeof(*work_mbc));
      }
    } else {
      work_mbc = (struct mb_char_classes *)((void *)0);
    }
    {
      memset((void *)(ccl), 0, sizeof(ccl));
    }
    {
      while (1) {
                                     ;
        if (!lexleft) {
          {
            tmp___1 = gettext("unbalanced [");
          }
          if ((unsigned long)tmp___1 != (unsigned long)((char *)0)) {
            {
              tmp___0 = gettext("unbalanced [");
              dfaerror((char const *)tmp___0);
            }
          } else {
            lasttok = (token)-1;
            return (lasttok);
          }
        } else {
          {
            tmp___2 = mbs_to_wchar(&_wc, lexptr, lexleft, dfa___0);
            nbytes = tmp___2;
            cur_mb_len = (int)nbytes;
            wc = _wc;
          }
          if (nbytes == 1UL) {
            {
              tmp___3 = to_uchar___0((char)*lexptr);
              c = (int)tmp___3;
            }
          } else {
            c = -1;
          }
          lexptr += nbytes;
          lexleft -= nbytes;
        }
        goto while_break;
      }
                                     ;
    }
  while_break:;
    if (c == 94) {
      {
        while (1) {
                                           ;
          if (!lexleft) {
            {
              tmp___5 = gettext("unbalanced [");
            }
            if ((unsigned long)tmp___5 != (unsigned long)((char *)0)) {
              {
                tmp___4 = gettext("unbalanced [");
                dfaerror((char const *)tmp___4);
              }
            } else {
              lasttok = (token)-1;
              return (lasttok);
            }
          } else {
            {
              tmp___6 = mbs_to_wchar(&_wc___0, lexptr, lexleft, dfa___0);
              nbytes___0 = tmp___6;
              cur_mb_len = (int)nbytes___0;
              wc = _wc___0;
            }
            if (nbytes___0 == 1UL) {
              {
                tmp___7 = to_uchar___0((char)*lexptr);
                c = (int)tmp___7;
              }
            } else {
              c = -1;
            }
            lexptr += nbytes___0;
            lexleft -= nbytes___0;
          }
          goto while_break___0;
        }
                                       ;
      }
    while_break___0 : {
      invert = (_Bool)1;
      known_bracket_exp = using_simple_locale();
    }
    } else {
      invert = (_Bool)0;
    }
    colon_warning_state = c == 58;
    {
      while (1) {
                                         ;
        c1 = 256;
        colon_warning_state &= -3;
        if (c == 91) {
          {
            while (1) {
                                               ;
              if (!lexleft) {
                {
                  tmp___9 = gettext("unbalanced [");
                }
                if ((unsigned long)tmp___9 != (unsigned long)((char *)0)) {
                  {
                    tmp___8 = gettext("unbalanced [");
                    dfaerror((char const *)tmp___8);
                  }
                } else {
                  lasttok = (token)-1;
                  return (lasttok);
                }
              } else {
                {
                  tmp___10 = mbs_to_wchar(&_wc___1, lexptr, lexleft, dfa___0);
                  nbytes___1 = tmp___10;
                  cur_mb_len = (int)nbytes___1;
                  wc1 = _wc___1;
                }
                if (nbytes___1 == 1UL) {
                  {
                    tmp___11 = to_uchar___0((char)*lexptr);
                    c1 = (int)tmp___11;
                  }
                } else {
                  c1 = -1;
                }
                lexptr += nbytes___1;
                lexleft -= nbytes___1;
              }
              goto while_break___2;
            }
                                           ;
          }
        while_break___2:;
          if (c1 == 58) {
            if (syntax_bits & ((1UL << 1) << 1)) {
              goto _L___0;
            } else {
              goto _L___1;
            }
          } else {
          _L___1:
            if (c1 == 46) {
              goto _L___0;
            } else {
              if (c1 == 61) {
              _L___0:
                len = (size_t)0;
                {
                  while (1) {
                                                     ;
                    {
                      while (1) {
                                                         ;
                        if (!lexleft) {
                          {
                            tmp___13 = gettext("unbalanced [");
                          }
                          if ((unsigned long)tmp___13 != (unsigned long)((char *)0)) {
                            {
                              tmp___12 = gettext("unbalanced [");
                              dfaerror((char const *)tmp___12);
                            }
                          } else {
                            lasttok = (token)-1;
                            return (lasttok);
                          }
                        } else {
                          {
                            tmp___14 = mbs_to_wchar(&_wc___2, lexptr, lexleft, dfa___0);
                            nbytes___2 = tmp___14;
                            cur_mb_len = (int)nbytes___2;
                            wc = _wc___2;
                          }
                          if (nbytes___2 == 1UL) {
                            {
                              tmp___15 = to_uchar___0((char)*lexptr);
                              c = (int)tmp___15;
                            }
                          } else {
                            c = -1;
                          }
                          lexptr += nbytes___2;
                          lexleft -= nbytes___2;
                        }
                        goto while_break___4;
                      }
                                                     ;
                    }
                  while_break___4:;
                    if (c == c1) {
                      if ((int const) * lexptr == 93) {
                        goto while_break___3;
                      } else {
                        goto _L;
                      }
                    } else {
                    _L:
                      if (lexleft == 0UL) {
                        goto while_break___3;
                      }
                    }
                    if (len < 32UL) {
                      tmp___16 = len;
                      len++;
                      str[tmp___16] = (char)c;
                    } else {
                      str[0] = (char)'\000';
                    }
                  }
                                                 ;
                }
              while_break___3:
                str[len] = (char)'\000';
                {
                  while (1) {
                                                     ;
                    if (!lexleft) {
                      {
                        tmp___18 = gettext("unbalanced [");
                      }
                      if ((unsigned long)tmp___18 != (unsigned long)((char *)0)) {
                        {
                          tmp___17 = gettext("unbalanced [");
                          dfaerror((char const *)tmp___17);
                        }
                      } else {
                        lasttok = (token)-1;
                        return (lasttok);
                      }
                    } else {
                      {
                        tmp___19 = mbs_to_wchar(&_wc___3, lexptr, lexleft, dfa___0);
                        nbytes___3 = tmp___19;
                        cur_mb_len = (int)nbytes___3;
                        wc = _wc___3;
                      }
                      if (nbytes___3 == 1UL) {
                        {
                          tmp___20 = to_uchar___0((char)*lexptr);
                          c = (int)tmp___20;
                        }
                      } else {
                        c = -1;
                      }
                      lexptr += nbytes___3;
                      lexleft -= nbytes___3;
                    }
                    goto while_break___5;
                  }
                                                 ;
                }
              while_break___5:;
                if (c1 == 58) {
                  if (case_fold) {
                    {
                      tmp___24 = strcmp((char const *)(str), "upper");
                    }
                    if (tmp___24 == 0) {
                      tmp___23 = "alpha";
                    } else {
                      {
                        tmp___25 = strcmp((char const *)(str), "lower");
                      }
                      if (tmp___25 == 0) {
                        tmp___23 = "alpha";
                      } else {
                        tmp___23 = (char const *)(str);
                      }
                    }
                  } else {
                    tmp___23 = (char const *)(str);
                  }
                  {
                    class = tmp___23;
                    tmp___26 = (struct dfa_ctype const *)find_pred(class);
                    pred = tmp___26;
                  }
                  if (!pred) {
                    {
                      tmp___27 = gettext("invalid character class");
                      dfaerror((char const *)tmp___27);
                    }
                  }
                  if (dfa___0->multibyte) {
                    if (!pred->single_byte_only) {
                      {
                        tmp___28 = wctype(class);
                        wt = tmp___28;
                        work_mbc->ch_classes = (wctype_t *)maybe_realloc((void *)work_mbc->ch_classes,
                                                                         work_mbc->nch_classes,
                                                                         &ch_classes_al, sizeof(*(work_mbc->ch_classes)));
                        tmp___29 = work_mbc->nch_classes;
                        (work_mbc->nch_classes)++;
                        *(work_mbc->ch_classes + tmp___29) = wt;
                      }
                    }
                  }
                  c2 = 0;
                  {
                    while (1) {
                                                       ;
                      if (!(c2 < 256)) {
                        goto while_break___6;
                      }
                      {
                        tmp___30 = (*(pred->func))(c2);
                      }
                      if (tmp___30) {
                        {
                          setbit((unsigned int)c2, ccl);
                        }
                      }
                      c2++;
                    }
                                                   ;
                  }
                while_break___6:;
                } else {
                  known_bracket_exp = (_Bool)0;
                }
                colon_warning_state |= 8;
                {
                  while (1) {
                                                     ;
                    if (!lexleft) {
                      {
                        tmp___32 = gettext("unbalanced [");
                      }
                      if ((unsigned long)tmp___32 != (unsigned long)((char *)0)) {
                        {
                          tmp___31 = gettext("unbalanced [");
                          dfaerror((char const *)tmp___31);
                        }
                      } else {
                        lasttok = (token)-1;
                        return (lasttok);
                      }
                    } else {
                      {
                        tmp___33 = mbs_to_wchar(&_wc___4, lexptr, lexleft, dfa___0);
                        nbytes___4 = tmp___33;
                        cur_mb_len = (int)nbytes___4;
                        wc1 = _wc___4;
                      }
                      if (nbytes___4 == 1UL) {
                        {
                          tmp___34 = to_uchar___0((char)*lexptr);
                          c1 = (int)tmp___34;
                        }
                      } else {
                        c1 = -1;
                      }
                      lexptr += nbytes___4;
                      lexleft -= nbytes___4;
                    }
                    goto while_break___7;
                  }
                                                 ;
                }
              while_break___7:;
                goto __Cont;
              }
            }
          }
        }
        if (c == 92) {
          if (syntax_bits & 1UL) {
            {
              while (1) {
                                                 ;
                if (!lexleft) {
                  {
                    tmp___36 = gettext("unbalanced [");
                  }
                  if ((unsigned long)tmp___36 != (unsigned long)((char *)0)) {
                    {
                      tmp___35 = gettext("unbalanced [");
                      dfaerror((char const *)tmp___35);
                    }
                  } else {
                    lasttok = (token)-1;
                    return (lasttok);
                  }
                } else {
                  {
                    tmp___37 = mbs_to_wchar(&_wc___5, lexptr, lexleft, dfa___0);
                    nbytes___5 = tmp___37;
                    cur_mb_len = (int)nbytes___5;
                    wc = _wc___5;
                  }
                  if (nbytes___5 == 1UL) {
                    {
                      tmp___38 = to_uchar___0((char)*lexptr);
                      c = (int)tmp___38;
                    }
                  } else {
                    c = -1;
                  }
                  lexptr += nbytes___5;
                  lexleft -= nbytes___5;
                }
                goto while_break___8;
              }
                                             ;
            }
          while_break___8:;
          }
        }
        if (c1 == 256) {
          {
            while (1) {
                                               ;
              if (!lexleft) {
                {
                  tmp___40 = gettext("unbalanced [");
                }
                if ((unsigned long)tmp___40 != (unsigned long)((char *)0)) {
                  {
                    tmp___39 = gettext("unbalanced [");
                    dfaerror((char const *)tmp___39);
                  }
                } else {
                  lasttok = (token)-1;
                  return (lasttok);
                }
              } else {
                {
                  tmp___41 = mbs_to_wchar(&_wc___6, lexptr, lexleft, dfa___0);
                  nbytes___6 = tmp___41;
                  cur_mb_len = (int)nbytes___6;
                  wc1 = _wc___6;
                }
                if (nbytes___6 == 1UL) {
                  {
                    tmp___42 = to_uchar___0((char)*lexptr);
                    c1 = (int)tmp___42;
                  }
                } else {
                  c1 = -1;
                }
                lexptr += nbytes___6;
                lexleft -= nbytes___6;
              }
              goto while_break___9;
            }
                                           ;
          }
        while_break___9:;
        }
        if (c1 == 45) {
          {
            while (1) {
                                                ;
              if (!lexleft) {
                {
                  tmp___44 = gettext("unbalanced [");
                }
                if ((unsigned long)tmp___44 != (unsigned long)((char *)0)) {
                  {
                    tmp___43 = gettext("unbalanced [");
                    dfaerror((char const *)tmp___43);
                  }
                } else {
                  lasttok = (token)-1;
                  return (lasttok);
                }
              } else {
                {
                  tmp___45 = mbs_to_wchar(&_wc___7, lexptr, lexleft, dfa___0);
                  nbytes___7 = tmp___45;
                  cur_mb_len = (int)nbytes___7;
                  wc2 = _wc___7;
                }
                if (nbytes___7 == 1UL) {
                  {
                    tmp___46 = to_uchar___0((char)*lexptr);
                    c2 = (int)tmp___46;
                  }
                } else {
                  c2 = -1;
                }
                lexptr += nbytes___7;
                lexleft -= nbytes___7;
              }
              goto while_break___10;
            }
                                           ;
          }
        while_break___10:;
          if (c2 == 91) {
            if ((int const) * lexptr == 46) {
              known_bracket_exp = (_Bool)0;
              c2 = ']';
            }
          }
          if (c2 != 93) {
            if (c2 == 92) {
              if (syntax_bits & 1UL) {
                {
                  while (1) {
                                                      ;
                    if (!lexleft) {
                      {
                        tmp___48 = gettext("unbalanced [");
                      }
                      if ((unsigned long)tmp___48 != (unsigned long)((char *)0)) {
                        {
                          tmp___47 = gettext("unbalanced [");
                          dfaerror((char const *)tmp___47);
                        }
                      } else {
                        lasttok = (token)-1;
                        return (lasttok);
                      }
                    } else {
                      {
                        tmp___49 = mbs_to_wchar(&_wc___8, lexptr, lexleft, dfa___0);
                        nbytes___8 = tmp___49;
                        cur_mb_len = (int)nbytes___8;
                        wc2 = _wc___8;
                      }
                      if (nbytes___8 == 1UL) {
                        {
                          tmp___50 = to_uchar___0((char)*lexptr);
                          c2 = (int)tmp___50;
                        }
                      } else {
                        c2 = -1;
                      }
                      lexptr += nbytes___8;
                      lexleft -= nbytes___8;
                    }
                    goto while_break___11;
                  }
                                                 ;
                }
              while_break___11:;
              }
            }
            if (dfa___0->multibyte) {
              if (wc != 4294967295U) {
                if (wc2 != 4294967295U) {
                  {
                    work_mbc->ranges = (struct __anonstruct_ranges_39 *)maybe_realloc((void *)work_mbc->ranges,
                                                                                      work_mbc->nranges + 2UL,
                                                                                      &ranges_al,
                                                                                      sizeof(*(work_mbc->ranges)));
                  }
                  if (case_fold) {
                    {
                      tmp___51 = towlower(wc);
                      (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t)tmp___51;
                    }
                  } else {
                    (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t)wc;
                  }
                  tmp___52 = work_mbc->nranges;
                  (work_mbc->nranges)++;
                  if (case_fold) {
                    {
                      tmp___53 = towlower(wc2);
                      (work_mbc->ranges + tmp___52)->end = (wchar_t)tmp___53;
                    }
                  } else {
                    (work_mbc->ranges + tmp___52)->end = (wchar_t)wc2;
                  }
                  if (case_fold) {
                    {
                      tmp___55 = iswalpha(wc);
                    }
                    if (tmp___55) {
                      {
                        (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t)towupper(wc);
                        tmp___54 = work_mbc->nranges;
                        (work_mbc->nranges)++;
                        (work_mbc->ranges + tmp___54)->end = (wchar_t)towupper(wc2);
                      }
                    } else {
                      {
                        tmp___56 = iswalpha(wc2);
                      }
                      if (tmp___56) {
                        {
                          (work_mbc->ranges + work_mbc->nranges)->beg = (wchar_t)towupper(wc);
                          tmp___54 = work_mbc->nranges;
                          (work_mbc->nranges)++;
                          (work_mbc->ranges + tmp___54)->end = (wchar_t)towupper(wc2);
                        }
                      }
                    }
                  }
                }
              }
            } else {
              {
                tmp___60 = using_simple_locale();
              }
              if (tmp___60) {
                c1 = c;
                {
                  while (1) {
                                                      ;
                    if (!(c1 <= c2)) {
                      goto while_break___12;
                    }
                    {
                      setbit((unsigned int)c1, ccl);
                      c1++;
                    }
                  }
                                                 ;
                }
              while_break___12:;
                if (case_fold) {
                  {
                    tmp___57 = toupper(c);
                    uc = tmp___57;
                    tmp___58 = toupper(c2);
                    uc2 = tmp___58;
                    c1 = 0;
                  }
                  {
                    while (1) {
                                                        ;
                      if (!(c1 < 256)) {
                        goto while_break___13;
                      }
                      {
                        tmp___59 = toupper(c1);
                        uc1 = tmp___59;
                      }
                      if (uc <= uc1) {
                        if (uc1 <= uc2) {
                          {
                            setbit((unsigned int)c1, ccl);
                          }
                        }
                      }
                      c1++;
                    }
                                                   ;
                  }
                while_break___13:;
                }
              } else {
                known_bracket_exp = (_Bool)0;
              }
            }
            colon_warning_state |= 8;
            {
              while (1) {
                                                  ;
                if (!lexleft) {
                  {
                    tmp___62 = gettext("unbalanced [");
                  }
                  if ((unsigned long)tmp___62 != (unsigned long)((char *)0)) {
                    {
                      tmp___61 = gettext("unbalanced [");
                      dfaerror((char const *)tmp___61);
                    }
                  } else {
                    lasttok = (token)-1;
                    return (lasttok);
                  }
                } else {
                  {
                    tmp___63 = mbs_to_wchar(&_wc___9, lexptr, lexleft, dfa___0);
                    nbytes___9 = tmp___63;
                    cur_mb_len = (int)nbytes___9;
                    wc1 = _wc___9;
                  }
                  if (nbytes___9 == 1UL) {
                    {
                      tmp___64 = to_uchar___0((char)*lexptr);
                      c1 = (int)tmp___64;
                    }
                  } else {
                    c1 = -1;
                  }
                  lexptr += nbytes___9;
                  lexleft -= nbytes___9;
                }
                goto while_break___14;
              }
                                             ;
            }
          while_break___14:;
            goto __Cont;
          }
          lexptr -= cur_mb_len;
          lexleft += (size_t)cur_mb_len;
        }
        if (c == 58) {
          tmp___65 = 2;
        } else {
          tmp___65 = 4;
        }
        colon_warning_state |= tmp___65;
        if (!dfa___0->multibyte) {
          if (case_fold) {
            {
              setbit_case_fold_c(c, ccl);
            }
          } else {
            {
              setbit((unsigned int)c, ccl);
            }
          }
          goto __Cont;
        }
        if (wc == 4294967295U) {
          known_bracket_exp = (_Bool)0;
        } else {
          if (case_fold) {
            {
              tmp___66 = case_folded_counterparts((wchar_t)wc, folded + 1);
              tmp___67 = tmp___66 + 1;
            }
          } else {
            tmp___67 = 1;
          }
          n = tmp___67;
          folded[0] = (wchar_t)wc;
          i = 0;
          {
            while (1) {
                                                ;
              if (!(i < n)) {
                goto while_break___15;
              }
              {
                tmp___69 = setbit_wc((wint_t)folded[i], ccl);
              }
              if (!tmp___69) {
                {
                  work_mbc->chars = (wchar_t *)maybe_realloc((void *)work_mbc->chars, work_mbc->nchars,
                                                             &chars_al, sizeof(*(work_mbc->chars)));
                  tmp___68 = work_mbc->nchars;
                  (work_mbc->nchars)++;
                  *(work_mbc->chars + tmp___68) = folded[i];
                }
              }
              i++;
            }
                                           ;
          }
        while_break___15:;
        }
      __Cont:
        wc = wc1;
        c = c1;
        if (!(c != 93)) {
          goto while_break___1;
        }
      }
                                     ;
    }
  while_break___1:;
    if (colon_warning_state == 7) {
      {
        tmp___70 = gettext("character class syntax is [[:space:]], not [:space:]");
        dfawarn((char const *)tmp___70);
      }
    }
    if (!known_bracket_exp) {
      return ((token)257);
    }
    if (dfa___0->multibyte) {
      {
        work_mbc->invert = invert;
        tmp___73 = equal((charclass_word * /* const  */)(ccl), (charclass_word * /* const  */)(zeroclass));
      }
      if (tmp___73) {
        work_mbc->cset = (ptrdiff_t)-1;
      } else {
        {
          tmp___72 = charclass_index((charclass_word * /* const  */)(ccl));
          work_mbc->cset = (ptrdiff_t)tmp___72;
        }
      }
      return ((token)273);
    }
    if (invert) {
      if (!(!dfa___0->multibyte)) {
        {
          __assert_fail("!dfa->multibyte", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c",
                        1232U, "parse_bracket_exp");
        }
      }
      {
        notset(ccl);
      }
      if (syntax_bits & ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
        {
          clrbit((unsigned int)eolbyte___0, ccl);
        }
      }
    }
    {
      tmp___74 = charclass_index((charclass_word * /* const  */)(ccl));
    }
    return ((token)(275UL + tmp___74));
  }
}
static token lex(void) {
  int c;
  int c2;
  _Bool backslash;
  charclass ccl;
  int i;
  wint_t _wc;
  size_t nbytes;
  size_t tmp;
  unsigned char tmp___0;
  char *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  char const *p;
  char const *lim;
  char *tmp___8;
  char const *tmp___9;
  char const *tmp___10;
  char *tmp___11;
  size_t tmp___12;
  unsigned short const **tmp___13;
  size_t tmp___14;
  char const *lexptr_saved;
  size_t lexleft_saved;
  unsigned short const **tmp___15;
  size_t tmp___16;
  size_t tmp___17;
  unsigned short const **tmp___18;
                    
                    
                    
                    
                    
                    
  {
    backslash = (_Bool)0;
    i = 0;
    {
      while (1) {
                                     ;
        if (!(i < 2)) {
          goto while_break;
        }
        {
          while (1) {
                                             ;
            if (!lexleft) {
              lasttok = (token)-1;
              return (lasttok);
            } else {
              {
                tmp = mbs_to_wchar(&_wc, lexptr, lexleft, dfa___0);
                nbytes = tmp;
                cur_mb_len = (int)nbytes;
                wctok = _wc;
              }
              if (nbytes == 1UL) {
                {
                  tmp___0 = to_uchar___0((char)*lexptr);
                  c = (int)tmp___0;
                }
              } else {
                c = -1;
              }
              lexptr += nbytes;
              lexleft -= nbytes;
            }
            goto while_break___0;
          }
                                        ;
        }
      while_break___0:;
        if (c == 92) {
          goto case_92;
        }
        if (c == 94) {
          goto case_94;
        }
        if (c == 36) {
          goto case_36;
        }
        if (c == 49) {
          goto case_49;
        }
        if (c == 50) {
          goto case_49;
        }
        if (c == 51) {
          goto case_49;
        }
        if (c == 52) {
          goto case_49;
        }
        if (c == 53) {
          goto case_49;
        }
        if (c == 54) {
          goto case_49;
        }
        if (c == 55) {
          goto case_49;
        }
        if (c == 56) {
          goto case_49;
        }
        if (c == 57) {
          goto case_49;
        }
        if (c == 96) {
          goto case_96;
        }
        if (c == 39) {
          goto case_39;
        }
        if (c == 60) {
          goto case_60;
        }
        if (c == 62) {
          goto case_62;
        }
        if (c == 98) {
          goto case_98;
        }
        if (c == 66) {
          goto case_66;
        }
        if (c == 63) {
          goto case_63;
        }
        if (c == 42) {
          goto case_42;
        }
        if (c == 43) {
          goto case_43;
        }
        if (c == 123) {
          goto case_123;
        }
        if (c == 124) {
          goto case_124;
        }
        if (c == 10) {
          goto case_10;
        }
        if (c == 40) {
          goto case_40;
        }
        if (c == 41) {
          goto case_41;
        }
        if (c == 46) {
          goto case_46;
        }
        if (c == 115) {
          goto case_115;
        }
        if (c == 83) {
          goto case_115;
        }
        if (c == 119) {
          goto case_119;
        }
        if (c == 87) {
          goto case_119;
        }
        if (c == 91) {
          goto case_91;
        }
        goto normal_char;
      case_92:
        if (backslash) {
          goto normal_char;
        }
        if (lexleft == 0UL) {
          {
            tmp___1 = gettext("unfinished \\ escape");
            dfaerror((char const *)tmp___1);
          }
        }
        backslash = (_Bool)1;
        goto switch_break;
      case_94:
        if (backslash) {
          goto normal_char;
        }
        if (syntax_bits & (((1UL << 1) << 1) << 1)) {
          lasttok = (token)258;
          return (lasttok);
        } else {
          if (lasttok == -1L) {
            lasttok = (token)258;
            return (lasttok);
          } else {
            if (lasttok == 270L) {
              lasttok = (token)258;
              return (lasttok);
            } else {
              if (lasttok == 269L) {
                lasttok = (token)258;
                return (lasttok);
              }
            }
          }
        }
        goto normal_char;
      case_36:
        if (backslash) {
          goto normal_char;
        }
        if (syntax_bits & (((1UL << 1) << 1) << 1)) {
          lasttok = (token)259;
          return (lasttok);
        } else {
          if (lexleft == 0UL) {
            lasttok = (token)259;
            return (lasttok);
          } else {
            if (syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
              if (lexleft > 0UL) {
                if ((int const) * lexptr == 41) {
                  tmp___2 = 1;
                } else {
                  tmp___2 = 0;
                }
              } else {
                tmp___2 = 0;
              }
              tmp___4 = tmp___2;
            } else {
              if (lexleft > 1UL) {
                if ((int const) * (lexptr + 0) == 92) {
                  if ((int const) * (lexptr + 1) == 41) {
                    tmp___3 = 1;
                  } else {
                    tmp___3 = 0;
                  }
                } else {
                  tmp___3 = 0;
                }
              } else {
                tmp___3 = 0;
              }
              tmp___4 = tmp___3;
            }
            if (tmp___4) {
              lasttok = (token)259;
              return (lasttok);
            } else {
              if (syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                if (lexleft > 0UL) {
                  if ((int const) * lexptr == 124) {
                    tmp___5 = 1;
                  } else {
                    tmp___5 = 0;
                  }
                } else {
                  tmp___5 = 0;
                }
                tmp___7 = tmp___5;
              } else {
                if (lexleft > 1UL) {
                  if ((int const) * (lexptr + 0) == 92) {
                    if ((int const) * (lexptr + 1) == 124) {
                      tmp___6 = 1;
                    } else {
                      tmp___6 = 0;
                    }
                  } else {
                    tmp___6 = 0;
                  }
                } else {
                  tmp___6 = 0;
                }
                tmp___7 = tmp___6;
              }
              if (tmp___7) {
                lasttok = (token)259;
                return (lasttok);
              } else {
                if (syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
                  if (lexleft > 0UL) {
                    if ((int const) * lexptr == 10) {
                      lasttok = (token)259;
                      return (lasttok);
                    }
                  }
                }
              }
            }
          }
        }
        goto normal_char;
      case_49:
        if (backslash) {
          if (!(syntax_bits & ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
            laststart = (_Bool)0;
            lasttok = (token)257;
            return (lasttok);
          }
        }
        goto normal_char;
      case_96:
        if (backslash) {
          if (!(syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
            lasttok = (token)258;
            return (lasttok);
          }
        }
        goto normal_char;
      case_39:
        if (backslash) {
          if (!(syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
            lasttok = (token)259;
            return (lasttok);
          }
        }
        goto normal_char;
      case_60:
        if (backslash) {
          if (!(syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
            lasttok = (token)260;
            return (lasttok);
          }
        }
        goto normal_char;
      case_62:
        if (backslash) {
          if (!(syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
            lasttok = (token)261;
            return (lasttok);
          }
        }
        goto normal_char;
      case_98:
        if (backslash) {
          if (!(syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
            lasttok = (token)262;
            return (lasttok);
          }
        }
        goto normal_char;
      case_66:
        if (backslash) {
          if (!(syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
            lasttok = (token)263;
            return (lasttok);
          }
        }
        goto normal_char;
      case_63:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & (1UL << 1)) != 0UL)) {
          goto normal_char;
        }
        if (!(syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
          if (laststart) {
            goto normal_char;
          }
        }
        lasttok = (token)264;
        return (lasttok);
      case_42:
        if (backslash) {
          goto normal_char;
        }
        if (!(syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
          if (laststart) {
            goto normal_char;
          }
        }
        lasttok = (token)265;
        return (lasttok);
      case_43:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & (1UL << 1)) != 0UL)) {
          goto normal_char;
        }
        if (!(syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
          if (laststart) {
            goto normal_char;
          }
        }
        lasttok = (token)266;
        return (lasttok);
      case_123:
        if (!(syntax_bits & (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
        if (!(syntax_bits & ((((1UL << 1) << 1) << 1) << 1))) {
          if (laststart) {
            goto normal_char;
          }
        }
        p = lexptr;
        lim = p + lexleft;
        maxrep = -1;
        minrep = maxrep;
        {
          while (1) {
                                             ;
            if ((unsigned long)p != (unsigned long)lim) {
              if (!((unsigned int)*p - 48U <= 9U)) {
                goto while_break___1;
              }
            } else {
              goto while_break___1;
            }
            if (minrep < 0) {
              minrep = (int)((int const) * p - 48);
            } else {
              if (32768 < (minrep * 10 + (int)*p) - 48) {
                minrep = 32768;
              } else {
                minrep = (minrep * 10 + (int)*p) - 48;
              }
            }
            p++;
          }
                                        ;
        }
      while_break___1:;
        if ((unsigned long)p != (unsigned long)lim) {
          if ((int const) * p != 44) {
            maxrep = minrep;
          } else {
            if (minrep < 0) {
              minrep = 0;
            }
            {
              while (1) {
                                                 ;
                p++;
                if ((unsigned long)p != (unsigned long)lim) {
                  if (!((unsigned int)*p - 48U <= 9U)) {
                    goto while_break___2;
                  }
                } else {
                  goto while_break___2;
                }
                if (maxrep < 0) {
                  maxrep = (int)((int const) * p - 48);
                } else {
                  if (32768 < (maxrep * 10 + (int)*p) - 48) {
                    maxrep = 32768;
                  } else {
                    maxrep = (maxrep * 10 + (int)*p) - 48;
                  }
                }
              }
                                            ;
            }
          while_break___2:;
          }
        }
        if (!backslash) {
          goto _L___3;
        } else {
          if ((unsigned long)p != (unsigned long)lim) {
            tmp___9 = p;
            p++;
            if ((int const) * tmp___9 == 92) {
            _L___3:
              if ((unsigned long)p != (unsigned long)lim) {
                tmp___10 = p;
                p++;
                if ((int const) * tmp___10 == 125) {
                  if (0 <= minrep) {
                    if (!(maxrep < 0)) {
                      if (!(minrep <= maxrep)) {
                        goto _L___4;
                      }
                    }
                  } else {
                    goto _L___4;
                  }
                } else {
                  goto _L___4;
                }
              } else {
                goto _L___4;
              }
            } else {
              goto _L___4;
            }
          } else {
          _L___4:
            if (syntax_bits & (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
              goto normal_char;
            }
            {
              tmp___8 = gettext("Invalid content of \\{\\}");
              dfaerror((char const *)tmp___8);
            }
          }
        }
        if (32767 < maxrep) {
          {
            tmp___11 = gettext("Regular expression too big");
            dfaerror((char const *)tmp___11);
          }
        }
        lexptr = p;
        lexleft = (size_t)(lim - p);
        laststart = (_Bool)0;
        lasttok = (token)267;
        return (lasttok);
      case_124:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
        laststart = (_Bool)1;
        lasttok = (token)269;
        return (lasttok);
      case_10:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        } else {
          if (backslash) {
            goto normal_char;
          } else {
            if (!(syntax_bits & (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
              goto normal_char;
            }
          }
        }
        laststart = (_Bool)1;
        lasttok = (token)269;
        return (lasttok);
      case_40:
        if ((int)backslash != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
        parens++;
        laststart = (_Bool)1;
        lasttok = (token)270;
        return (lasttok);
      case_41:
        if ((int)backslash != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
        if (parens == 0UL) {
          if (syntax_bits & (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
            goto normal_char;
          }
        }
        parens--;
        laststart = (_Bool)0;
        lasttok = (token)271;
        return (lasttok);
      case_46:
        if (backslash) {
          goto normal_char;
        }
        if (dfa___0->multibyte) {
          laststart = (_Bool)0;
          lasttok = (token)272;
          return (lasttok);
        }
        {
          zeroset(ccl);
          notset(ccl);
        }
        if (!(syntax_bits & ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1))) {
          {
            clrbit((unsigned int)eolbyte___0, ccl);
          }
        }
        if (syntax_bits & (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          {
            clrbit((unsigned int)'\000', ccl);
          }
        }
        {
          laststart = (_Bool)0;
          tmp___12 = charclass_index((charclass_word * /* const  */)(ccl));
          lasttok = (token)(275UL + tmp___12);
        }
        return (lasttok);
      case_115:
        if (!backslash) {
          goto normal_char;
        } else {
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
            goto normal_char;
          }
        }
        if (!dfa___0->multibyte) {
          {
            zeroset(ccl);
            c2 = 0;
          }
          {
            while (1) {
                                               ;
              if (!(c2 < 256)) {
                goto while_break___3;
              }
              {
                tmp___13 = __ctype_b_loc();
              }
              if ((int const) * (*tmp___13 + c2) & 8192) {
                {
                  setbit((unsigned int)c2, ccl);
                }
              }
              c2++;
            }
                                           ;
          }
        while_break___3:;
          if (c == 83) {
            {
              notset(ccl);
            }
          }
          {
            laststart = (_Bool)0;
            tmp___14 = charclass_index((charclass_word * /* const  */)(ccl));
            lasttok = (token)(275UL + tmp___14);
          }
          return (lasttok);
        }
        {
          while (1) {
                                             ;
            lexptr_saved = lexptr;
            lexleft_saved = lexleft;
            if (c == 115) {
              lexptr = "[:space:]]";
            } else {
              lexptr = "^[:space:]]";
            }
            {
              lexleft = strlen(lexptr);
              lasttok = parse_bracket_exp();
              lexptr = lexptr_saved;
              lexleft = lexleft_saved;
            }
            goto while_break___4;
          }
                                         ;
        }
      while_break___4:
        laststart = (_Bool)0;
        return (lasttok);
      case_119:
        if (!backslash) {
          goto normal_char;
        } else {
          if (syntax_bits & (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
            goto normal_char;
          }
        }
        {
          zeroset(ccl);
          c2 = 0;
        }
        {
          while (1) {
                                             ;
            if (!(c2 < 256)) {
              goto while_break___5;
            }
            {
              tmp___15 = __ctype_b_loc();
            }
            if ((int const) * (*tmp___15 + c2) & 8) {
              {
                setbit((unsigned int)c2, ccl);
              }
            } else {
              if (c2 == 95) {
                {
                  setbit((unsigned int)c2, ccl);
                }
              }
            }
            c2++;
          }
                                         ;
        }
      while_break___5:;
        if (c == 87) {
          {
            notset(ccl);
          }
        }
        {
          laststart = (_Bool)0;
          tmp___16 = charclass_index((charclass_word * /* const  */)(ccl));
          lasttok = (token)(275UL + tmp___16);
        }
        return (lasttok);
      case_91:
        if (backslash) {
          goto normal_char;
        }
        {
          laststart = (_Bool)0;
          lasttok = parse_bracket_exp();
        }
        return (lasttok);
      normal_char:
        laststart = (_Bool)0;
        if (dfa___0->multibyte) {
          lasttok = (token)274;
          return (lasttok);
        }
        if (case_fold) {
          {
            tmp___18 = __ctype_b_loc();
          }
          if ((int const) * (*tmp___18 + c) & 1024) {
            {
              zeroset(ccl);
              setbit_case_fold_c(c, ccl);
              tmp___17 = charclass_index((charclass_word * /* const  */)(ccl));
              lasttok = (token)(275UL + tmp___17);
            }
            return (lasttok);
          }
        }
        lasttok = (token)c;
        return (lasttok);
      switch_break:
        i++;
      }
                                    ;
    }
  while_break : {
    abort();
  }
    return ((token)-1);
  }
}
static token tok;
static size_t depth;
static void addtok_mb(token t, int mbprop) {
  size_t tmp;
  {
    if (dfa___0->talloc == dfa___0->tindex) {
      {
        dfa___0->tokens = (token *)x2nrealloc((void *)dfa___0->tokens, &dfa___0->talloc,
                                              sizeof(*(dfa___0->tokens)));
      }
      if (dfa___0->multibyte) {
        {
          dfa___0->multibyte_prop = (int *)xnrealloc((void *)dfa___0->multibyte_prop,
                                                     dfa___0->talloc, sizeof(*(dfa___0->multibyte_prop)));
        }
      }
    }
    if (dfa___0->multibyte) {
      *(dfa___0->multibyte_prop + dfa___0->tindex) = mbprop;
    }
    tmp = dfa___0->tindex;
    (dfa___0->tindex)++;
    *(dfa___0->tokens + tmp) = t;
    if (t == 264L) {
      goto case_264;
    }
    if (t == 265L) {
      goto case_264;
    }
    if (t == 266L) {
      goto case_264;
    }
    if (t == 268L) {
      goto case_268;
    }
    if (t == 269L) {
      goto case_268;
    }
    if (t == 257L) {
      goto case_257;
    }
    if (t == 256L) {
      goto case_256;
    }
    goto switch_default;
  case_264:
    goto switch_break;
  case_268:
    depth--;
    goto switch_break;
  case_257:
    dfa___0->fast = (_Bool)0;
  switch_default:
    (dfa___0->nleaves)++;
  case_256:
    depth++;
    goto switch_break;
  switch_break:;
    if (depth > dfa___0->depth) {
      dfa___0->depth = depth;
    }
    return;
  }
}
static void addtok_wc(wint_t wc);
static void addtok(token t) {
                
                                   
           
  {
    if (dfa___0->multibyte) {





































































    } else {
      {
        addtok_mb(t, 3);
      }
    }
    return;
  }
}
static void addtok_wc(wint_t wc) {





















































}
static void add_utf8_anychar(void);
static charclass const utf8_classes[5] = {{(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, (charclass_word)0, (charclass_word)0},
                                          {((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U, ((1U << 31) << 1) - 1U,
                                           (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0},
                                          {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           (charclass_word)0, (charclass_word)0, 4294967292U & (((1U << 31) << 1) - 1U), (charclass_word)0},
                                          {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)65535},
                                          {(charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)0,
                                           (charclass_word)0, (charclass_word)0, (charclass_word)0, (charclass_word)16711680}};
static void add_utf8_anychar(void) {









































































}
static void atom(void) {
  wchar_t folded[21];
  int i;
  int n;
  int tmp;
  char *tmp___0;
  int tmp___1;
                   
                    
  {
    if (tok == 274L) {
      if (wctok == 4294967295U) {
        {
          addtok((token)257);
        }
      } else {
        {
          addtok_wc(wctok);
        }
        if (case_fold) {
          {
            tmp = case_folded_counterparts((wchar_t)wctok, folded);
            n = tmp;
            i = 0;
          }
          {
            while (1) {
                                           ;
              if (!(i < n)) {
                goto while_break;
              }
              {
                addtok_wc((wint_t)folded[i]);
                addtok((token)269);
                i++;
              }
            }
                                          ;
          }
        while_break:;
        }
      }
      {
        tok = lex();
      }
    } else {
      if (tok == 272L) {
        {
          tmp___1 = using_utf8();
        }
        if (tmp___1) {
          {
            add_utf8_anychar();
            tok = lex();
          }
        } else {
          goto _L___0;
        }
      } else {
      _L___0:
        if (tok >= 0L) {
          if (tok < 256L) {
            {
              addtok(tok);
              tok = lex();
            }
          } else {
            goto _L;
          }
        } else {
        _L:
          if (tok >= 275L) {
            {
              addtok(tok);
              tok = lex();
            }
          } else {
            if (tok == 257L) {
              {
                addtok(tok);
                tok = lex();
              }
            } else {
              if (tok == 258L) {
                {
                  addtok(tok);
                  tok = lex();
                }
              } else {
                if (tok == 259L) {
                  {
                    addtok(tok);
                    tok = lex();
                  }
                } else {
                  if (tok == 260L) {
                    {
                      addtok(tok);
                      tok = lex();
                    }
                  } else {
                    if (tok == 272L) {
                      {
                        addtok(tok);
                        tok = lex();
                      }
                    } else {
                      if (tok == 273L) {
                        {
                          addtok(tok);
                          tok = lex();
                        }
                      } else {
                        if (tok == 261L) {
                          {
                            addtok(tok);
                            tok = lex();
                          }
                        } else {
                          if (tok == 262L) {
                            {
                              addtok(tok);
                              tok = lex();
                            }
                          } else {
                            if (tok == 263L) {
                              {
                                addtok(tok);
                                tok = lex();
                              }
                            } else {
                              if (tok == 270L) {
                                {
                                  tok = lex();
                                  regexp();
                                }
                                if (tok != 271L) {
                                  {
                                    tmp___0 = gettext("unbalanced (");
                                    dfaerror((char const *)tmp___0);
                                  }
                                }
                                {
                                  tok = lex();
                                }
                              } else {
                                {
                                  addtok((token)256);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return;
  }
}
static size_t __attribute__((__pure__)) nsubtoks(size_t tindex) {
  size_t ntoks1;
  size_t __attribute__((__pure__)) tmp;
  size_t __attribute__((__pure__)) tmp___0;
  {
    if (*(dfa___0->tokens + (tindex - 1UL)) == 264L) {
      goto case_264;
    }
    if (*(dfa___0->tokens + (tindex - 1UL)) == 265L) {
      goto case_264;
    }
    if (*(dfa___0->tokens + (tindex - 1UL)) == 266L) {
      goto case_264;
    }
    if (*(dfa___0->tokens + (tindex - 1UL)) == 268L) {
      goto case_268;
    }
    if (*(dfa___0->tokens + (tindex - 1UL)) == 269L) {
      goto case_268;
    }
    goto switch_default;
  switch_default:
    return ((size_t __attribute__((__pure__)))1);
  case_264 : {
    tmp = nsubtoks(tindex - 1UL);
  }
    return ((size_t __attribute__((__pure__)))1 + tmp);
  case_268 : {
    ntoks1 = (size_t)nsubtoks(tindex - 1UL);
    tmp___0 = nsubtoks((tindex - 1UL) - ntoks1);
  }
    return ((size_t __attribute__((__pure__)))((1UL + ntoks1) + (size_t)tmp___0));
    return ((unsigned long __attribute__((__pure__)))0);
  }
}
static void copytoks(size_t tindex, size_t ntokens) {
  size_t i;
  {
    if (dfa___0->multibyte) {
      i = (size_t)0;
      {
        while (1) {
                                       ;
          if (!(i < ntokens)) {
            goto while_break;
          }
          {
            addtok_mb(*(dfa___0->tokens + (tindex + i)), *(dfa___0->multibyte_prop + (tindex + i)));
            i++;
          }
        }
                                      ;
      }
    while_break:;
    } else {
      i = (size_t)0;
      {
        while (1) {
                                           ;
          if (!(i < ntokens)) {
            goto while_break___0;
          }
          {
            addtok_mb(*(dfa___0->tokens + (tindex + i)), 3);
            i++;
          }
        }
                                      ;
      }
    while_break___0:;
    }
    return;
  }
}
static void closure(void) {
  int i;
  size_t tindex;
  size_t ntokens;
  size_t __attribute__((__pure__)) tmp;
  {
    {
      atom();
    }
    {
      while (1) {
                                     ;
        if (!(tok == 264L)) {
          if (!(tok == 265L)) {
            if (!(tok == 266L)) {
              if (!(tok == 267L)) {
                goto while_break;
              }
            }
          }
        }
        if (tok == 267L) {
          if (minrep) {
            goto _L___0;
          } else {
            if (maxrep) {
            _L___0 : {
              ntokens = (size_t)nsubtoks(dfa___0->tindex);
              tindex = dfa___0->tindex - ntokens;
            }
              if (maxrep < 0) {
                {
                  addtok((token)266);
                }
              }
              if (minrep == 0) {
                {
                  addtok((token)264);
                }
              }
              i = 1;
              {
                while (1) {
                                                   ;
                  if (!(i < minrep)) {
                    goto while_break___0;
                  }
                  {
                    copytoks(tindex, ntokens);
                    addtok((token)268);
                    i++;
                  }
                }
                                              ;
              }
            while_break___0:;
              {
                while (1) {
                                                   ;
                  if (!(i < maxrep)) {
                    goto while_break___1;
                  }
                  {
                    copytoks(tindex, ntokens);
                    addtok((token)264);
                    addtok((token)268);
                    i++;
                  }
                }
                                              ;
              }
            while_break___1 : {
              tok = lex();
            }
            } else {
              goto _L;
            }
          }
        } else {
        _L:
          if (tok == 267L) {
            {
              tmp = nsubtoks(dfa___0->tindex);
              dfa___0->tindex -= (size_t)tmp;
              tok = lex();
              closure();
            }
          } else {
            {
              addtok(tok);
              tok = lex();
            }
          }
        }
      }
                                    ;
    }
  while_break:;
    return;
  }
}
static void branch(void) {
  {
    {
      closure();
    }
    {
      while (1) {
                                     ;
        if (tok != 271L) {
          if (tok != 269L) {
            if (!(tok >= 0L)) {
              goto while_break;
            }
          } else {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        {
          closure();
          addtok((token)268);
        }
      }
                                    ;
    }
  while_break:;
    return;
  }
}
static void regexp(void) {
  {
    {
      branch();
    }
    {
      while (1) {
                                     ;
        if (!(tok == 269L)) {
          goto while_break;
        }
        {
          tok = lex();
          branch();
          addtok((token)269);
        }
      }
                                    ;
    }
  while_break:;
    return;
  }
}
void dfaparse(char const *s, size_t len, struct dfa *d) {
  char *tmp;
  char *tmp___0;
                   
                   
  {
    dfa___0 = d;
    lexptr = s;
    lexleft = len;
    lasttok = (token)-1;
    laststart = (_Bool)1;
    parens = (size_t)0;
    if (dfa___0->multibyte) {
      {
        cur_mb_len = 0;
        memset((void *)(&d->mbs), 0, sizeof(d->mbs));
      }
    }
    if (!syntax_bits_set) {
      {
        tmp = gettext("no syntax specified");
        dfaerror((char const *)tmp);
      }
    }
    {
      tok = lex();
      depth = d->depth;
      regexp();
    }
    if (tok != -1L) {
      {
        tmp___0 = gettext("unbalanced )");
        dfaerror((char const *)tmp___0);
      }
    }
    {
      addtok((token)(0xffffffffffffffffUL - d->nregexps));
      addtok((token)268);
    }
    if (d->nregexps) {
      {
        addtok((token)269);
      }
    }
    (d->nregexps)++;
    return;
  }
}
static void copy(position_set const *src, position_set *dst) {
  {
    if (dst->alloc < (size_t)src->nelem) {
      {
        free((void *)dst->elems);
        dst->alloc = (size_t)src->nelem;
        dst->elems = (position *)x2nrealloc((void *)0, &dst->alloc, sizeof(*(dst->elems)));
      }
    }
    {
      memcpy((void * /* __restrict  */)((void *)dst->elems), (void const * /* __restrict  */)((void const *)src->elems),
             (size_t)(src->nelem * (size_t const)sizeof(*(dst->elems))));
      dst->nelem = (size_t)src->nelem;
    }
    return;
  }
}
static void alloc_position_set(position_set *s, size_t size) {
  {
    {
      s->elems = (position *)xnmalloc(size, sizeof(*(s->elems)));
      s->alloc = size;
      s->nelem = (size_t)0;
    }
    return;
  }
}
static void insert(position p, position_set *s) {
  size_t count;
  size_t lo;
  size_t hi;
  size_t i;
  size_t mid;
  {
    count = s->nelem;
    lo = (size_t)0;
    hi = count;
    {
      while (1) {
                                     ;
        if (!(lo < hi)) {
          goto while_break;
        }
        mid = (lo + hi) >> 1;
        if ((s->elems + mid)->index > p.index) {
          lo = mid + 1UL;
        } else {
          hi = mid;
        }
      }

    }
  while_break:;
    if (lo < count) {
      if (p.index == (s->elems + lo)->index) {
        (s->elems + lo)->constraint |= p.constraint;
        return;
      }
    }
    {
      s->elems = (position *)maybe_realloc((void *)s->elems, count, &s->alloc, sizeof(*(s->elems)));
      i = count;
    }
    {
      while (1) {
                                         ;
        if (!(i > lo)) {
          goto while_break___0;
        }
        *(s->elems + i) = *(s->elems + (i - 1UL));
        i--;
      }

    }
  while_break___0:;
    *(s->elems + lo) = p;
    (s->nelem)++;
    return;
  }
}
static void merge(position_set const *s1, position_set const *s2, position_set *m) {
  size_t i;
  size_t j;
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  size_t tmp___7;
  size_t tmp___8;
  size_t tmp___9;
  {
    i = (size_t)0;
    j = (size_t)0;
    if (m->alloc < (size_t)(s1->nelem + s2->nelem)) {
      {
        free((void *)m->elems);
        m->elems = (position *)maybe_realloc((void *)0, (size_t)(s1->nelem + s2->nelem),
                                             &m->alloc, sizeof(*(m->elems)));
      }
    }
    m->nelem = (size_t)0;
    {
      while (1) {
                                     ;
        if (i < (size_t)s1->nelem) {
          if (!(j < (size_t)s2->nelem)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        if ((s1->elems + i)->index > (s2->elems + j)->index) {
          tmp = m->nelem;
          (m->nelem)++;
          tmp___0 = i;
          i++;
          *(m->elems + tmp) = *(s1->elems + tmp___0);
        } else {
          if ((s1->elems + i)->index < (s2->elems + j)->index) {
            tmp___1 = m->nelem;
            (m->nelem)++;
            tmp___2 = j;
            j++;
            *(m->elems + tmp___1) = *(s2->elems + tmp___2);
          } else {
            tmp___3 = i;
            i++;
            *(m->elems + m->nelem) = *(s1->elems + tmp___3);
            tmp___4 = m->nelem;
            (m->nelem)++;
            tmp___5 = j;
            j++;
            (m->elems + tmp___4)->constraint |= (s2->elems + tmp___5)->constraint;
          }
        }
      }
                                    ;
    }
  while_break:;
    {
      while (1) {
                                         ;
        if (!(i < (size_t)s1->nelem)) {
          goto while_break___0;
        }
        tmp___6 = m->nelem;
        (m->nelem)++;
        tmp___7 = i;
        i++;
        *(m->elems + tmp___6) = *(s1->elems + tmp___7);
      }
                                    ;
    }
  while_break___0:;
    {
      while (1) {
                                         ;
        if (!(j < (size_t)s2->nelem)) {
          goto while_break___1;
        }
        tmp___8 = m->nelem;
        (m->nelem)++;
        tmp___9 = j;
        j++;
        *(m->elems + tmp___8) = *(s2->elems + tmp___9);
      }
                                    ;
    }
  while_break___1:;
    return;
  }
}
static void delete (position p, position_set *s) {
  size_t i;
  {
    i = (size_t)0;
    {
      while (1) {
                                     ;
                              

         
        if (p.index == (s->elems + i)->index) {
          goto while_break;
        }
        i++;
      }

    }
  while_break:;
    if (i < s->nelem) {
      (s->nelem)--;
      {
        while (1) {
                                           ;
          if (!(i < s->nelem)) {
            goto while_break___0;
          }
          *(s->elems + i) = *(s->elems + (i + 1UL));
          i++;
        }

      }
    while_break___0:;
    }
    return;
  }
}
static state_num state_index(struct dfa *d, position_set const *s, int context) {
  size_t hash;
  int constraint;
  state_num i;
  state_num j;
  {
    hash = (size_t)0;
    i = (state_num)0;
    {
      while (1) {
                                     ;
        if (!((size_t const)i < s->nelem)) {
          goto while_break;
        }
        hash ^= (s->elems + i)->index + (size_t)(s->elems + i)->constraint;
        i++;
      }
                                    ;
    }
  while_break:
    i = (state_num)0;
    {
      while (1) {
                                         ;
        if (!(i < d->sindex)) {
          goto while_break___0;
        }
        if (hash != (d->states + i)->hash) {
          goto __Cont;
        } else {
          if (s->nelem != (size_t const)(d->states + i)->elems.nelem) {
            goto __Cont;
          } else {
            if (context != (int)(d->states + i)->context) {
              goto __Cont;
            }
          }
        }
        j = (state_num)0;
        {
          while (1) {
                                             ;
            if (!((size_t const)j < s->nelem)) {
              goto while_break___1;
            }
            if ((s->elems + j)->constraint != ((d->states + i)->elems.elems + j)->constraint) {
              goto while_break___1;
            } else {
              if ((s->elems + j)->index != ((d->states + i)->elems.elems + j)->index) {
                goto while_break___1;
              }
            }
            j++;
          }
                                        ;
        }
      while_break___1:;
        if ((size_t const)j == s->nelem) {
          return (i);
        }
      __Cont:
        i++;
      }
                                    ;
    }
  while_break___0 : {
    d->states = (dfa_state *)maybe_realloc((void *)d->states, (size_t)d->sindex, &d->salloc,
                                           sizeof(*(d->states)));
    (d->states + i)->hash = hash;
    alloc_position_set(&(d->states + i)->elems, (size_t)s->nelem);
    copy(s, &(d->states + i)->elems);
    (d->states + i)->context = (unsigned char)context;
    (d->states + i)->has_backref = (_Bool)0;
    (d->states + i)->has_mbcset = (_Bool)0;
    (d->states + i)->constraint = (unsigned short)0;
    (d->states + i)->first_end = (token)0;
    (d->states + i)->mbps.nelem = (size_t)0;
    (d->states + i)->mbps.elems = (position *)((void *)0);
    j = (state_num)0;
  }
    {
      while (1) {
                                         ;
        if (!((size_t const)j < s->nelem)) {
          goto while_break___2;
        }
        if (*(d->tokens + (s->elems + j)->index) < 0L) {
          constraint = (int)(s->elems + j)->constraint;
          if ((((constraint & 15) | ((constraint >> 4) & 15)) | ((constraint >> 8) & 15)) & context) {
            (d->states + i)->constraint = (unsigned short)((int)(d->states + i)->constraint | constraint);
          }
          if (!(d->states + i)->first_end) {
            (d->states + i)->first_end = *(d->tokens + (s->elems + j)->index);
          }
        } else {
          if (*(d->tokens + (s->elems + j)->index) == 257L) {
            (d->states + i)->constraint = (unsigned short)1911;
            (d->states + i)->has_backref = (_Bool)1;
          }
        }
        j++;
      }
                                    ;
    }
  while_break___2:
    (d->sindex)++;
    return (i);
  }
}
static void epsclosure(position_set *s, struct dfa const *d, char *visited) {
  size_t i;
  size_t j;
  position p;
  position old;
  _Bool initialized;
  {
    initialized = (_Bool)0;
    i = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(i < s->nelem)) {
          goto while_break;
        }
        if (*(d->tokens + (s->elems + i)->index) >= 256L) {
          if (*(d->tokens + (s->elems + i)->index) != 257L) {
            if (*(d->tokens + (s->elems + i)->index) != 272L) {
              if (*(d->tokens + (s->elems + i)->index) != 273L) {
                if (*(d->tokens + (s->elems + i)->index) < 275L) {
                  if (!initialized) {
                    {
                      memset((void *)visited, 0, (size_t)(d->tindex * (size_t const)sizeof(*visited)));
                      initialized = (_Bool)1;
                    }
                  }
                  {
                    old = *(s->elems + i);
                    p.constraint = old.constraint;
                    delete (*(s->elems + i), s);
                  }
                  if (*(visited + old.index)) {
                    i--;
                    goto __Cont;
                  }
                  *(visited + old.index) = (char)1;
                  if (*(d->tokens + old.index) == 258L) {
                    goto case_258;
                  }
                  if (*(d->tokens + old.index) == 259L) {
                    goto case_259;
                  }
                  if (*(d->tokens + old.index) == 260L) {
                    goto case_260;
                  }
                  if (*(d->tokens + old.index) == 261L) {
                    goto case_261;
                  }
                  if (*(d->tokens + old.index) == 262L) {
                    goto case_262;
                  }
                  if (*(d->tokens + old.index) == 263L) {
                    goto case_263;
                  }
                  goto switch_default;
                case_258:
                  p.constraint &= 1092U;
                  goto switch_break;
                case_259:
                  p.constraint &= 1792U;
                  goto switch_break;
                case_260:
                  p.constraint &= 80U;
                  goto switch_break;
                case_261:
                  p.constraint &= 514U;
                  goto switch_break;
                case_262:
                  p.constraint &= 594U;
                  goto switch_break;
                case_263:
                  p.constraint &= 1317U;
                  goto switch_break;
                switch_default:
                  goto switch_break;
                switch_break:
                  j = (size_t)0;
                  {
                    while (1) {
                                                       ;
                      if (!(j < (d->follows + old.index)->nelem)) {
                        goto while_break___0;
                      }
                      {
                        p.index = ((d->follows + old.index)->elems + j)->index;
                        insert(p, s);
                        j++;
                      }
                    }
                                                  ;
                  }
                while_break___0:
                  i = (size_t)-1;
                }
              }
            }
          }
        }
      __Cont:
        i++;
      }
                                    ;
    }
  while_break:;
    return;
  }
}
static int charclass_context(charclass_word *c) {
  int context;
  unsigned int j;
  _Bool tmp;
  {
    {
      context = 0;
      tmp = tstbit((unsigned int)eolbyte___0, (charclass_word * /* const  */) c);
    }
              

     
    j = 0U;
    {
      while (1) {
                                     ;
        if (!(j < 8U)) {
          goto while_break;
        }
        if (*(c + j) & letters[j]) {
          context |= 2;
        }
        if (*(c + j) & ~(letters[j] | newline[j])) {
          context |= 1;
        }
        j++;
      }

    }
  while_break:;
    return (context);
  }
}
static int __attribute__((__pure__)) state_separate_contexts(position_set const *s) {
  int separate_contexts;
  size_t j;
  {
    separate_contexts = 0;
    j = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(j < (size_t)s->nelem)) {
          goto while_break;
        }
        if ((((s->elems + j)->constraint >> 2) & 273U) != ((s->elems + j)->constraint & 273U)) {
          separate_contexts |= 4;
        }
        if ((((s->elems + j)->constraint >> 1) & 273U) != ((s->elems + j)->constraint & 273U)) {
          separate_contexts |= 2;
        }
        j++;
      }
                                    ;
    }
  while_break:;
    return ((int __attribute__((__pure__)))separate_contexts);
  }
}
void dfaanalyze(struct dfa *d, int searchflag) {
  position *posalloc;
  position *tmp;
  position *firstpos;
  position *lastpos;
  struct __anonstruct_stkalloc_43 *stkalloc;
  struct __anonstruct_stkalloc_43 *tmp___0;
  struct __anonstruct_stkalloc_43 *stk;
  position_set tmp___1;
  position_set merged;
  int separate_contexts;
  size_t i;
  size_t j;
  position *pos;
  char *visited;
  char *tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  size_t tmp___5;
  size_t tmp___6;
  unsigned int tmp___7;
  int tmp___8;
  {
    {
      tmp = (position *)xnmalloc(d->nleaves, 2UL * sizeof(*posalloc));
      posalloc = tmp;
      firstpos = posalloc + d->nleaves;
      lastpos = firstpos + d->nleaves;
      tmp___0 = (struct __anonstruct_stkalloc_43 *)xnmalloc(d->depth, sizeof(*stkalloc));
      stkalloc = tmp___0;
      stk = stkalloc;
      tmp___2 = (char *)xnmalloc(d->tindex, sizeof(*visited));
      visited = tmp___2;
      d->searchflag = (_Bool)(searchflag != 0);
      alloc_position_set(&merged, d->nleaves);
      d->follows = (position_set *)xcalloc(d->tindex, sizeof(*(d->follows)));
      i = (size_t)0;
    }
    {
      while (1) {
                                     ;
        if (!(i < d->tindex)) {
          goto while_break;
        }
        if (*(d->tokens + i) == 256L) {
          goto case_256;
        }
        if (*(d->tokens + i) == 265L) {
          goto case_265;
        }
        if (*(d->tokens + i) == 266L) {
          goto case_265;
        }
        if (*(d->tokens + i) == 264L) {
          goto case_264;
        }
        if (*(d->tokens + i) == 268L) {
          goto case_268;
        }
        if (*(d->tokens + i) == 269L) {
          goto case_269;
        }
        goto switch_default;
      case_256:
        stk->nullable = (_Bool)1;
        tmp___3 = (size_t)0;
        stk->nlastpos = tmp___3;
        stk->nfirstpos = tmp___3;
        stk++;
        goto switch_break;
      case_265:
        tmp___1.nelem = (stk + -1)->nfirstpos;
        tmp___1.elems = firstpos;
        pos = lastpos;
        j = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(j < (stk + -1)->nlastpos)) {
              goto while_break___0;
            }
            {
              merge((position_set const *)(&tmp___1), (position_set const *)(d->follows + (pos + j)->index),
                    &merged);
              copy((position_set const *)(&merged), d->follows + (pos + j)->index);
              j++;
            }
          }
                                        ;
        }
      while_break___0:;
      case_264:
        if (*(d->tokens + i) != 266L) {
          (stk + -1)->nullable = (_Bool)1;
        }
        goto switch_break;
      case_268:
        tmp___1.nelem = (stk + -1)->nfirstpos;
        tmp___1.elems = firstpos;
        pos = lastpos + (stk + -1)->nlastpos;
        j = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(j < (stk + -2)->nlastpos)) {
              goto while_break___1;
            }
            {
              merge((position_set const *)(&tmp___1), (position_set const *)(d->follows + (pos + j)->index),
                    &merged);
              copy((position_set const *)(&merged), d->follows + (pos + j)->index);
              j++;
            }
          }
                                        ;
        }
      while_break___1:;
        if ((stk + -2)->nullable) {
          (stk + -2)->nfirstpos += (stk + -1)->nfirstpos;
        } else {
          firstpos += (stk + -1)->nfirstpos;
        }
        if ((stk + -1)->nullable) {
          (stk + -2)->nlastpos += (stk + -1)->nlastpos;
        } else {
          pos = lastpos + (stk + -2)->nlastpos;
          j = (stk + -1)->nlastpos;
          {
            while (1) {
                                               ;
              tmp___4 = j;
              j--;
              if (!(tmp___4 > 0UL)) {
                goto while_break___2;
              }
              *(pos + j) = *(lastpos + j);
            }
                                          ;
          }
        while_break___2:
          lastpos += (stk + -2)->nlastpos;
          (stk + -2)->nlastpos = (stk + -1)->nlastpos;
        }
        (stk + -2)->nullable = (_Bool)((int)(stk + -2)->nullable & (int)(stk + -1)->nullable);
        stk--;
        goto switch_break;
      case_269:
        (stk + -2)->nfirstpos += (stk + -1)->nfirstpos;
        (stk + -2)->nlastpos += (stk + -1)->nlastpos;
        (stk + -2)->nullable = (_Bool)((int)(stk + -2)->nullable | (int)(stk + -1)->nullable);
        stk--;
        goto switch_break;
      switch_default : {
        stk->nullable = (_Bool)(*(d->tokens + i) == 257L);
        tmp___5 = (size_t)1;
        stk->nlastpos = tmp___5;
        stk->nfirstpos = tmp___5;
        stk++;
        firstpos--;
        lastpos--;
        tmp___6 = i;
        lastpos->index = tmp___6;
        firstpos->index = tmp___6;
        tmp___7 = 1911U;
        lastpos->constraint = tmp___7;
        firstpos->constraint = tmp___7;
        alloc_position_set(d->follows + i, (size_t)1);
      }
        goto switch_break;
      switch_break:
        i++;
      }
                                    ;
    }
  while_break:
    i = (size_t)0;
    {
      while (1) {
                                         ;
        if (!(i < d->tindex)) {
          goto while_break___3;
        }
        if (*(d->tokens + i) < 256L) {
          {
            copy((position_set const *)(d->follows + i), &merged);
            epsclosure(&merged, (struct dfa const *)d, visited);
            copy((position_set const *)(&merged), d->follows + i);
          }
        } else {
          if (*(d->tokens + i) == 257L) {
            {
              copy((position_set const *)(d->follows + i), &merged);
              epsclosure(&merged, (struct dfa const *)d, visited);
              copy((position_set const *)(&merged), d->follows + i);
            }
          } else {
            if (*(d->tokens + i) == 272L) {
              {
                copy((position_set const *)(d->follows + i), &merged);
                epsclosure(&merged, (struct dfa const *)d, visited);
                copy((position_set const *)(&merged), d->follows + i);
              }
            } else {
              if (*(d->tokens + i) == 273L) {
                {
                  copy((position_set const *)(d->follows + i), &merged);
                  epsclosure(&merged, (struct dfa const *)d, visited);
                  copy((position_set const *)(&merged), d->follows + i);
                }
              } else {
                if (*(d->tokens + i) >= 275L) {
                  {
                    copy((position_set const *)(d->follows + i), &merged);
                    epsclosure(&merged, (struct dfa const *)d, visited);
                    copy((position_set const *)(&merged), d->follows + i);
                  }
                }
              }
            }
          }
        }
        i++;
      }
                                    ;
    }
  while_break___3:
    merged.nelem = (size_t)0;
    i = (size_t)0;
    {
      while (1) {
                                         ;
        if (!(i < (stk + -1)->nfirstpos)) {
          goto while_break___4;
        }
        {
          insert(*(firstpos + i), &merged);
          i++;
        }
      }
                                     ;
    }
  while_break___4 : {
    epsclosure(&merged, (struct dfa const *)d, visited);
    separate_contexts = (int)state_separate_contexts((position_set const *)(&merged));
  }
    if (separate_contexts & 4) {
      tmp___8 = 4;
    } else {
      tmp___8 = separate_contexts ^ 7;
    }
    {
      state_index(d, (position_set const *)(&merged), tmp___8);
      free((void *)posalloc);
      free((void *)stkalloc);
      free((void *)merged.elems);
      free((void *)visited);
    }
    return;
  }
}
void dfastate(ptrdiff_t s, struct dfa *d, ptrdiff_t *trans___0) {
  leaf_set grps[256];
  charclass labels[256];
  size_t ngrps;
  position pos;
  charclass matches;
  charclass_word matchesf;
  charclass intersect;
  charclass_word intersectf;
  charclass leftovers;
  charclass_word leftoversf;
  position_set follows;
  position_set tmp;
  int possible_contexts;
  int separate_contexts;
  state_num state;
  state_num state_newline;
  state_num state_letter;
  _Bool next_isnt_1st_byte;
  size_t i;
  size_t j;
  size_t k;
  _Bool tmp___0;
  charclass_word tmp___1;
  charclass_word match;
  charclass_word label___0;
  charclass_word tmp___2;
  charclass_word tmp___3;
  size_t tmp___4;
  unsigned short const **tmp___6;
  int c;
  unsigned short const **tmp___7;
                    
                  
                    
                  
                    
                    
                    
                    
  {
    {
      ngrps = (size_t)0;
      next_isnt_1st_byte = (_Bool)0;
      zeroset(matches);
      i = (size_t)0;
    }
    {
      while (1) {
                                     ;
        if (!(i < (d->states + s)->elems.nelem)) {
          goto while_break;
        }
        pos = *((d->states + s)->elems.elems + i);
        if (*(d->tokens + pos.index) >= 0L) {
          if (*(d->tokens + pos.index) < 256L) {
            {
              setbit((unsigned int)*(d->tokens + pos.index), matches);
            }
          } else {
            goto _L___0;
          }
        } else {
        _L___0:
          if (*(d->tokens + pos.index) >= 275L) {
            {
              copyset((charclass_word * /* const  */)(*(d->charclasses + (*(d->tokens + pos.index) - 275L))),
                      matches);
            }
          } else {
            if (*(d->tokens + pos.index) == 273L) {
              goto _L;
            } else {
              if (*(d->tokens + pos.index) == 272L) {
              _L:
                if (*(d->tokens + pos.index) == 273L) {
                  (d->states + s)->has_mbcset = (_Bool)1;
                }
                if ((d->states + s)->mbps.nelem == 0UL) {
                  {
                    alloc_position_set(&(d->states + s)->mbps, (size_t)1);
                  }
                }
                {
                  insert(pos, &(d->states + s)->mbps);
                }
              }
            }
            goto __Cont;
          }
        }
        if (pos.constraint != 1911U) {
          if (!(((pos.constraint >> 8) & 15U) & (unsigned int)(d->states + s)->context)) {
            j = (size_t)0;
            {
              while (1) {
                                                 ;
                if (!(j < 8UL)) {
                  goto while_break___0;
                }
                matches[j] &= ~newline[j];
                j++;
              }
                                             ;
            }
          while_break___0:;
          }
          if (!(((pos.constraint >> 4) & 15U) & (unsigned int)(d->states + s)->context)) {
            j = (size_t)0;
            {
              while (1) {
                                                 ;
                if (!(j < 8UL)) {
                  goto while_break___1;
                }
                matches[j] &= ~letters[j];
                j++;
              }
                                             ;
            }
          while_break___1:;
          }
          if (!((pos.constraint & 15U) & (unsigned int)(d->states + s)->context)) {
            j = (size_t)0;
            {
              while (1) {
                                                 ;
                if (!(j < 8UL)) {
                  goto while_break___2;
                }
                matches[j] &= letters[j] | newline[j];
                j++;
              }
                                             ;
            }
          while_break___2:;
          }
          j = (size_t)0;
          {
            while (1) {
                                               ;
              if (j < 8UL) {
                if (!(!matches[j])) {
                  goto while_break___3;
                }
              } else {
                goto while_break___3;
              }
              goto __Cont___0;
            __Cont___0:
              j++;
            }
                                           ;
          }
        while_break___3:;
          if (j == 8UL) {
            goto __Cont;
          }
        }
        j = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(j < ngrps)) {
              goto while_break___4;
            }
            if (*(d->tokens + pos.index) >= 0L) {
              if (*(d->tokens + pos.index) < 256L) {
                {
                  tmp___0 = tstbit((unsigned int)*(d->tokens + pos.index), (charclass_word * /* const  */)(labels[j]));
                }
                if (!tmp___0) {
                  goto __Cont___1;
                }
              }
            }
            intersectf = (charclass_word)0;
            k = (size_t)0;
            {
              while (1) {
                                                 ;
                if (!(k < 8UL)) {
                  goto while_break___5;
                }
                tmp___1 = matches[k] & labels[j][k];
                intersect[k] = tmp___1;
                intersectf |= tmp___1;
                k++;
              }
                                             ;
            }
          while_break___5:;
            if (!intersectf) {
              goto __Cont___1;
            }
            matchesf = (charclass_word)0;
            leftoversf = matchesf;
            k = (size_t)0;
            {
              while (1) {
                                                 ;
                if (!(k < 8UL)) {
                  goto while_break___6;
                }
                match = matches[k];
                label___0 = labels[j][k];
                tmp___2 = ~match & label___0;
                leftovers[k] = tmp___2;
                leftoversf |= tmp___2;
                tmp___3 = match & ~label___0;
                matches[k] = tmp___3;
                matchesf |= tmp___3;
                k++;
              }
                                             ;
            }
          while_break___6:;
            if (leftoversf) {
              {
                copyset((charclass_word * /* const  */)(leftovers), labels[ngrps]);
                copyset((charclass_word * /* const  */)(intersect), labels[j]);
                grps[ngrps].elems = (size_t *)xnmalloc(d->nleaves, sizeof(*(grps[ngrps].elems)));
                memcpy((void * /* __restrict  */)((void *)grps[ngrps].elems), (void const * /* __restrict  */)((void const *)grps[j].elems),
                       sizeof(*(grps[j].elems + 0)) * grps[j].nelem);
                grps[ngrps].nelem = grps[j].nelem;
                ngrps++;
              }
            }
            tmp___4 = grps[j].nelem;
            (grps[j].nelem)++;
            *(grps[j].elems + tmp___4) = pos.index;
            if (!matchesf) {
              goto while_break___4;
            }
          __Cont___1:
            j++;
          }
                                         ;
        }
      while_break___4:;
        if (j == ngrps) {
          {
            copyset((charclass_word * /* const  */)(matches), labels[ngrps]);
            zeroset(matches);
            grps[ngrps].elems = (size_t *)xnmalloc(d->nleaves, sizeof(*(grps[ngrps].elems)));
            grps[ngrps].nelem = (size_t)1;
            *(grps[ngrps].elems + 0) = pos.index;
            ngrps++;
          }
        }
      __Cont:
        i++;
      }
                                     ;
    }
  while_break : {
    alloc_position_set(&follows, d->nleaves);
    alloc_position_set(&tmp, d->nleaves);
  }
    if (d->searchflag) {
      {
        copy((position_set const *)(&(d->states + 0)->elems), &follows);
        separate_contexts = (int)state_separate_contexts((position_set const *)(&follows));
        state = state_index(d, (position_set const *)(&follows), separate_contexts ^ 7);
      }
      if (separate_contexts & 4) {
        {
          state_newline = state_index(d, (position_set const *)(&follows), 4);
        }
      } else {
        state_newline = state;
      }
      if (separate_contexts & 2) {
        {
          state_letter = state_index(d, (position_set const *)(&follows), 2);
        }
      } else {
        state_letter = state;
      }
      i = (size_t)0;
      {
        while (1) {
                                           ;
          if (!(i < 256UL)) {
            goto while_break___7;
          }
          {
            tmp___6 = __ctype_b_loc();
          }
          if ((int const) * (*tmp___6 + (int)i) & 8) {
            *(trans___0 + i) = state_letter;
          } else {
            if (i == 95UL) {
              *(trans___0 + i) = state_letter;
            } else {
              *(trans___0 + i) = state;
            }
          }
          i++;
        }
                                       ;
      }
    while_break___7:
      *(trans___0 + (int)eolbyte___0) = state_newline;
    } else {
      i = (size_t)0;
      {
        while (1) {
                                           ;
          if (!(i < 256UL)) {
            goto while_break___8;
          }
          *(trans___0 + i) = (ptrdiff_t)-1;
          i++;
        }
                                       ;
      }
    while_break___8:;
    }
    i = (size_t)0;
    {
      while (1) {
                                         ;
        if (!(i < ngrps)) {
          goto while_break___9;
        }
        follows.nelem = (size_t)0;
        j = (size_t)0;
        {
          while (1) {
                                              ;
            if (!(j < grps[i].nelem)) {
              goto while_break___10;
            }
            k = (size_t)0;
            {
              while (1) {
                                                  ;
                if (!(k < (d->follows + *(grps[i].elems + j))->nelem)) {
                  goto while_break___11;
                }
                {
                  insert(*((d->follows + *(grps[i].elems + j))->elems + k), &follows);
                  k++;
                }
              }
                                             ;
            }
          while_break___11:
            j++;
          }
                                         ;
        }
      while_break___10:;
        if (d->multibyte) {
          next_isnt_1st_byte = (_Bool)0;
          j = (size_t)0;
          {
            while (1) {
                                                ;
              if (!(j < follows.nelem)) {
                goto while_break___12;
              }
              if (!(*(d->multibyte_prop + (follows.elems + j)->index) & 1)) {
                next_isnt_1st_byte = (_Bool)1;
                goto while_break___12;
              }
              j++;
            }
                                           ;
          }
        while_break___12:;
        }
        if (d->searchflag) {
          if (!d->multibyte) {
            {
              merge((position_set const *)(&(d->states + 0)->elems), (position_set const *)(&follows),
                    &tmp);
              copy((position_set const *)(&tmp), &follows);
            }
          } else {
            if (!next_isnt_1st_byte) {
              {
                merge((position_set const *)(&(d->states + 0)->elems), (position_set const *)(&follows),
                      &tmp);
                copy((position_set const *)(&tmp), &follows);
              }
            }
          }
        }
        {
          possible_contexts = charclass_context(labels[i]);
          separate_contexts = (int)state_separate_contexts((position_set const *)(&follows));
        }
        if ((separate_contexts & possible_contexts) != possible_contexts) {
          {
            state = state_index(d, (position_set const *)(&follows), separate_contexts ^ 7);
          }
        } else {
          state = (state_num)-1;
        }
        if ((separate_contexts & possible_contexts) & 4) {
          {
            state_newline = state_index(d, (position_set const *)(&follows), 4);
          }
        } else {
          state_newline = state;
        }
        if ((separate_contexts & possible_contexts) & 2) {
          {
            state_letter = state_index(d, (position_set const *)(&follows), 2);
          }
        } else {
          state_letter = state;
        }
        j = (size_t)0;
        {
          while (1) {
                                              ;
            if (!(j < 8UL)) {
              goto while_break___13;
            }
            k = (size_t)0;
            {
              while (1) {
                                                  ;
                if (!(k < 32UL)) {
                  goto while_break___14;
                }
                if ((labels[i][j] >> k) & 1U) {
                  c = (int)(j * 32UL + k);
                  if (c == (int)eolbyte___0) {
                    *(trans___0 + c) = state_newline;
                  } else {
                    {
                      tmp___7 = __ctype_b_loc();
                    }
                    if ((int const) * (*tmp___7 + c) & 8) {
                      *(trans___0 + c) = state_letter;
                    } else {
                      if (c == 95) {
                        *(trans___0 + c) = state_letter;
                      } else {
                        if (c < 256) {
                          *(trans___0 + c) = state;
                        }
                      }
                    }
                  }
                }
                k++;
              }
                                             ;
            }
          while_break___14:
            j++;
          }
                                         ;
        }
      while_break___13:
        i++;
      }
                                     ;
    }
  while_break___9:
    i = (size_t)0;
    {
      while (1) {
                                          ;
        if (!(i < ngrps)) {
          goto while_break___15;
        }
        {
          free((void *)grps[i].elems);
          i++;
        }
      }
                                     ;
    }
  while_break___15 : {
    free((void *)follows.elems);
    free((void *)tmp.elems);
  }
    return;
  }
}
static void realloc_trans_if_necessary(struct dfa *d, state_num new_state) {
  state_num oldalloc;
  state_num **realtrans;
  state_num **tmp;
  size_t newalloc;
  size_t newalloc1;
  {
    oldalloc = d->tralloc;
    if (oldalloc <= new_state) {
      if (d->trans) {
        tmp = d->trans - 1;
      } else {
        tmp = (state_num **)((void *)0);
      }
      {
        realtrans = tmp;
        newalloc1 = (size_t)(new_state + 1L);
        realtrans = (state_num **)x2nrealloc((void *)realtrans, &newalloc1, sizeof(*realtrans));
        *(realtrans + 0) = (state_num *)((void *)0);
        d->trans = realtrans + 1;
        newalloc = newalloc1 - 1UL;
        d->tralloc = (state_num)newalloc;
        d->fails = (state_num **)xnrealloc((void *)d->fails, newalloc, sizeof(*(d->fails)));
        d->success = (int *)xnrealloc((void *)d->success, newalloc, sizeof(*(d->success)));
        d->newlines = (state_num *)xnrealloc((void *)d->newlines, newalloc, sizeof(*(d->newlines)));
      }
      {
        while (1) {
                                       ;
          if (!((size_t)oldalloc < newalloc)) {
            goto while_break;
          }
          *(d->trans + oldalloc) = (state_num *)((void *)0);
          *(d->fails + oldalloc) = (state_num *)((void *)0);
          oldalloc++;
        }

      }
    while_break:;
    }
    return;
  }
}
static void build_state(state_num s, struct dfa *d) {
  state_num *trans___0;
  state_num i;
  state_num maxstate;
  state_num *tmp;
  {
    if (d->trcount >= 1024) {
      i = (state_num)0;
      {
        while (1) {
                                       ;
          if (!(i < d->tralloc)) {
            goto while_break;
          }
          {
            free((void *)*(d->trans + i));
            free((void *)*(d->fails + i));
            tmp = (state_num *)((void *)0);
            *(d->fails + i) = tmp;
            *(d->trans + i) = tmp;
            i++;
          }
        }
                                      ;
      }
    while_break:
      d->trcount = 0;
    }
    (d->trcount)++;
    *(d->success + s) = 0;
    if ((((int)(d->states + s)->constraint >> 8) & 15) & (int)(d->states + s)->context) {
      *(d->success + s) |= 4;
    }
    if ((((int)(d->states + s)->constraint >> 4) & 15) & (int)(d->states + s)->context) {
      *(d->success + s) |= 2;
    }
    if (((int)(d->states + s)->constraint & 15) & (int)(d->states + s)->context) {
      *(d->success + s) |= 1;
    }
    {
      trans___0 = (state_num *)xmalloc(256UL * sizeof(*trans___0));
      dfastate(s, d, trans___0);
      maxstate = (state_num)-1;
      i = (state_num)0;
    }
    {
      while (1) {
                                         ;
        if (!(i < 256L)) {
          goto while_break___0;
        }
        if (maxstate < *(trans___0 + i)) {
          maxstate = *(trans___0 + i);
        }
        i++;
      }
                                    ;
    }
  while_break___0 : {
    realloc_trans_if_necessary(d, maxstate);
    *(d->newlines + s) = *(trans___0 + (int)eolbyte___0);
    *(trans___0 + (int)eolbyte___0) = (state_num)-1;
  }
    if ((d->states + s)->constraint) {
      *(d->fails + s) = trans___0;
    } else {
      *(d->trans + s) = trans___0;
    }
    return;
  }
}
static void build_state_zero(struct dfa *d) {
  int initial_tab_size;
  {
    {
      initial_tab_size = 1;
      d->tralloc = (state_num)0;
      d->trcount = 0;
      d->trans = (state_num **)((void *)0);
      d->fails = (state_num **)((void *)0);
      d->success = (int *)((void *)0);
      d->newlines = (state_num *)((void *)0);
      realloc_trans_if_necessary(d, (state_num)initial_tab_size);
      build_state((state_num)0, d);
    }
    return;
  }
}
static status_transit_state transit_state_singlebyte(struct dfa *d, state_num s,
                                                     unsigned char const *p, state_num *next_state) {








































}
static int match_anychar(struct dfa *d, state_num s, position pos, wint_t wc,
                         size_t mbclen) {











































}
static int match_mb_charset(struct dfa *d, state_num s, position pos, char const *p,
                            wint_t wc, size_t match_len) {















































































































































































}
static int *check_matching_with_multibyte_ops(struct dfa *d, state_num s, char const *p,
                                              wint_t wc, size_t mbclen) {






































}
static status_transit_state transit_state_consume_1char(struct dfa *d, state_num s,
                                                        unsigned char const **pp,
                                                        wint_t wc, size_t mbclen,
                                                        int *match_lens) {






































































}
static state_num transit_state(struct dfa *d, state_num s, unsigned char const **pp,
                               unsigned char const *end) {













































































































}
char *dfaexec(struct dfa *d, char const *begin, char *end, int allow_nl, size_t *count,
              int *backref) {
  state_num s;
  state_num s1;
  unsigned char const *p;
  unsigned char const *mbp;
  state_num **trans___0;
  state_num *t;
  unsigned char eol;
  unsigned char saved_end;
  size_t nlcount;
  wint_t wc;
  size_t tmp;
  unsigned char const *tmp___0;
  unsigned char const *tmp___1;
  state_num tmp___2;
  unsigned char const *tmp___3;
  unsigned char const *tmp___4;
  {
    eol = eolbyte___0;
    nlcount = (size_t)0;
    if (!d->tralloc) {
      {
        build_state_zero(d);
      }
    }
    s1 = (state_num)0;
    s = s1;
    mbp = (unsigned char const *)begin;
    p = mbp;
    trans___0 = d->trans;
    saved_end = *((unsigned char *)end);
    *end = (char)eol;
    if (d->multibyte) {
      {
        memset((void *)(&d->mbs), 0, sizeof(d->mbs));
      }
      if (!d->mb_match_lens) {
        {
          d->mb_match_lens = (int *)xnmalloc(d->nleaves, sizeof(*(d->mb_match_lens)));
          alloc_position_set(&d->mb_follows, d->nleaves);
        }
      }
    }
    {
      while (1) {
                                     ;
        if (d->multibyte) {
          {
            while (1) {
                                               ;
            while_continue___0:
              t = *(trans___0 + s);
              if (!((unsigned long)t != (unsigned long)((void *)0))) {
                goto while_break___0;
              }
              s1 = s;
              if (s == 0L) {
                {
                  while (1) {
                                                     ;
                    if (!((unsigned long)mbp < (unsigned long)p)) {
                      goto while_break___1;
                    }
                    {
                      tmp = mbs_to_wchar(&wc, (char const *)mbp, (size_t)(end - (char *)((char const *)mbp)),
                                         d);
                      mbp += tmp;
                    }
                  }
                                                ;
                }
              while_break___1:
                p = mbp;
                if ((unsigned long)((char *)p) > (unsigned long)end) {
                  p = (unsigned char const *)((void *)0);
                  goto done;
                }
              }
              if ((d->states + s)->mbps.nelem == 0UL) {
                tmp___0 = p;
                p++;
                s = *(t + (int const) * tmp___0);
                goto while_continue___0;
              }
              if ((d->states + s)->has_mbcset) {
                if (backref) {
                  *backref = 1;
                  goto done;
                }
              }
              {
                s = transit_state(d, s, &p, (unsigned char const *)((unsigned char *)end));
                mbp = p;
                trans___0 = d->trans;
              }
            }
                                          ;
          }
        while_break___0:;
        } else {
          {
            while (1) {
                                               ;
              t = *(trans___0 + s);
              if (!((unsigned long)t != (unsigned long)((void *)0))) {
                goto while_break___2;
              }
              tmp___1 = p;
              p++;
              s1 = *(t + (int const) * tmp___1);
              t = *(trans___0 + s1);
              if ((unsigned long)t == (unsigned long)((void *)0)) {
                tmp___2 = s;
                s = s1;
                s1 = tmp___2;
                goto while_break___2;
              }
              tmp___3 = p;
              p++;
              s = *(t + (int const) * tmp___3);
            }
                                          ;
          }
        while_break___2:;
        }
        if ((unsigned long)((char *)p) > (unsigned long)end) {
          p = (unsigned char const *)((void *)0);
          goto done;
        }
        if (s >= 0L) {
          if (*(d->fails + s)) {
            if (*(d->success + s) & sbit[*p]) {
              if (backref) {
                *backref = (int)(d->states + s)->has_backref;
              }
              goto done;
            }
            s1 = s;
            if (d->multibyte) {
              {
                s = transit_state(d, s, &p, (unsigned char const *)((unsigned char *)end));
                mbp = p;
                trans___0 = d->trans;
              }
            } else {
              tmp___4 = p;
              p++;
              s = *(*(d->fails + s) + (int const) * tmp___4);
            }
            goto __Cont;
          }
        }
        if ((int const) * (p + -1) == (int const)eol) {
          if ((unsigned long)((char *)p) != (unsigned long)begin) {
            nlcount++;
            mbp = p;
          }
        }
        if (s >= 0L) {
          if (!*(d->trans + s)) {
            {
              build_state(s, d);
            }
          }
          trans___0 = d->trans;
          goto __Cont;
        }
        if ((int const) * (p + -1) == (int const)eol) {
          if (allow_nl) {
            s = *(d->newlines + s1);
            goto __Cont;
          }
        }
        s = (state_num)0;
      __Cont:;
      }
                                ;
    }
  done:
    if (count) {
      *count += nlcount;
    }
    *end = (char)saved_end;
    return ((char *)p);
  }
}
struct dfa *dfasuperset(struct dfa const *d) __attribute__((__pure__));
struct dfa *dfasuperset(struct dfa const *d) {
  {
    return ((struct dfa *)d->superset);
  }
}
_Bool dfaisfast(struct dfa const *d) __attribute__((__pure__));
_Bool dfaisfast(struct dfa const *d) {
  {
    return ((_Bool)d->fast);
  }
}
static void free_mbdata(struct dfa *d) {


































































}
void dfainit(struct dfa *d) {
  size_t tmp;
  {
    {
      memset((void *)d, 0, sizeof(*d));
      tmp = __ctype_get_mb_cur_max();
      d->multibyte = (_Bool)(tmp > 1UL);
      d->fast = (_Bool)(!d->multibyte);
    }
    return;
  }
}
static void dfaoptimize(struct dfa *d) {
  size_t i;
  _Bool have_backref;
  int tmp;
  {
    {
      have_backref = (_Bool)0;
      tmp = using_utf8();
    }
    if (!tmp) {
      return;
    }
    i = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(i < d->tindex)) {
          goto while_break;
        }
        if (*(d->tokens + i) == 272L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 257L) {
          goto case_257;
        }
        if (*(d->tokens + i) == 273L) {
          goto case_273;
        }
        goto switch_default;
      case_272 : {
        abort();
      }
      case_257:
        have_backref = (_Bool)1;
        goto switch_break;
      case_273:
        return;
      switch_default:
        goto switch_break;
      switch_break:
        i++;
      }
                                    ;
    }
  while_break:;
    if (!have_backref) {
      if (d->superset) {
        {
          dfafree(d->superset);
          free((void *)d->superset);
          d->superset = (struct dfa *)((void *)0);
        }
      }
    }
    {
      free_mbdata(d);
      d->multibyte = (_Bool)0;
    }
    return;
  }
}
static void dfassbuild(struct dfa *d) {
  size_t i;
  size_t j;
  charclass ccl;
  _Bool have_achar;
  _Bool have_nchar;
  struct dfa *sup;
  struct dfa *tmp;
  size_t tmp___0;
  size_t tmp___1;
  size_t tmp___2;
  size_t tmp___3;
  size_t tmp___4;
                    
  {
    {
      have_achar = (_Bool)0;
      have_nchar = (_Bool)0;
      tmp = dfaalloc();
      sup = tmp;
      *sup = *d;
      sup->multibyte = (_Bool)0;
      sup->multibyte_prop = (int *)((void *)0);
      sup->mbcsets = (struct mb_char_classes *)((void *)0);
      sup->superset = (struct dfa *)((void *)0);
      sup->states = (dfa_state *)((void *)0);
      sup->sindex = (state_num)0;
      sup->follows = (position_set *)((void *)0);
      sup->tralloc = (state_num)0;
      sup->trans = (state_num **)((void *)0);
      sup->fails = (state_num **)((void *)0);
      sup->success = (int *)((void *)0);
      sup->newlines = (state_num *)((void *)0);
      sup->musts = (struct dfamust *)((void *)0);
      sup->charclasses = (charclass *)xnmalloc(sup->calloc, sizeof(*(sup->charclasses)));
      memcpy((void * /* __restrict  */)((void *)sup->charclasses), (void const * /* __restrict  */)((void const *)d->charclasses),
             d->cindex * sizeof(*(sup->charclasses)));
      sup->tokens = (token *)xnmalloc(d->tindex, 2UL * sizeof(*(sup->tokens)));
      sup->talloc = d->tindex * 2UL;
      j = (size_t)0;
      i = j;
    }
    {
      while (1) {
                                     ;
        if (!(i < d->tindex)) {
          goto while_break;
        }
        if (*(d->tokens + i) == 272L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 273L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 257L) {
          goto case_272;
        }
        if (*(d->tokens + i) == 260L) {
          goto case_260;
        }
        if (*(d->tokens + i) == 261L) {
          goto case_260;
        }
        if (*(d->tokens + i) == 262L) {
          goto case_260;
        }
        if (*(d->tokens + i) == 263L) {
          goto case_260;
        }
        goto switch_default;
      case_272 : {
        zeroset(ccl);
        notset(ccl);
        tmp___0 = j;
        j++;
        tmp___1 = dfa_charclass_index(sup, (charclass_word * /* const  */)(ccl));
        *(sup->tokens + tmp___0) = (token)(275UL + tmp___1);
        tmp___2 = j;
        j++;
        *(sup->tokens + tmp___2) = (token)265;
      }
        if (*(d->tokens + (i + 1UL)) == 264L) {
          i++;
        } else {
          if (*(d->tokens + (i + 1UL)) == 265L) {
            i++;
          } else {
            if (*(d->tokens + (i + 1UL)) == 266L) {
              i++;
            }
          }
        }
        have_achar = (_Bool)1;
        goto switch_break;
      case_260:
        if (d->multibyte) {
          tmp___3 = j;
          j++;
          *(sup->tokens + tmp___3) = (token)256;
          *(d->tokens + i) = (token)257;
          goto switch_break;
        }
      switch_default:
        tmp___4 = j;
        j++;
        *(sup->tokens + tmp___4) = *(d->tokens + i);
        if (0L <= *(d->tokens + i)) {
          if (*(d->tokens + i) < 256L) {
            have_nchar = (_Bool)1;
          } else {
            goto _L;
          }
        } else {
        _L:
          if (*(d->tokens + i) >= 275L) {
            have_nchar = (_Bool)1;
          }
        }
        goto switch_break;
      switch_break:
        i++;
      }
                                    ;
    }
  while_break:
    sup->tindex = j;
    if (have_nchar) {
      if (have_achar) {
        d->superset = sup;
      } else {
        if (d->multibyte) {
          d->superset = sup;
        } else {
          {
            dfafree(sup);
            free((void *)sup);
          }
        }
      }
    } else {
      {
        dfafree(sup);
        free((void *)sup);
      }
    }
    return;
  }
}
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag) {
  {
    {
      dfainit(d);
      dfambcache(d);
      dfaparse(s, len, d);
      dfamust(d);
      dfassbuild(d);
      dfaoptimize(d);
      dfaanalyze(d, searchflag);
    }
    if (d->superset) {
      {
        d->fast = (_Bool)1;
        dfaanalyze(d->superset, searchflag);
      }
    }
    return;
  }
}
void dfafree(struct dfa *d) {
  size_t i;
  struct dfamust *dm;
                      
  {
    {
      free((void *)d->charclasses);
      free((void *)d->tokens);
    }
                       
       

       
     
    i = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(i < (size_t)d->sindex)) {
          goto while_break;
        }
        {



        }
      }

    }
  while_break : {
    free((void *)d->states);
  }
                     

       











       



     
                   

       












       






     
    dm = d->musts;
    {
      while (1) {
                                         ;
        if (!dm) {
          goto while_break___2;
        }
        {




        }
      }

    }
  while_break___2:;
                      
       

       
     
    return;
  }
}
static char *icatalloc(char *old, char const *new) {
  char *result;
  size_t oldsize;
  size_t newsize;
  size_t tmp;
  {
    {
      tmp = strlen(new);
      newsize = tmp;
    }
    if (newsize == 0UL) {
      return (old);
    }
    {
      oldsize = strlen((char const *)old);
      result = (char *)xrealloc((void *)old, (oldsize + newsize) + 1UL);
      memcpy((void * /* __restrict  */)((void *)(result + oldsize)), (void const * /* __restrict  */)((void const *)new),
             newsize + 1UL);
    }
    return (result);
  }
}
static char *__attribute__((__pure__)) istrstr(char const *lookin, char const *lookfor) {
  char const *cp;
  size_t len;
  int tmp;
  {
    {
      len = strlen(lookfor);
      cp = lookin;
    }
    {
      while (1) {
                                     ;
        if (!((int const) * cp != 0)) {
          goto while_break;
        }
        {
          tmp = strncmp(cp, lookfor, len);
        }
        if (tmp == 0) {
          return ((char * /* __attribute__((__pure__)) */)((char *)cp));
        }
        cp++;
      }

    }
  while_break:;
    return ((char * /* __attribute__((__pure__)) */)((char *)((void *)0)));
  }
}
static void freelist(char **cpp) {
  char **tmp;
  {
    {
      while (1) {
                                     ;
        if (!*cpp) {
          goto while_break;
        }
        {
          tmp = cpp;
          cpp++;
          free((void *)*tmp);
        }
      }
                                    ;
    }
  while_break:;
    return;
  }
}
static char **enlist(char **cpp, char *new, size_t len) {
  size_t i;
  size_t j;
  void *tmp;
  char *__attribute__((__pure__)) tmp___0;
  char *__attribute__((__pure__)) tmp___1;
  {
    {
      tmp = xmalloc(len + 1UL);
      new = (char *)memcpy((void * /* __restrict  */)tmp, (void const * /* __restrict  */)((void const *)new),
                           len);
      *(new + len) = (char)'\000';
      i = (size_t)0;
    }
    {
      while (1) {
                                     ;
        if (!((unsigned long)*(cpp + i) != (unsigned long)((void *)0))) {
          goto while_break;
        }
        {
          tmp___0 = istrstr((char const *)*(cpp + i), (char const *)new);
        }
        if ((unsigned long)tmp___0 != (unsigned long)((void *)0)) {
          {
            free((void *)new);
          }
          return (cpp);
        }
        i++;
      }
                                    ;
    }
  while_break:
    j = (size_t)0;
    {
      while (1) {
                                         ;
        if (!((unsigned long)*(cpp + j) != (unsigned long)((void *)0))) {
          goto while_break___0;
        }
        {
          tmp___1 = istrstr((char const *)new, (char const *)*(cpp + j));
        }
        if ((unsigned long)tmp___1 == (unsigned long)((void *)0)) {
          j++;
        } else {
          {
            free((void *)*(cpp + j));
            i--;
          }
          if (i == j) {
            goto while_break___0;
          }
          *(cpp + j) = *(cpp + i);
          *(cpp + i) = (char *)((void *)0);
        }
      }
                                    ;
    }
  while_break___0 : {
    cpp = (char **)xnrealloc((void *)cpp, i + 2UL, sizeof(*cpp));
    *(cpp + i) = new;
    *(cpp + (i + 1UL)) = (char *)((void *)0);
  }
    return (cpp);
  }
}
static char **comsubs(char *left, char const *right) {
  char **cpp;
  char **tmp;
  char *lcp;
  size_t len;
  char *rcp;
  char *tmp___0;
  size_t i;
  {
    {
      tmp = (char **)xzalloc(sizeof(*cpp));
      cpp = tmp;
      lcp = left;
    }
    {
      while (1) {
                                     ;
        if (!((int)*lcp != 0)) {
          goto while_break;
        }
        {
          len = (size_t)0;
          tmp___0 = strchr(right, (int)*lcp);
          rcp = tmp___0;
        }
        {
          while (1) {
                                             ;
            if (!((unsigned long)rcp != (unsigned long)((void *)0))) {
              goto while_break___0;
            }
            i = (size_t)1;
            {
              while (1) {
                                                 ;
                if ((int)*(lcp + i) != 0) {
                  if (!((int)*(lcp + i) == (int)*(rcp + i))) {
                    goto while_break___1;
                  }
                } else {
                  goto while_break___1;
                }
                goto __Cont;
              __Cont:
                i++;
              }
                                            ;
            }
          while_break___1:;
            if (i > len) {
              len = i;
            }
            {
              rcp = strchr((char const *)(rcp + 1), (int)*lcp);
            }
          }
                                        ;
        }
      while_break___0:;
        if (len != 0UL) {
          {
            cpp = enlist(cpp, lcp, len);
          }
        }
        lcp++;
      }
                                    ;
    }
  while_break:;
    return (cpp);
  }
}
static char **addlists(char **old, char **new) {
  size_t tmp;
  {
    {
      while (1) {
                                     ;
        if (!*new) {
          goto while_break;
        }
        {
          tmp = strlen((char const *)*new);
          old = enlist(old, *new, tmp);
          new ++;
        }
      }

    }
  while_break:;
    return (old);
  }
}
static char **inboth(char **left, char **right) {
  char **both;
  char **tmp;
  size_t lnum;
  size_t rnum;
  char **temp;
  char **tmp___0;
  {
    {
      tmp = (char **)xzalloc(sizeof(*both));
      both = tmp;
      lnum = (size_t)0;
    }
    {
      while (1) {
                                     ;
        if (!((unsigned long)*(left + lnum) != (unsigned long)((void *)0))) {
          goto while_break;
        }
        rnum = (size_t)0;
        {
          while (1) {
                                             ;
            if (!((unsigned long)*(right + rnum) != (unsigned long)((void *)0))) {
              goto while_break___0;
            }
            {
              tmp___0 = comsubs(*(left + lnum), (char const *)*(right + rnum));
              temp = tmp___0;
              both = addlists(both, temp);
              freelist(temp);
              free((void *)temp);
              rnum++;
            }
          }
                                        ;
        }
      while_break___0:
        lnum++;
      }
                                    ;
    }
  while_break:;
    return (both);
  }
}
static must *allocmust(must *mp) {
  must *new_mp;
  must *tmp;
  {
    {
      tmp = (must *)xmalloc(sizeof(*new_mp));
      new_mp = tmp;
      new_mp->in = (char **)xzalloc(sizeof(*(new_mp->in)));
      new_mp->left = (char *)xzalloc((size_t)2);
      new_mp->right = (char *)xzalloc((size_t)2);
      new_mp->is = (char *)xzalloc((size_t)2);
      new_mp->begline = (_Bool)0;
      new_mp->endline = (_Bool)0;
      new_mp->prev = mp;
    }
    return (new_mp);
  }
}
static void resetmust(must *mp) {
  char tmp;
  char tmp___0;
  {
    {
      freelist(mp->in);
      *(mp->in + 0) = (char *)((void *)0);
      tmp___0 = (char)'\000';
      *(mp->is + 0) = tmp___0;
      tmp = tmp___0;
      *(mp->right + 0) = tmp;
      *(mp->left + 0) = tmp;
      mp->begline = (_Bool)0;
      mp->endline = (_Bool)0;
    }
    return;
  }
}
static void freemust(must *mp) {
  {
    {
      freelist(mp->in);
      free((void *)mp->in);
      free((void *)mp->left);
      free((void *)mp->right);
      free((void *)mp->is);
      free((void *)mp);
    }
    return;
  }
}
static void dfamust(struct dfa *d) {
  must *mp;
  char const *result;
  size_t ri;
  size_t i;
  _Bool exact;
  _Bool begline___0;
  _Bool endline;
  struct dfamust *dm;
  token t;
  char **new;
  must *rmp;
  must *lmp;
  size_t j;
  size_t ln;
  size_t rn;
  size_t n;
  int tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  must *rmp___0;
  must *lmp___0;
  size_t lrlen;
  size_t tmp___3;
  size_t rllen;
  size_t tmp___4;
  char *tp;
  char *tmp___5;
  charclass *ccl;
  int j___0;
  _Bool tmp___6;
  _Bool tmp___7;
  int tmp___8;
  int tmp___9;
  char tmp___10;
  char tmp___11;
  int tmp___12;
  char tmp___13;
  char tmp___14;
  must *prev;
                    
  {
    mp = (must *)((void *)0);
    result = "";
    exact = (_Bool)0;
    begline___0 = (_Bool)0;
    endline = (_Bool)0;
    ri = (size_t)0;
    {
      while (1) {
                                     ;
        if (!(ri < d->tindex)) {
          goto while_break;
        }
        t = *(d->tokens + ri);
        if (t == 258L) {
          goto case_258;
        }
        if (t == 259L) {
          goto case_259;
        }
        if (t == 270L) {
          goto case_270;
        }
        if (t == 271L) {
          goto case_270;
        }
        if (t == 256L) {
          goto case_256;
        }
        if (t == 260L) {
          goto case_256;
        }
        if (t == 261L) {
          goto case_256;
        }
        if (t == 262L) {
          goto case_256;
        }
        if (t == 263L) {
          goto case_256;
        }
        if (t == 257L) {
          goto case_256;
        }
        if (t == 272L) {
          goto case_256;
        }
        if (t == 273L) {
          goto case_256;
        }
        if (t == 265L) {
          goto case_265;
        }
        if (t == 264L) {
          goto case_265;
        }
        if (t == 269L) {
          goto case_269;
        }
        if (t == 266L) {
          goto case_266;
        }
        if (t == -1L) {
          goto case_neg_1;
        }
        if (t == 268L) {
          goto case_268;
        }
        if (t == 0L) {
          goto case_0;
        }
        goto switch_default;
      case_258 : {
        mp = allocmust(mp);
        mp->begline = (_Bool)1;
      }
        goto switch_break;
      case_259 : {
        mp = allocmust(mp);
        mp->endline = (_Bool)1;
      }
        goto switch_break;
      case_270 : {
        __assert_fail("!\"neither LPAREN nor RPAREN may appear here\"", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c",
                      3951U, "dfamust");
      }
      case_256 : {
        mp = allocmust(mp);
      }
        goto switch_break;
      case_265 : {
        resetmust(mp);
      }
        goto switch_break;
      case_269 : {
        rmp = mp;
        mp = mp->prev;
        lmp = mp;
        tmp = strcmp((char const *)lmp->is, (char const *)rmp->is);
      }
        if (!(tmp == 0)) {
          *(lmp->is + 0) = (char)'\000';
        }
        lmp->begline = (_Bool)((int)lmp->begline & (int)rmp->begline);
        lmp->endline = (_Bool)((int)lmp->endline & (int)rmp->endline);
        i = (size_t)0;
        {
          while (1) {
                                             ;
            if ((int)*(lmp->left + i) != 0) {
              if (!((int)*(lmp->left + i) == (int)*(rmp->left + i))) {
                goto while_break___0;
              }
            } else {
              goto while_break___0;
            }
            i++;
          }
                                        ;
        }
      while_break___0 : {
        *(lmp->left + i) = (char)'\000';
        ln = strlen((char const *)lmp->right);
        rn = strlen((char const *)rmp->right);
        n = ln;
      }
        if (n > rn) {
          n = rn;
        }
        i = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(i < n)) {
              goto while_break___1;
            }
            if ((int)*(lmp->right + ((ln - i) - 1UL)) != (int)*(rmp->right + ((rn - i) - 1UL))) {
              goto while_break___1;
            }
            i++;
          }
                                        ;
        }
      while_break___1:
        j = (size_t)0;
        {
          while (1) {
                                             ;
            if (!(j < i)) {
              goto while_break___2;
            }
            *(lmp->right + j) = *(lmp->right + ((ln - i) + j));
            j++;
          }
                                         ;
        }
      while_break___2 : {
        *(lmp->right + j) = (char)'\000';
        new = inboth(lmp->in, rmp->in);
        freelist(lmp->in);
        free((void *)lmp->in);
        lmp->in = new;
        freemust(rmp);
      }
        goto switch_break;
      case_266:
        *(mp->is + 0) = (char)'\000';
        goto switch_break;
      case_neg_1:
        if (!(!mp->prev)) {
          {
            __assert_fail("!mp->prev", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c",
                          4011U, "dfamust");
          }
        }
        i = (size_t)0;
        {
          while (1) {
                                             ;
            if (!((unsigned long)*(mp->in + i) != (unsigned long)((void *)0))) {
              goto while_break___3;
            }
            {
              tmp___0 = strlen((char const *)*(mp->in + i));
              tmp___1 = strlen(result);
            }
            if (tmp___0 > tmp___1) {
              result = (char const *)*(mp->in + i);
            }
            i++;
          }
                                         ;
        }
      while_break___3 : {
        tmp___2 = strcmp(result, (char const *)mp->is);
      }
        if (tmp___2 == 0) {
          exact = (_Bool)1;
          begline___0 = mp->begline;
          endline = mp->endline;
        }
        goto done;
      case_268 : {
        rmp___0 = mp;
        mp = mp->prev;
        lmp___0 = mp;
        lmp___0->in = addlists(lmp___0->in, rmp___0->in);
      }
        if ((int)*(lmp___0->right + 0) != 0) {
          if ((int)*(rmp___0->left + 0) != 0) {
            {
              tmp___3 = strlen((char const *)lmp___0->right);
              lrlen = tmp___3;
              tmp___4 = strlen((char const *)rmp___0->left);
              rllen = tmp___4;
              tmp___5 = (char *)xmalloc(lrlen + rllen);
              tp = tmp___5;
              memcpy((void * /* __restrict  */)((void *)tp), (void const * /* __restrict  */)((void const *)lmp___0->right),
                     lrlen);
              memcpy((void * /* __restrict  */)((void *)(tp + lrlen)), (void const * /* __restrict  */)((void const *)rmp___0->left),
                     rllen);
              lmp___0->in = enlist(lmp___0->in, tp, lrlen + rllen);
              free((void *)tp);
            }
          }
        }
        if ((int)*(lmp___0->is + 0) != 0) {
          {
            lmp___0->left = icatalloc(lmp___0->left, (char const *)rmp___0->left);
          }
        }
        if ((int)*(rmp___0->is + 0) == 0) {
          *(lmp___0->right + 0) = (char)'\000';
        }
        {
          lmp___0->right = icatalloc(lmp___0->right, (char const *)rmp___0->right);
        }
        if ((int)*(lmp___0->is + 0) != 0) {
          goto _L;
        } else {
          if (lmp___0->begline) {
          _L:
            if ((int)*(rmp___0->is + 0) != 0) {
              {
                lmp___0->is = icatalloc(lmp___0->is, (char const *)rmp___0->is);
                lmp___0->endline = rmp___0->endline;
              }
            } else {
              if (rmp___0->endline) {
                {
                  lmp___0->is = icatalloc(lmp___0->is, (char const *)rmp___0->is);
                  lmp___0->endline = rmp___0->endline;
                }
              } else {
                *(lmp___0->is + 0) = (char)'\000';
                lmp___0->begline = (_Bool)0;
                lmp___0->endline = (_Bool)0;
              }
            }
          } else {
            *(lmp___0->is + 0) = (char)'\000';
            lmp___0->begline = (_Bool)0;
            lmp___0->endline = (_Bool)0;
          }
        }
        {
          freemust(rmp___0);
        }
        goto switch_break;
      case_0:
        goto done;
      switch_default : {
        mp = allocmust(mp);
      }
        if (275L <= t) {
          ccl = d->charclasses + (t - 275L);
          j___0 = 0;
          {
            while (1) {
                                               ;
              if (!(j___0 < 256)) {
                goto while_break___4;
              }
              {
                tmp___6 = tstbit((unsigned int)j___0, (charclass_word * /* const  */)(*ccl));
              }
              if (tmp___6) {
                goto while_break___4;
              }
              j___0++;
            }
                                           ;
          }
        while_break___4:;
          if (!(j___0 < 256)) {
            goto switch_break;
          }
          t = (token)j___0;
          {
            while (1) {
                                               ;
              j___0++;
              if (!(j___0 < 256)) {
                goto while_break___5;
              }
              {
                tmp___7 = tstbit((unsigned int)j___0, (charclass_word * /* const  */)(*ccl));
              }
              if (tmp___7) {
                if (case_fold) {
                  if (!d->multibyte) {
                    {
                      tmp___8 = toupper(j___0);
                      tmp___9 = toupper((int)t);
                    }
                    if (!(tmp___8 == tmp___9)) {
                      goto while_break___5;
                    }
                  } else {
                    goto while_break___5;
                  }
                } else {
                  goto while_break___5;
                }
              }
            }
                                           ;
          }
        while_break___5:;
          if (j___0 < 256) {
            goto switch_break;
          }
        }
        if (case_fold) {
          if (!d->multibyte) {
            {
              tmp___12 = toupper((int)t);
              tmp___11 = (char)tmp___12;
            }
          } else {
            tmp___11 = (char)t;
          }
        } else {
          tmp___11 = (char)t;
        }
        {
          *(mp->right + 0) = tmp___11;
          tmp___10 = tmp___11;
          *(mp->left + 0) = tmp___10;
          *(mp->is + 0) = tmp___10;
          tmp___14 = (char)'\000';
          *(mp->right + 1) = tmp___14;
          tmp___13 = tmp___14;
          *(mp->left + 1) = tmp___13;
          *(mp->is + 1) = tmp___13;
          mp->in = enlist(mp->in, mp->is, (size_t)1);
        }
        goto switch_break;
      switch_break:
        ri++;
      }
                                    ;
    }
  while_break:;
  done:
    if (*result) {
      {
        dm = (struct dfamust *)xmalloc(sizeof(*dm));
        dm->exact = exact;
        dm->begline = begline___0;
        dm->endline = endline;
        dm->must = xstrdup(result);
        dm->next = d->musts;
        d->musts = dm;
      }
    }
    {
      while (1) {
                                         ;
        if (!mp) {
          goto while_break___6;
        }
        {
          prev = mp->prev;
          freemust(mp);
          mp = prev;
        }
      }
                                     ;
    }
  while_break___6:;
    return;
  }
}
struct dfa *dfaalloc(void) {
  struct dfa *tmp;
  {
    {
      tmp = (struct dfa *)xmalloc(sizeof(struct dfa));
    }
    return (tmp);
  }
}
struct dfamust *__attribute__((__pure__)) dfamusts(struct dfa const *d) {
  {
    return ((struct dfamust * /* __attribute__((__pure__)) */)((struct dfamust *)d->musts));
  }
}
extern __attribute__((__nothrow__)) size_t mbrlen(char const *__restrict __s,
                                                  size_t __n, mbstate_t *__restrict __ps);
void build_mbclen_cache(void);
static size_t mbclen_cache[256];
static char trans[256];
void kwsinit(kwset_t *kwset___1) {
  int i;
  size_t tmp;
  {
    if (match_icase) {
      {
        tmp = __ctype_get_mb_cur_max();
      }
      if (tmp == 1UL) {
        i = 0;
        {
          while (1) {
                                         ;
            if (!(i < 256)) {
              goto while_break;
            }
            {
              trans[i] = (char)toupper(i);
              i++;
            }
          }

        }
      while_break : {
        *kwset___1 = kwsalloc((char const *)(trans));
      }
      } else {
        {

        }
      }
    } else {
      {
        *kwset___1 = kwsalloc((char const *)((void *)0));
      }
    }
                      
       

       
     
    return;
  }
}
static char *out;
static mb_len_map_t *len_map;
static size_t outalloc;
char *mbtoupper(char const *beg, size_t *n, mb_len_map_t **len_map_p) {

































































































































}
void build_mbclen_cache(void) {




























}
ptrdiff_t mb_goback(char const **mb_start, char const *cur, char const *end) {























































}
wint_t mb_prev_wc(char const *buf, char const *cur, char const *end) {
















}
wint_t mb_next_wc(char const *cur, char const *end) {























}
extern int fflush_unlocked(FILE *__stream);
extern int fputc_unlocked(int __c, FILE *__stream);
extern size_t fread_unlocked(void *__restrict __ptr, size_t __size, size_t __n,
                             FILE *__restrict __stream);
extern size_t fwrite_unlocked(void const *__restrict __ptr, size_t __size, size_t __n,
                              FILE *__restrict __stream);
extern __attribute__((__nothrow__)) __off_t lseek(int __fd, __off_t __offset, int __whence);
extern __attribute__((__nothrow__)) int isatty(int __fd);
extern char *optarg;
extern int optind;
extern __attribute__((__nothrow__)) int getpagesize(void) __attribute__((__const__));
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1))) atexit)(void (*__func)(void));
extern __attribute__((__nothrow__, __noreturn__)) void exit(int __status);
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcasecmp)(char const *__s1,
                                                                                       char const *__s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) char *textdomain(char const *__domainname);
extern __attribute__((__nothrow__)) char *bindtextdomain(char const *__domainname,
                                                         char const *__dirname);
extern int getopt_long(int ___argc, char *const *___argv, char const *__shortopts,
                       struct option const *__longopts, int *__longind);
static struct stat out_stat;
static int show_help;
static int show_version;
static int suppress_errors;
static int color_option;
static int only_matching;
static int align_tabs;
static char const *group_separator = "--";
static char const *selected_match_color = "01;31";
static char const *context_match_color = "01;31";
static char const *filename_color = "35";
static char const *line_num_color = "32";
static char const *byte_num_color = "32";
static char const *sep_color = "36";
static char const *selected_line_color = "";
static char const *context_line_color = "";
static char const *sgr_start = "\033[%sm\033[K";
static char const *sgr_end = "\033[m\033[K";
static void pr_sgr_start(char const *s) {








}
static void pr_sgr_end(char const *s) {








}
static void pr_sgr_start_if(char const *s) {
  {
                       
       

       
     
    return;
  }
}
static void pr_sgr_end_if(char const *s) {
  {
                       
       

       
     
    return;
  }
}
static void color_cap_mt_fct(void) {




}
static void color_cap_rv_fct(void) {




}
static void color_cap_ne_fct(void) {







}
static struct color_cap const color_dict[12] =
    {{"mt", &selected_match_color, &color_cap_mt_fct},
     {"ms", &selected_match_color, (void (*)(void))((void *)0)},
     {"mc", &context_match_color, (void (*)(void))((void *)0)},
     {"fn", &filename_color, (void (*)(void))((void *)0)},
     {"ln", &line_num_color, (void (*)(void))((void *)0)},
     {"bn", &byte_num_color, (void (*)(void))((void *)0)},
     {"se", &sep_color, (void (*)(void))((void *)0)},
     {"sl", &selected_line_color, (void (*)(void))((void *)0)},
     {"cx", &context_line_color, (void (*)(void))((void *)0)},
     {"rv", (char const **)((void *)0), &color_cap_rv_fct},
     {"ne", (char const **)((void *)0), &color_cap_ne_fct},
     {(char const *)((void *)0), (char const **)((void *)0), (void (*)(void))((void *)0)}};
static struct exclude *excluded_patterns;
static struct exclude *excluded_directory_patterns;
static char const short_options[58] =
    {(char const)'0', (char const)'1', (char const)'2', (char const)'3',
     (char const)'4', (char const)'5', (char const)'6', (char const)'7',
     (char const)'8', (char const)'9', (char const)'A', (char const)':',
     (char const)'B', (char const)':', (char const)'C', (char const)':',
     (char const)'D', (char const)':', (char const)'E', (char const)'F',
     (char const)'G', (char const)'H', (char const)'I', (char const)'P',
     (char const)'T', (char const)'U', (char const)'V', (char const)'X',
     (char const)':', (char const)'a', (char const)'b', (char const)'c',
     (char const)'d', (char const)':', (char const)'e', (char const)':',
     (char const)'f', (char const)':', (char const)'h', (char const)'i',
     (char const)'L', (char const)'l', (char const)'m', (char const)':',
     (char const)'n', (char const)'o', (char const)'q', (char const)'R',
     (char const)'r', (char const)'s', (char const)'u', (char const)'v',
     (char const)'w', (char const)'x', (char const)'y', (char const)'Z',
     (char const)'z', (char const)'\000'};
static struct option const long_options[50] =
    {{"basic-regexp", 0, (int *)((void *)0), 'G'},
     {"extended-regexp", 0, (int *)((void *)0), 'E'},
     {"fixed-regexp", 0, (int *)((void *)0), 'F'},
     {"fixed-strings", 0, (int *)((void *)0), 'F'},
     {"perl-regexp", 0, (int *)((void *)0), 'P'},
     {"after-context", 1, (int *)((void *)0), 'A'},
     {"before-context", 1, (int *)((void *)0), 'B'},
     {"binary-files", 1, (int *)((void *)0), 128},
     {"byte-offset", 0, (int *)((void *)0), 'b'},
     {"context", 1, (int *)((void *)0), 'C'},
     {"color", 2, (int *)((void *)0), 129},
     {"colour", 2, (int *)((void *)0), 129},
     {"count", 0, (int *)((void *)0), 'c'},
     {"devices", 1, (int *)((void *)0), 'D'},
     {"directories", 1, (int *)((void *)0), 'd'},
     {"exclude", 1, (int *)((void *)0), 131},
     {"exclude-from", 1, (int *)((void *)0), 132},
     {"exclude-dir", 1, (int *)((void *)0), 135},
     {"file", 1, (int *)((void *)0), 'f'},
     {"files-with-matches", 0, (int *)((void *)0), 'l'},
     {"files-without-match", 0, (int *)((void *)0), 'L'},
     {"group-separator", 1, (int *)((void *)0), 136},
     {"help", 0, &show_help, 1},
     {"include", 1, (int *)((void *)0), 130},
     {"ignore-case", 0, (int *)((void *)0), 'i'},
     {"initial-tab", 0, (int *)((void *)0), 'T'},
     {"label", 1, (int *)((void *)0), 134},
     {"line-buffered", 0, (int *)((void *)0), 133},
     {"line-number", 0, (int *)((void *)0), 'n'},
     {"line-regexp", 0, (int *)((void *)0), 'x'},
     {"max-count", 1, (int *)((void *)0), 'm'},
     {"no-filename", 0, (int *)((void *)0), 'h'},
     {"no-group-separator", 0, (int *)((void *)0), 136},
     {"no-messages", 0, (int *)((void *)0), 's'},
     {"null", 0, (int *)((void *)0), 'Z'},
     {"null-data", 0, (int *)((void *)0), 'z'},
     {"only-matching", 0, (int *)((void *)0), 'o'},
     {"quiet", 0, (int *)((void *)0), 'q'},
     {"recursive", 0, (int *)((void *)0), 'r'},
     {"dereference-recursive", 0, (int *)((void *)0), 'R'},
     {"regexp", 1, (int *)((void *)0), 'e'},
     {"invert-match", 0, (int *)((void *)0), 'v'},
     {"silent", 0, (int *)((void *)0), 'q'},
     {"text", 0, (int *)((void *)0), 'a'},
     {"binary", 0, (int *)((void *)0), 'U'},
     {"unix-byte-offsets", 0, (int *)((void *)0), 'u'},
     {"version", 0, (int *)((void *)0), 'V'},
     {"with-filename", 0, (int *)((void *)0), 'H'},
     {"word-regexp", 0, (int *)((void *)0), 'w'},
     {(char const *)0, 0, (int *)0, 0}};
static char const *matcher;
static char const *filename;
static size_t filename_prefix_len;
static int errseen;
static int write_error_seen;
static char const *const directories_args[4] = {(char const * /* const  */) "read", (char const * /* const  */) "recurse", (char const * /* const  */) "skip", (char const * /* const  */)((char const *)((void *)0))};
static enum directories_type const directories_types[3] = {(enum directories_type const)2, (enum directories_type const)3, (enum directories_type const)4};
static enum directories_type directories = (enum directories_type)2;
static int fts_options = 793;
static enum __anonenum_devices_71 devices = (enum __anonenum_devices_71)0;
static int grepfile(int dirdesc, char const *name, int follow, int command_line);
static int grepdesc(int desc, int command_line);
static void dos_binary(void);
static void dos_unix_byte_offsets(void);
static int undossify_input(char *buf, size_t buflen);
static int is_device_mode(mode_t m) {
  int tmp;
  {
    if ((m & 61440U) == 8192U) {

    } else {
      if ((m & 61440U) == 24576U) {

      } else {
        if ((m & 61440U) == 49152U) {

        } else {
          if ((m & 61440U) == 4096U) {

          } else {
            tmp = 0;
          }
        }
      }
    }
    return (tmp);
  }
}
static int usable_st_size(struct stat const *st) {
  int tmp;
  {
    if ((st->st_mode & 61440U) == 32768U) {
      tmp = 1;
    } else {





    }
    return (tmp);
  }
}
static void (*compile)(char const *, size_t);
static size_t (*execute)(char const *, size_t, size_t *, char const *);
static void suppressible_error(char const *mesg, int errnum) {









}
static void clean_up_stdout(void) {
  {
    if (!write_error_seen) {
      {
        close_stdout();
      }
    }
    return;
  }
}
static int file_is_binary(char const *buf, size_t bufsize, int fd, struct stat const *st) {
            
  void *tmp___0;
  off_t cur;
  off_t hole_start;
  off_t tmp___1;
               
                  
  int tmp___4;
  {
                   
       

       

     
    {
      tmp___0 = memchr((void const *)buf, '\000', bufsize);
    }
                  

     
    {
      tmp___4 = usable_st_size(st);
    }
    if (tmp___4) {
      cur = (off_t)bufsize;
                    
         

         



       
      {
        tmp___1 = lseek(fd, cur, 4);
        hole_start = tmp___1;
      }
                             
         

         









       
    }
    return (0);
  }
}
static void context_length_arg(char const *str, intmax_t *out___0) {


























}
static int skipped_file(char const *name, int command_line, int is_dir) {
  _Bool tmp;
  int tmp___0;
  _Bool tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (is_dir) {
      if ((unsigned int)directories == 4U) {
        tmp___0 = 1;
      } else {
        if (command_line) {
          if (filename_prefix_len != 0UL) {
            tmp___0 = 0;
          } else {
            goto _L;
          }
        } else {
        _L:
          if (excluded_directory_patterns) {
            {
              tmp = excluded_file_name((struct exclude const *)excluded_directory_patterns,
                                       name);
            }
            if (tmp) {
              tmp___0 = 1;
            } else {
              tmp___0 = 0;
            }
          } else {
            tmp___0 = 0;
          }
        }
      }
      tmp___3 = tmp___0;
    } else {
      if (excluded_patterns) {
        {
          tmp___1 = excluded_file_name((struct exclude const *)excluded_patterns, name);
        }
        if (tmp___1) {
          tmp___2 = 1;
        } else {
          tmp___2 = 0;
        }
      } else {
        tmp___2 = 0;
      }
      tmp___3 = tmp___2;
    }
    return (tmp___3);
  }
}
static char *buffer;
static size_t bufalloc;
static int bufdesc;
static char *bufbeg;
static char *buflim;
static size_t pagesize;
static off_t bufoffset;
static off_t after_last_match;
static int reset(int fd, struct stat const *st) {
  size_t tmp;
  int *tmp___0;
  char *tmp___1;
                   
  {
    if (!pagesize) {
      {
        pagesize = (size_t)getpagesize();
      }
      if (pagesize == 0UL) {
        {
          abort();
        }
      } else {
        if (2UL * pagesize + 1UL <= pagesize) {
          {
            abort();
          }
        }
      }
      if (32768UL % pagesize == 0UL) {
        tmp = (size_t)32768;
      } else {
        tmp = 32768UL + (pagesize - 32768UL % pagesize);
      }
      {
        bufalloc = (tmp + pagesize) + 1UL;
        buffer = (char *)xmalloc(bufalloc);
      }
    }
    if ((size_t)(buffer + 1) % pagesize == 0UL) {
      buflim = buffer + 1;
    } else {
      buflim = (buffer + 1) + (pagesize - (size_t)(buffer + 1) % pagesize);
    }
    bufbeg = buflim;
    *(bufbeg + -1) = (char)eolbyte;
    bufdesc = fd;
    if ((st->st_mode & 61440U) == 32768U) {
      if (fd != 0) {
        bufoffset = (off_t)0;
      } else {
        {
          bufoffset = lseek(fd, (__off_t)0, 1);
        }
        if (bufoffset < 0L) {
          {
            tmp___0 = __errno_location();
            tmp___1 = gettext("lseek failed");
            suppressible_error((char const *)tmp___1, *tmp___0);
          }
          return (0);
        }
      }
    }
    return (1);
  }
}
static int fillbuf(size_t save, struct stat const *st) {
  ssize_t fillsize;
  int cc;
  char *readbuf;
  size_t readsize;
  size_t saved_offset;
  size_t minsize;
  size_t newsize;
  size_t newalloc;
  char *newbuf;
  off_t to_be_read;
  off_t maxsize_off;
  int tmp;
  void *tmp___0;
  {
    cc = 1;
    saved_offset = (size_t)((buflim - save) - buffer);
    if (pagesize <= (size_t)((buffer + bufalloc) - buflim)) {
      readbuf = buflim;
      bufbeg = buflim - save;
    } else {
      minsize = save + pagesize;
      newsize = (bufalloc - pagesize) - 1UL;
      {
        while (1) {
                                       ;
          if (!(newsize < minsize)) {
            goto while_break;
          }
          if (newsize * 2UL < newsize) {
            {
              xalloc_die();
            }
          } else {
            if ((newsize * 2UL + pagesize) + 1UL < newsize * 2UL) {
              {
                xalloc_die();
              }
            }
          }
          newsize *= 2UL;
        }
                                      ;
      }
    while_break : {
      tmp = usable_st_size(st);
    }
      if (tmp) {
        to_be_read = (off_t)(st->st_size - (__off_t const)bufoffset);
        maxsize_off = (off_t)(save + (size_t)to_be_read);
        if (0L <= to_be_read) {
          if (to_be_read <= maxsize_off) {
            if ((size_t)maxsize_off == (size_t)maxsize_off) {
              if (minsize <= (size_t)maxsize_off) {
                if ((size_t)maxsize_off < newsize) {
                  newsize = (size_t)maxsize_off;
                }
              }
            }
          }
        }
      }
      newalloc = (newsize + pagesize) + 1UL;
      if (bufalloc < newalloc) {
        {
          bufalloc = newalloc;
          tmp___0 = xmalloc(bufalloc);
          newbuf = (char *)tmp___0;
        }
      } else {
        newbuf = buffer;
      }
      if ((size_t)((newbuf + 1) + save) % pagesize == 0UL) {
        readbuf = (newbuf + 1) + save;
      } else {
        readbuf = ((newbuf + 1) + save) + (pagesize - (size_t)((newbuf + 1) + save) % pagesize);
      }
      {
        bufbeg = readbuf - save;
        memmove((void *)bufbeg, (void const *)(buffer + saved_offset), save);
        *(bufbeg + -1) = (char)eolbyte;
      }
      if ((unsigned long)newbuf != (unsigned long)buffer) {
        {
          free((void *)buffer);
          buffer = newbuf;
        }
      }
    }
    {
      readsize = (size_t)((buffer + bufalloc) - readbuf);
      readsize -= readsize % pagesize;
      fillsize = (ssize_t)safe_read(bufdesc, (void *)readbuf, readsize);
    }
    if (fillsize < 0L) {
      cc = 0;
      fillsize = (ssize_t)cc;
    }
    {
      bufoffset += fillsize;
      fillsize = (ssize_t)undossify_input(readbuf, (size_t)fillsize);
      buflim = readbuf + fillsize;
    }
    return (cc);
  }
}
static enum __anonenum_binary_files_72 binary_files;
static int filename_mask;
static int out_quiet;
static _Bool out_invert;
static int out_file;
static int out_line;
static int out_byte;
static intmax_t out_before;
static intmax_t out_after;
static int count_matches;
static int list_files;
static int no_filenames;
static intmax_t max_count;
static int line_buffered;
static char *label = (char *)((void *)0);
static uintmax_t totalcc;
static char const *lastnl;
static char const *lastout;
static uintmax_t totalnl;
static intmax_t outleft;
static intmax_t pending;
static int done_on_match;
static int exit_on_match;
static int dos_report_unix_offset = 0;
static File_type dos_file_type = (File_type)0;
static File_type dos_use_file_type = (File_type)0;
static off_t dos_stripped_crs = (off_t)0;
static struct dos_map *dos_pos_map;
static int dos_pos_map_size = 0;
static int dos_pos_map_used = 0;
static int inp_map_idx = 0;
static int out_map_idx = 1;
static void dos_binary(void) {



}
static void dos_unix_byte_offsets(void) {



}
static int undossify_input(char *buf, size_t buflen) {
  int chars_left;
  char *destp;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  char *tmp___2;
  size_t tmp___3;
  {
    return ((int)buflen);
    chars_left = 0;
    if (totalcc == 0UL) {
      inp_map_idx = 0;
      out_map_idx = 1;
      dos_pos_map_used = 0;
      dos_stripped_crs = (off_t)0;
      dos_file_type = dos_use_file_type;
    }
    if ((unsigned int)dos_file_type == 0U) {
      {
        dos_file_type = (File_type)guess_type(buf, buflen);
      }
    }
    if ((unsigned int)dos_file_type == 2U) {
      destp = buf;
      {
        while (1) {
                                       ;
          tmp___3 = buflen;
          buflen--;
          if (!tmp___3) {
            goto while_break;
          }
          if ((int)*buf != 13) {
            tmp = destp;
            destp++;
            tmp___0 = buf;
            buf++;
            *tmp = *tmp___0;
            chars_left++;
          } else {
            buf++;
            if (out_byte) {
              if (!dos_report_unix_offset) {
                dos_stripped_crs++;
                {
                  while (1) {
                                                     ;
                    if (buflen) {
                      if (!((int)*buf == 13)) {
                        goto while_break___0;
                      }
                    } else {
                      goto while_break___0;
                    }
                    dos_stripped_crs++;
                    buflen--;
                    buf++;
                  }
                                                ;
                }
              while_break___0:;
                if (inp_map_idx >= dos_pos_map_size - 1) {
                  if (inp_map_idx) {
                    dos_pos_map_size = inp_map_idx * 2;
                  } else {
                    dos_pos_map_size = 1000;
                  }
                  {
                    dos_pos_map = (struct dos_map *)xrealloc((void *)dos_pos_map, (unsigned long)dos_pos_map_size * sizeof(struct dos_map));
                  }
                }
                if (!inp_map_idx) {
                  (dos_pos_map + inp_map_idx)->pos = (off_t)0;
                  tmp___1 = inp_map_idx;
                  inp_map_idx++;
                  (dos_pos_map + tmp___1)->add = (off_t)0;
                  (dos_pos_map + inp_map_idx)->add = (off_t)0;
                }
                inp_map_idx++;
                if ((int)*buf == 10) {
                  tmp___2 = destp + 1;
                } else {
                  tmp___2 = destp;
                }
                (dos_pos_map + (inp_map_idx - 1))->pos = (off_t)((uintmax_t)(tmp___2 - bufbeg) + totalcc);
                (dos_pos_map + inp_map_idx)->add = dos_stripped_crs;
                dos_pos_map_used = inp_map_idx;
                (dos_pos_map + inp_map_idx)->pos = (off_t)(((uintmax_t)(destp - bufbeg) + totalcc) + 1UL);
              }
            }
          }
        }
                                      ;
      }
    while_break:;
      return (chars_left);
    }
    return ((int)buflen);
  }
}
static off_t dossified_pos(off_t byteno) {




















































}
static uintmax_t add_count(uintmax_t a, uintmax_t b) {
  uintmax_t sum;
  char *tmp;
                   
  {
    sum = a + b;
    if (sum < a) {
      {
        tmp = gettext("input is too large to count");
        error(2, 0, (char const *)tmp);
      }
    }
    return (sum);
  }
}
static void nlscan(char const *lim) {
  size_t newlines;
  char const *beg;
  {
    newlines = (size_t)0;
    beg = lastnl;
    {
      while (1) {
                                     ;
        if (!((unsigned long)beg < (unsigned long)lim)) {
          goto while_break;
        }
        {
          beg = (char const *)memchr((void const *)beg, (int)eolbyte, (size_t)(lim - beg));
        }
        if (!beg) {
          goto while_break;
        }
        newlines++;
        beg++;
      }
                                    ;
    }
  while_break : {
    totalnl = add_count(totalnl, newlines);
    lastnl = lim;
  }
    return;
  }
}
static void print_filename(void) {
  {
    {
      pr_sgr_start_if(filename_color);
      fputs_unlocked((char const * /* __restrict  */)filename, (FILE * /* __restrict  */) stdout);
      pr_sgr_end_if(filename_color);
    }
    return;
  }
}
static void print_sep(char sep) {
  {
    {
      pr_sgr_start_if(sep_color);
      fputc_unlocked((int)sep, stdout);
      pr_sgr_end_if(sep_color);
    }
    return;
  }
}
static void print_offset(uintmax_t pos, int min_width, char const *color) {
  char buf[sizeof(pos) * 8UL];
  char *p;
                   
  {
    p = buf + sizeof(buf);
    {
      while (1) {
                                     ;
        p--;
        *p = (char)(48UL + pos % 10UL);
        min_width--;
        pos /= 10UL;
        if (!(pos != 0UL)) {
          goto while_break;
        }
      }
                                    ;
    }
  while_break:;
    if (align_tabs) {
      {
        while (1) {
                                           ;
          min_width--;
          if (!(min_width >= 0)) {
            goto while_break___0;
          }
          p--;
          *p = (char)' ';
        }
                                      ;
      }
    while_break___0:;
    }
    {
      pr_sgr_start_if(color);
      fwrite_unlocked((void const * /* __restrict  */)((void const *)p), (size_t)1,
                      (size_t)((buf + sizeof(buf)) - p), (FILE * /* __restrict  */) stdout);
      pr_sgr_end_if(color);
    }
    return;
  }
}
static void print_line_head(char const *beg, char const *lim, int sep) {
  int pending_sep;
  uintmax_t pos;
  uintmax_t tmp;
  {
    pending_sep = 0;
    if (out_file) {
      {
        print_filename();
      }
      if (filename_mask) {
        pending_sep = 1;
      } else {
        {
          fputc_unlocked(0, stdout);
        }
      }
    }
    if (out_line) {
      if ((unsigned long)lastnl < (unsigned long)lim) {
        {
          nlscan(beg);
          totalnl = add_count(totalnl, (uintmax_t)1);
          lastnl = lim;
        }
      }
      if (pending_sep) {
        {
          print_sep((char)sep);
        }
      }
      {
        print_offset(totalnl, 4, line_num_color);
        pending_sep = 1;
      }
    }
    if (out_byte) {
      {
        tmp = add_count(totalcc, (uintmax_t)(beg - (char const *)bufbeg));
        pos = tmp;
        pos = (uintmax_t)dossified_pos((off_t)pos);
      }
      if (pending_sep) {
        {
          print_sep((char)sep);
        }
      }
      {
        print_offset(pos, 6, byte_num_color);
        pending_sep = 1;
      }
    }
    if (pending_sep) {
      if (align_tabs) {
        {
          fputs_unlocked((char const * /* __restrict  */) "\t\b", (FILE * /* __restrict  */) stdout);
        }
      }
      {
        print_sep((char)sep);
      }
    }
    return;
  }
}
static char const *print_line_middle(char const *beg, char const *lim, char const *line_color,
                                     char const *match_color) {
  size_t match_size;
  size_t match_offset;
  char const *cur;
  char const *mid;
  char const *b;
  int tmp;
  {
    cur = beg;
    mid = (char const *)((void *)0);
    {
      while (1) {
                                     ;
        if ((unsigned long)cur < (unsigned long)lim) {
          {
            match_offset = (*execute)(beg, (size_t)(lim - beg), &match_size, beg + (cur - beg));
          }
          if (!(match_offset != 0xffffffffffffffffUL)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        b = beg + match_offset;
        if ((unsigned long)b == (unsigned long)lim) {
          goto while_break;
        }
        if (match_size == 0UL) {
          match_size = (size_t)1;
          if (!mid) {
            mid = cur;
          }
        } else {
          if (only_matching) {
            if (out_invert) {
              tmp = '-';
            } else {
              tmp = ':';
            }
            {
              print_line_head(b, lim, tmp);
            }
          } else {
            {
              pr_sgr_start(line_color);
            }
            if (mid) {
              cur = mid;
              mid = (char const *)((void *)0);
            }
            {
              fwrite_unlocked((void const * /* __restrict  */)((void const *)cur), sizeof(char),
                              (size_t)(b - cur), (FILE * /* __restrict  */) stdout);
            }
          }
          {
            pr_sgr_start_if(match_color);
            fwrite_unlocked((void const * /* __restrict  */)((void const *)b), sizeof(char),
                            match_size, (FILE * /* __restrict  */) stdout);
            pr_sgr_end_if(match_color);
          }
          if (only_matching) {
            {
              fputs_unlocked((char const * /* __restrict  */) "\n", (FILE * /* __restrict  */) stdout);
            }
          }
        }
        cur = b + match_size;
      }
                                    ;
    }
  while_break:;
    if (only_matching) {
      cur = lim;
    } else {
      if (mid) {
        cur = mid;
      }
    }
    return (cur);
  }
}
static char const *print_line_tail(char const *beg, char const *lim, char const *line_color) {





































}
static void prline(char const *beg, char const *lim, int sep) {
  int matching;
  char const *line_color;
  char const *match_color;
              
                
  int tmp___2;
                    
  {
    if (!only_matching) {
      {
        print_line_head(beg, lim, sep);
      }
    }
    matching = (sep == 58) ^ (int)out_invert;
    if (color_option) {



















    } else {
      match_color = (char const *)((void *)0);
      line_color = match_color;
    }
    if (only_matching) {
      if (matching) {
        goto _L___0;
      } else {

      }
    } else {
           ;
      if (color_option) {
        if (*line_color) {

        } else {
          if (*match_color) {
          _L___0:;
            if (matching) {
              if (only_matching) {
                {
                  beg = print_line_middle(beg, lim, line_color, match_color);
                }
              } else {





              }
            }
                                 





             
          }
        }
      }
    }
    if (!only_matching) {
      if ((unsigned long)lim > (unsigned long)beg) {
        {
          fwrite_unlocked((void const * /* __restrict  */)((void const *)beg), (size_t)1,
                          (size_t)(lim - beg), (FILE * /* __restrict  */) stdout);
        }
      }
    }
    {
      tmp___2 = ferror_unlocked(stdout);
    }
                  
       



       
     
    lastout = lim;
                        
       

       
     
    return;
  }
}
static void prpending(char const *lim) {
                 
                  
                    
                 
  {
                   

     
    {
      while (1) {
                                     ;
        if (pending > 0L) {



        } else {
          goto while_break;
        }
        {



        }
















      }

    }
  while_break:;
    return;
  }
}
static _Bool used;
static void prtext(char const *beg, char const *lim) {
  char eol;
  char const *p;
  char const *bp;
  char const *tmp;
  intmax_t i;
  char const *nl;
  char const *tmp___0;
  intmax_t n;
  char const *nl___0;
  char const *tmp___1;
  {
    eol = (char)eolbyte;
    if (!out_quiet) {
      if (pending > 0L) {
        {
          prpending(beg);
        }
      }
    }
    p = beg;
    if (!out_quiet) {
      if (lastout) {
        tmp = lastout;
      } else {
        tmp = (char const *)bufbeg;
      }
      bp = tmp;
      i = (intmax_t)0;
      {
        while (1) {
                                       ;
          if (!(i < out_before)) {
            goto while_break;
          }
          if ((unsigned long)p > (unsigned long)bp) {
            {
              while (1) {
                                                 ;
                p--;
                if (!((int const) * (p + -1) != (int const)eol)) {
                  goto while_break___0;
                }
              }
                                            ;
            }
          while_break___0:;
          }
          i++;
        }
                                      ;
      }
    while_break:;
      if (0L <= out_before) {
        goto _L;
      } else {
        if (0L <= out_after) {
        _L:
          if (used) {
            if ((unsigned long)p != (unsigned long)lastout) {
              if (group_separator) {
                {
                  pr_sgr_start_if(sep_color);
                  fputs_unlocked((char const * /* __restrict  */)group_separator, (FILE * /* __restrict  */) stdout);
                  pr_sgr_end_if(sep_color);
                  fputc_unlocked('\n', stdout);
                }
              }
            }
          }
        }
      }
      {
        while (1) {
                                           ;
          if (!((unsigned long)p < (unsigned long)beg)) {
            goto while_break___1;
          }
          {
            tmp___0 = (char const *)memchr((void const *)p, (int)eol, (size_t)(beg - p));
            nl = tmp___0;
            nl++;
            prline(p, nl, '-');
            p = nl;
          }
        }
                                      ;
      }
    while_break___1:;
    }
    if (out_invert) {
      n = (intmax_t)0;
      {
        while (1) {
                                           ;
          if ((unsigned long)p < (unsigned long)lim) {
            if (!(n < outleft)) {
              goto while_break___2;
            }
          } else {
            goto while_break___2;
          }
          {
            tmp___1 = (char const *)memchr((void const *)p, (int)eol, (size_t)(lim - p));
            nl___0 = tmp___1;
            nl___0++;
          }
          if (!out_quiet) {
            {
              prline(p, nl___0, ':');
            }
          }
          p = nl___0;
          n++;
        }
                                      ;
      }
    while_break___2:;
    } else {
      if (!out_quiet) {
        {
          prline(beg, lim, ':');
        }
      }
      n = (intmax_t)1;
      p = lim;
    }
    after_last_match = bufoffset - (buflim - (char *)p);
    if (out_quiet) {
      pending = (intmax_t)0;
    } else {
      pending = out_after;
    }
    used = (_Bool)1;
    outleft -= n;
    return;
  }
}
static size_t do_execute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  size_t result;
  char const *line_next;
  size_t tmp;
  size_t tmp___0;
  char const *line_buf;
  char const *line_end;
  char const *tmp___1;
  {
    if ((unsigned long)execute == (unsigned long)(&Fexecute)) {
      goto _L;
    } else {
      if ((unsigned long)execute == (unsigned long)(&Pexecute)) {
      _L : {
        tmp___0 = __ctype_get_mb_cur_max();
      }
        if (tmp___0 == 1UL) {
          {
            tmp = (*execute)(buf, size, match_size, start_ptr);
          }
          return (tmp);
        } else {
          if (!match_icase) {
            {
              tmp = (*execute)(buf, size, match_size, start_ptr);
            }
            return (tmp);
          }
        }
      } else {
        {
          tmp = (*execute)(buf, size, match_size, start_ptr);
        }
        return (tmp);
      }
    }
    line_next = buf;
    {
      while (1) {
                                     ;
        if (!((unsigned long)line_next < (unsigned long)(buf + size))) {
          goto while_break;
        }
        {
          line_buf = line_next;
          tmp___1 = (char const *)memchr((void const *)line_buf, (int)eolbyte, (size_t)((buf + size) - line_buf));
          line_end = tmp___1;
        }
        if ((unsigned long)line_end == (unsigned long)((void *)0)) {
          line_end = buf + size;
          line_next = line_end;
        } else {
          line_next = line_end + 1;
        }
        if (start_ptr) {
          if ((unsigned long)start_ptr >= (unsigned long)line_end) {
            goto __Cont;
          }
        }
        {
          result = (*execute)(line_buf, (size_t)(line_next - line_buf), match_size, start_ptr);
        }
        if (result != 0xffffffffffffffffUL) {
          return ((size_t)(line_buf - buf) + result);
        }
      __Cont:;
      }
                                    ;
    }
  while_break:;
    return ((size_t)-1);
  }
}
static intmax_t grepbuf(char const *beg, char const *lim) {
  intmax_t outleft0;
  char const *p;
  char const *endp;
  size_t match_size;
  size_t match_offset;
  size_t tmp;
  char const *b;
  char const *prbeg;
  char const *tmp___0;
  char const *prend;
  char const *tmp___1;
  {
    outleft0 = outleft;
    p = beg;
    {
      while (1) {
                                     ;
        if (!((unsigned long)p < (unsigned long)lim)) {
          goto while_break;
        }
        {
          tmp = do_execute(p, (size_t)(lim - p), &match_size, (char const *)((void *)0));
          match_offset = tmp;
        }
        if (match_offset == 0xffffffffffffffffUL) {
          if (!out_invert) {
            goto while_break;
          }
          match_offset = (size_t)(lim - p);
          match_size = (size_t)0;
        }
        b = p + match_offset;
        endp = b + match_size;
        if (!out_invert) {
          if ((unsigned long)b == (unsigned long)lim) {
            goto while_break;
          }
        }
        if (!out_invert) {
          goto _L___0;
        } else {
          if ((unsigned long)p < (unsigned long)b) {
          _L___0:
            if (out_invert) {
              tmp___0 = p;
            } else {
              tmp___0 = b;
            }
            prbeg = tmp___0;
            if (out_invert) {
              tmp___1 = b;
            } else {
              tmp___1 = endp;
            }
            {
              prend = tmp___1;
              prtext(prbeg, prend);
            }
            if (!outleft) {
              goto _L;
            } else {
              if (done_on_match) {
              _L:
                if (exit_on_match) {
                  {
                    exit(0);
                  }
                }
                goto while_break;
              }
            }
          }
        }
        p = endp;
      }
                                    ;
    }
  while_break:;
    return (outleft0 - outleft);
  }
}
static intmax_t grep(int fd, struct stat const *st) {
  intmax_t nlines;
  intmax_t i;
  int not_text;
  size_t residue;
  size_t save;
  char oldc;
  char *beg;
  char *lim;
  char eol;
  int tmp;
  int *tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  intmax_t tmp___4;
  int *tmp___5;
  int tmp___6;
  char *tmp___7;
  intmax_t tmp___8;
  char *tmp___9;
                    
  {
    {
      eol = (char)eolbyte;
      tmp = reset(fd, st);
    }
    if (!tmp) {
      return ((intmax_t)0);
    }
    {
      totalcc = (uintmax_t)0;
      lastout = (char const *)0;
      totalnl = (uintmax_t)0;
      outleft = max_count;
      after_last_match = (off_t)0;
      pending = (intmax_t)0;
      nlines = (intmax_t)0;
      residue = (size_t)0;
      save = (size_t)0;
      tmp___1 = fillbuf(save, st);
    }
    if (!tmp___1) {
      {
        tmp___0 = __errno_location();
        suppressible_error(filename, *tmp___0);
      }
      return ((intmax_t)0);
    }
    if ((unsigned int)binary_files == 0U) {
      if (!out_quiet) {
        goto _L;
      } else {
        goto _L___0;
      }
    } else {
    _L___0:
      if ((unsigned int)binary_files == 2U) {
      _L : {
        tmp___2 = file_is_binary((char const *)bufbeg, (size_t)(buflim - bufbeg), fd,
                                 st);
      }
        if (tmp___2) {
          tmp___3 = 1;
        } else {
          tmp___3 = 0;
        }
      } else {
        tmp___3 = 0;
      }
    }
    not_text = tmp___3;
    if (not_text) {
      if ((unsigned int)binary_files == 2U) {
        return ((intmax_t)0);
      }
    }
    done_on_match += not_text;
    out_quiet += not_text;
    {
      while (1) {
                                     ;
        lastnl = (char const *)bufbeg;
        if (lastout) {
          lastout = (char const *)bufbeg;
        }
        beg = bufbeg + save;
        if ((unsigned long)beg == (unsigned long)buflim) {
          goto while_break;
        }
        {
          oldc = *(beg + -1);
          *(beg + -1) = eol;
          lim = (char *)memrchr((void const *)(beg - 1), (int)eol, (size_t)((buflim - beg) + 1L));
          lim++;
          *(beg + -1) = oldc;
        }
        if ((unsigned long)lim == (unsigned long)beg) {
          lim = beg - residue;
        }
        beg -= residue;
        residue = (size_t)(buflim - lim);
        if ((unsigned long)beg < (unsigned long)lim) {
          if (outleft) {
            {
              tmp___4 = grepbuf((char const *)beg, (char const *)lim);
              nlines += tmp___4;
            }
          }
          if (pending) {
            {
              prpending((char const *)lim);
            }
          }
          if (!outleft) {
            if (!pending) {
              goto finish_grep;
            } else {
              goto _L___1;
            }
          } else {
          _L___1:
            if (nlines) {
              if (done_on_match) {
                goto finish_grep;
              }
            }
          }
        }
        i = (intmax_t)0;
        beg = lim;
        {
          while (1) {
                                             ;
            if (i < out_before) {
              if ((unsigned long)beg > (unsigned long)bufbeg) {
                if (!((unsigned long)beg != (unsigned long)lastout)) {
                  goto while_break___0;
                }
              } else {
                goto while_break___0;
              }
            } else {
              goto while_break___0;
            }
            i++;
            {
              while (1) {
                                                 ;
                beg--;
                if (!((int)*(beg + -1) != (int)eol)) {
                  goto while_break___1;
                }
              }
                                            ;
            }
          while_break___1:;
          }
                                        ;
        }
      while_break___0:;
        if ((unsigned long)beg != (unsigned long)lastout) {
          lastout = (char const *)0;
        }
        save = (size_t)((lim + residue) - beg);
        if (out_byte) {
          {
            totalcc = add_count(totalcc, (size_t)(buflim - bufbeg) - save);
          }
        }
        if (out_line) {
          {
            nlscan((char const *)beg);
          }
        }
        {
          tmp___6 = fillbuf(save, st);
        }
        if (!tmp___6) {
          {
            tmp___5 = __errno_location();
            suppressible_error(filename, *tmp___5);
          }
          goto finish_grep;
        }
      }
                                    ;
    }
  while_break:;
    if (residue) {
      tmp___7 = buflim;
      buflim++;
      *tmp___7 = eol;
      if (outleft) {
        {
          tmp___8 = grepbuf((char const *)((bufbeg + save) - residue), (char const *)buflim);
          nlines += tmp___8;
        }
      }
      if (pending) {
        {
          prpending((char const *)buflim);
        }
      }
    }
  finish_grep:
    done_on_match -= not_text;
    out_quiet -= not_text;
    if (not_text & ~out_quiet) {
      if (nlines != 0L) {
        {
          tmp___9 = gettext("Binary file %s matches\n");
          printf((char const * /* __restrict  */)((char const *)tmp___9), filename);
        }
      }
    }
    return (nlines);
  }
}
static int grepdirent(FTS *fts, FTSENT *ent, int command_line) {
  int follow;
  int dirdesc;
  struct stat *st;
  int tmp;
  int tmp___0;
  int tmp___1;
                
                
                  
           
              
               
              
  int tmp___7;
  int tmp___8;
                    
                    
                    
  {
    st = ent->fts_statp;
    command_line &= ent->fts_level == 0L;
    if ((int)ent->fts_info == 6) {
      if ((unsigned int)directories == 3U) {
        if (command_line) {
          out_file &= ~(2 * !no_filenames);
        }
      }
      return (1);
    }
    if ((int)ent->fts_info == 1) {
      tmp = 1;
    } else {
      if ((int)ent->fts_info == 2) {

      } else {
        if ((int)ent->fts_info == 4) {

        } else {
          tmp = 0;
        }
      }
    }
    {
      tmp___0 = skipped_file((char const *)(ent->fts_name), command_line, tmp);
    }
                  
       

       

     
    filename = (char const *)(ent->fts_path + filename_prefix_len);
    if (fts->fts_options & 2) {

    } else {
      if (fts->fts_options & 1) {
        if (command_line) {
          tmp___1 = 1;
        } else {
          tmp___1 = 0;
        }
      } else {

      }
    }
    follow = tmp___1;
    if ((int)ent->fts_info == 1) {
      goto case_1;
    }
                                  

     
                                  

     
                                  

     
                                   

     
                                  

     
    if ((int)ent->fts_info == 11) {
      goto case_3;
    }













  case_1:;
    if ((unsigned int)directories == 3U) {
      out_file |= 2 * !no_filenames;
      return (1);
    }
    {

    }

         ;












  case_3:;
    if ((unsigned int)devices == 2U) {

    } else {
      if ((unsigned int)devices == 0U) {
        if (!command_line) {
           ;
                             





             



             








           
          {
            tmp___7 = is_device_mode(st->st_mode);
          }
                        

           
        }
      }
    }
    goto switch_break;
         ;

          ;

                    {

  }
  switch_break:;
    if ((fts->fts_options & 516) == 512) {
      dirdesc = fts->fts_cwd_fd;
    } else {

    }
    {
      tmp___8 = grepfile(dirdesc, (char const *)ent->fts_accpath, follow, command_line);
    }
    return (tmp___8);
  }
}
static int grepfile(int dirdesc, char const *name, int follow, int command_line) {
  int desc;
  int tmp;
  int tmp___0;
  int *tmp___1;
  int *tmp___2;
  int *tmp___3;
  int tmp___4;
  {
    if (follow) {
      tmp = 0;
    } else {
      tmp = 131072;
    }
    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
    if (desc < 0) {
      if (follow) {
        {
          tmp___1 = __errno_location();
          suppressible_error(filename, *tmp___1);
        }
      } else {
        {
          tmp___2 = __errno_location();
        }
        if (*tmp___2 != 40) {
          {
            tmp___3 = __errno_location();
          }
          if (*tmp___3 != 31) {
            {
              tmp___1 = __errno_location();
              suppressible_error(filename, *tmp___1);
            }
          }
        }
      }
      return (1);
    }
    {
      tmp___4 = grepdesc(desc, command_line);
    }
    return (tmp___4);
  }
}
static int grepdesc(int desc, int command_line) {
  intmax_t count;
  int status;
  struct stat st;
  int *tmp;
  int tmp___0;
  int tmp___1;
  FTS *fts;
  FTSENT *ent;
  int opts;
  int tmp___2;
  char *fts_arg[2];
  int *tmp___3;
  int tmp___4;
  int tmp___5;
  int *tmp___6;
  int *tmp___7;
  int *tmp___8;
  int tmp___9;
  int tmp___10;
  char const *tmp___11;
  char *tmp___12;
  int tmp___13;
  off_t required_offset;
  off_t tmp___14;
  int *tmp___15;
  __off_t tmp___16;
  int *tmp___17;
  int tmp___18;
                    
                    
                    
  {
    {
      status = 1;
      tmp___0 = fstat(desc, &st);
    }
    if (tmp___0 != 0) {
      {
        tmp = __errno_location();
        suppressible_error(filename, *tmp);
      }
      goto closeout;
    }
    if (desc != 0) {
      if (command_line) {
        {
          tmp___1 = skipped_file(filename, 1, (st.st_mode & 61440U) == 16384U);
        }
        if (tmp___1) {
          goto closeout;
        }
      }
    }
    if (desc != 0) {
      if ((unsigned int)directories == 3U) {
        if ((st.st_mode & 61440U) == 16384U) {
          if (command_line) {
            tmp___2 = 0;
          } else {
            tmp___2 = 1;
          }
          {
            opts = fts_options & ~tmp___2;
            tmp___4 = close(desc);
          }
          if (tmp___4 != 0) {
            {
              tmp___3 = __errno_location();
              suppressible_error(filename, *tmp___3);
            }
          }
          {
            fts_arg[0] = (char *)filename;
            fts_arg[1] = (char *)((void *)0);
            fts = fts_open((char *const *)(fts_arg), opts, (int (*)(FTSENT const **, FTSENT const **))((void *)0));
          }
          if (!fts) {
            {
              xalloc_die();
            }
          }
          {
            while (1) {
                                           ;
              {
                ent = fts_read(fts);
              }
              if (!ent) {
                goto while_break;
              }
              {
                tmp___5 = grepdirent(fts, ent, command_line);
                status &= tmp___5;
              }
            }
                                          ;
          }
        while_break : {
          tmp___7 = __errno_location();
        }
          if (*tmp___7) {
            {
              tmp___6 = __errno_location();
              suppressible_error(filename, *tmp___6);
            }
          }
          {
            tmp___9 = fts_close(fts);
          }
          if (tmp___9 != 0) {
            {
              tmp___8 = __errno_location();
              suppressible_error(filename, *tmp___8);
            }
          }
          return (status);
        }
      }
    }
    if (desc != 0) {
      if ((unsigned int)directories == 4U) {
        if ((st.st_mode & 61440U) == 16384U) {
          goto closeout;
        } else {
          goto _L___0;
        }
      } else {
      _L___0:
        if ((unsigned int)devices == 2U) {
          goto _L;
        } else {
          if ((unsigned int)devices == 0U) {
            if (!command_line) {
            _L : {
              tmp___10 = is_device_mode(st.st_mode);
            }
              if (tmp___10) {
                goto closeout;
              }
            }
          }
        }
      }
    }
    if (!out_quiet) {
      if (list_files == 0) {
        if (1L < max_count) {
          if ((out_stat.st_mode & 61440U) == 32768U) {
            if (out_stat.st_ino) {
              if (st.st_ino == out_stat.st_ino) {
                if (st.st_dev == out_stat.st_dev) {
                  if (!suppress_errors) {
                    {
                      tmp___11 = quote(filename);
                      tmp___12 = gettext("input file %s is also the output");
                      error(0, 0, (char const *)tmp___12, tmp___11);
                    }
                  }
                  errseen = 1;
                  goto closeout;
                }
              }
            }
          }
        }
      }
    }
    {
      tmp___13 = isatty(desc);
    }
    if (!tmp___13) {
      {
        set_binary_mode(desc, 0);
      }
    }
    {
      count = grep(desc, (struct stat const *)(&st));
    }
    if (count < 0L) {
      status = (int)(count + 2L);
    } else {
      if (count_matches) {
        if (out_file) {
          {
            print_filename();
          }
          if (filename_mask) {
            {
              print_sep((char)':');
            }
          } else {
            {
              fputc_unlocked(0, stdout);
            }
          }
        }
        {
          printf((char const * /* __restrict  */) "%ld\n", count);
        }
      }
      status = !count;
      if (list_files == 1 - 2 * status) {
        {
          print_filename();
          fputc_unlocked(10 & filename_mask, stdout);
        }
      }
      if (desc == 0) {
        if (outleft) {
          tmp___14 = bufoffset;
        } else {
          tmp___14 = after_last_match;
        }
        required_offset = tmp___14;
        if (required_offset != bufoffset) {
          {
            tmp___16 = lseek(desc, required_offset, 0);
          }
          if (tmp___16 < 0L) {
            if ((st.st_mode & 61440U) == 32768U) {
              {
                tmp___15 = __errno_location();
                suppressible_error(filename, *tmp___15);
              }
            }
          }
        }
      }
    }
  closeout:
    if (desc != 0) {
      {
        tmp___18 = close(desc);
      }
      if (tmp___18 != 0) {
        {
          tmp___17 = __errno_location();
          suppressible_error(filename, *tmp___17);
        }
      }
    }
    return (status);
  }
}
static int grep_command_line_arg(char const *arg) {
  char *tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
                   
  {
    {
      tmp___2 = strcmp(arg, "-");
    }
    if (tmp___2 == 0) {
      if (label) {
        filename = (char const *)label;
      } else {
        {
          tmp = gettext("(standard input)");
          filename = (char const *)tmp;
        }
      }
      {
        tmp___0 = grepdesc(0, 1);
      }
      return (tmp___0);
    } else {
      {
        filename = arg;
        tmp___1 = grepfile(-100, arg, 1, 1);
      }
      return (tmp___1);
    }
  }
}
__attribute__((__noreturn__)) void usage(int status);
void usage(int status) {


































































































}
static void Gcompile(char const *pattern, size_t size) {
  {
    {
      GEAcompile(pattern, size, (((((1UL << 1) | ((1UL << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}
static void Ecompile(char const *pattern, size_t size) {
  {
    {
      GEAcompile(pattern, size, (((((((((((1UL << 1) << 1) | (((1UL << 1) << 1) << 1)) | ((((1UL << 1) << 1) << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}
static void Acompile(char const *pattern, size_t size) {
  {
    {
      GEAcompile(pattern, size, (((((((((1UL | (((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((1UL << 1) << 1) << 1) << 1) << 1) << 1)) | (((1UL << 1) << 1) << 1)) | ((1UL << 1) << 1)) | (((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
    return;
  }
}
static void GAcompile(char const *pattern, size_t size) {






}
static void PAcompile(char const *pattern, size_t size) {






}
static struct matcher const matchers[8] =
    {{{(char const)'g', (char const)'r', (char const)'e', (char const)'p',
       (char const)'\000'},
      &Gcompile,
      &EGexecute},
     {{(char const)'e', (char const)'g', (char const)'r', (char const)'e',
       (char const)'p', (char const)'\000'},
      &Ecompile,
      &EGexecute},
     {{(char const)'f', (char const)'g', (char const)'r', (char const)'e',
       (char const)'p', (char const)'\000'},
      &Fcompile,
      &Fexecute},
     {{(char const)'a', (char const)'w', (char const)'k', (char const)'\000'},
      &Acompile,
      &EGexecute},
     {{(char const)'g', (char const)'a', (char const)'w', (char const)'k',
       (char const)'\000'},
      &GAcompile,
      &EGexecute},
     {{(char const)'p', (char const)'o', (char const)'s', (char const)'i',
       (char const)'x', (char const)'a', (char const)'w', (char const)'k',
       (char const)'\000'},
      &PAcompile,
      &EGexecute},
     {{(char const)'p', (char const)'e', (char const)'r', (char const)'l',
       (char const)'\000'},
      &Pcompile,
      &Pexecute},
     {{(char const)'\000'}, (void (*)(char const *, size_t))((void *)0), (size_t(*)(char const *, size_t, size_t *, char const *))((void *)0)}};
static void setmatcher(char const *m) {
  struct matcher const *p;
            
              
  int tmp___1;
                
                   
                    
  {
                  
       

       






     
    p = matchers;
    {
      while (1) {
                                     ;
                          

         
        {
          tmp___1 = strcmp(m, (char const *)(p->name));
        }
        if (tmp___1 == 0) {
          matcher = (char const *)(p->name);
          compile = (void (*)(char const *, size_t))p->compile;
          execute = (size_t(*)(char const *, size_t, size_t *, char const *))p->execute;
          return;
        }
        p++;
      }

    }





  }
}
static size_t prepend_args(char const *options, char *buf, char **argv) {
















































































}
static int prepend_default_options(char const *options, int *pargc, char ***pargv) {
  char *buf;
  size_t tmp;
  char *tmp___0;
  size_t prepended;
  size_t tmp___1;
  int argc;
  char *const *argv;
  char **pp;
  char **tmp___2;
  char *const *tmp___3;
  size_t tmp___4;
  char **tmp___5;
  char *tmp___6;
  char *const *tmp___7;
  {
    if (options) {
      if (*options) {
        {
          tmp = strlen(options);
          tmp___0 = (char *)xmalloc(tmp + 1UL);
          buf = tmp___0;
          tmp___1 = prepend_args(options, buf, (char **)((void *)0));
          prepended = tmp___1;
          argc = *pargc;
          argv = (char *const *)*pargv;
        }
        if ((size_t)(2147483647 - argc) < prepended) {
          {
            xalloc_die();
          }
        }
        {
          pp = (char **)xmalloc(((prepended + (size_t)argc) + 1UL) * sizeof(*pp));
          *pargc = (int)(prepended + (size_t)argc);
          *pargv = pp;
          tmp___2 = pp;
          pp++;
          tmp___3 = argv;
          argv++;
          *tmp___2 = (char *)*tmp___3;
          tmp___4 = prepend_args(options, buf, pp);
          pp += tmp___4;
        }
        {
          while (1) {
                                             ;
          while_continue:
            tmp___5 = pp;
            pp++;
            tmp___7 = argv;
            argv++;
            tmp___6 = (char *)*tmp___7;
            *tmp___5 = tmp___6;
            if (!tmp___6) {
              goto while_break;
            }
            goto while_continue;
          }
                                        ;
        }
      while_break:;
        return ((int)prepended);
      }
    }
    return (0);
  }
}
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context);
static int prev_digit_optind = -1;
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context) {
  int this_digit_optind;
  int was_digit;
  char buf[((((sizeof(intmax_t) * 8UL - 1UL) * 146UL + 484UL) / 485UL + 1UL) + 1UL) + 4UL];
  char *p;
  int opt;
  char *tmp;
                    
                    
  {
    p = buf;
    was_digit = 0;
    this_digit_optind = optind;
    {
      while (1) {
                                     ;
        {
          opt = getopt_long(argc, (char *const *)((char **)argv), short_options, long_options,
                            (int *)((void *)0));
        }
        if (48 <= opt) {
          if (!(opt <= 57)) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        if (prev_digit_optind != this_digit_optind) {
          p = buf;
        } else {
          if (!was_digit) {
            p = buf;
          } else {
            p -= (int)buf[0] == 48;
          }
        }
        if ((unsigned long)p == (unsigned long)((buf + sizeof(buf)) - 4)) {
          {
            strcpy((char * /* __restrict  */)p, (char const * /* __restrict  */) "...");
            p += 3;
          }
          goto while_break;
        }
        tmp = p;
        p++;
        *tmp = (char)opt;
        was_digit = 1;
        prev_digit_optind = this_digit_optind;
        this_digit_optind = optind;
      }
                                    ;
    }
  while_break:;
    if ((unsigned long)p != (unsigned long)(buf)) {
      {
        *p = (char)'\000';
        context_length_arg((char const *)(buf), default_context);
      }
    }
    return (opt);
  }
}
static void parse_grep_colors(void) {














































































































}
static _Bool contains_encoding_error(char const *pat, size_t patlen) {



























}
static void fgrep_to_grep_pattern(size_t len, char const *keys, size_t *new_len,
                                  char **new_keys) {







































































}
int main(int argc, char **argv) {
  AFL_INIT_SET0("grep");
  char *keys;
  size_t keycc;
  size_t oldcc;
  size_t keyalloc;
  int with_filenames;
  size_t cc;
  int opt;
  int status;
  int prepended;
  int prev_optind;
  int last_recursive;
  int fread_errno;
  intmax_t default_context;
  FILE *fp;
  char *tmp;
  char *tmp___0;
  int tmp___1;
  int tmp___2;
  ptrdiff_t tmp___3;
  size_t tmp___4;
  FILE *tmp___6;
  int tmp___7;
  int *tmp___8;
  int *tmp___9;
  int tmp___10;
  size_t tmp___11;
  strtol_error tmp___12;
  char *tmp___13;
  char *tmp___14;
  int tmp___15;
  int tmp___16;
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
  int tmp___27;
  int *tmp___28;
  int tmp___29;
  int tmp___30;
  int tmp___31;
  int tmp___32;
  char *userval;
  char *tmp___33;
  char *tmp___34;
  char const *tmp___35;
  struct stat tmp_stat;
  int tmp___36;
  int tmp___37;
  size_t new_keycc;
  char *new_keys;
  size_t tmp___38;
  _Bool tmp___39;
  size_t tmp___40;
  int tmp___41;
  int tmp___42;
  int tmp___43;
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                     
                     
                     
                     
                     
                     
                     
                     
                     
  {
    {
      exit_failure = (int volatile)2;
      set_program_name((char const *)*(argv + 0));
      program_name = (char const *)*(argv + 0);
      keys = (char *)((void *)0);
      keycc = (size_t)0;
      with_filenames = 0;
      eolbyte = (unsigned char)'\n';
      filename_mask = ~0;
      max_count = 9223372036854775807L;
      out_before = (intmax_t)-1;
      out_after = out_before;
      default_context = (intmax_t)-1;
      only_matching = 0;
      setlocale(6, "");
      bindtextdomain("grep", "/usr/local/share/locale");
      textdomain("grep");
      exit_failure = (int volatile)2;
      atexit(&clean_up_stdout);
      last_recursive = 0;
      tmp = getenv("GREP_OPTIONS");
      prepended = prepend_default_options((char const *)tmp, &argc, &argv);
      compile = (void (*)(char const *, size_t))matchers[0].compile;
      execute = (size_t(*)(char const *, size_t, size_t *, char const *))matchers[0].execute;
    }
    {
      while (1) {
                                     ;
        {
          prev_optind = optind;
          opt = get_nondigit_option(argc, (char *const *)argv, &default_context);
        }
        if (!(opt != -1)) {
          goto while_break;
        }
        if (opt == 65) {
          goto case_65;
        }
        if (opt == 66) {
          goto case_66;
        }
        if (opt == 67) {
          goto case_67;
        }
        if (opt == 68) {
          goto case_68;
        }
        if (opt == 69) {
          goto case_69;
        }
        if (opt == 70) {
          goto case_70;
        }
        if (opt == 80) {
          goto case_80;
        }
        if (opt == 71) {
          goto case_71;
        }
        if (opt == 88) {
          goto case_88;
        }
        if (opt == 72) {
          goto case_72;
        }
        if (opt == 73) {
          goto case_73;
        }
        if (opt == 84) {
          goto case_84;
        }
        if (opt == 85) {
          goto case_85;
        }
        if (opt == 117) {
          goto case_117;
        }
        if (opt == 86) {
          goto case_86;
        }
        if (opt == 97) {
          goto case_97;
        }
        if (opt == 98) {
          goto case_98;
        }
        if (opt == 99) {
          goto case_99;
        }
        if (opt == 100) {
          goto case_100;
        }
        if (opt == 101) {
          goto case_101;
        }
        if (opt == 102) {
          goto case_102;
        }
        if (opt == 104) {
          goto case_104;
        }
        if (opt == 105) {
          goto case_105;
        }
        if (opt == 121) {
          goto case_105;
        }
        if (opt == 76) {
          goto case_76;
        }
        if (opt == 108) {
          goto case_108;
        }
        if (opt == 109) {
          goto case_109;
        }
        if (opt == 110) {
          goto case_110;
        }
        if (opt == 111) {
          goto case_111;
        }
        if (opt == 113) {
          goto case_113;
        }
        if (opt == 82) {
          goto case_82;
        }
        if (opt == 114) {
          goto case_114;
        }
        if (opt == 115) {
          goto case_115;
        }
        if (opt == 118) {
          goto case_118;
        }
        if (opt == 119) {
          goto case_119;
        }
        if (opt == 120) {
          goto case_120;
        }
        if (opt == 90) {
          goto case_90;
        }
        if (opt == 122) {
          goto case_122;
        }
        if (opt == 128) {
          goto case_128;
        }
        if (opt == 129) {
          goto case_129;
        }
        if (opt == 131) {
          goto case_131;
        }
        if (opt == 130) {
          goto case_131;
        }
        if (opt == 132) {
          goto case_132;
        }
        if (opt == 135) {
          goto case_135;
        }
        if (opt == 136) {
          goto case_136;
        }
        if (opt == 133) {
          goto case_133;
        }
        if (opt == 134) {
          goto case_134;
        }
        if (opt == 0) {
          goto case_0___0;
        }
        goto switch_default___0;
      case_65 : {
        context_length_arg((char const *)optarg, &out_after);
      }
        goto switch_break;
      case_66 : {
        context_length_arg((char const *)optarg, &out_before);
      }
        goto switch_break;
      case_67 : {
        context_length_arg((char const *)optarg, &default_context);
      }
        goto switch_break;
      case_68 : {
        tmp___2 = strcmp((char const *)optarg, "read");
      }
        if (tmp___2 == 0) {
          devices = (enum __anonenum_devices_71)1;
        } else {
          {
            tmp___1 = strcmp((char const *)optarg, "skip");
          }
          if (tmp___1 == 0) {
            devices = (enum __anonenum_devices_71)2;
          } else {
            {
              tmp___0 = gettext("unknown devices method");
              error(2, 0, (char const *)tmp___0);
            }
          }
        }
        goto switch_break;
      case_69 : {
        setmatcher("egrep");
      }
        goto switch_break;
      case_70 : {
        setmatcher("fgrep");
      }
        goto switch_break;
      case_80 : {
        setmatcher("perl");
      }
        goto switch_break;
      case_71 : {
        setmatcher("grep");
      }
        goto switch_break;
      case_88 : {
        setmatcher((char const *)optarg);
      }
        goto switch_break;
      case_72:
        with_filenames = 1;
        no_filenames = 0;
        goto switch_break;
      case_73:
        binary_files = (enum __anonenum_binary_files_72)2;
        goto switch_break;
      case_84:
        align_tabs = 1;
        goto switch_break;
      case_85 : {
        dos_binary();
      }
        goto switch_break;
      case_117 : {
        dos_unix_byte_offsets();
      }
        goto switch_break;
      case_86:
        show_version = 1;
        goto switch_break;
      case_97:
        binary_files = (enum __anonenum_binary_files_72)1;
        goto switch_break;
      case_98:
        out_byte = 1;
        goto switch_break;
      case_99:
        count_matches = 1;
        goto switch_break;
      case_100 : {
        tmp___3 = __xargmatch_internal("--directories", (char const *)optarg, directories_args,
                                       (char const *)(directories_types), sizeof(directories_types[0]),
                                       argmatch_die);
        directories = (enum directories_type)directories_types[tmp___3];
      }
        if ((unsigned int)directories == 3U) {
          last_recursive = prev_optind;
        }
        goto switch_break;
      case_101 : {
        cc = strlen((char const *)optarg);
        keys = (char *)xrealloc((void *)keys, (keycc + cc) + 1UL);
        strcpy((char * /* __restrict  */)(keys + keycc), (char const * /* __restrict  */)((char const *)optarg));
        keycc += cc;
        tmp___4 = keycc;
        keycc++;
        *(keys + tmp___4) = (char)'\n';
      }
        goto switch_break;
      case_102 : {
        tmp___7 = strcmp((char const *)optarg, "-");
      }
        if (tmp___7 == 0) {
          fp = stdin;
        } else {
          {
            tmp___6 = fopen((char const * /* __restrict  */)((char const *)optarg), (char const * /* __restrict  */) "r");
            fp = tmp___6;
          }
        }
        if (!fp) {
          {
            tmp___8 = __errno_location();
            error(2, *tmp___8, "%s", optarg);
          }
        }
        keyalloc = (size_t)1;
        {
          while (1) {
                                             ;
            if (!(keyalloc <= keycc + 1UL)) {
              goto while_break___0;
            }
            keyalloc *= 2UL;
          }
                                        ;
        }
      while_break___0 : {
        keys = (char *)xrealloc((void *)keys, keyalloc);
        oldcc = keycc;
      }
        {
          while (1) {
                                             ;
            {
              cc = fread_unlocked((void * /* __restrict  */)((void *)(keys + keycc)), (size_t)1,
                                  (keyalloc - 1UL) - keycc, (FILE * /* __restrict  */) fp);
            }
            if (!(cc != 0UL)) {
              goto while_break___1;
            }
            keycc += cc;
            if (keycc == keyalloc - 1UL) {
              {
                keys = (char *)x2nrealloc((void *)keys, &keyalloc, sizeof(*keys));
              }
            }
          }
                                        ;
        }
      while_break___1 : {
        tmp___9 = __errno_location();
        fread_errno = *tmp___9;
        tmp___10 = ferror_unlocked(fp);
      }
        if (tmp___10) {
          {
            error(2, fread_errno, "%s", optarg);
          }
        }
        if ((unsigned long)fp != (unsigned long)stdin) {
          {
            fclose(fp);
          }
        }
        if (oldcc != keycc) {
          if ((int)*(keys + (keycc - 1UL)) != 10) {
            tmp___11 = keycc;
            keycc++;
            *(keys + tmp___11) = (char)'\n';
          }
        }
        goto switch_break;
      case_104:
        with_filenames = 0;
        no_filenames = 1;
        goto switch_break;
      case_105:
        match_icase = 1;
        goto switch_break;
      case_76:
        list_files = -1;
        goto switch_break;
      case_108:
        list_files = 1;
        goto switch_break;
      case_109 : {
        tmp___12 = xstrtoimax((char const *)optarg, (char **)0, 10, &max_count, "");
      }
        if ((unsigned int)tmp___12 == 0U) {
          goto case_0;
        }
        if ((unsigned int)tmp___12 == 1U) {
          goto case_0;
        }
        goto switch_default;
      case_0:
        goto switch_break___0;
      switch_default : {
        tmp___13 = gettext("invalid max count");
        error(2, 0, (char const *)tmp___13);
      }
      switch_break___0:;
        goto switch_break;
      case_110:
        out_line = 1;
        goto switch_break;
      case_111:
        only_matching = 1;
        goto switch_break;
      case_113:
        exit_on_match = 1;
        exit_failure = (int volatile)0;
        goto switch_break;
      case_82:
        fts_options = 778;
      case_114:
        directories = (enum directories_type)3;
        last_recursive = prev_optind;
        goto switch_break;
      case_115:
        suppress_errors = 1;
        goto switch_break;
      case_118:
        out_invert = (_Bool)1;
        goto switch_break;
      case_119:
        match_words = 1;
        goto switch_break;
      case_120:
        match_lines = 1;
        goto switch_break;
      case_90:
        filename_mask = 0;
        goto switch_break;
      case_122:
        eolbyte = (unsigned char)'\000';
        goto switch_break;
      case_128 : {
        tmp___17 = strcmp((char const *)optarg, "binary");
      }
        if (tmp___17 == 0) {
          binary_files = (enum __anonenum_binary_files_72)0;
        } else {
          {
            tmp___16 = strcmp((char const *)optarg, "text");
          }
          if (tmp___16 == 0) {
            binary_files = (enum __anonenum_binary_files_72)1;
          } else {
            {
              tmp___15 = strcmp((char const *)optarg, "without-match");
            }
            if (tmp___15 == 0) {
              binary_files = (enum __anonenum_binary_files_72)2;
            } else {
              {
                tmp___14 = gettext("unknown binary-files type");
                error(2, 0, (char const *)tmp___14);
              }
            }
          }
        }
        goto switch_break;
      case_129:
        if (optarg) {
          {
            tmp___24 = strcasecmp((char const *)optarg, "always");
          }
          if (tmp___24) {
            {
              tmp___25 = strcasecmp((char const *)optarg, "yes");
            }
            if (tmp___25) {
              {
                tmp___26 = strcasecmp((char const *)optarg, "force");
              }
              if (tmp___26) {
                {
                  tmp___21 = strcasecmp((char const *)optarg, "never");
                }
                if (tmp___21) {
                  {
                    tmp___22 = strcasecmp((char const *)optarg, "no");
                  }
                  if (tmp___22) {
                    {
                      tmp___23 = strcasecmp((char const *)optarg, "none");
                    }
                    if (tmp___23) {
                      {
                        tmp___18 = strcasecmp((char const *)optarg, "auto");
                      }
                      if (tmp___18) {
                        {
                          tmp___19 = strcasecmp((char const *)optarg, "tty");
                        }
                        if (tmp___19) {
                          {
                            tmp___20 = strcasecmp((char const *)optarg, "if-tty");
                          }
                          if (tmp___20) {
                            show_help = 1;
                          } else {
                            color_option = 2;
                          }
                        } else {
                          color_option = 2;
                        }
                      } else {
                        color_option = 2;
                      }
                    } else {
                      color_option = 0;
                    }
                  } else {
                    color_option = 0;
                  }
                } else {
                  color_option = 0;
                }
              } else {
                color_option = 1;
              }
            } else {
              color_option = 1;
            }
          } else {
            color_option = 1;
          }
        } else {
          color_option = 2;
        }
        goto switch_break;
      case_131:
        if (!excluded_patterns) {
          {
            excluded_patterns = new_exclude();
          }
        }
        if (opt == 130) {
          tmp___27 = 1 << 29;
        } else {
          tmp___27 = 0;
        }
        {
          add_exclude(excluded_patterns, (char const *)optarg, (1 << 28) | tmp___27);
        }
        goto switch_break;
      case_132:
        if (!excluded_patterns) {
          {
            excluded_patterns = new_exclude();
          }
        }
        {
          tmp___29 = add_exclude_file(&add_exclude, excluded_patterns, (char const *)optarg,
                                      1 << 28, (char)'\n');
        }
        if (tmp___29 != 0) {
          {
            tmp___28 = __errno_location();
            error(2, *tmp___28, "%s", optarg);
          }
        }
        goto switch_break;
      case_135:
        if (!excluded_directory_patterns) {
          {
            excluded_directory_patterns = new_exclude();
          }
        }
        {
          add_exclude(excluded_directory_patterns, (char const *)optarg, 1 << 28);
        }
        goto switch_break;
      case_136:
        group_separator = (char const *)optarg;
        goto switch_break;
      case_133:
        line_buffered = 1;
        goto switch_break;
      case_134:
        label = optarg;
        goto switch_break;
      case_0___0:
        goto switch_break;
      switch_default___0 : {
        usage(2);
      }
        goto switch_break;
      switch_break:;
      }
                                    ;
    }
  while_break:;
    if (color_option == 2) {
      {
        tmp___30 = isatty(1);
      }
      if (tmp___30) {
        {
          tmp___31 = should_colorize();
        }
        if (tmp___31) {
          tmp___32 = 1;
        } else {
          tmp___32 = 0;
        }
      } else {
        tmp___32 = 0;
      }
      color_option = tmp___32;
    }
    {
      init_colorize();
    }
    if (exit_on_match) {
      list_files = 0;
    }
    if (exit_on_match | list_files) {
      count_matches = 0;
      done_on_match = 1;
    }
    out_quiet = count_matches | done_on_match;
    if (out_after < 0L) {
      out_after = default_context;
    }
    if (out_before < 0L) {
      out_before = default_context;
    }
    if (color_option) {
      {
        tmp___33 = getenv("GREP_COLOR");
        userval = tmp___33;
      }
      if ((unsigned long)userval != (unsigned long)((void *)0)) {
        if ((int)*userval != 0) {
          context_match_color = (char const *)userval;
          selected_match_color = context_match_color;
        }
      }
      {
        parse_grep_colors();
      }
    }
    if (show_version) {
      {
        tmp___34 = gettext("others, see <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS>");
        tmp___35 = proper_name("Mike Haertel");
        version_etc(stdout, program_name, "GNU grep", "2.19", tmp___35, tmp___34, (char *)((void *)0));
        exit(0);
      }
    }
    if (show_help) {
      {
        usage(0);
      }
    }
    {
      tmp___36 = fstat(1, &tmp_stat);
    }
    if (tmp___36 == 0) {
      if ((tmp_stat.st_mode & 61440U) == 32768U) {
        out_stat = tmp_stat;
      }
    }
    if (keys) {
      if (keycc == 0UL) {
        out_invert = (_Bool)((int)out_invert ^ 1);
        match_words = 0;
        match_lines = match_words;
      } else {
        keycc--;
      }
    } else {
      if (optind < argc) {
        {
          keycc = strlen((char const *)*(argv + optind));
          tmp___37 = optind;
          optind++;
          keys = (char *)xmemdup((void const *)*(argv + tmp___37), keycc + 1UL);
        }
      } else {
        {
          usage(2);
        }
      }
    }
    if ((unsigned long)compile == (unsigned long)(&Fcompile)) {
      {
        tmp___38 = __ctype_get_mb_cur_max();
      }
      if (tmp___38 > 1UL) {
        if (match_icase) {
          goto _L;
        } else {
          {
            tmp___39 = contains_encoding_error((char const *)keys, keycc);
          }
          if (tmp___39) {
          _L : {
            fgrep_to_grep_pattern(keycc, (char const *)keys, &new_keycc, &new_keys);
            free((void *)keys);
            keys = new_keys;
            keycc = new_keycc;
            matcher = "grep";
            compile = &Gcompile;
            execute = &EGexecute;
          }
          }
        }
      }
    }
    {
      tmp___40 = __ctype_get_mb_cur_max();
    }
    if (tmp___40 > 1UL) {
      {
        build_mbclen_cache();
      }
    }
    {
      (*compile)((char const *)keys, keycc);
      free((void *)keys);
    }
    if (argc - optind > 1) {
      if (!no_filenames) {
        out_file = 1;
      } else {
        goto _L___0;
      }
    } else {
    _L___0:
      if (with_filenames) {
        out_file = 1;
      }
    }
    {
      tmp___41 = isatty(1);
    }
    if (!tmp___41) {
      {
        set_binary_mode(1, 0);
      }
    }
    if (max_count == 0L) {
      {
        exit(1);
      }
    }
    if (fts_options & 2) {
      if ((unsigned int)devices == 0U) {
        devices = (enum __anonenum_devices_71)1;
      }
    }
    if (optind < argc) {
      status = 1;
      {
        while (1) {
                                           ;
          {
            tmp___42 = grep_command_line_arg((char const *)*(argv + optind));
            status &= tmp___42;
            optind++;
          }
          if (!(optind < argc)) {
            goto while_break___2;
          }
        }
                                      ;
      }
    while_break___2:;
    } else {
      if ((unsigned int)directories == 3U) {
        if (prepended < last_recursive) {
          {
            filename_prefix_len = (size_t)2;
            status = grep_command_line_arg(".");
          }
        } else {
          {
            status = grep_command_line_arg("-");
          }
        }
      } else {
        {
          status = grep_command_line_arg("-");
        }
      }
    }
    if (errseen) {
      tmp___43 = 2;
    } else {
      tmp___43 = status;
    }
    {
      exit(tmp___43);
    }
  }
}
