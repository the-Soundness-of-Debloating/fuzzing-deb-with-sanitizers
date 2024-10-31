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
typedef struct __anonstruct___fsid_t_1 __fsid_t;
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
  {
    if (*x < (-0x7FFFFFFFFFFFFFFF - 1) / (long)scale_factor) {
      *x = (-0x7FFFFFFFFFFFFFFF - 1);
      return ((strtol_error)1);
    }
    if (9223372036854775807L / (long)scale_factor < *x) {
      *x = 9223372036854775807L;
      return ((strtol_error)1);
    }
    *x *= (intmax_t)scale_factor;
    return ((strtol_error)0);
  }
}
static strtol_error bkm_scale_by_power___1(intmax_t *x, int base, int power) {
  strtol_error err;
  strtol_error tmp;
  int tmp___0;
  {
    err = (strtol_error)0;
    {
      while (1) {
      while_continue: /* CIL Label */;
        tmp___0 = power;
        power--;
        if (!tmp___0) {
          goto while_break;
        }
        {
          tmp = bkm_scale___1(x, base);
          err = (strtol_error)((unsigned int)err | (unsigned int)tmp);
        }
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return (err);
  }
}
strtol_error xstrtoimax(char const *s, char **ptr, int strtol_base, intmax_t *val,
                        char const *valid_suffixes) {
  char *t_ptr;
  char **p;
  intmax_t tmp;
  strtol_error err;
  int *tmp___1;
  char *tmp___2;
  int *tmp___3;
  int *tmp___4;
  int base;
  int suffixes;
  strtol_error overflow;
  char *tmp___5;
  char *tmp___6;
  {
    err = (strtol_error)0;
    if (0 <= strtol_base) {
      if (!(strtol_base <= 36)) {
        {
          __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/khheo/project/benchmark/grep-2.19/lib/xstrtol.c",
                        96U, "xstrtoimax");
        }
      }
    } else {
      {
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "/home/khheo/project/benchmark/grep-2.19/lib/xstrtol.c",
                      96U, "xstrtoimax");
      }
    }
    if (ptr) {
      p = ptr;
    } else {
      p = &t_ptr;
    }
    {
      tmp___1 = __errno_location();
      *tmp___1 = 0;
      tmp = strtoimax((char const * /* __restrict  */)s, (char ** /* __restrict  */)p,
                      strtol_base);
    }
    if ((unsigned long)*p == (unsigned long)s) {
      if (valid_suffixes) {
        if (*(*p)) {
          {
            tmp___2 = strchr(valid_suffixes, (int)*(*p));
          }
          if (tmp___2) {
            tmp = (intmax_t)1;
          } else {
            return ((strtol_error)4);
          }
        } else {
          return ((strtol_error)4);
        }
      } else {
        return ((strtol_error)4);
      }
    } else {
      {
        tmp___4 = __errno_location();
      }
      if (*tmp___4 != 0) {
        {
          tmp___3 = __errno_location();
        }
        if (*tmp___3 != 34) {
          return ((strtol_error)4);
        }
        err = (strtol_error)1;
      }
    }
    if (!valid_suffixes) {
      *val = tmp;
      return (err);
    }
    if ((int)*(*p) != 0) {
      {
        base = 1024;
        suffixes = 1;
        tmp___5 = strchr(valid_suffixes, (int)*(*p));
      }
      if (!tmp___5) {
        *val = tmp;
        return ((strtol_error)((unsigned int)err | 2U));
      }
      {
        tmp___6 = strchr(valid_suffixes, '0');
      }
      if (tmp___6) {
        if ((int)*(*(p + 0) + 1) == 105) {
          goto case_105;
        }
        if ((int)*(*(p + 0) + 1) == 66) {
          goto case_66;
        }
        if ((int)*(*(p + 0) + 1) == 68) {
          goto case_66;
        }
        goto switch_break;
      case_105:
        if ((int)*(*(p + 0) + 2) == 66) {
          suffixes += 2;
        }
        goto switch_break;
      case_66:
        base = 1000;
        suffixes++;
        goto switch_break;
      switch_break:;
      }
      if ((int)*(*p) == 98) {
        goto case_98;
      }
      if ((int)*(*p) == 66) {
        goto case_66___0;
      }
      if ((int)*(*p) == 99) {
        goto case_99;
      }
      if ((int)*(*p) == 69) {
        goto case_69;
      }
      if ((int)*(*p) == 71) {
        goto case_71;
      }
      if ((int)*(*p) == 103) {
        goto case_71;
      }
      if ((int)*(*p) == 107) {
        goto case_107;
      }
      if ((int)*(*p) == 75) {
        goto case_107;
      }
      if ((int)*(*p) == 77) {
        goto case_77;
      }
      if ((int)*(*p) == 109) {
        goto case_77;
      }
      if ((int)*(*p) == 80) {
        goto case_80;
      }
      if ((int)*(*p) == 84) {
        goto case_84;
      }
      if ((int)*(*p) == 116) {
        goto case_84;
      }
      if ((int)*(*p) == 119) {
        goto case_119;
      }
      if ((int)*(*p) == 89) {
        goto case_89;
      }
      if ((int)*(*p) == 90) {
        goto case_90;
      }
      goto switch_default;
    case_98 : {
      overflow = bkm_scale___1(&tmp, 512);
    }
      goto switch_break___0;
    case_66___0 : {
      overflow = bkm_scale___1(&tmp, 1024);
    }
      goto switch_break___0;
    case_99:
      overflow = (strtol_error)0;
      goto switch_break___0;
    case_69 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 6);
    }
      goto switch_break___0;
    case_71 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 3);
    }
      goto switch_break___0;
    case_107 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 1);
    }
      goto switch_break___0;
    case_77 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 2);
    }
      goto switch_break___0;
    case_80 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 5);
    }
      goto switch_break___0;
    case_84 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 4);
    }
      goto switch_break___0;
    case_119 : {
      overflow = bkm_scale___1(&tmp, 2);
    }
      goto switch_break___0;
    case_89 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 8);
    }
      goto switch_break___0;
    case_90 : {
      overflow = bkm_scale_by_power___1(&tmp, base, 7);
    }
      goto switch_break___0;
    switch_default:
      *val = tmp;
      return ((strtol_error)((unsigned int)err | 2U));
    switch_break___0:
      err = (strtol_error)((unsigned int)err | (unsigned int)overflow);
      *p += suffixes;
      if (*(*p)) {
        err = (strtol_error)((unsigned int)err | 2U);
      }
    }
    *val = tmp;
    return (err);
  }
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
      tmp = -2;
    }
    if ((size_t)tmp / s < n) {
      {
        xalloc_die();
      }
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
      tmp = -2;
    }
    if ((size_t)tmp / s < n) {
      {
        xalloc_die();
      }
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
  void *tmp;
  void *tmp___0;
  void *tmp___1;
  {
    if (sizeof(char) == 1UL) {
      {
        tmp = xmalloc(n);
        tmp___1 = tmp;
      }
    } else {
      {
        tmp___0 = xnmalloc(n, sizeof(char));
        tmp___1 = tmp___0;
      }
    }
    return ((char *)tmp___1);
  }
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
    if (!n) {
      if (p) {
        {
          free(p);
        }
        return ((void *)0);
      }
    }
    {
      p = realloc(p, n);
    }
    if (!p) {
      if (n) {
        {
          xalloc_die();
        }
      }
    }
    return (p);
  }
}
void *x2realloc(void *p, size_t *pn) {
  void *tmp;
  {
    {
      tmp = x2nrealloc(p, pn, (size_t)1);
    }
    return (tmp);
  }
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
  char *tmp;
  char *__cil_tmp3;
  {
    {
      tmp = gettext("memory exhausted");
      error((int)exit_failure, 0, "%s", tmp);
      abort();
    }
  }
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
  char *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  char *__cil_tmp35;
  char *__cil_tmp36;
  char *__cil_tmp37;
  char *__cil_tmp38;
  char *__cil_tmp39;
  char *__cil_tmp40;
  char *__cil_tmp41;
  char *__cil_tmp42;
  {
    if (command_name) {
      {
        fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */) "%s (%s) %s\n",
                command_name, package, version);
      }
    } else {
      {
        fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */) "%s %s\n",
                package, version);
      }
    }
    {
      tmp = gettext("(C)");
      fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)(version_etc_copyright),
              tmp, 2014);
      tmp___0 = gettext("\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n");
      fputs_unlocked((char const * /* __restrict  */)((char const *)tmp___0), (FILE * /* __restrict  */) stream);
    }
    if (n_authors == 0UL) {
      goto case_0;
    }
    if (n_authors == 1UL) {
      goto case_1;
    }
    if (n_authors == 2UL) {
      goto case_2;
    }
    if (n_authors == 3UL) {
      goto case_3;
    }
    if (n_authors == 4UL) {
      goto case_4;
    }
    if (n_authors == 5UL) {
      goto case_5;
    }
    if (n_authors == 6UL) {
      goto case_6;
    }
    if (n_authors == 7UL) {
      goto case_7;
    }
    if (n_authors == 8UL) {
      goto case_8;
    }
    if (n_authors == 9UL) {
      goto case_9;
    }
    goto switch_default;
  case_0 : {
    abort();
  }
  case_1 : {
    tmp___1 = gettext("Written by %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___1),
            *(authors + 0));
  }
    goto switch_break;
  case_2 : {
    tmp___2 = gettext("Written by %s and %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___2),
            *(authors + 0), *(authors + 1));
  }
    goto switch_break;
  case_3 : {
    tmp___3 = gettext("Written by %s, %s, and %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___3),
            *(authors + 0), *(authors + 1), *(authors + 2));
  }
    goto switch_break;
  case_4 : {
    tmp___4 = gettext("Written by %s, %s, %s,\nand %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___4),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3));
  }
    goto switch_break;
  case_5 : {
    tmp___5 = gettext("Written by %s, %s, %s,\n%s, and %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___5),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4));
  }
    goto switch_break;
  case_6 : {
    tmp___6 = gettext("Written by %s, %s, %s,\n%s, %s, and %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___6),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
            *(authors + 5));
  }
    goto switch_break;
  case_7 : {
    tmp___7 = gettext("Written by %s, %s, %s,\n%s, %s, %s, and %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___7),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
            *(authors + 5), *(authors + 6));
  }
    goto switch_break;
  case_8 : {
    tmp___8 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___8),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
            *(authors + 5), *(authors + 6), *(authors + 7));
  }
    goto switch_break;
  case_9 : {
    tmp___9 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___9),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
            *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));
  }
    goto switch_break;
  switch_default : {
    tmp___10 = gettext("Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n");
    fprintf((FILE * /* __restrict  */) stream, (char const * /* __restrict  */)((char const *)tmp___10),
            *(authors + 0), *(authors + 1), *(authors + 2), *(authors + 3), *(authors + 4),
            *(authors + 5), *(authors + 6), *(authors + 7), *(authors + 8));
  }
    goto switch_break;
  switch_break:;
    return;
  }
}
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors) {
  size_t n_authors;
  char const *authtab[10];
  char const *tmp;
  void *__cil_tmp10;
  {
    n_authors = (size_t)0;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (n_authors < 10UL) {
          {
            tmp = __builtin_va_arg(authors, char const *);
            authtab[n_authors] = tmp;
          }
          if (!((unsigned long)tmp != (unsigned long)((void *)0))) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        n_authors++;
      }
    while_break___0: /* CIL Label */;
    }
  while_break : {
    version_etc_arn(stream, command_name, package, version, (char const *const *)(authtab),
                    n_authors);
  }
    return;
  }
}
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) {
  va_list authors;
  {
    {
      __builtin_va_start(authors, version);
      version_etc_va(stream, command_name, package, version, authors);
      __builtin_va_end(authors);
    }
    return;
  }
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
  _Bool tmp;
  {
    if ((unsigned long)old_mbc->ptr == (unsigned long)(&old_mbc->buf[0])) {
      {
        memcpy((void * /* __restrict  */)((void *)(&new_mbc->buf[0])), (void const * /* __restrict  */)((void const *)(&old_mbc->buf[0])),
               (size_t)old_mbc->bytes);
        new_mbc->ptr = (char const *)(&new_mbc->buf[0]);
      }
    } else {
      new_mbc->ptr = (char const *)old_mbc->ptr;
    }
    new_mbc->bytes = (size_t)old_mbc->bytes;
    tmp = (_Bool)old_mbc->wc_valid;
    new_mbc->wc_valid = tmp;
    if (tmp) {
      new_mbc->wc = (wchar_t)old_mbc->wc;
    }
    return;
  }
}
unsigned int const is_basic_table[8];
_Bool is_basic(char c) {
  {
    return ((_Bool)((is_basic_table[(int)((unsigned char)c) >> 5] >> ((int)((unsigned char)c) & 31)) & 1U));
  }
}
void mbiter_multi_next(struct mbiter_multi *iter) {
  int tmp;
  int tmp___0;
  _Bool tmp___1;
  {
    if (iter->next_done) {
      return;
    }
    if (iter->in_shift) {
      goto with_shift;
    }
    {
      tmp___1 = is_basic((char)*(iter->cur.ptr));
    }
    if (tmp___1) {
      iter->cur.bytes = (size_t)1;
      iter->cur.wc = (wchar_t) * (iter->cur.ptr);
      iter->cur.wc_valid = (_Bool)1;
    } else {
      {
        tmp = mbsinit((mbstate_t const *)(&iter->state));
      }
      if (!tmp) {
        {
          __assert_fail("mbsinit (&iter->state)", "/home/khheo/project/benchmark/grep-2.19/lib/mbiter.h",
                        142U, "mbiter_multi_next");
        }
      }
      iter->in_shift = (_Bool)1;
    with_shift : {
      iter->cur.bytes = mbrtowc((wchar_t * /* __restrict  */)(&iter->cur.wc), (char const * /* __restrict  */)iter->cur.ptr,
                                (size_t)(iter->limit - iter->cur.ptr), (mbstate_t * /* __restrict  */)(&iter->state));
    }
      if (iter->cur.bytes == 0xffffffffffffffffUL) {
        iter->cur.bytes = (size_t)1;
        iter->cur.wc_valid = (_Bool)0;
      } else {
        if (iter->cur.bytes == 0xfffffffffffffffeUL) {
          iter->cur.bytes = (size_t)(iter->limit - iter->cur.ptr);
          iter->cur.wc_valid = (_Bool)0;
        } else {
          if (iter->cur.bytes == 0UL) {
            iter->cur.bytes = (size_t)1;
            if (!((int const) * (iter->cur.ptr) == 0)) {
              {
                __assert_fail("*iter->cur.ptr == \'\\0\'", "/home/khheo/project/benchmark/grep-2.19/lib/mbiter.h",
                              169U, "mbiter_multi_next");
              }
            }
            if (!(iter->cur.wc == 0)) {
              {
                __assert_fail("iter->cur.wc == 0", "/home/khheo/project/benchmark/grep-2.19/lib/mbiter.h",
                              170U, "mbiter_multi_next");
              }
            }
          }
          {
            iter->cur.wc_valid = (_Bool)1;
            tmp___0 = mbsinit((mbstate_t const *)(&iter->state));
          }
          if (tmp___0) {
            iter->in_shift = (_Bool)0;
          }
        }
      }
    }
    iter->next_done = (_Bool)1;
    return;
  }
}
char *trim2(char const *s, int how) {
  char *d;
  mbi_iterator_t i;
  size_t tmp;
  int tmp___0;
  size_t tmp___1;
  unsigned int state;
  char *r;
  size_t tmp___2;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  char *p;
  unsigned short const **tmp___8;
  size_t tmp___9;
  size_t tmp___10;
  unsigned short const **tmp___11;
  size_t tmp___12;
  void *__cil_tmp24;
  void *__cil_tmp25;
  {
    {
      d = strdup(s);
    }
    if (!d) {
      {
        xalloc_die();
      }
    }
    {
      tmp___12 = __ctype_get_mb_cur_max();
    }
    if (tmp___12 > 1UL) {
      if (how != 0) {
        {
          i.cur.ptr = (char const *)d;
          tmp = strlen((char const *)d);
          i.limit = i.cur.ptr + tmp;
          i.in_shift = (_Bool)0;
          memset((void *)(&i.state), '\000', sizeof(mbstate_t));
          i.next_done = (_Bool)0;
        }
        {
          while (1) {
          while_continue: /* CIL Label */;
            if ((unsigned long)i.cur.ptr < (unsigned long)i.limit) {
              {
                mbiter_multi_next(&i);
              }
              if (i.cur.wc_valid) {
                {
                  tmp___0 = iswspace((wint_t)i.cur.wc);
                }
                if (!tmp___0) {
                  goto while_break;
                }
              } else {
                goto while_break;
              }
            } else {
              goto while_break;
            }
            i.cur.ptr += i.cur.bytes;
            i.next_done = (_Bool)0;
          }
        while_break___3: /* CIL Label */;
        }
      while_break : {
        tmp___1 = strlen(i.cur.ptr);
        memmove((void *)d, (void const *)i.cur.ptr, tmp___1 + 1UL);
      }
      }
      if (how != 1) {
        {
          state = 0U;
          i.cur.ptr = (char const *)d;
          tmp___2 = strlen((char const *)d);
          i.limit = i.cur.ptr + tmp___2;
          i.in_shift = (_Bool)0;
          memset((void *)(&i.state), '\000', sizeof(mbstate_t));
          i.next_done = (_Bool)0;
        }
        {
          while (1) {
          while_continue___0: /* CIL Label */;
            if ((unsigned long)i.cur.ptr < (unsigned long)i.limit) {
              {
                mbiter_multi_next(&i);
              }
            } else {
              goto while_break___0;
            }
            if (state == 0U) {
              if (i.cur.wc_valid) {
                {
                  tmp___3 = iswspace((wint_t)i.cur.wc);
                }
                if (tmp___3) {
                  goto __Cont;
                }
              }
            }
            if (state == 0U) {
              if (i.cur.wc_valid) {
                {
                  tmp___4 = iswspace((wint_t)i.cur.wc);
                }
                if (!tmp___4) {
                  state = 1U;
                  goto __Cont;
                }
              } else {
                state = 1U;
                goto __Cont;
              }
            }
            if (state == 1U) {
              if (i.cur.wc_valid) {
                {
                  tmp___5 = iswspace((wint_t)i.cur.wc);
                }
                if (!tmp___5) {
                  goto __Cont;
                }
              } else {
                goto __Cont;
              }
            }
            if (state == 1U) {
              if (i.cur.wc_valid) {
                {
                  tmp___7 = iswspace((wint_t)i.cur.wc);
                }
                if (tmp___7) {
                  state = 2U;
                  r = (char *)i.cur.ptr;
                } else {
                  goto _L;
                }
              } else {
                goto _L;
              }
            } else {
            _L:
              if (state == 2U) {
                if (i.cur.wc_valid) {
                  {
                    tmp___6 = iswspace((wint_t)i.cur.wc);
                  }
                  if (!tmp___6) {
                    state = 1U;
                  }
                } else {
                  state = 1U;
                }
              } else {
                state = 1U;
              }
            }
          __Cont:
            i.cur.ptr += i.cur.bytes;
            i.next_done = (_Bool)0;
          }
        while_break___4: /* CIL Label */;
        }
      while_break___0:;
        if (state == 2U) {
          *r = (char)'\000';
        }
      }
    } else {
      if (how != 0) {
        p = d;
        {
          while (1) {
          while_continue___1: /* CIL Label */;
            if (*p) {
              {
                tmp___8 = __ctype_b_loc();
              }
              if (!((int const) * (*tmp___8 + (int)((unsigned char)*p)) & 8192)) {
                goto while_break___1;
              }
            } else {
              goto while_break___1;
            }
            p++;
          }
        while_break___5: /* CIL Label */;
        }
      while_break___1 : {
        tmp___9 = strlen((char const *)p);
        memmove((void *)d, (void const *)p, tmp___9 + 1UL);
      }
      }
      if (how != 1) {
        {
          tmp___10 = strlen((char const *)d);
          p = (d + tmp___10) - 1;
        }
        {
          while (1) {
          while_continue___2: /* CIL Label */;
            if ((unsigned long)p >= (unsigned long)d) {
              {
                tmp___11 = __ctype_b_loc();
              }
              if (!((int const) * (*tmp___11 + (int)((unsigned char)*p)) & 8192)) {
                goto while_break___2;
              }
            } else {
              goto while_break___2;
            }
            *p = (char)'\000';
            p--;
          }
        while_break___6: /* CIL Label */;
        }
      while_break___2:;
      }
    }
    return (d);
  }
}
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memchr)(void const *__s,
                                                                                   int __c,
                                                                                   size_t __n) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) __attribute__((__pure__));
size_t strnlen1(char const *string, size_t maxlen) {
  char const *end;
  char const *tmp;
  {
    {
      tmp = (char const *)memchr((void const *)string, '\000', maxlen);
      end = tmp;
    }
    if ((unsigned long)end != (unsigned long)((void *)0)) {
      return ((size_t)((end - string) + 1L));
    } else {
      return (maxlen);
    }
  }
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
      while_continue: /* CIL Label */;
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
    while_break: /* CIL Label */;
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
  unsigned char uc;
  unsigned int *p;
  struct quoting_options *tmp;
  int shift;
  int r;
  {
    uc = (unsigned char)c;
    if (o) {
      tmp = o;
    } else {
      tmp = &default_quoting_options;
    }
    p = tmp->quote_these_too + (unsigned long)uc / (sizeof(int) * 8UL);
    shift = (int)((unsigned long)uc % (sizeof(int) * 8UL));
    r = (int)((*p >> shift) & 1U);
    *p ^= (unsigned int)(((i & 1) ^ r) << shift);
    return (r);
  }
}
static struct quoting_options quoting_options_from_style(enum quoting_style style) {
  struct quoting_options o;
  unsigned int tmp;
  void *__cil_tmp5;
  {
    o.style = (enum quoting_style)0;
    o.flags = 0;
    o.quote_these_too[0] = 0U;
    tmp = 1U;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!(!(tmp >= 8U))) {
          goto while_break;
        }
        o.quote_these_too[tmp] = 0U;
        tmp++;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:
    o.left_quote = (char const *)((void *)0);
    o.right_quote = (char const *)((void *)0);
    if ((unsigned int)style == 8U) {
      {
        abort();
      }
    }
    o.style = style;
    return (o);
  }
}
static char const *gettext_quote(char const *msgid, enum quoting_style s) {
  char const *translation;
  char const *tmp;
  char const *locale_code;
  char const *tmp___0;
  int tmp___1;
  char const *tmp___2;
  int tmp___3;
  char const *tmp___4;
  char *__cil_tmp20;
  char *__cil_tmp21;
  char *__cil_tmp22;
  char *__cil_tmp23;
  char *__cil_tmp24;
  char *__cil_tmp25;
  char *__cil_tmp26;
  char *__cil_tmp27;
  {
    {
      tmp = (char const *)gettext(msgid);
      translation = tmp;
    }
    if ((unsigned long)translation != (unsigned long)msgid) {
      return (translation);
    }
    {
      locale_code = locale_charset();
      tmp___1 = c_strcasecmp(locale_code, "UTF-8");
    }
    if (tmp___1 == 0) {
      if ((int const) * (msgid + 0) == 96) {
        tmp___0 = "\342\200\230";
      } else {
        tmp___0 = "\342\200\231";
      }
      return (tmp___0);
    }
    {
      tmp___3 = c_strcasecmp(locale_code, "GB18030");
    }
    if (tmp___3 == 0) {
      if ((int const) * (msgid + 0) == 96) {
        tmp___2 = "\241\ae";
      } else {
        tmp___2 = "\241\257";
      }
      return (tmp___2);
    }
    if ((unsigned int)s == 7U) {
      tmp___4 = "\"";
    } else {
      tmp___4 = "\'";
    }
    return (tmp___4);
  }
}
static size_t quotearg_buffer_restyled(char *buffer___0, size_t buffersize, char const *arg,
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
  size_t tmp___0;
  int tmp___1;
  int tmp___2;
  size_t m;
  _Bool printable;
  unsigned short const **tmp___3;
  mbstate_t mbstate;
  wchar_t w;
  size_t bytes;
  size_t tmp___4;
  size_t j;
  int tmp___5;
  int tmp___6;
  size_t ilim;
  int tmp___7;
  size_t tmp___8;
  void *__cil_tmp42;
  char *__cil_tmp43;
  char *__cil_tmp44;
  char *__cil_tmp45;
  char *__cil_tmp46;
  {
    {
      len = (size_t)0;
      quote_string = (char const *)0;
      quote_string_len = (size_t)0;
      backslash_escapes = (_Bool)0;
      tmp = __ctype_get_mb_cur_max();
      unibyte_locale = (_Bool)(tmp == 1UL);
      elide_outer_quotes = (_Bool)((flags & 2) != 0);
    }
    if ((unsigned int)quoting_style == 4U) {
      goto case_4;
    }
    if ((unsigned int)quoting_style == 3U) {
      goto case_3;
    }
    if ((unsigned int)quoting_style == 5U) {
      goto case_5;
    }
    if ((unsigned int)quoting_style == 6U) {
      goto case_6;
    }
    if ((unsigned int)quoting_style == 7U) {
      goto case_6;
    }
    if ((unsigned int)quoting_style == 8U) {
      goto case_6;
    }
    if ((unsigned int)quoting_style == 1U) {
      goto case_1;
    }
    if ((unsigned int)quoting_style == 2U) {
      goto case_2;
    }
    if ((unsigned int)quoting_style == 0U) {
      goto case_0;
    }
    goto switch_default;
  case_4:
    quoting_style = (enum quoting_style)3;
    elide_outer_quotes = (_Bool)1;
  case_3:
    if (!elide_outer_quotes) {
      {
        while (1) {
        while_continue: /* CIL Label */;
          if (len < buffersize) {
            *(buffer___0 + len) = (char)'\"';
          }
          len++;
          goto while_break;
        }
      while_break___27: /* CIL Label */;
      }
    while_break:;
    }
    backslash_escapes = (_Bool)1;
    quote_string = "\"";
    quote_string_len = (size_t)1;
    goto switch_break;
  case_5:
    backslash_escapes = (_Bool)1;
    elide_outer_quotes = (_Bool)0;
    goto switch_break;
  case_6:
    if ((unsigned int)quoting_style != 8U) {
      {
        left_quote = gettext_quote("`", quoting_style);
        right_quote = gettext_quote("\'", quoting_style);
      }
    }
    if (!elide_outer_quotes) {
      quote_string = left_quote;
      {
        while (1) {
        while_continue___0: /* CIL Label */;
          if (!*quote_string) {
            goto while_break___0;
          }
          {
            while (1) {
            while_continue___1: /* CIL Label */;
              if (len < buffersize) {
                *(buffer___0 + len) = (char)*quote_string;
              }
              len++;
              goto while_break___1;
            }
          while_break___29: /* CIL Label */;
          }
        while_break___1:
          quote_string++;
        }
      while_break___28: /* CIL Label */;
      }
    while_break___0:;
    }
    {
      backslash_escapes = (_Bool)1;
      quote_string = right_quote;
      quote_string_len = strlen(quote_string);
    }
    goto switch_break;
  case_1:
    quoting_style = (enum quoting_style)2;
    elide_outer_quotes = (_Bool)1;
  case_2:
    if (!elide_outer_quotes) {
      {
        while (1) {
        while_continue___2: /* CIL Label */;
          if (len < buffersize) {
            *(buffer___0 + len) = (char)'\'';
          }
          len++;
          goto while_break___2;
        }
      while_break___30: /* CIL Label */;
      }
    while_break___2:;
    }
    quote_string = "\'";
    quote_string_len = (size_t)1;
    goto switch_break;
  case_0:
    elide_outer_quotes = (_Bool)0;
    goto switch_break;
  switch_default : {
    abort();
  }
  switch_break:
    i = (size_t)0;
    {
      while (1) {
      while_continue___3: /* CIL Label */;
        if (argsize == 0xffffffffffffffffUL) {
          tmp___7 = (int const) * (arg + i) == 0;
        } else {
          tmp___7 = i == argsize;
        }
        if (tmp___7) {
          goto while_break___3;
        }
        is_right_quote = (_Bool)0;
        if (backslash_escapes) {
          if (quote_string_len) {
            if (argsize == 0xffffffffffffffffUL) {
              if (1UL < quote_string_len) {
                {
                  argsize = strlen(arg);
                  tmp___0 = argsize;
                }
              } else {
                tmp___0 = argsize;
              }
            } else {
              tmp___0 = argsize;
            }
            if (i + quote_string_len <= tmp___0) {
              {
                tmp___1 = memcmp((void const *)(arg + i), (void const *)quote_string,
                                 quote_string_len);
              }
              if (tmp___1 == 0) {
                if (elide_outer_quotes) {
                  goto force_outer_quoting_style;
                }
                is_right_quote = (_Bool)1;
              }
            }
          }
        }
        c = (unsigned char)*(arg + i);
        if ((int)c == 0) {
          goto case_0___0;
        }
        if ((int)c == 63) {
          goto case_63;
        }
        if ((int)c == 7) {
          goto case_7___0;
        }
        if ((int)c == 8) {
          goto case_8___0;
        }
        if ((int)c == 12) {
          goto case_12;
        }
        if ((int)c == 10) {
          goto case_10;
        }
        if ((int)c == 13) {
          goto case_13;
        }
        if ((int)c == 9) {
          goto case_9;
        }
        if ((int)c == 11) {
          goto case_11;
        }
        if ((int)c == 92) {
          goto case_92;
        }
        if ((int)c == 123) {
          goto case_123;
        }
        if ((int)c == 125) {
          goto case_123;
        }
        if ((int)c == 35) {
          goto case_35;
        }
        if ((int)c == 126) {
          goto case_35;
        }
        if ((int)c == 32) {
          goto case_32;
        }
        if ((int)c == 33) {
          goto case_32;
        }
        if ((int)c == 34) {
          goto case_32;
        }
        if ((int)c == 36) {
          goto case_32;
        }
        if ((int)c == 38) {
          goto case_32;
        }
        if ((int)c == 40) {
          goto case_32;
        }
        if ((int)c == 41) {
          goto case_32;
        }
        if ((int)c == 42) {
          goto case_32;
        }
        if ((int)c == 59) {
          goto case_32;
        }
        if ((int)c == 60) {
          goto case_32;
        }
        if ((int)c == 61) {
          goto case_32;
        }
        if ((int)c == 62) {
          goto case_32;
        }
        if ((int)c == 91) {
          goto case_32;
        }
        if ((int)c == 94) {
          goto case_32;
        }
        if ((int)c == 96) {
          goto case_32;
        }
        if ((int)c == 124) {
          goto case_32;
        }
        if ((int)c == 39) {
          goto case_39___0;
        }
        if ((int)c == 37) {
          goto case_37;
        }
        if ((int)c == 43) {
          goto case_37;
        }
        if ((int)c == 44) {
          goto case_37;
        }
        if ((int)c == 45) {
          goto case_37;
        }
        if ((int)c == 46) {
          goto case_37;
        }
        if ((int)c == 47) {
          goto case_37;
        }
        if ((int)c == 48) {
          goto case_37;
        }
        if ((int)c == 49) {
          goto case_37;
        }
        if ((int)c == 50) {
          goto case_37;
        }
        if ((int)c == 51) {
          goto case_37;
        }
        if ((int)c == 52) {
          goto case_37;
        }
        if ((int)c == 53) {
          goto case_37;
        }
        if ((int)c == 54) {
          goto case_37;
        }
        if ((int)c == 55) {
          goto case_37;
        }
        if ((int)c == 56) {
          goto case_37;
        }
        if ((int)c == 57) {
          goto case_37;
        }
        if ((int)c == 58) {
          goto case_37;
        }
        if ((int)c == 65) {
          goto case_37;
        }
        if ((int)c == 66) {
          goto case_37;
        }
        if ((int)c == 67) {
          goto case_37;
        }
        if ((int)c == 68) {
          goto case_37;
        }
        if ((int)c == 69) {
          goto case_37;
        }
        if ((int)c == 70) {
          goto case_37;
        }
        if ((int)c == 71) {
          goto case_37;
        }
        if ((int)c == 72) {
          goto case_37;
        }
        if ((int)c == 73) {
          goto case_37;
        }
        if ((int)c == 74) {
          goto case_37;
        }
        if ((int)c == 75) {
          goto case_37;
        }
        if ((int)c == 76) {
          goto case_37;
        }
        if ((int)c == 77) {
          goto case_37;
        }
        if ((int)c == 78) {
          goto case_37;
        }
        if ((int)c == 79) {
          goto case_37;
        }
        if ((int)c == 80) {
          goto case_37;
        }
        if ((int)c == 81) {
          goto case_37;
        }
        if ((int)c == 82) {
          goto case_37;
        }
        if ((int)c == 83) {
          goto case_37;
        }
        if ((int)c == 84) {
          goto case_37;
        }
        if ((int)c == 85) {
          goto case_37;
        }
        if ((int)c == 86) {
          goto case_37;
        }
        if ((int)c == 87) {
          goto case_37;
        }
        if ((int)c == 88) {
          goto case_37;
        }
        if ((int)c == 89) {
          goto case_37;
        }
        if ((int)c == 90) {
          goto case_37;
        }
        if ((int)c == 93) {
          goto case_37;
        }
        if ((int)c == 95) {
          goto case_37;
        }
        if ((int)c == 97) {
          goto case_37;
        }
        if ((int)c == 98) {
          goto case_37;
        }
        if ((int)c == 99) {
          goto case_37;
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
          goto case_37;
        }
        if ((int)c == 104) {
          goto case_37;
        }
        if ((int)c == 105) {
          goto case_37;
        }
        if ((int)c == 106) {
          goto case_37;
        }
        if ((int)c == 107) {
          goto case_37;
        }
        if ((int)c == 108) {
          goto case_37;
        }
        if ((int)c == 109) {
          goto case_37;
        }
        if ((int)c == 110) {
          goto case_37;
        }
        if ((int)c == 111) {
          goto case_37;
        }
        if ((int)c == 112) {
          goto case_37;
        }
        if ((int)c == 113) {
          goto case_37;
        }
        if ((int)c == 114) {
          goto case_37;
        }
        if ((int)c == 115) {
          goto case_37;
        }
        if ((int)c == 116) {
          goto case_37;
        }
        if ((int)c == 117) {
          goto case_37;
        }
        if ((int)c == 118) {
          goto case_37;
        }
        if ((int)c == 119) {
          goto case_37;
        }
        if ((int)c == 120) {
          goto case_37;
        }
        if ((int)c == 121) {
          goto case_37;
        }
        if ((int)c == 122) {
          goto case_37;
        }
        goto switch_default___2;
      case_0___0:
        if (backslash_escapes) {
          if (elide_outer_quotes) {
            goto force_outer_quoting_style;
          }
          {
            while (1) {
            while_continue___4: /* CIL Label */;
              if (len < buffersize) {
                *(buffer___0 + len) = (char)'\\';
              }
              len++;
              goto while_break___4;
            }
          while_break___32: /* CIL Label */;
          }
        while_break___4:;
          if (i + 1UL < argsize) {
            if (48 <= (int)*(arg + (i + 1UL))) {
              if ((int const) * (arg + (i + 1UL)) <= 57) {
                {
                  while (1) {
                  while_continue___5: /* CIL Label */;
                    if (len < buffersize) {
                      *(buffer___0 + len) = (char)'0';
                    }
                    len++;
                    goto while_break___5;
                  }
                while_break___33: /* CIL Label */;
                }
              while_break___5:;
                {
                  while (1) {
                  while_continue___6: /* CIL Label */;
                    if (len < buffersize) {
                      *(buffer___0 + len) = (char)'0';
                    }
                    len++;
                    goto while_break___6;
                  }
                while_break___34: /* CIL Label */;
                }
              while_break___6:;
              }
            }
          }
          c = (unsigned char)'0';
        } else {
          if (flags & 1) {
            goto __Cont;
          }
        }
        goto switch_break___0;
      case_63:
        if ((unsigned int)quoting_style == 2U) {
          goto case_2___0;
        }
        if ((unsigned int)quoting_style == 3U) {
          goto case_3___0;
        }
        goto switch_default___1;
      case_2___0:
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
        goto switch_break___1;
      case_3___0:
        if (flags & 4) {
          if (i + 2UL < argsize) {
            if ((int const) * (arg + (i + 1UL)) == 63) {
              if ((int const) * (arg + (i + 2UL)) == 33) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 39) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 40) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 41) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 45) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 47) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 60) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 61) {
                goto case_33;
              }
              if ((int const) * (arg + (i + 2UL)) == 62) {
                goto case_33;
              }
              goto switch_default___0;
            case_33:
              if (elide_outer_quotes) {
                goto force_outer_quoting_style;
              }
              c = (unsigned char)*(arg + (i + 2UL));
              i += 2UL;
              {
                while (1) {
                while_continue___7: /* CIL Label */;
                  if (len < buffersize) {
                    *(buffer___0 + len) = (char)'?';
                  }
                  len++;
                  goto while_break___7;
                }
              while_break___35: /* CIL Label */;
              }
            while_break___7:;
              {
                while (1) {
                while_continue___8: /* CIL Label */;
                  if (len < buffersize) {
                    *(buffer___0 + len) = (char)'\"';
                  }
                  len++;
                  goto while_break___8;
                }
              while_break___36: /* CIL Label */;
              }
            while_break___8:;
              {
                while (1) {
                while_continue___9: /* CIL Label */;
                  if (len < buffersize) {
                    *(buffer___0 + len) = (char)'\"';
                  }
                  len++;
                  goto while_break___9;
                }
              while_break___37: /* CIL Label */;
              }
            while_break___9:;
              {
                while (1) {
                while_continue___10: /* CIL Label */;
                  if (len < buffersize) {
                    *(buffer___0 + len) = (char)'?';
                  }
                  len++;
                  goto while_break___10;
                }
              while_break___38: /* CIL Label */;
              }
            while_break___10:;
              goto switch_break___2;
            switch_default___0:
              goto switch_break___2;
            switch_break___2:;
            }
          }
        }
        goto switch_break___1;
      switch_default___1:
        goto switch_break___1;
      switch_break___1:;
        goto switch_break___0;
      case_7___0:
        esc = (unsigned char)'a';
        goto c_escape;
      case_8___0:
        esc = (unsigned char)'b';
        goto c_escape;
      case_12:
        esc = (unsigned char)'f';
        goto c_escape;
      case_10:
        esc = (unsigned char)'n';
        goto c_and_shell_escape;
      case_13:
        esc = (unsigned char)'r';
        goto c_and_shell_escape;
      case_9:
        esc = (unsigned char)'t';
        goto c_and_shell_escape;
      case_11:
        esc = (unsigned char)'v';
        goto c_escape;
      case_92:
        esc = c;
        if (backslash_escapes) {
          if (elide_outer_quotes) {
            if (quote_string_len) {
              goto store_c;
            }
          }
        }
      c_and_shell_escape:
        if ((unsigned int)quoting_style == 2U) {
          if (elide_outer_quotes) {
            goto force_outer_quoting_style;
          }
        }
      c_escape:
        if (backslash_escapes) {
          c = esc;
          goto store_escape;
        }
        goto switch_break___0;
      case_123:
        if (argsize == 0xffffffffffffffffUL) {
          tmp___2 = (int const) * (arg + 1) == 0;
        } else {
          tmp___2 = argsize == 1UL;
        }
        if (!tmp___2) {
          goto switch_break___0;
        }
      case_35:
        if (i != 0UL) {
          goto switch_break___0;
        }
      case_32:
        if ((unsigned int)quoting_style == 2U) {
          if (elide_outer_quotes) {
            goto force_outer_quoting_style;
          }
        }
        goto switch_break___0;
      case_39___0:
        if ((unsigned int)quoting_style == 2U) {
          if (elide_outer_quotes) {
            goto force_outer_quoting_style;
          }
          {
            while (1) {
            while_continue___11: /* CIL Label */;
              if (len < buffersize) {
                *(buffer___0 + len) = (char)'\'';
              }
              len++;
              goto while_break___11;
            }
          while_break___39: /* CIL Label */;
          }
        while_break___11:;
          {
            while (1) {
            while_continue___12: /* CIL Label */;
              if (len < buffersize) {
                *(buffer___0 + len) = (char)'\\';
              }
              len++;
              goto while_break___12;
            }
          while_break___40: /* CIL Label */;
          }
        while_break___12:;
          {
            while (1) {
            while_continue___13: /* CIL Label */;
              if (len < buffersize) {
                *(buffer___0 + len) = (char)'\'';
              }
              len++;
              goto while_break___13;
            }
          while_break___41: /* CIL Label */;
          }
        while_break___13:;
        }
        goto switch_break___0;
      case_37:
        goto switch_break___0;
      switch_default___2:
        if (unibyte_locale) {
          {
            m = (size_t)1;
            tmp___3 = __ctype_b_loc();
            printable = (_Bool)(((int const) * (*tmp___3 + (int)c) & 16384) != 0);
          }
        } else {
          {
            memset((void *)(&mbstate), 0, sizeof(mbstate));
            m = (size_t)0;
            printable = (_Bool)1;
          }
          if (argsize == 0xffffffffffffffffUL) {
            {
              argsize = strlen(arg);
            }
          }
          {
            while (1) {
            while_continue___14: /* CIL Label */;
              {
                tmp___4 = mbrtowc((wchar_t * /* __restrict  */)(&w), (char const * /* __restrict  */)(arg + (i + m)),
                                  argsize - (i + m), (mbstate_t * /* __restrict  */)(&mbstate));
                bytes = tmp___4;
              }
              if (bytes == 0UL) {
                goto while_break___14;
              } else {
                if (bytes == 0xffffffffffffffffUL) {
                  printable = (_Bool)0;
                  goto while_break___14;
                } else {
                  if (bytes == 0xfffffffffffffffeUL) {
                    printable = (_Bool)0;
                    {
                      while (1) {
                      while_continue___15: /* CIL Label */;
                        if (i + m < argsize) {
                          if (!*(arg + (i + m))) {
                            goto while_break___15;
                          }
                        } else {
                          goto while_break___15;
                        }
                        m++;
                      }
                    while_break___43: /* CIL Label */;
                    }
                  while_break___15:;
                    goto while_break___14;
                  } else {
                    if (elide_outer_quotes) {
                      if ((unsigned int)quoting_style == 2U) {
                        j = (size_t)1;
                        {
                          while (1) {
                          while_continue___16: /* CIL Label */;
                            if (!(j < bytes)) {
                              goto while_break___16;
                            }
                            if ((int const) * (arg + ((i + m) + j)) == 91) {
                              goto case_91___0;
                            }
                            if ((int const) * (arg + ((i + m) + j)) == 92) {
                              goto case_91___0;
                            }
                            if ((int const) * (arg + ((i + m) + j)) == 94) {
                              goto case_91___0;
                            }
                            if ((int const) * (arg + ((i + m) + j)) == 96) {
                              goto case_91___0;
                            }
                            if ((int const) * (arg + ((i + m) + j)) == 124) {
                              goto case_91___0;
                            }
                            goto switch_default___3;
                          case_91___0:
                            goto force_outer_quoting_style;
                          switch_default___3:
                            goto switch_break___3;
                          switch_break___3:
                            j++;
                          }
                        while_break___44: /* CIL Label */;
                        }
                      while_break___16:;
                      }
                    }
                    {
                      tmp___5 = iswprint((wint_t)w);
                    }
                    if (!tmp___5) {
                      printable = (_Bool)0;
                    }
                    m += bytes;
                  }
                }
              }
              {
                tmp___6 = mbsinit((mbstate_t const *)(&mbstate));
              }
              if (tmp___6) {
                goto while_break___14;
              }
            }
          while_break___42: /* CIL Label */;
          }
        while_break___14:;
        }
        if (1UL < m) {
          goto _L___0;
        } else {
          if (backslash_escapes) {
            if (!printable) {
            _L___0:
              ilim = i + m;
              {
                while (1) {
                while_continue___17: /* CIL Label */;
                  if (backslash_escapes) {
                    if (!printable) {
                      if (elide_outer_quotes) {
                        goto force_outer_quoting_style;
                      }
                      {
                        while (1) {
                        while_continue___18: /* CIL Label */;
                          if (len < buffersize) {
                            *(buffer___0 + len) = (char)'\\';
                          }
                          len++;
                          goto while_break___18;
                        }
                      while_break___46: /* CIL Label */;
                      }
                    while_break___18:;
                      {
                        while (1) {
                        while_continue___19: /* CIL Label */;
                          if (len < buffersize) {
                            *(buffer___0 + len) = (char)(48 + ((int)c >> 6));
                          }
                          len++;
                          goto while_break___19;
                        }
                      while_break___47: /* CIL Label */;
                      }
                    while_break___19:;
                      {
                        while (1) {
                        while_continue___20: /* CIL Label */;
                          if (len < buffersize) {
                            *(buffer___0 + len) = (char)(48 + (((int)c >> 3) & 7));
                          }
                          len++;
                          goto while_break___20;
                        }
                      while_break___48: /* CIL Label */;
                      }
                    while_break___20:
                      c = (unsigned char)(48 + ((int)c & 7));
                    } else {
                      goto _L;
                    }
                  } else {
                  _L:
                    if (is_right_quote) {
                      {
                        while (1) {
                        while_continue___21: /* CIL Label */;
                          if (len < buffersize) {
                            *(buffer___0 + len) = (char)'\\';
                          }
                          len++;
                          goto while_break___21;
                        }
                      while_break___49: /* CIL Label */;
                      }
                    while_break___21:
                      is_right_quote = (_Bool)0;
                    }
                  }
                  if (ilim <= i + 1UL) {
                    goto while_break___17;
                  }
                  {
                    while (1) {
                    while_continue___22: /* CIL Label */;
                      if (len < buffersize) {
                        *(buffer___0 + len) = (char)c;
                      }
                      len++;
                      goto while_break___22;
                    }
                  while_break___50: /* CIL Label */;
                  }
                while_break___22:
                  i++;
                  c = (unsigned char)*(arg + i);
                }
              while_break___45: /* CIL Label */;
              }
            while_break___17:;
              goto store_c;
            }
          }
        }
      switch_break___0:;
        if (backslash_escapes) {
          goto _L___3;
        } else {
          if (elide_outer_quotes) {
          _L___3:
            if (quote_these_too) {
              if (!((*(quote_these_too + (unsigned long)c / (sizeof(int) * 8UL)) >> (unsigned long)c % (sizeof(int) * 8UL)) & 1U)) {
                goto _L___2;
              }
            } else {
              goto _L___2;
            }
          } else {
          _L___2:
            if (!is_right_quote) {
              goto store_c;
            }
          }
        }
      store_escape:
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
        {
          while (1) {
          while_continue___23: /* CIL Label */;
            if (len < buffersize) {
              *(buffer___0 + len) = (char)'\\';
            }
            len++;
            goto while_break___23;
          }
        while_break___51: /* CIL Label */;
        }
      while_break___23:;
      store_c : {
        while (1) {
        while_continue___24: /* CIL Label */;
          if (len < buffersize) {
            *(buffer___0 + len) = (char)c;
          }
          len++;
          goto while_break___24;
        }
      while_break___52: /* CIL Label */;
      }
      while_break___24:;
      __Cont:
        i++;
      }
    while_break___31: /* CIL Label */;
    }
  while_break___3:;
    if (len == 0UL) {
      if ((unsigned int)quoting_style == 2U) {
        if (elide_outer_quotes) {
          goto force_outer_quoting_style;
        }
      }
    }
    if (quote_string) {
      if (!elide_outer_quotes) {
        {
          while (1) {
          while_continue___25: /* CIL Label */;
            if (!*quote_string) {
              goto while_break___25;
            }
            {
              while (1) {
              while_continue___26: /* CIL Label */;
                if (len < buffersize) {
                  *(buffer___0 + len) = (char)*quote_string;
                }
                len++;
                goto while_break___26;
              }
            while_break___54: /* CIL Label */;
            }
          while_break___26:
            quote_string++;
          }
        while_break___53: /* CIL Label */;
        }
      while_break___25:;
      }
    }
    if (len < buffersize) {
      *(buffer___0 + len) = (char)'\000';
    }
    return (len);
  force_outer_quoting_style : {
    tmp___8 = quotearg_buffer_restyled(buffer___0, buffersize, arg, argsize, quoting_style,
                                       flags & -3, (unsigned int const *)((void *)0),
                                       left_quote, right_quote);
  }
    return (tmp___8);
  }
}
static char slot0[256];
static unsigned int nslots = 1U;
static struct slotvec slotvec0 = {sizeof(slot0), slot0};
static struct slotvec *slotvec = &slotvec0;
static char *quotearg_n_options(int n, char const *arg, size_t argsize, struct quoting_options const *options) {
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
    {
      tmp = __errno_location();
      e = *tmp;
      n0 = (unsigned int)n;
      sv = slotvec;
    }
    if (n < 0) {
      {
        abort();
      }
    }
    if (nslots <= n0) {
      n1 = (size_t)(n0 + 1U);
      preallocated = (_Bool)((unsigned long)sv == (unsigned long)(&slotvec0));
      if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
        tmp___0 = -1;
      } else {
        tmp___0 = -2;
      }
      if ((size_t)tmp___0 / sizeof(*sv) < n1) {
        {
          xalloc_die();
        }
      }
      if (preallocated) {
        tmp___1 = (struct slotvec *)((void *)0);
      } else {
        tmp___1 = sv;
      }
      {
        sv = (struct slotvec *)xrealloc((void *)tmp___1, n1 * sizeof(*sv));
        slotvec = sv;
      }
      if (preallocated) {
        *sv = slotvec0;
      }
      {
        memset((void *)(sv + nslots), 0, (n1 - (size_t)nslots) * sizeof(*sv));
        nslots = (unsigned int)n1;
      }
    }
    {
      size = (sv + n)->size;
      val = (sv + n)->val;
      flags = (int)(options->flags | 1);
      tmp___2 = quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style)options->style,
                                         flags, (unsigned int const *)(options->quote_these_too),
                                         (char const *)options->left_quote, (char const *)options->right_quote);
      qsize = tmp___2;
    }
    if (size <= qsize) {
      size = qsize + 1UL;
      (sv + n)->size = size;
      if ((unsigned long)val != (unsigned long)(slot0)) {
        {
          free((void *)val);
        }
      }
      {
        val = xcharalloc(size);
        (sv + n)->val = val;
        quotearg_buffer_restyled(val, size, arg, argsize, (enum quoting_style)options->style,
                                 flags, (unsigned int const *)(options->quote_these_too),
                                 (char const *)options->left_quote, (char const *)options->right_quote);
      }
    }
    {
      tmp___3 = __errno_location();
      *tmp___3 = e;
    }
    return (val);
  }
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
  void *__cil_tmp9;
  void *__cil_tmp10;
  {
    {
      tmp = quoting_options_from_style(s);
      o = tmp;
      tmp___0 = quotearg_n_options(n, arg, (size_t)-1, (struct quoting_options const *)(&o));
    }
    return (tmp___0);
  }
}
char *quotearg_char_mem(char const *arg, size_t argsize, char ch) {
  struct quoting_options options;
  char *tmp;
  void *__cil_tmp7;
  {
    {
      options = default_quoting_options;
      set_char_quoting(&options, ch, 1);
      tmp = quotearg_n_options(0, arg, argsize, (struct quoting_options const *)(&options));
    }
    return (tmp);
  }
}
char *quotearg_char(char const *arg, char ch) {
  char *tmp;
  {
    {
      tmp = quotearg_char_mem(arg, (size_t)-1, ch);
    }
    return (tmp);
  }
}
char *quotearg_colon(char const *arg) {
  char *tmp;
  {
    {
      tmp = quotearg_char(arg, (char)':');
    }
    return (tmp);
  }
}
struct quoting_options quote_quoting_options = {(enum quoting_style)6, 0, {0U}, (char const *)((void *)0), (char const *)((void *)0)};
char const *quote_n_mem(int n,
                        char const *arg, size_t argsize) {
  char const *tmp;
  {
    {
      tmp = (char const *)quotearg_n_options(n, arg, argsize, (struct quoting_options const *)(&quote_quoting_options));
    }
    return (tmp);
  }
}
char const *quote_n(int n, char const *arg) {
  char const *tmp;
  {
    {
      tmp = quote_n_mem(n, arg, (size_t)-1);
    }
    return (tmp);
  }
}
char const *quote(char const *arg) {
  char const *tmp;
  {
    {
      tmp = quote_n(0, arg);
    }
    return (tmp);
  }
}
char const *proper_name(char const *name);
extern __attribute__((__nothrow__)) int sprintf(char *__restrict __s, char const *__restrict __format, ...);
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int iswalnum(wint_t __wc);
void mbuiter_multi_next(struct mbuiter_multi *iter) {
  int tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  _Bool tmp___3;
  {
    if (iter->next_done) {
      return;
    }
    if (iter->in_shift) {
      goto with_shift;
    }
    {
      tmp___3 = is_basic((char)*(iter->cur.ptr));
    }
    if (tmp___3) {
      iter->cur.bytes = (size_t)1;
      iter->cur.wc = (wchar_t) * (iter->cur.ptr);
      iter->cur.wc_valid = (_Bool)1;
    } else {
      {
        tmp = mbsinit((mbstate_t const *)(&iter->state));
      }
      if (!tmp) {
        {
          __assert_fail("mbsinit (&iter->state)", "/home/khheo/project/benchmark/grep-2.19/lib/mbuiter.h",
                        150U, "mbuiter_multi_next");
        }
      }
      iter->in_shift = (_Bool)1;
    with_shift : {
      tmp___0 = __ctype_get_mb_cur_max();
      tmp___1 = strnlen1(iter->cur.ptr, tmp___0);
      iter->cur.bytes = mbrtowc((wchar_t * /* __restrict  */)(&iter->cur.wc), (char const * /* __restrict  */)iter->cur.ptr,
                                tmp___1, (mbstate_t * /* __restrict  */)(&iter->state));
    }
      if (iter->cur.bytes == 0xffffffffffffffffUL) {
        iter->cur.bytes = (size_t)1;
        iter->cur.wc_valid = (_Bool)0;
      } else {
        if (iter->cur.bytes == 0xfffffffffffffffeUL) {
          {
            iter->cur.bytes = strlen(iter->cur.ptr);
            iter->cur.wc_valid = (_Bool)0;
          }
        } else {
          if (iter->cur.bytes == 0UL) {
            iter->cur.bytes = (size_t)1;
            if (!((int const) * (iter->cur.ptr) == 0)) {
              {
                __assert_fail("*iter->cur.ptr == \'\\0\'", "/home/khheo/project/benchmark/grep-2.19/lib/mbuiter.h",
                              178U, "mbuiter_multi_next");
              }
            }
            if (!(iter->cur.wc == 0)) {
              {
                __assert_fail("iter->cur.wc == 0", "/home/khheo/project/benchmark/grep-2.19/lib/mbuiter.h",
                              179U, "mbuiter_multi_next");
              }
            }
          }
          {
            iter->cur.wc_valid = (_Bool)1;
            tmp___2 = mbsinit((mbstate_t const *)(&iter->state));
          }
          if (tmp___2) {
            iter->in_shift = (_Bool)0;
          }
        }
      }
    }
    iter->next_done = (_Bool)1;
    return;
  }
}
static _Bool mbsstr_trimmed_wordbounded(char const *string, char const *sub) {
  char *tsub;
  char *tmp;
  _Bool found;
  char const *tsub_in_string;
  char const *tmp___0;
  mbui_iterator_t string_iter;
  _Bool word_boundary_before;
  _Bool word_boundary_after;
  mbchar_t last_char_before_tsub;
  int tmp___1;
  int tmp___2;
  mbui_iterator_t tsub_iter;
  int tmp___3;
  int tmp___4;
  mbchar_t first_char_after_tsub;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  _Bool word_boundary_before___0;
  char const *p;
  _Bool word_boundary_after___0;
  unsigned short const **tmp___8;
  size_t tmp___9;
  unsigned short const **tmp___10;
  size_t tmp___11;
  void *__cil_tmp35;
  void *__cil_tmp36;
  void *__cil_tmp37;
  void *__cil_tmp38;
  void *__cil_tmp39;
  void *__cil_tmp40;
  {
    {
      tmp = trim2(sub, 2);
      tsub = tmp;
      found = (_Bool)0;
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((int const) * string != 0)) {
          goto while_break;
        }
        {
          tmp___0 = (char const *)mbsstr(string, (char const *)tsub);
          tsub_in_string = tmp___0;
        }
        if ((unsigned long)tsub_in_string == (unsigned long)((void *)0)) {
          goto while_break;
        } else {
          {
            tmp___11 = __ctype_get_mb_cur_max();
          }
          if (tmp___11 > 1UL) {
            {
              string_iter.cur.ptr = string;
              string_iter.in_shift = (_Bool)0;
              memset((void *)(&string_iter.state), '\000', sizeof(mbstate_t));
              string_iter.next_done = (_Bool)0;
              word_boundary_before = (_Bool)1;
            }
            if ((unsigned long)string_iter.cur.ptr < (unsigned long)tsub_in_string) {
              {
                while (1) {
                while_continue___0: /* CIL Label */;
                  {
                    mbuiter_multi_next(&string_iter);
                  }
                  if (string_iter.cur.wc_valid) {
                    if (string_iter.cur.wc == 0) {
                      tmp___1 = 0;
                    } else {
                      tmp___1 = 1;
                    }
                  } else {
                    tmp___1 = 1;
                  }
                  if (!tmp___1) {
                    {
                      abort();
                    }
                  }
                  last_char_before_tsub = string_iter.cur;
                  string_iter.cur.ptr += string_iter.cur.bytes;
                  string_iter.next_done = (_Bool)0;
                  if (!((unsigned long)string_iter.cur.ptr < (unsigned long)tsub_in_string)) {
                    goto while_break___0;
                  }
                }
              while_break___3: /* CIL Label */;
              }
            while_break___0:;
              if (last_char_before_tsub.wc_valid) {
                {
                  tmp___2 = iswalnum((wint_t)last_char_before_tsub.wc);
                }
                if (tmp___2) {
                  word_boundary_before = (_Bool)0;
                }
              }
            }
            {
              string_iter.cur.ptr = tsub_in_string;
              string_iter.in_shift = (_Bool)0;
              memset((void *)(&string_iter.state), '\000', sizeof(mbstate_t));
              string_iter.next_done = (_Bool)0;
              tsub_iter.cur.ptr = (char const *)tsub;
              tsub_iter.in_shift = (_Bool)0;
              memset((void *)(&tsub_iter.state), '\000', sizeof(mbstate_t));
              tsub_iter.next_done = (_Bool)0;
            }
            {
              while (1) {
              while_continue___1: /* CIL Label */;
                {
                  mbuiter_multi_next(&tsub_iter);
                }
                if (tsub_iter.cur.wc_valid) {
                  if (tsub_iter.cur.wc == 0) {
                    tmp___4 = 0;
                  } else {
                    tmp___4 = 1;
                  }
                } else {
                  tmp___4 = 1;
                }
                if (!tmp___4) {
                  goto while_break___1;
                }
                {
                  mbuiter_multi_next(&string_iter);
                }
                if (string_iter.cur.wc_valid) {
                  if (string_iter.cur.wc == 0) {
                    tmp___3 = 0;
                  } else {
                    tmp___3 = 1;
                  }
                } else {
                  tmp___3 = 1;
                }
                if (!tmp___3) {
                  {
                    abort();
                  }
                }
                string_iter.cur.ptr += string_iter.cur.bytes;
                string_iter.next_done = (_Bool)0;
                tsub_iter.cur.ptr += tsub_iter.cur.bytes;
                tsub_iter.next_done = (_Bool)0;
              }
            while_break___4: /* CIL Label */;
            }
          while_break___1 : {
            word_boundary_after = (_Bool)1;
            mbuiter_multi_next(&string_iter);
          }
            if (string_iter.cur.wc_valid) {
              if (string_iter.cur.wc == 0) {
                tmp___6 = 0;
              } else {
                tmp___6 = 1;
              }
            } else {
              tmp___6 = 1;
            }
            if (tmp___6) {
              first_char_after_tsub = string_iter.cur;
              if (first_char_after_tsub.wc_valid) {
                {
                  tmp___5 = iswalnum((wint_t)first_char_after_tsub.wc);
                }
                if (tmp___5) {
                  word_boundary_after = (_Bool)0;
                }
              }
            }
            if (word_boundary_before) {
              if (word_boundary_after) {
                found = (_Bool)1;
                goto while_break;
              }
            }
            {
              string_iter.cur.ptr = tsub_in_string;
              string_iter.in_shift = (_Bool)0;
              memset((void *)(&string_iter.state), '\000', sizeof(mbstate_t));
              string_iter.next_done = (_Bool)0;
              mbuiter_multi_next(&string_iter);
            }
            if (string_iter.cur.wc_valid) {
              if (string_iter.cur.wc == 0) {
                tmp___7 = 0;
              } else {
                tmp___7 = 1;
              }
            } else {
              tmp___7 = 1;
            }
            if (!tmp___7) {
              goto while_break;
            }
            string = tsub_in_string + string_iter.cur.bytes;
          } else {
            word_boundary_before___0 = (_Bool)1;
            if ((unsigned long)string < (unsigned long)tsub_in_string) {
              {
                tmp___8 = __ctype_b_loc();
              }
              if ((int const) * (*tmp___8 + (int)((unsigned char)*(tsub_in_string + -1))) & 8) {
                word_boundary_before___0 = (_Bool)0;
              }
            }
            {
              tmp___9 = strlen((char const *)tsub);
              p = tsub_in_string + tmp___9;
              word_boundary_after___0 = (_Bool)1;
            }
            if ((int const) * p != 0) {
              {
                tmp___10 = __ctype_b_loc();
              }
              if ((int const) * (*tmp___10 + (int)((unsigned char)*p)) & 8) {
                word_boundary_after___0 = (_Bool)0;
              }
            }
            if (word_boundary_before___0) {
              if (word_boundary_after___0) {
                found = (_Bool)1;
                goto while_break;
              }
            }
            if ((int const) * tsub_in_string == 0) {
              goto while_break;
            }
            string = tsub_in_string + 1;
          }
        }
      }
    while_break___2: /* CIL Label */;
    }
  while_break : {
    free((void *)tsub);
  }
    return (found);
  }
}
char const *proper_name(char const *name) {
  char const *translation;
  char const *tmp;
  char *result;
  size_t tmp___0;
  size_t tmp___1;
  void *tmp___2;
  size_t tmp___3;
  size_t tmp___4;
  void *tmp___5;
  void *tmp___6;
  _Bool tmp___7;
  char *__cil_tmp15;
  {
    {
      tmp = (char const *)gettext(name);
      translation = tmp;
    }
    if ((unsigned long)translation != (unsigned long)name) {
      {
        tmp___7 = mbsstr_trimmed_wordbounded(translation, name);
      }
      if (tmp___7) {
        return (translation);
      } else {
        if (sizeof(char) == 1UL) {
          {
            tmp___0 = strlen(translation);
            tmp___1 = strlen(name);
            tmp___2 = xmalloc((((tmp___0 + 2UL) + tmp___1) + 1UL) + 1UL);
            tmp___6 = tmp___2;
          }
        } else {
          {
            tmp___3 = strlen(translation);
            tmp___4 = strlen(name);
            tmp___5 = xnmalloc((((tmp___3 + 2UL) + tmp___4) + 1UL) + 1UL, sizeof(char));
            tmp___6 = tmp___5;
          }
        }
        {
          result = (char *)tmp___6;
          sprintf((char * /* __restrict  */)result, (char const * /* __restrict  */) "%s (%s)",
                  translation, name);
        }
        return ((char const *)result);
      }
    } else {
      return (name);
    }
  }
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
      tmp = open(file, flags, mode___0);
      tmp___0 = fd_safer(tmp);
    }
    return (tmp___0);
  }
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
      while_continue: /* CIL Label */;
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
    while_break___3: /* CIL Label */;
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
        while_continue___0: /* CIL Label */;
          if (!(i < sizeof(longword) * 8UL)) {
            goto while_break___0;
          }
          repeated_one |= repeated_one << i;
          repeated_c1 |= repeated_c1 << i;
          repeated_c2 |= repeated_c2 << i;
          i *= 2UL;
        }
      while_break___4: /* CIL Label */;
      }
    while_break___0:;
    }
    {
      while (1) {
      while_continue___1: /* CIL Label */;
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
    while_break___5: /* CIL Label */;
    }
  while_break___1:
    char_ptr = (unsigned char const *)longword_ptr;
    {
      while (1) {
      while_continue___2: /* CIL Label */;
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
    while_break___6: /* CIL Label */;
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
  size_t m;
  size_t *table;
  void *tmp___0;
  void *tmp___1;
  void *tmp___2;
  void *tmp___3;
  int tmp___4;
  size_t i;
  size_t j;
  unsigned char b;
  size_t j___0;
  unsigned char const *rhaystack;
  unsigned char const *phaystack;
  {
    m = needle_len;
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp___4 = -1;
    } else {
      tmp___4 = -2;
    }
    if (m > (size_t)tmp___4 / sizeof(size_t)) {
      tmp___3 = (void *)0;
    } else {
      if (m * sizeof(size_t) < 4016UL) {
        {
          tmp___0 = __builtin_alloca(m * sizeof(size_t) + 16UL);
          tmp___2 = (void *)((char *)tmp___0 + 16);
        }
      } else {
        {
          tmp___1 = mmalloca(m * sizeof(size_t));
          tmp___2 = tmp___1;
        }
      }
      tmp___3 = tmp___2;
    }
    table = (size_t *)tmp___3;
    if ((unsigned long)table == (unsigned long)((void *)0)) {
      return ((_Bool)0);
    }
    *(table + 1) = (size_t)1;
    j = (size_t)0;
    i = (size_t)2;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!(i < m)) {
          goto while_break;
        }
        b = (unsigned char)*(needle + (i - 1UL));
        {
          while (1) {
          while_continue___0: /* CIL Label */;
            if ((int)b == (int)*(needle + j)) {
              j++;
              *(table + i) = i - j;
              goto while_break___0;
            }
            if (j == 0UL) {
              *(table + i) = i;
              goto while_break___0;
            }
            j -= *(table + j);
          }
        while_break___3: /* CIL Label */;
        }
      while_break___0:
        i++;
      }
    while_break___2: /* CIL Label */;
    }
  while_break:
    *resultp = (unsigned char const *)((void *)0);
    j___0 = (size_t)0;
    rhaystack = haystack;
    phaystack = haystack;
    {
      while (1) {
      while_continue___1: /* CIL Label */;
        if (!((int const) * phaystack != 0)) {
          goto while_break___1;
        }
        if ((int const) * (needle + j___0) == (int const) * phaystack) {
          j___0++;
          phaystack++;
          if (j___0 == m) {
            *resultp = rhaystack;
            goto while_break___1;
          }
        } else {
          if (j___0 > 0UL) {
            rhaystack += *(table + j___0);
            j___0 -= *(table + j___0);
          } else {
            rhaystack++;
            phaystack++;
          }
        }
      }
    while_break___4: /* CIL Label */;
    }
  while_break___1 : {
    freea((void *)table);
  }
    return ((_Bool)1);
  }
}
static _Bool knuth_morris_pratt_multibyte(char const *haystack, char const *needle,
                                          char const **resultp) {
  size_t m;
  size_t tmp;
  mbchar_t *needle_mbchars;
  size_t *table;
  void *memory;
  void *tmp___1;
  void *tmp___2;
  void *tmp___3;
  void *tmp___4;
  int tmp___5;
  void *table_memory;
  mbui_iterator_t iter;
  size_t j;
  int tmp___6;
  size_t i;
  size_t j___0;
  mbchar_t *b;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  size_t j___1;
  mbui_iterator_t rhaystack;
  mbui_iterator_t phaystack;
  size_t count;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  void *__cil_tmp40;
  void *__cil_tmp41;
  void *__cil_tmp42;
  void *__cil_tmp43;
  void *__cil_tmp44;
  void *__cil_tmp45;
  {
    {
      tmp = mbslen(needle);
      m = tmp;
    }
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp___5 = -1;
    } else {
      tmp___5 = -2;
    }
    if (m > (size_t)tmp___5 / (sizeof(mbchar_t) + sizeof(size_t))) {
      tmp___4 = (void *)0;
    } else {
      if (m * (sizeof(mbchar_t) + sizeof(size_t)) < 4016UL) {
        {
          tmp___1 = __builtin_alloca(m * (sizeof(mbchar_t) + sizeof(size_t)) + 16UL);
          tmp___3 = (void *)((char *)tmp___1 + 16);
        }
      } else {
        {
          tmp___2 = mmalloca(m * (sizeof(mbchar_t) + sizeof(size_t)));
          tmp___3 = tmp___2;
        }
      }
      tmp___4 = tmp___3;
    }
    memory = tmp___4;
    if ((unsigned long)memory == (unsigned long)((void *)0)) {
      return ((_Bool)0);
    }
    {
      needle_mbchars = (mbchar_t *)memory;
      table_memory = (void *)(needle_mbchars + m);
      table = (size_t *)table_memory;
      j = (size_t)0;
      iter.cur.ptr = needle;
      iter.in_shift = (_Bool)0;
      memset((void *)(&iter.state), '\000', sizeof(mbstate_t));
      iter.next_done = (_Bool)0;
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        {
          mbuiter_multi_next(&iter);
        }
        if (iter.cur.wc_valid) {
          if (iter.cur.wc == 0) {
            tmp___6 = 0;
          } else {
            tmp___6 = 1;
          }
        } else {
          tmp___6 = 1;
        }
        if (!tmp___6) {
          goto while_break;
        }
        {
          mb_copy(needle_mbchars + j, (mbchar_t const *)(&iter.cur));
          iter.cur.ptr += iter.cur.bytes;
          iter.next_done = (_Bool)0;
          j++;
        }
      }
    while_break___4: /* CIL Label */;
    }
  while_break:
    *(table + 1) = (size_t)1;
    j___0 = (size_t)0;
    i = (size_t)2;
    {
      while (1) {
      while_continue___0: /* CIL Label */;
        if (!(i < m)) {
          goto while_break___0;
        }
        b = needle_mbchars + (i - 1UL);
        {
          while (1) {
          while_continue___1: /* CIL Label */;
            if (b->wc_valid) {
              if ((needle_mbchars + j___0)->wc_valid) {
                tmp___9 = b->wc == (needle_mbchars + j___0)->wc;
              } else {
                goto _L;
              }
            } else {
            _L:
              if (b->bytes == (needle_mbchars + j___0)->bytes) {
                {
                  tmp___7 = memcmp((void const *)b->ptr, (void const *)(needle_mbchars + j___0)->ptr,
                                   b->bytes);
                }
                if (tmp___7 == 0) {
                  tmp___8 = 1;
                } else {
                  tmp___8 = 0;
                }
              } else {
                tmp___8 = 0;
              }
              tmp___9 = tmp___8;
            }
            if (tmp___9) {
              j___0++;
              *(table + i) = i - j___0;
              goto while_break___1;
            }
            if (j___0 == 0UL) {
              *(table + i) = i;
              goto while_break___1;
            }
            j___0 -= *(table + j___0);
          }
        while_break___6: /* CIL Label */;
        }
      while_break___1:
        i++;
      }
    while_break___5: /* CIL Label */;
    }
  while_break___0 : {
    *resultp = (char const *)((void *)0);
    j___1 = (size_t)0;
    rhaystack.cur.ptr = haystack;
    rhaystack.in_shift = (_Bool)0;
    memset((void *)(&rhaystack.state), '\000', sizeof(mbstate_t));
    rhaystack.next_done = (_Bool)0;
    phaystack.cur.ptr = haystack;
    phaystack.in_shift = (_Bool)0;
    memset((void *)(&phaystack.state), '\000', sizeof(mbstate_t));
    phaystack.next_done = (_Bool)0;
  }
    {
      while (1) {
      while_continue___2: /* CIL Label */;
        {
          mbuiter_multi_next(&phaystack);
        }
        if (phaystack.cur.wc_valid) {
          if (phaystack.cur.wc == 0) {
            tmp___15 = 0;
          } else {
            tmp___15 = 1;
          }
        } else {
          tmp___15 = 1;
        }
        if (!tmp___15) {
          goto while_break___2;
        }
        if ((needle_mbchars + j___1)->wc_valid) {
          if (phaystack.cur.wc_valid) {
            tmp___14 = (needle_mbchars + j___1)->wc == phaystack.cur.wc;
          } else {
            goto _L___0;
          }
        } else {
        _L___0:
          if ((needle_mbchars + j___1)->bytes == phaystack.cur.bytes) {
            {
              tmp___12 = memcmp((void const *)(needle_mbchars + j___1)->ptr, (void const *)phaystack.cur.ptr,
                                (needle_mbchars + j___1)->bytes);
            }
            if (tmp___12 == 0) {
              tmp___13 = 1;
            } else {
              tmp___13 = 0;
            }
          } else {
            tmp___13 = 0;
          }
          tmp___14 = tmp___13;
        }
        if (tmp___14) {
          j___1++;
          phaystack.cur.ptr += phaystack.cur.bytes;
          phaystack.next_done = (_Bool)0;
          if (j___1 == m) {
            *resultp = rhaystack.cur.ptr;
            goto while_break___2;
          }
        } else {
          if (j___1 > 0UL) {
            count = *(table + j___1);
            j___1 -= count;
            {
              while (1) {
              while_continue___3: /* CIL Label */;
                if (!(count > 0UL)) {
                  goto while_break___3;
                }
                {
                  mbuiter_multi_next(&rhaystack);
                }
                if (rhaystack.cur.wc_valid) {
                  if (rhaystack.cur.wc == 0) {
                    tmp___10 = 0;
                  } else {
                    tmp___10 = 1;
                  }
                } else {
                  tmp___10 = 1;
                }
                if (!tmp___10) {
                  {
                    abort();
                  }
                }
                rhaystack.cur.ptr += rhaystack.cur.bytes;
                rhaystack.next_done = (_Bool)0;
                count--;
              }
            while_break___8: /* CIL Label */;
            }
          while_break___3:;
          } else {
            {
              mbuiter_multi_next(&rhaystack);
            }
            if (rhaystack.cur.wc_valid) {
              if (rhaystack.cur.wc == 0) {
                tmp___11 = 0;
              } else {
                tmp___11 = 1;
              }
            } else {
              tmp___11 = 1;
            }
            if (!tmp___11) {
              {
                abort();
              }
            }
            rhaystack.cur.ptr += rhaystack.cur.bytes;
            rhaystack.next_done = (_Bool)0;
            phaystack.cur.ptr += phaystack.cur.bytes;
            phaystack.next_done = (_Bool)0;
          }
        }
      }
    while_break___7: /* CIL Label */;
    }
  while_break___2 : {
    freea(memory);
  }
    return ((_Bool)1);
  }
}
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) __attribute__((__pure__));
char *(__attribute__((__nonnull__(1, 2))) mbsstr)(char const *haystack, char const *needle) {
  mbui_iterator_t iter_needle;
  _Bool try_kmp;
  size_t outer_loop_count;
  size_t comparison_count;
  size_t last_ccount;
  mbui_iterator_t iter_needle_last_ccount;
  mbui_iterator_t iter_haystack;
  int tmp;
  size_t count;
  int tmp___0;
  char const *result;
  _Bool success;
  _Bool tmp___1;
  int tmp___2;
  mbui_iterator_t rhaystack;
  mbui_iterator_t rneedle;
  int tmp___3;
  int tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  _Bool try_kmp___0;
  size_t outer_loop_count___0;
  size_t comparison_count___0;
  size_t last_ccount___0;
  char const *needle_last_ccount;
  char b;
  char const *tmp___13;
  size_t tmp___14;
  unsigned char const *result___0;
  _Bool success___0;
  size_t tmp___15;
  _Bool tmp___16;
  char const *rhaystack___0;
  char const *rneedle___0;
  size_t tmp___17;
  void *__cil_tmp54;
  void *__cil_tmp55;
  void *__cil_tmp56;
  void *__cil_tmp57;
  void *__cil_tmp58;
  void *__cil_tmp59;
  void *__cil_tmp60;
  void *__cil_tmp61;
  void *__cil_tmp62;
  void *__cil_tmp63;
  {
    {
      tmp___17 = __ctype_get_mb_cur_max();
    }
    if (tmp___17 > 1UL) {
      {
        iter_needle.cur.ptr = needle;
        iter_needle.in_shift = (_Bool)0;
        memset((void *)(&iter_needle.state), '\000', sizeof(mbstate_t));
        iter_needle.next_done = (_Bool)0;
        mbuiter_multi_next(&iter_needle);
      }
      if (iter_needle.cur.wc_valid) {
        if (iter_needle.cur.wc == 0) {
          tmp___12 = 0;
        } else {
          tmp___12 = 1;
        }
      } else {
        tmp___12 = 1;
      }
      if (tmp___12) {
        {
          try_kmp = (_Bool)1;
          outer_loop_count = (size_t)0;
          comparison_count = (size_t)0;
          last_ccount = (size_t)0;
          iter_needle_last_ccount.cur.ptr = needle;
          iter_needle_last_ccount.in_shift = (_Bool)0;
          memset((void *)(&iter_needle_last_ccount.state), '\000', sizeof(mbstate_t));
          iter_needle_last_ccount.next_done = (_Bool)0;
          iter_haystack.cur.ptr = haystack;
          iter_haystack.in_shift = (_Bool)0;
          memset((void *)(&iter_haystack.state), '\000', sizeof(mbstate_t));
          iter_haystack.next_done = (_Bool)0;
        }
        {
          while (1) {
          while_continue: /* CIL Label */;
            {
              mbuiter_multi_next(&iter_haystack);
            }
            if (iter_haystack.cur.wc_valid) {
              if (iter_haystack.cur.wc == 0) {
                tmp = 0;
              } else {
                tmp = 1;
              }
            } else {
              tmp = 1;
            }
            if (!tmp) {
              return ((char *)((void *)0));
            }
            if (try_kmp) {
              if (outer_loop_count >= 10UL) {
                if (comparison_count >= 5UL * outer_loop_count) {
                  count = comparison_count - last_ccount;
                  {
                    while (1) {
                    while_continue___0: /* CIL Label */;
                      if (count > 0UL) {
                        {
                          mbuiter_multi_next(&iter_needle_last_ccount);
                        }
                        if (iter_needle_last_ccount.cur.wc_valid) {
                          if (iter_needle_last_ccount.cur.wc == 0) {
                            tmp___0 = 0;
                          } else {
                            tmp___0 = 1;
                          }
                        } else {
                          tmp___0 = 1;
                        }
                        if (!tmp___0) {
                          goto while_break___0;
                        }
                      } else {
                        goto while_break___0;
                      }
                      iter_needle_last_ccount.cur.ptr += iter_needle_last_ccount.cur.bytes;
                      iter_needle_last_ccount.next_done = (_Bool)0;
                      count--;
                    }
                  while_break___4: /* CIL Label */;
                  }
                while_break___0 : {
                  last_ccount = comparison_count;
                  mbuiter_multi_next(&iter_needle_last_ccount);
                }
                  if (iter_needle_last_ccount.cur.wc_valid) {
                    if (iter_needle_last_ccount.cur.wc == 0) {
                      tmp___2 = 0;
                    } else {
                      tmp___2 = 1;
                    }
                  } else {
                    tmp___2 = 1;
                  }
                  if (!tmp___2) {
                    {
                      tmp___1 = knuth_morris_pratt_multibyte(haystack, needle, &result);
                      success = tmp___1;
                    }
                    if (success) {
                      return ((char *)result);
                    }
                    try_kmp = (_Bool)0;
                  }
                }
              }
            }
            outer_loop_count++;
            comparison_count++;
            if (iter_haystack.cur.wc_valid) {
              if (iter_needle.cur.wc_valid) {
                tmp___11 = iter_haystack.cur.wc == iter_needle.cur.wc;
              } else {
                goto _L___0;
              }
            } else {
            _L___0:
              if (iter_haystack.cur.bytes == iter_needle.cur.bytes) {
                {
                  tmp___9 = memcmp((void const *)iter_haystack.cur.ptr, (void const *)iter_needle.cur.ptr,
                                   iter_haystack.cur.bytes);
                }
                if (tmp___9 == 0) {
                  tmp___10 = 1;
                } else {
                  tmp___10 = 0;
                }
              } else {
                tmp___10 = 0;
              }
              tmp___11 = tmp___10;
            }
            if (tmp___11) {
              {
                memcpy((void * /* __restrict  */)((void *)(&rhaystack)), (void const * /* __restrict  */)((void const *)(&iter_haystack)),
                       sizeof(mbui_iterator_t));
                rhaystack.cur.ptr += rhaystack.cur.bytes;
                rhaystack.next_done = (_Bool)0;
                rneedle.cur.ptr = needle;
                rneedle.in_shift = (_Bool)0;
                memset((void *)(&rneedle.state), '\000', sizeof(mbstate_t));
                rneedle.next_done = (_Bool)0;
                mbuiter_multi_next(&rneedle);
              }
              if (rneedle.cur.wc_valid) {
                if (rneedle.cur.wc == 0) {
                  tmp___3 = 0;
                } else {
                  tmp___3 = 1;
                }
              } else {
                tmp___3 = 1;
              }
              if (!tmp___3) {
                {
                  abort();
                }
              }
              rneedle.cur.ptr += rneedle.cur.bytes;
              rneedle.next_done = (_Bool)0;
              {
                while (1) {
                while_continue___1: /* CIL Label */;
                  {
                    mbuiter_multi_next(&rneedle);
                  }
                  if (rneedle.cur.wc_valid) {
                    if (rneedle.cur.wc == 0) {
                      tmp___4 = 0;
                    } else {
                      tmp___4 = 1;
                    }
                  } else {
                    tmp___4 = 1;
                  }
                  if (!tmp___4) {
                    return ((char *)iter_haystack.cur.ptr);
                  }
                  {
                    mbuiter_multi_next(&rhaystack);
                  }
                  if (rhaystack.cur.wc_valid) {
                    if (rhaystack.cur.wc == 0) {
                      tmp___5 = 0;
                    } else {
                      tmp___5 = 1;
                    }
                  } else {
                    tmp___5 = 1;
                  }
                  if (!tmp___5) {
                    return ((char *)((void *)0));
                  }
                  comparison_count++;
                  if (rhaystack.cur.wc_valid) {
                    if (rneedle.cur.wc_valid) {
                      tmp___8 = rhaystack.cur.wc == rneedle.cur.wc;
                    } else {
                      goto _L;
                    }
                  } else {
                  _L:
                    if (rhaystack.cur.bytes == rneedle.cur.bytes) {
                      {
                        tmp___6 = memcmp((void const *)rhaystack.cur.ptr, (void const *)rneedle.cur.ptr,
                                         rhaystack.cur.bytes);
                      }
                      if (tmp___6 == 0) {
                        tmp___7 = 1;
                      } else {
                        tmp___7 = 0;
                      }
                    } else {
                      tmp___7 = 0;
                    }
                    tmp___8 = tmp___7;
                  }
                  if (!tmp___8) {
                    goto while_break___1;
                  }
                  rhaystack.cur.ptr += rhaystack.cur.bytes;
                  rhaystack.next_done = (_Bool)0;
                  rneedle.cur.ptr += rneedle.cur.bytes;
                  rneedle.next_done = (_Bool)0;
                }
              while_break___5: /* CIL Label */;
              }
            while_break___1:;
            }
            iter_haystack.cur.ptr += iter_haystack.cur.bytes;
            iter_haystack.next_done = (_Bool)0;
          }
        while_break: /* CIL Label */;
        }
      } else {
        return ((char *)haystack);
      }
    } else {
      if ((int const) * needle != 0) {
        try_kmp___0 = (_Bool)1;
        outer_loop_count___0 = (size_t)0;
        comparison_count___0 = (size_t)0;
        last_ccount___0 = (size_t)0;
        needle_last_ccount = needle;
        tmp___13 = needle;
        needle++;
        b = (char)*tmp___13;
        {
          while (1) {
          while_continue___2: /* CIL Label */;
            if ((int const) * haystack == 0) {
              return ((char *)((void *)0));
            }
            if (try_kmp___0) {
              if (outer_loop_count___0 >= 10UL) {
                if (comparison_count___0 >= 5UL * outer_loop_count___0) {
                  if ((unsigned long)needle_last_ccount != (unsigned long)((void *)0)) {
                    {
                      tmp___14 = strnlen(needle_last_ccount, comparison_count___0 - last_ccount___0);
                      needle_last_ccount += tmp___14;
                    }
                    if ((int const) * needle_last_ccount == 0) {
                      needle_last_ccount = (char const *)((void *)0);
                    }
                    last_ccount___0 = comparison_count___0;
                  }
                  if ((unsigned long)needle_last_ccount == (unsigned long)((void *)0)) {
                    {
                      tmp___15 = strlen(needle - 1);
                      tmp___16 = knuth_morris_pratt((unsigned char const *)haystack, (unsigned char const *)(needle - 1),
                                                    tmp___15, &result___0);
                      success___0 = tmp___16;
                    }
                    if (success___0) {
                      return ((char *)result___0);
                    }
                    try_kmp___0 = (_Bool)0;
                  }
                }
              }
            }
            outer_loop_count___0++;
            comparison_count___0++;
            if ((int const) * haystack == (int const)b) {
              rhaystack___0 = haystack + 1;
              rneedle___0 = needle;
              {
                while (1) {
                while_continue___3: /* CIL Label */;
                  if ((int const) * rneedle___0 == 0) {
                    return ((char *)haystack);
                  }
                  if ((int const) * rhaystack___0 == 0) {
                    return ((char *)((void *)0));
                  }
                  comparison_count___0++;
                  if ((int const) * rhaystack___0 != (int const) * rneedle___0) {
                    goto while_break___3;
                  }
                  rhaystack___0++;
                  rneedle___0++;
                }
              while_break___7: /* CIL Label */;
              }
            while_break___3:;
            }
            haystack++;
          }
        while_break___6: /* CIL Label */;
        }
      } else {
        return ((char *)haystack);
      }
    }
    return ((char *)0);
  }
}
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) __attribute__((__pure__));
size_t(__attribute__((__nonnull__(1))) mbslen)(char const *string) {
  size_t count;
  mbui_iterator_t iter;
  int tmp;
  size_t tmp___0;
  size_t tmp___1;
  void *__cil_tmp9;
  void *__cil_tmp10;
  {
    {
      tmp___1 = __ctype_get_mb_cur_max();
    }
    if (tmp___1 > 1UL) {
      {
        count = (size_t)0;
        iter.cur.ptr = string;
        iter.in_shift = (_Bool)0;
        memset((void *)(&iter.state), '\000', sizeof(mbstate_t));
        iter.next_done = (_Bool)0;
      }
      {
        while (1) {
        while_continue: /* CIL Label */;
          {
            mbuiter_multi_next(&iter);
          }
          if (iter.cur.wc_valid) {
            if (iter.cur.wc == 0) {
              tmp = 0;
            } else {
              tmp = 1;
            }
          } else {
            tmp = 1;
          }
          if (!tmp) {
            goto while_break;
          }
          count++;
          iter.cur.ptr += iter.cur.bytes;
          iter.next_done = (_Bool)0;
        }
      while_break___0: /* CIL Label */;
      }
    while_break:;
      return (count);
    } else {
      {
        tmp___0 = strlen(string);
      }
      return (tmp___0);
    }
  }
}
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
extern __attribute__((__nothrow__)) int tolower(int __c);
extern __attribute__((__nothrow__)) wint_t towlower(wint_t __wc);
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) __attribute__((__pure__));
int(__attribute__((__nonnull__(1, 2))) mbscasecmp)(char const *s1, char const *s2) {
  mbui_iterator_t iter1;
  mbui_iterator_t iter2;
  int cmp;
  wint_t tmp;
  wint_t tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___4;
  int tmp___5;
  int tmp___7;
  int tmp___8;
  int tmp___9;
  int tmp___10;
  int tmp___11;
  int tmp___12;
  int tmp___13;
  int tmp___14;
  int tmp___15;
  int tmp___16;
  unsigned char const *p1;
  unsigned char const *p2;
  unsigned char c1;
  unsigned char c2;
  int tmp___18;
  unsigned short const **tmp___19;
  int tmp___21;
  unsigned short const **tmp___22;
  size_t tmp___25;
  void *__cil_tmp35;
  void *__cil_tmp36;
  void *__cil_tmp37;
  void *__cil_tmp38;
  {
    if ((unsigned long)s1 == (unsigned long)s2) {
      return (0);
    }
    {
      tmp___25 = __ctype_get_mb_cur_max();
    }
    if (tmp___25 > 1UL) {
      {
        iter1.cur.ptr = s1;
        iter1.in_shift = (_Bool)0;
        memset((void *)(&iter1.state), '\000', sizeof(mbstate_t));
        iter1.next_done = (_Bool)0;
        iter2.cur.ptr = s2;
        iter2.in_shift = (_Bool)0;
        memset((void *)(&iter2.state), '\000', sizeof(mbstate_t));
        iter2.next_done = (_Bool)0;
      }
      {
        while (1) {
        while_continue: /* CIL Label */;
          {
            mbuiter_multi_next(&iter1);
          }
          if (iter1.cur.wc_valid) {
            if (iter1.cur.wc == 0) {
              tmp___13 = 0;
            } else {
              tmp___13 = 1;
            }
          } else {
            tmp___13 = 1;
          }
          if (tmp___13) {
            {
              mbuiter_multi_next(&iter2);
            }
            if (iter2.cur.wc_valid) {
              if (iter2.cur.wc == 0) {
                tmp___14 = 0;
              } else {
                tmp___14 = 1;
              }
            } else {
              tmp___14 = 1;
            }
            if (!tmp___14) {
              goto while_break;
            }
          } else {
            goto while_break;
          }
          if (iter1.cur.wc_valid) {
            if (iter2.cur.wc_valid) {
              {
                tmp = towlower((wint_t)iter1.cur.wc);
                tmp___0 = towlower((wint_t)iter2.cur.wc);
                tmp___1 = (int)tmp - (int)tmp___0;
              }
            } else {
              tmp___1 = -1;
            }
            tmp___12 = tmp___1;
          } else {
            if (iter2.cur.wc_valid) {
              tmp___11 = 1;
            } else {
              if (iter1.cur.bytes == iter2.cur.bytes) {
                {
                  tmp___2 = memcmp((void const *)iter1.cur.ptr, (void const *)iter2.cur.ptr,
                                   iter1.cur.bytes);
                  tmp___10 = tmp___2;
                }
              } else {
                if (iter1.cur.bytes < iter2.cur.bytes) {
                  {
                    tmp___5 = memcmp((void const *)iter1.cur.ptr, (void const *)iter2.cur.ptr,
                                     iter1.cur.bytes);
                  }
                  if (tmp___5 > 0) {
                    tmp___4 = 1;
                  } else {
                    tmp___4 = -1;
                  }
                  tmp___9 = tmp___4;
                } else {
                  {
                    tmp___8 = memcmp((void const *)iter1.cur.ptr, (void const *)iter2.cur.ptr,
                                     iter2.cur.bytes);
                  }
                  if (tmp___8 >= 0) {
                    tmp___7 = 1;
                  } else {
                    tmp___7 = -1;
                  }
                  tmp___9 = tmp___7;
                }
                tmp___10 = tmp___9;
              }
              tmp___11 = tmp___10;
            }
            tmp___12 = tmp___11;
          }
          cmp = tmp___12;
          if (cmp != 0) {
            return (cmp);
          }
          iter1.cur.ptr += iter1.cur.bytes;
          iter1.next_done = (_Bool)0;
          iter2.cur.ptr += iter2.cur.bytes;
          iter2.next_done = (_Bool)0;
        }
      while_break___1: /* CIL Label */;
      }
    while_break : {
      mbuiter_multi_next(&iter1);
    }
      if (iter1.cur.wc_valid) {
        if (iter1.cur.wc == 0) {
          tmp___15 = 0;
        } else {
          tmp___15 = 1;
        }
      } else {
        tmp___15 = 1;
      }
      if (tmp___15) {
        return (1);
      }
      {
        mbuiter_multi_next(&iter2);
      }
      if (iter2.cur.wc_valid) {
        if (iter2.cur.wc == 0) {
          tmp___16 = 0;
        } else {
          tmp___16 = 1;
        }
      } else {
        tmp___16 = 1;
      }
      if (tmp___16) {
        return (-1);
      }
      return (0);
    } else {
      p1 = (unsigned char const *)s1;
      p2 = (unsigned char const *)s2;
      {
        while (1) {
        while_continue___0: /* CIL Label */;
          {
            tmp___19 = __ctype_b_loc();
          }
          if ((int const) * (*tmp___19 + (int)*p1) & 256) {
            {
              tmp___18 = tolower((int)*p1);
              c1 = (unsigned char)tmp___18;
            }
          } else {
            c1 = (unsigned char)*p1;
          }
          {
            tmp___22 = __ctype_b_loc();
          }
          if ((int const) * (*tmp___22 + (int)*p2) & 256) {
            {
              tmp___21 = tolower((int)*p2);
              c2 = (unsigned char)tmp___21;
            }
          } else {
            c2 = (unsigned char)*p2;
          }
          if ((int)c1 == 0) {
            goto while_break___0;
          }
          p1++;
          p2++;
          if (!((int)c1 == (int)c2)) {
            goto while_break___0;
          }
        }
      while_break___2: /* CIL Label */;
      }
    while_break___0:;
      return ((int)c1 - (int)c2);
    }
  }
}
unsigned int const is_basic_table[8] = {(unsigned int const)6656, (unsigned int const)4294967279U, (unsigned int const)4294967294U, (unsigned int const)2147483646};
static void *mmalloca_results[257];
void *mmalloca(size_t n) {
  size_t nplus;
  void *p;
  void *tmp;
  size_t slot;
  union header *h;
  {
    nplus = n + (((sizeof(struct preliminary_header) + 16UL) - 1UL) / 16UL) * 16UL;
    if (nplus >= n) {
      {
        tmp = malloc(nplus);
        p = tmp;
      }
      if ((unsigned long)p != (unsigned long)((void *)0)) {
        h = (union header *)p;
        p = (void *)(h + 1);
        h->magic.word = 336984906;
        slot = (uintptr_t)p % 257UL;
        h->next = mmalloca_results[slot];
        mmalloca_results[slot] = p;
        return (p);
      }
    }
    return ((void *)0);
  }
}
void freea(void *p) {
  size_t slot;
  void **chain;
  union header *h;
  union header *p_begin;
  {
    if ((unsigned long)p != (unsigned long)((void *)0)) {
      if (*((int *)p + -1) == 336984906) {
        slot = (uintptr_t)p % 257UL;
        chain = &mmalloca_results[slot];
        {
          while (1) {
          while_continue: /* CIL Label */;
            if (!((unsigned long)*chain != (unsigned long)((void *)0))) {
              goto while_break;
            }
            h = (union header *)p;
            if ((unsigned long)*chain == (unsigned long)p) {
              {
                p_begin = h - 1;
                *chain = p_begin->next;
                free((void *)p_begin);
              }
              return;
            }
            h = (union header *)*chain;
            chain = &(h + -1)->next;
          }
        while_break___0: /* CIL Label */;
        }
      while_break:;
      }
    }
    return;
  }
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
  char const *cp;
  char const *dir;
  char const *base;
  char *file_name___1;
  size_t dir_len___0;
  size_t tmp;
  size_t base_len___0;
  size_t tmp___0;
  int add_slash;
  int tmp___1;
  int fd;
  FILE *fp;
  char *res_ptr;
  size_t res_size;
  int c;
  char buf1[51];
  char buf2[51];
  size_t l1;
  size_t l2;
  char *old_res_ptr;
  int tmp___3;
  void *__cil_tmp36;
  void *__cil_tmp37;
  char *__cil_tmp38;
  char *__cil_tmp39;
  char *__cil_tmp40;
  char *__cil_tmp41;
  char *__cil_tmp42;
  char *__cil_tmp43;
  char *__cil_tmp44;
  char *__cil_tmp45;
  {
    cp = (char const *)charset_aliases;
    if ((unsigned long)cp == (unsigned long)((void *)0)) {
      {
        base = "charset.alias";
        dir = (char const *)getenv("CHARSETALIASDIR");
      }
      if ((unsigned long)dir == (unsigned long)((void *)0)) {
        dir = "/usr/local/lib";
      } else {
        if ((int const) * (dir + 0) == 0) {
          dir = "/usr/local/lib";
        }
      }
      {
        tmp = strlen(dir);
        dir_len___0 = tmp;
        tmp___0 = strlen(base);
        base_len___0 = tmp___0;
      }
      if (dir_len___0 > 0UL) {
        if (!((int const) * (dir + (dir_len___0 - 1UL)) == 47)) {
          tmp___1 = 1;
        } else {
          tmp___1 = 0;
        }
      } else {
        tmp___1 = 0;
      }
      {
        add_slash = tmp___1;
        file_name___1 = (char *)malloc(((dir_len___0 + (size_t)add_slash) + base_len___0) + 1UL);
      }
      if ((unsigned long)file_name___1 != (unsigned long)((void *)0)) {
        {
          memcpy((void * /* __restrict  */)((void *)file_name___1), (void const * /* __restrict  */)((void const *)dir),
                 dir_len___0);
        }
        if (add_slash) {
          *(file_name___1 + dir_len___0) = (char)'/';
        }
        {
          memcpy((void * /* __restrict  */)((void *)((file_name___1 + dir_len___0) + add_slash)),
                 (void const * /* __restrict  */)((void const *)base), base_len___0 + 1UL);
        }
      }
      if ((unsigned long)file_name___1 == (unsigned long)((void *)0)) {
        cp = "";
      } else {
        {
          fd = open((char const *)file_name___1, 131072);
        }
        if (fd < 0) {
          cp = "";
        } else {
          {
            fp = fdopen(fd, "r");
          }
          if ((unsigned long)fp == (unsigned long)((void *)0)) {
            {
              close(fd);
              cp = "";
            }
          } else {
            res_ptr = (char *)((void *)0);
            res_size = (size_t)0;
            {
              while (1) {
              while_continue: /* CIL Label */;
                {
                  c = getc_unlocked(fp);
                }
                if (c == -1) {
                  goto while_break;
                }
                if (c == 10) {
                  goto __Cont;
                } else {
                  if (c == 32) {
                    goto __Cont;
                  } else {
                    if (c == 9) {
                      goto __Cont;
                    }
                  }
                }
                if (c == 35) {
                  {
                    while (1) {
                    while_continue___0: /* CIL Label */;
                      {
                        c = getc_unlocked(fp);
                      }
                      if (c == -1) {
                        goto while_break___0;
                      } else {
                        if (c == 10) {
                          goto while_break___0;
                        }
                      }
                    }
                  while_break___2: /* CIL Label */;
                  }
                while_break___0:;
                  if (c == -1) {
                    goto while_break;
                  }
                  goto __Cont;
                }
                {
                  ungetc(c, fp);
                  tmp___3 = fscanf((FILE * /* __restrict  */) fp, (char const * /* __restrict  */) "%50s %50s",
                                   buf1, buf2);
                }
                if (tmp___3 < 2) {
                  goto while_break;
                }
                {
                  l1 = strlen((char const *)(buf1));
                  l2 = strlen((char const *)(buf2));
                  old_res_ptr = res_ptr;
                }
                if (res_size == 0UL) {
                  {
                    res_size = ((l1 + 1UL) + l2) + 1UL;
                    res_ptr = (char *)malloc(res_size + 1UL);
                  }
                } else {
                  {
                    res_size += ((l1 + 1UL) + l2) + 1UL;
                    res_ptr = (char *)realloc((void *)res_ptr, res_size + 1UL);
                  }
                }
                if ((unsigned long)res_ptr == (unsigned long)((void *)0)) {
                  {
                    res_size = (size_t)0;
                    free((void *)old_res_ptr);
                  }
                  goto while_break;
                }
                {
                  strcpy((char * /* __restrict  */)(((res_ptr + res_size) - (l2 + 1UL)) - (l1 + 1UL)),
                         (char const * /* __restrict  */)((char const *)(buf1)));
                  strcpy((char * /* __restrict  */)((res_ptr + res_size) - (l2 + 1UL)), (char const * /* __restrict  */)((char const *)(buf2)));
                }
              __Cont:;
              }
            while_break___1: /* CIL Label */;
            }
          while_break : {
            fclose(fp);
          }
            if (res_size == 0UL) {
              cp = "";
            } else {
              *(res_ptr + res_size) = (char)'\000';
              cp = (char const *)res_ptr;
            }
          }
        }
        {
          free((void *)file_name___1);
        }
      }
      charset_aliases = (char const * /* volatile  */)cp;
    }
    return (cp);
  }
}
char const *locale_charset(void) {
  char const *codeset;
  char const *aliases;
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  int tmp___2;
  char *__cil_tmp10;
  char *__cil_tmp11;
  {
    {
      codeset = (char const *)nl_langinfo(14);
    }
    if ((unsigned long)codeset == (unsigned long)((void *)0)) {
      codeset = "";
    }
    {
      aliases = get_charset_aliases();
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((int const) * aliases != 0)) {
          goto while_break;
        }
        {
          tmp___2 = strcmp(codeset, aliases);
        }
        if (tmp___2 == 0) {
          {
            tmp___1 = strlen(aliases);
            codeset = (aliases + tmp___1) + 1;
          }
          goto while_break;
        } else {
          if ((int const) * (aliases + 0) == 42) {
            if ((int const) * (aliases + 1) == 0) {
              {
                tmp___1 = strlen(aliases);
                codeset = (aliases + tmp___1) + 1;
              }
              goto while_break;
            }
          }
        }
        {
          tmp = strlen(aliases);
          aliases += tmp + 1UL;
          tmp___0 = strlen(aliases);
          aliases += tmp___0 + 1UL;
        }
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    if ((int const) * (codeset + 0) == 0) {
      codeset = "ASCII";
    }
    return (codeset);
  }
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
      while_continue: /* CIL Label */;
        if (!(i < 4)) {
          goto while_break;
        }
        ir->ir_data[i] = default_val;
        i++;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:
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
    if (tmp) {
      {
        abort();
      }
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
  {
    return (((x >> n) | (x << (8UL * sizeof(x) - (unsigned long)n))) & 0xffffffffffffffffUL);
  }
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
    if (!(n < (size_t)table->n_buckets)) {
      {
        abort();
      }
    }
    return ((struct hash_entry *)(table->bucket + n));
  }
}
void *hash_lookup(Hash_table const *table, void const *entry) {
  struct hash_entry const *bucket;
  struct hash_entry const *tmp;
  struct hash_entry const *cursor;
  _Bool tmp___0;
  {
    {
      tmp = (struct hash_entry const *)safe_hasher(table, entry);
      bucket = tmp;
    }
    if ((unsigned long)bucket->data == (unsigned long)((void *)0)) {
      return ((void *)0);
    }
    cursor = bucket;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!cursor) {
          goto while_break;
        }
        if ((unsigned long)entry == (unsigned long)cursor->data) {
          return ((void *)cursor->data);
        } else {
          {
            tmp___0 = (*(table->comparator))(entry, (void const *)cursor->data);
          }
          if (tmp___0) {
            return ((void *)cursor->data);
          }
        }
        cursor = (struct hash_entry const *)cursor->next;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return ((void *)0);
  }
}
size_t hash_string(char const *string, size_t n_buckets) __attribute__((__pure__));
size_t hash_string(char const *string, size_t n_buckets) {
  size_t value;
  unsigned char ch;
  {
    value = (size_t)0;
    {
      while (1) {
      while_continue: /* CIL Label */;
        ch = (unsigned char)*string;
        if (!ch) {
          goto while_break;
        }
        value = (value * 31UL + (size_t)ch) % n_buckets;
        string++;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return (value);
  }
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
      while_continue: /* CIL Label */;
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
    while_break___0: /* CIL Label */;
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
    if (candidate < 10UL) {
      candidate = (size_t)10;
    }
    candidate |= 1UL;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (0xffffffffffffffffUL != candidate) {
          {
            tmp = is_prime(candidate);
          }
          if (tmp) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        candidate += 2UL;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return (candidate);
  }
}
static size_t raw_hasher(void const *data, size_t n) {
  size_t val;
  size_t tmp;
  {
    {
      tmp = rotr_sz((size_t)data, 3);
      val = tmp;
    }
    return (val % n);
  }
}
static _Bool raw_comparator(void const *a, void const *b) {
  {
    return ((_Bool)((unsigned long)a == (unsigned long)b));
  }
}
static _Bool check_tuning(Hash_table *table) {
  Hash_tuning const *tuning;
  float epsilon;
  {
    tuning = table->tuning;
    if ((unsigned long)tuning == (unsigned long)(&default_tuning)) {
      return ((_Bool)1);
    }
    epsilon = 0.1f;
    if (epsilon < (float)tuning->growth_threshold) {
      if (tuning->growth_threshold < (float const)((float)1 - epsilon)) {
        if ((float)1 + epsilon < (float)tuning->growth_factor) {
          if ((float const)0 <= tuning->shrink_threshold) {
            if (tuning->shrink_threshold + (float const)epsilon < tuning->shrink_factor) {
              if (tuning->shrink_factor <= (float const)1) {
                if (tuning->shrink_threshold + (float const)epsilon < tuning->growth_threshold) {
                  return ((_Bool)1);
                }
              }
            }
          }
        }
      }
    }
    table->tuning = &default_tuning;
    return ((_Bool)0);
  }
}
static size_t __attribute__((__pure__)) compute_bucket_size(size_t candidate, Hash_tuning const *tuning) {
  float new_candidate;
  int tmp;
  {
    if (!tuning->is_n_buckets) {
      new_candidate = (float)((float const)candidate / tuning->growth_threshold);
      if ((float)0xffffffffffffffffUL <= new_candidate) {
        return ((size_t __attribute__((__pure__)))0);
      }
      candidate = (size_t)new_candidate;
    }
    {
      candidate = next_prime(candidate);
    }
    if (sizeof(ptrdiff_t) <= sizeof(size_t)) {
      tmp = -1;
    } else {
      tmp = -2;
    }
    if ((size_t)tmp / sizeof(struct hash_entry *) < candidate) {
      return ((size_t __attribute__((__pure__)))0);
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
    if ((unsigned long)hasher == (unsigned long)((void *)0)) {
      hasher = &raw_hasher;
    }
    if ((unsigned long)comparator == (unsigned long)((void *)0)) {
      comparator = &raw_comparator;
    }
    {
      table = (Hash_table *)malloc(sizeof(*table));
    }
    if ((unsigned long)table == (unsigned long)((void *)0)) {
      return ((Hash_table *)((void *)0));
    }
    if (!tuning) {
      tuning = &default_tuning;
    }
    {
      table->tuning = tuning;
      tmp = check_tuning(table);
    }
    if (!tmp) {
      goto fail;
    }
    {
      table->n_buckets = (size_t)compute_bucket_size(candidate, tuning);
    }
    if (!table->n_buckets) {
      goto fail;
    }
    {
      table->bucket = (struct hash_entry *)calloc(table->n_buckets, sizeof(*(table->bucket)));
    }
    if ((unsigned long)table->bucket == (unsigned long)((void *)0)) {
      goto fail;
    }
    table->bucket_limit = (struct hash_entry const *)(table->bucket + table->n_buckets);
    table->n_buckets_used = (size_t)0;
    table->n_entries = (size_t)0;
    table->hasher = hasher;
    table->comparator = comparator;
    table->data_freer = data_freer;
    table->free_entry_list = (struct hash_entry *)((void *)0);
    return (table);
  fail : {
    free((void *)table);
  }
    return ((Hash_table *)((void *)0));
  }
}
void hash_free(Hash_table *table) {
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  {
    if (table->data_freer) {
      if (table->n_entries) {
        bucket = table->bucket;
        {
          while (1) {
          while_continue: /* CIL Label */;
            if (!((unsigned long)bucket < (unsigned long)table->bucket_limit)) {
              goto while_break;
            }
            if (bucket->data) {
              cursor = bucket;
              {
                while (1) {
                while_continue___0: /* CIL Label */;
                  if (!cursor) {
                    goto while_break___0;
                  }
                  {
                    (*(table->data_freer))(cursor->data);
                    cursor = cursor->next;
                  }
                }
              while_break___5: /* CIL Label */;
              }
            while_break___0:;
            }
            bucket++;
          }
        while_break___4: /* CIL Label */;
        }
      while_break:;
      }
    }
    bucket = table->bucket;
    {
      while (1) {
      while_continue___1: /* CIL Label */;
        if (!((unsigned long)bucket < (unsigned long)table->bucket_limit)) {
          goto while_break___1;
        }
        cursor = bucket->next;
        {
          while (1) {
          while_continue___2: /* CIL Label */;
            if (!cursor) {
              goto while_break___2;
            }
            {
              next = cursor->next;
              free((void *)cursor);
              cursor = next;
            }
          }
        while_break___7: /* CIL Label */;
        }
      while_break___2:
        bucket++;
      }
    while_break___6: /* CIL Label */;
    }
  while_break___1:
    cursor = table->free_entry_list;
    {
      while (1) {
      while_continue___3: /* CIL Label */;
        if (!cursor) {
          goto while_break___3;
        }
        {
          next = cursor->next;
          free((void *)cursor);
          cursor = next;
        }
      }
    while_break___8: /* CIL Label */;
    }
  while_break___3 : {
    free((void *)table->bucket);
    free((void *)table);
  }
    return;
  }
}
static struct hash_entry *allocate_entry(Hash_table *table) {
  struct hash_entry *new;
  {
    if (table->free_entry_list) {
      new = table->free_entry_list;
      table->free_entry_list = new->next;
    } else {
      {
        new = (struct hash_entry *)malloc(sizeof(*new));
      }
    }
    return (new);
  }
}
static void free_entry(Hash_table *table, struct hash_entry *entry) {
  {
    entry->data = (void *)0;
    entry->next = table->free_entry_list;
    table->free_entry_list = entry;
    return;
  }
}
static void *hash_find_entry(Hash_table *table, void const *entry, struct hash_entry **bucket_head,
                             _Bool delete___0) {
  struct hash_entry *bucket;
  struct hash_entry *tmp;
  struct hash_entry *cursor;
  void *data;
  struct hash_entry *next;
  _Bool tmp___0;
  void *data___0;
  struct hash_entry *next___0;
  _Bool tmp___1;
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
      goto _L;
    } else {
      {
        tmp___0 = (*(table->comparator))(entry, (void const *)bucket->data);
      }
      if (tmp___0) {
      _L:
        data = bucket->data;
        if (delete___0) {
          if (bucket->next) {
            {
              next = bucket->next;
              *bucket = *next;
              free_entry(table, next);
            }
          } else {
            bucket->data = (void *)0;
          }
        }
        return (data);
      }
    }
    cursor = bucket;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!cursor->next) {
          goto while_break;
        }
        if ((unsigned long)entry == (unsigned long)(cursor->next)->data) {
          goto _L___0;
        } else {
          {
            tmp___1 = (*(table->comparator))(entry, (void const *)(cursor->next)->data);
          }
          if (tmp___1) {
          _L___0:
            data___0 = (cursor->next)->data;
            if (delete___0) {
              {
                next___0 = cursor->next;
                cursor->next = next___0->next;
                free_entry(table, next___0);
              }
            }
            return (data___0);
          }
        }
        cursor = cursor->next;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return ((void *)0);
  }
}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe) {
  struct hash_entry *bucket;
  struct hash_entry *cursor;
  struct hash_entry *next;
  void *data;
  struct hash_entry *new_bucket;
  struct hash_entry *new_entry;
  struct hash_entry *tmp;
  {
    bucket = src->bucket;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((unsigned long)bucket < (unsigned long)src->bucket_limit)) {
          goto while_break;
        }
        if (bucket->data) {
          cursor = bucket->next;
          {
            while (1) {
            while_continue___0: /* CIL Label */;
              if (!cursor) {
                goto while_break___0;
              }
              {
                data = cursor->data;
                new_bucket = safe_hasher((Hash_table const *)dst, (void const *)data);
                next = cursor->next;
              }
              if (new_bucket->data) {
                cursor->next = new_bucket->next;
                new_bucket->next = cursor;
              } else {
                {
                  new_bucket->data = data;
                  (dst->n_buckets_used)++;
                  free_entry(dst, cursor);
                }
              }
              cursor = next;
            }
          while_break___2: /* CIL Label */;
          }
        while_break___0:
          data = bucket->data;
          bucket->next = (struct hash_entry *)((void *)0);
          if (safe) {
            goto __Cont;
          }
          {
            new_bucket = safe_hasher((Hash_table const *)dst, (void const *)data);
          }
          if (new_bucket->data) {
            {
              tmp = allocate_entry(dst);
              new_entry = tmp;
            }
            if ((unsigned long)new_entry == (unsigned long)((void *)0)) {
              return ((_Bool)0);
            }
            new_entry->data = data;
            new_entry->next = new_bucket->next;
            new_bucket->next = new_entry;
          } else {
            new_bucket->data = data;
            (dst->n_buckets_used)++;
          }
          bucket->data = (void *)0;
          (src->n_buckets_used)--;
        }
      __Cont:
        bucket++;
      }
    while_break___1: /* CIL Label */;
    }
  while_break:;
    return ((_Bool)1);
  }
}
_Bool(__attribute__((__warn_unused_result__)) hash_rehash)(Hash_table *table, size_t candidate) {
  Hash_table storage;
  Hash_table *new_table;
  size_t new_size;
  size_t tmp;
  _Bool tmp___0;
  _Bool tmp___1;
  _Bool tmp___2;
  {
    {
      tmp = (size_t)compute_bucket_size(candidate, table->tuning);
      new_size = tmp;
    }
    if (!new_size) {
      return ((_Bool)0);
    }
    if (new_size == table->n_buckets) {
      return ((_Bool)1);
    }
    {
      new_table = &storage;
      new_table->bucket = (struct hash_entry *)calloc(new_size, sizeof(*(new_table->bucket)));
    }
    if ((unsigned long)new_table->bucket == (unsigned long)((void *)0)) {
      return ((_Bool)0);
    }
    {
      new_table->n_buckets = new_size;
      new_table->bucket_limit = (struct hash_entry const *)(new_table->bucket + new_size);
      new_table->n_buckets_used = (size_t)0;
      new_table->n_entries = (size_t)0;
      new_table->tuning = table->tuning;
      new_table->hasher = table->hasher;
      new_table->comparator = table->comparator;
      new_table->data_freer = table->data_freer;
      new_table->free_entry_list = table->free_entry_list;
      tmp___0 = transfer_entries(new_table, table, (_Bool)0);
    }
    if (tmp___0) {
      {
        free((void *)table->bucket);
        table->bucket = new_table->bucket;
        table->bucket_limit = new_table->bucket_limit;
        table->n_buckets = new_table->n_buckets;
        table->n_buckets_used = new_table->n_buckets_used;
        table->free_entry_list = new_table->free_entry_list;
      }
      return ((_Bool)1);
    }
    {
      table->free_entry_list = new_table->free_entry_list;
      tmp___1 = transfer_entries(table, new_table, (_Bool)1);
    }
    if (tmp___1) {
      {
        tmp___2 = transfer_entries(table, new_table, (_Bool)0);
      }
      if (!tmp___2) {
        {
          abort();
        }
      }
    } else {
      {
        abort();
      }
    }
    {
      free((void *)new_table->bucket);
    }
    return ((_Bool)0);
  }
}
int hash_insert_if_absent(Hash_table *table, void const *entry, void const **matched_ent) {
  void *data;
  struct hash_entry *bucket;
  Hash_tuning const *tuning;
  float candidate;
  float tmp;
  _Bool tmp___0;
  void *tmp___1;
  struct hash_entry *new_entry;
  struct hash_entry *tmp___2;
  {
    if (!entry) {
      {
        abort();
      }
    }
    {
      data = hash_find_entry(table, entry, &bucket, (_Bool)0);
    }
    if ((unsigned long)data != (unsigned long)((void *)0)) {
      if (matched_ent) {
        *matched_ent = (void const *)data;
      }
      return (0);
    }
    if ((float const)table->n_buckets_used > (table->tuning)->growth_threshold * (float const)table->n_buckets) {
      {
        check_tuning(table);
      }
      if ((float const)table->n_buckets_used > (table->tuning)->growth_threshold * (float const)table->n_buckets) {
        tuning = table->tuning;
        if (tuning->is_n_buckets) {
          tmp = (float)((float const)table->n_buckets * tuning->growth_factor);
        } else {
          tmp = (float)(((float const)table->n_buckets * tuning->growth_factor) * tuning->growth_threshold);
        }
        candidate = tmp;
        if ((float)0xffffffffffffffffUL <= candidate) {
          return (-1);
        }
        {
          tmp___0 = hash_rehash(table, (size_t)candidate);
        }
        if (!tmp___0) {
          return (-1);
        }
        {
          tmp___1 = hash_find_entry(table, entry, &bucket, (_Bool)0);
        }
        if ((unsigned long)tmp___1 != (unsigned long)((void *)0)) {
          {
            abort();
          }
        }
      }
    }
    if (bucket->data) {
      {
        tmp___2 = allocate_entry(table);
        new_entry = tmp___2;
      }
      if ((unsigned long)new_entry == (unsigned long)((void *)0)) {
        return (-1);
      }
      new_entry->data = (void *)entry;
      new_entry->next = bucket->next;
      bucket->next = new_entry;
      (table->n_entries)++;
      return (1);
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
      tmp___1 = (void *)0;
    } else {
      if (err == 0) {
        tmp___0 = matched_ent;
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
  Hash_tuning const *tuning;
  size_t candidate;
  float tmp;
  struct hash_entry *cursor;
  struct hash_entry *next;
  _Bool tmp___0;
  {
    {
      data = hash_find_entry(table, entry, &bucket, (_Bool)1);
    }
    if (!data) {
      return ((void *)0);
    }
    (table->n_entries)--;
    if (!bucket->data) {
      (table->n_buckets_used)--;
      if ((float const)table->n_buckets_used < (table->tuning)->shrink_threshold * (float const)table->n_buckets) {
        {
          check_tuning(table);
        }
        if ((float const)table->n_buckets_used < (table->tuning)->shrink_threshold * (float const)table->n_buckets) {
          tuning = table->tuning;
          if (tuning->is_n_buckets) {
            tmp = (float)((float const)table->n_buckets * tuning->shrink_factor);
          } else {
            tmp = (float)(((float const)table->n_buckets * tuning->shrink_factor) * tuning->growth_threshold);
          }
          {
            candidate = (size_t)tmp;
            tmp___0 = hash_rehash(table, candidate);
          }
          if (!tmp___0) {
            cursor = table->free_entry_list;
            {
              while (1) {
              while_continue: /* CIL Label */;
                if (!cursor) {
                  goto while_break;
                }
                {
                  next = cursor->next;
                  free((void *)cursor);
                  cursor = next;
                }
              }
            while_break___0: /* CIL Label */;
            }
          while_break:
            table->free_entry_list = (struct hash_entry *)((void *)0);
          }
        }
      }
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
        tmp = 0;
      }
    } else {
      tmp = 0;
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
      if (!fts->fts_cycle.ht) {
        return ((_Bool)0);
      }
    } else {
      {
        fts->fts_cycle.state = (struct cycle_check_state *)malloc(sizeof(*(fts->fts_cycle.state)));
      }
      if (!fts->fts_cycle.state) {
        return ((_Bool)0);
      }
      {
        cycle_check_init(fts->fts_cycle.state);
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
  _Bool tmp___0;
  {
    if (fts->fts_options & 258) {
      {
        st = (struct stat const *)(ent->fts_statp);
        tmp = (struct Active_dir *)malloc(sizeof(*ad));
        ad = tmp;
      }
      if (!ad) {
        return ((_Bool)0);
      }
      {
        ad->dev = (dev_t)st->st_dev;
        ad->ino = (ino_t)st->st_ino;
        ad->fts_ent = ent;
        ad_from_table = (struct Active_dir *)hash_insert(fts->fts_cycle.ht, (void const *)ad);
      }
      if ((unsigned long)ad_from_table != (unsigned long)ad) {
        {
          free((void *)ad);
        }
        if (!ad_from_table) {
          return ((_Bool)0);
        }
        ent->fts_cycle = ad_from_table->fts_ent;
        ent->fts_info = (unsigned short)2;
      }
    } else {
      {
        tmp___0 = cycle_check(fts->fts_cycle.state, (struct stat const *)(ent->fts_statp));
      }
      if (tmp___0) {
        ent->fts_cycle = ent;
        ent->fts_info = (unsigned short)2;
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
      {
        obj.dev = (dev_t)st->st_dev;
        obj.ino = (ino_t)st->st_ino;
        found = hash_delete(fts->fts_cycle.ht, (void const *)(&obj));
      }
      if (!found) {
        {
          abort();
        }
      }
      {
        free(found);
      }
    } else {
      parent = ent->fts_parent;
      if ((unsigned long)parent != (unsigned long)((void *)0)) {
        if (0L <= parent->fts_level) {
          {
            while (1) {
            while_continue: /* CIL Label */;
              if ((fts->fts_cycle.state)->chdir_counter == 0UL) {
                {
                  abort();
                }
              }
              if ((fts->fts_cycle.state)->dev_ino.st_ino == (ino_t)st->st_ino) {
                if ((fts->fts_cycle.state)->dev_ino.st_dev == (dev_t)st->st_dev) {
                  (fts->fts_cycle.state)->dev_ino.st_dev = parent->fts_statp[0].st_dev;
                  (fts->fts_cycle.state)->dev_ino.st_ino = parent->fts_statp[0].st_ino;
                }
              }
              goto while_break;
            }
          while_break___0: /* CIL Label */;
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
      if (sp->fts_cycle.ht) {
        {
          hash_free(sp->fts_cycle.ht);
        }
      }
    } else {
      {
        free((void *)sp->fts_cycle.state);
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
      while_continue: /* CIL Label */;
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
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return;
  }
}
static void fts_set_stat_required(FTSENT *p, _Bool required) {
  {
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((int)p->fts_info == 11)) {
          {
            abort();
          }
        }
        goto while_break;
      }
    while_break___0: /* CIL Label */;
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
static DIR *opendirat(int fd, char const *dir, int extra_flags, int *pdir_fd) {
  int new_fd;
  int tmp;
  DIR *dirp;
  int saved_errno;
  int *tmp___0;
  int *tmp___1;
  {
    {
      tmp = openat_safer(fd, dir, 67840 | extra_flags);
      new_fd = tmp;
    }
    if (new_fd < 0) {
      return ((DIR *)((void *)0));
    }
    {
      set_cloexec_flag(new_fd, (_Bool)1);
      dirp = fdopendir(new_fd);
    }
    if (dirp) {
      *pdir_fd = new_fd;
    } else {
      {
        tmp___0 = __errno_location();
        saved_errno = *tmp___0;
        close(new_fd);
        tmp___1 = __errno_location();
        *tmp___1 = saved_errno;
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
      while_continue: /* CIL Label */;
        if (!(old != fd)) {
          if (!(old == -100)) {
            {
              abort();
            }
          }
        }
        goto while_break;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    if (chdir_down_one) {
      {
        tmp = i_ring_push(&sp->fts_fd_ring, old);
        prev_fd_in_slot = tmp;
      }
      if (0 <= prev_fd_in_slot) {
        {
          close(prev_fd_in_slot);
        }
      }
    } else {
      if (!(sp->fts_options & 4)) {
        if (0 <= old) {
          {
            close(old);
          }
        }
      }
    }
    sp->fts_cwd_fd = fd;
    return;
  }
}
static int restore_initial_cwd(FTS *sp) {
  int fail;
  int tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (!(sp->fts_options & 4)) {
      if (sp->fts_options & 512) {
        if (sp->fts_options & 512) {
          tmp = -100;
        } else {
          tmp = sp->fts_rfd;
        }
        {
          cwd_advance_fd(sp, tmp, (_Bool)1);
          tmp___2 = 0;
        }
      } else {
        if (sp->fts_options & 512) {
          tmp___0 = -100;
        } else {
          tmp___0 = sp->fts_rfd;
        }
        {
          tmp___1 = fchdir(tmp___0);
          tmp___2 = tmp___1;
        }
      }
      if (tmp___2) {
        tmp___3 = 1;
      } else {
        tmp___3 = 0;
      }
    } else {
      tmp___3 = 0;
    }
    {
      fail = tmp___3;
      fd_ring_clear(&sp->fts_fd_ring);
    }
    return (fail);
  }
}
static int diropen(FTS const *sp, char const *dir) {
  int open_flags;
  int tmp;
  int tmp___0;
  int fd;
  int tmp___1;
  int tmp___2;
  int tmp___3;
  {
    if (sp->fts_options & 16) {
      tmp = 131072;
    } else {
      tmp = 0;
    }
    if (sp->fts_options & 2048) {
      tmp___0 = 262144;
    } else {
      tmp___0 = 0;
    }
    open_flags = (67840 | tmp) | tmp___0;
    if (sp->fts_options & 512) {
      {
        tmp___1 = openat_safer((int)sp->fts_cwd_fd, dir, open_flags);
        tmp___3 = tmp___1;
      }
    } else {
      {
        tmp___2 = open_safer(dir, open_flags);
        tmp___3 = tmp___2;
      }
    }
    fd = tmp___3;
    if (0 <= fd) {
      {
        set_cloexec_flag(fd, (_Bool)1);
      }
    }
    return (fd);
  }
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
  int *tmp___0;
  int *tmp___1;
  int *tmp___2;
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
  int tmp___12;
  void *__cil_tmp31;
  char *__cil_tmp32;
  char *__cil_tmp33;
  char *__cil_tmp34;
  {
    parent = (FTSENT *)((void *)0);
    tmp = (FTSENT *)((void *)0);
    if (options & -8192) {
      {
        tmp___0 = __errno_location();
        *tmp___0 = 22;
      }
      return ((FTS *)((void *)0));
    }
    if (options & 4) {
      if (options & 512) {
        {
          tmp___1 = __errno_location();
          *tmp___1 = 22;
        }
        return ((FTS *)((void *)0));
      }
    }
    if (!(options & 18)) {
      {
        tmp___2 = __errno_location();
        *tmp___2 = 22;
      }
      return ((FTS *)((void *)0));
    }
    {
      sp = (FTS *)malloc(sizeof(FTS));
    }
    if ((unsigned long)sp == (unsigned long)((void *)0)) {
      return ((FTS *)((void *)0));
    }
    {
      memset((void *)sp, 0, sizeof(FTS));
      sp->fts_compar = compar;
      sp->fts_options = options;
    }
    if (sp->fts_options & 2) {
      sp->fts_options |= 4;
      sp->fts_options &= -513;
    }
    {
      sp->fts_cwd_fd = -100;
      tmp___5 = (size_t)fts_maxarglen(argv);
      maxarglen = tmp___5;
    }
    if (maxarglen > 4096UL) {
      tmp___6 = maxarglen;
    } else {
      tmp___6 = (size_t)4096;
    }
    {
      tmp___7 = fts_palloc(sp, tmp___6);
    }
    if (!tmp___7) {
      goto mem1;
    }
    if ((unsigned long)*argv != (unsigned long)((void *)0)) {
      {
        parent = fts_alloc(sp, "", (size_t)0);
      }
      if ((unsigned long)parent == (unsigned long)((void *)0)) {
        goto mem2;
      }
      parent->fts_level = (ptrdiff_t)-1;
    }
    if ((unsigned long)compar == (unsigned long)((void *)0)) {
      tmp___8 = 1;
    } else {
      if (sp->fts_options & 1024) {
        tmp___8 = 1;
      } else {
        tmp___8 = 0;
      }
    }
    defer_stat = (_Bool)tmp___8;
    root = (FTSENT *)((void *)0);
    nitems = (size_t)0;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((unsigned long)*argv != (unsigned long)((void *)0))) {
          goto while_break;
        }
        {
          tmp___9 = strlen((char const *)*argv);
          len = tmp___9;
        }
        if (!(options & 4096)) {
          v = (char const *)*argv;
          if (2UL < len) {
            if ((int const) * (v + (len - 1UL)) == 47) {
              {
                while (1) {
                while_continue___0: /* CIL Label */;
                  if (1UL < len) {
                    if (!((int const) * (v + (len - 2UL)) == 47)) {
                      goto while_break___0;
                    }
                  } else {
                    goto while_break___0;
                  }
                  len--;
                }
              while_break___2: /* CIL Label */;
              }
            while_break___0:;
            }
          }
        }
        {
          p = fts_alloc(sp, (char const *)*argv, len);
        }
        if ((unsigned long)p == (unsigned long)((void *)0)) {
          goto mem3;
        }
        p->fts_level = (ptrdiff_t)0;
        p->fts_parent = parent;
        p->fts_accpath = p->fts_name;
        if (defer_stat) {
          if ((unsigned long)root != (unsigned long)((void *)0)) {
            {
              p->fts_info = (unsigned short)11;
              fts_set_stat_required(p, (_Bool)1);
            }
          } else {
            {
              p->fts_info = fts_stat(sp, p, (_Bool)0);
            }
          }
        } else {
          {
            p->fts_info = fts_stat(sp, p, (_Bool)0);
          }
        }
        if (compar) {
          p->fts_link = root;
          root = p;
        } else {
          p->fts_link = (struct _ftsent *)((void *)0);
          if ((unsigned long)root == (unsigned long)((void *)0)) {
            root = p;
            tmp = root;
          } else {
            tmp->fts_link = p;
            tmp = p;
          }
        }
        argv++;
        nitems++;
      }
    while_break___1: /* CIL Label */;
    }
  while_break:;
    if (compar) {
      if (nitems > 1UL) {
        {
          root = fts_sort(sp, root, nitems);
        }
      }
    }
    {
      tmp___10 = fts_alloc(sp, "", (size_t)0);
      sp->fts_cur = tmp___10;
    }
    if ((unsigned long)tmp___10 == (unsigned long)((void *)0)) {
      goto mem3;
    }
    {
      (sp->fts_cur)->fts_link = root;
      (sp->fts_cur)->fts_info = (unsigned short)9;
      tmp___11 = setup_dir(sp);
    }
    if (!tmp___11) {
      goto mem3;
    }
    if (!(sp->fts_options & 4)) {
      if (!(sp->fts_options & 512)) {
        {
          tmp___12 = diropen((FTS const *)sp, ".");
          sp->fts_rfd = tmp___12;
        }
        if (tmp___12 < 0) {
          sp->fts_options |= 4;
        }
      }
    }
    {
      i_ring_init(&sp->fts_fd_ring, -1);
    }
    return (sp);
  mem3 : {
    fts_lfree(root);
    free((void *)parent);
  }
  mem2 : {
    free((void *)sp->fts_path);
  }
  mem1 : {
    free((void *)sp);
  }
    return ((FTS *)((void *)0));
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
    if (cp) {
      if ((unsigned long)cp != (unsigned long)(p->fts_name)) {
        {
          cp++;
          len = strlen((char const *)cp);
          memmove((void *)(p->fts_name), (void const *)cp, len + 1UL);
          p->fts_namelen = len;
        }
      } else {
        if (*(cp + 1)) {
          {
            cp++;
            len = strlen((char const *)cp);
            memmove((void *)(p->fts_name), (void const *)cp, len + 1UL);
            p->fts_namelen = len;
          }
        }
      }
    }
    tmp___0 = sp->fts_path;
    p->fts_path = tmp___0;
    p->fts_accpath = tmp___0;
    return;
  }
}
__attribute__((__nothrow__)) int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp);
int(__attribute__((__warn_unused_result__)) fts_close)(FTS *sp) {
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
      p = sp->fts_cur;
      {
        while (1) {
        while_continue: /* CIL Label */;
          if (!(p->fts_level >= 0L)) {
            goto while_break;
          }
          freep = p;
          if ((unsigned long)p->fts_link != (unsigned long)((void *)0)) {
            p = p->fts_link;
          } else {
            p = p->fts_parent;
          }
          {
            free((void *)freep);
          }
        }
      while_break___0: /* CIL Label */;
      }
    while_break : {
      free((void *)p);
    }
    }
    if (sp->fts_child) {
      {
        fts_lfree(sp->fts_child);
      }
    }
    {
      free((void *)sp->fts_array);
      free((void *)sp->fts_path);
    }
    if (sp->fts_options & 512) {
      if (0 <= sp->fts_cwd_fd) {
        {
          tmp___0 = close(sp->fts_cwd_fd);
        }
        if (tmp___0) {
          {
            tmp = __errno_location();
            saved_errno = *tmp;
          }
        }
      }
    } else {
      if (!(sp->fts_options & 4)) {
        {
          tmp___2 = fchdir(sp->fts_rfd);
        }
        if (tmp___2) {
          {
            tmp___1 = __errno_location();
            saved_errno = *tmp___1;
          }
        }
        {
          tmp___4 = close(sp->fts_rfd);
        }
        if (tmp___4) {
          if (saved_errno == 0) {
            {
              tmp___3 = __errno_location();
              saved_errno = *tmp___3;
            }
          }
        }
      }
    }
    {
      fd_ring_clear(&sp->fts_fd_ring);
    }
    if (sp->fts_leaf_optimization_works_ht) {
      {
        hash_free(sp->fts_leaf_optimization_works_ht);
      }
    }
    {
      free_dir(sp);
      free((void *)sp);
    }
    if (saved_errno) {
      {
        tmp___5 = __errno_location();
        *tmp___5 = saved_errno;
      }
      return (-1);
    }
    return (0);
  }
}
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2))) fstatfs)(int __fildes,
                                                                                 struct statfs *__buf);
static _Bool dirent_inode_sort_may_be_useful(int dir_fd) {
  struct statfs fs_buf;
  int tmp;
  void *__cil_tmp6;
  void *__cil_tmp7;
  {
    {
      tmp = fstatfs(dir_fd, &fs_buf);
    }
    if (tmp != 0) {
      return ((_Bool)1);
    }
    if (fs_buf.f_type == 16914836L) {
      goto case_16914836;
    }
    if (fs_buf.f_type == 26985L) {
      goto case_16914836;
    }
    goto switch_default;
  case_16914836:
    return ((_Bool)0);
  switch_default:
    return ((_Bool)1);
    return ((_Bool)0);
  }
}
static _Bool leaf_optimization_applies(int dir_fd) {
  struct statfs fs_buf;
  int tmp;
  void *__cil_tmp6;
  void *__cil_tmp7;
  {
    {
      tmp = fstatfs(dir_fd, &fs_buf);
    }
    if (tmp != 0) {
      return ((_Bool)0);
    }
    if (fs_buf.f_type == 1382369651L) {
      goto case_1382369651;
    }
    goto switch_default;
  case_1382369651:
    return ((_Bool)1);
  switch_default:
    return ((_Bool)0);
    return ((_Bool)0);
  }
}
static size_t LCO_hash(void const *x, size_t table_size) {
  struct LCO_ent const *ax;
  {
    ax = (struct LCO_ent const *)x;
    return ((uintmax_t)ax->st_dev % table_size);
  }
}
static _Bool LCO_compare(void const *x, void const *y) {
  struct LCO_ent const *ax;
  struct LCO_ent const *ay;
  {
    ax = (struct LCO_ent const *)x;
    ay = (struct LCO_ent const *)y;
    return ((_Bool)(ax->st_dev == ay->st_dev));
  }
}
static _Bool link_count_optimize_ok(FTSENT const *p) {
  FTS *sp;
  Hash_table *h;
  struct LCO_ent tmp;
  struct LCO_ent *ent;
  _Bool opt_ok;
  struct LCO_ent *t2;
  struct hash_table *tmp___0;
  {
    sp = (FTS *)p->fts_fts;
    h = sp->fts_leaf_optimization_works_ht;
    if (!(sp->fts_options & 512)) {
      return ((_Bool)0);
    }
    if ((unsigned long)h == (unsigned long)((void *)0)) {
      {
        tmp___0 = hash_initialize((size_t)13, (Hash_tuning const *)((void *)0), &LCO_hash,
                                  &LCO_compare, &free);
        sp->fts_leaf_optimization_works_ht = tmp___0;
        h = tmp___0;
      }
      if ((unsigned long)h == (unsigned long)((void *)0)) {
        return ((_Bool)0);
      }
    }
    {
      tmp.st_dev = (dev_t)p->fts_statp[0].st_dev;
      ent = (struct LCO_ent *)hash_lookup((Hash_table const *)h, (void const *)(&tmp));
    }
    if (ent) {
      return (ent->opt_ok);
    }
    {
      t2 = (struct LCO_ent *)malloc(sizeof(*t2));
    }
    if ((unsigned long)t2 == (unsigned long)((void *)0)) {
      return ((_Bool)0);
    }
    {
      opt_ok = leaf_optimization_applies(sp->fts_cwd_fd);
      t2->opt_ok = opt_ok;
      t2->st_dev = (dev_t)p->fts_statp[0].st_dev;
      ent = (struct LCO_ent *)hash_insert(h, (void const *)t2);
    }
    if ((unsigned long)ent == (unsigned long)((void *)0)) {
      {
        free((void *)t2);
      }
      return ((_Bool)0);
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((unsigned long)ent == (unsigned long)t2)) {
          {
            abort();
          }
        }
        goto while_break;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return (opt_ok);
  }
}
__attribute__((__nothrow__)) FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp);
FTSENT *(__attribute__((__warn_unused_result__)) fts_read)(FTS *sp) {
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
  int *tmp___6;
  int tmp___7;
  size_t tmp___8;
  char *tmp___9;
  FTSENT *parent;
  _Bool tmp___10;
  int *tmp___11;
  _Bool tmp___12;
  int *tmp___13;
  struct _ftsent *tmp___14;
  int *tmp___15;
  int tmp___16;
  int saved_errno;
  int *tmp___17;
  int *tmp___18;
  int *tmp___19;
  int tmp___20;
  int tmp___21;
  int *tmp___22;
  int tmp___23;
  FTSENT *tmp___24;
  char *__cil_tmp36;
  char *__cil_tmp37;
  char *__cil_tmp38;
  {
    if ((unsigned long)sp->fts_cur == (unsigned long)((void *)0)) {
      return ((FTSENT *)((void *)0));
    } else {
      if (sp->fts_options & 16384) {
        return ((FTSENT *)((void *)0));
      }
    }
    p = sp->fts_cur;
    instr = p->fts_instr;
    p->fts_instr = (unsigned short)3;
    if ((int)instr == 1) {
      {
        p->fts_info = fts_stat(sp, p, (_Bool)0);
      }
      return (p);
    }
    if ((int)instr == 2) {
      if ((int)p->fts_info == 12) {
        goto _L;
      } else {
        if ((int)p->fts_info == 13) {
        _L : {
          p->fts_info = fts_stat(sp, p, (_Bool)1);
        }
          if ((int)p->fts_info == 1) {
            if (!(sp->fts_options & 4)) {
              {
                tmp___1 = diropen((FTS const *)sp, ".");
                p->fts_symfd = tmp___1;
              }
              if (tmp___1 < 0) {
                {
                  tmp___0 = __errno_location();
                  p->fts_errno = *tmp___0;
                  p->fts_info = (unsigned short)7;
                }
              } else {
                p->fts_flags = (unsigned short)((int)p->fts_flags | 2);
              }
            }
          }
          goto check_for_dir;
        }
      }
    }
    if ((int)p->fts_info == 1) {
      if ((int)instr == 4) {
        goto _L___0;
      } else {
        if (sp->fts_options & 64) {
          if (p->fts_statp[0].st_dev != sp->fts_dev) {
          _L___0:
            if ((int)p->fts_flags & 2) {
              {
                close(p->fts_symfd);
              }
            }
            if (sp->fts_child) {
              {
                fts_lfree(sp->fts_child);
                sp->fts_child = (struct _ftsent *)((void *)0);
              }
            }
            p->fts_info = (unsigned short)6;
            {
              while (1) {
              while_continue: /* CIL Label */;
                {
                  leave_dir(sp, p);
                }
                goto while_break;
              }
            while_break___5: /* CIL Label */;
            }
          while_break:;
            return (p);
          }
        }
      }
      if ((unsigned long)sp->fts_child != (unsigned long)((void *)0)) {
        if (sp->fts_options & 8192) {
          {
            sp->fts_options &= -8193;
            fts_lfree(sp->fts_child);
            sp->fts_child = (struct _ftsent *)((void *)0);
          }
        }
      }
      if ((unsigned long)sp->fts_child != (unsigned long)((void *)0)) {
        {
          tmp___3 = fts_safe_changedir(sp, p, -1, (char const *)p->fts_accpath);
        }
        if (tmp___3) {
          {
            tmp___2 = __errno_location();
            p->fts_errno = *tmp___2;
            p->fts_flags = (unsigned short)((int)p->fts_flags | 1);
            p = sp->fts_child;
          }
          {
            while (1) {
            while_continue___0: /* CIL Label */;
              if (!((unsigned long)p != (unsigned long)((void *)0))) {
                goto while_break___0;
              }
              p->fts_accpath = (p->fts_parent)->fts_accpath;
              p = p->fts_link;
            }
          while_break___6: /* CIL Label */;
          }
        while_break___0:;
        }
      } else {
        {
          tmp___4 = fts_build(sp, 3);
          sp->fts_child = tmp___4;
        }
        if ((unsigned long)tmp___4 == (unsigned long)((void *)0)) {
          if (sp->fts_options & 16384) {
            return ((FTSENT *)((void *)0));
          }
          if (p->fts_errno) {
            if ((int)p->fts_info != 4) {
              p->fts_info = (unsigned short)7;
            }
          }
          {
            while (1) {
            while_continue___1: /* CIL Label */;
              {
                leave_dir(sp, p);
              }
              goto while_break___1;
            }
          while_break___7: /* CIL Label */;
          }
        while_break___1:;
          return (p);
        }
      }
      p = sp->fts_child;
      sp->fts_child = (struct _ftsent *)((void *)0);
      goto name;
    }
  next:
    tmp = p;
    if ((unsigned long)p->fts_link == (unsigned long)((void *)0)) {
      if ((p->fts_parent)->fts_dirp) {
        {
          p = tmp->fts_parent;
          sp->fts_cur = p;
          *(sp->fts_path + p->fts_pathlen) = (char)'\000';
          p = fts_build(sp, 3);
        }
        if ((unsigned long)p == (unsigned long)((void *)0)) {
          if (sp->fts_options & 16384) {
            return ((FTSENT *)((void *)0));
          }
          goto cd_dot_dot;
        }
        {
          free((void *)tmp);
        }
        goto name;
      }
    }
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
        if (tmp___5) {
          sp->fts_options |= 16384;
          return ((FTSENT *)((void *)0));
        }
        {
          free_dir(sp);
          fts_load(sp, p);
          setup_dir(sp);
        }
        goto check_for_dir;
      }
      if ((int)p->fts_instr == 4) {
        goto next;
      }
      if ((int)p->fts_instr == 2) {
        {
          p->fts_info = fts_stat(sp, p, (_Bool)1);
        }
        if ((int)p->fts_info == 1) {
          if (!(sp->fts_options & 4)) {
            {
              tmp___7 = diropen((FTS const *)sp, ".");
              p->fts_symfd = tmp___7;
            }
            if (tmp___7 < 0) {
              {
                tmp___6 = __errno_location();
                p->fts_errno = *tmp___6;
                p->fts_info = (unsigned short)7;
              }
            } else {
              p->fts_flags = (unsigned short)((int)p->fts_flags | 2);
            }
          }
        }
        p->fts_instr = (unsigned short)3;
      }
    name:
      if ((int)*((p->fts_parent)->fts_path + ((p->fts_parent)->fts_pathlen - 1UL)) == 47) {
        tmp___8 = (p->fts_parent)->fts_pathlen - 1UL;
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
    check_for_dir:
      sp->fts_cur = p;
      if ((int)p->fts_info == 11) {
        if (p->fts_statp[0].st_size == 2L) {
          parent = p->fts_parent;
          if (0L < p->fts_level) {
            if (parent->fts_n_dirs_remaining == 0UL) {
              if (sp->fts_options & 8) {
                if (sp->fts_options & 16) {
                  {
                    tmp___10 = link_count_optimize_ok((FTSENT const *)parent);
                  }
                  if (!tmp___10) {
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
          _L___4 : {
            p->fts_info = fts_stat(sp, p, (_Bool)0);
          }
            if ((p->fts_statp[0].st_mode & 61440U) == 16384U) {
              if (p->fts_level != 0L) {
                if (parent->fts_n_dirs_remaining) {
                  (parent->fts_n_dirs_remaining)--;
                }
              }
            }
          }
        } else {
          {
            while (1) {
            while_continue___2: /* CIL Label */;
              if (!(p->fts_statp[0].st_size == 1L)) {
                {
                  abort();
                }
              }
              goto while_break___2;
            }
          while_break___8: /* CIL Label */;
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
        if (!tmp___12) {
          {
            tmp___11 = __errno_location();
            *tmp___11 = 12;
          }
          return ((FTSENT *)((void *)0));
        }
      }
      return (p);
    }
  cd_dot_dot : {
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
      while_continue___3: /* CIL Label */;
        if (!((int)p->fts_info != 11)) {
          {
            abort();
          }
        }
        goto while_break___3;
      }
    while_break___9: /* CIL Label */;
    }
  while_break___3:
    *(sp->fts_path + p->fts_pathlen) = (char)'\000';
    if (p->fts_level == 0L) {
      {
        tmp___16 = restore_initial_cwd(sp);
      }
      if (tmp___16) {
        {
          tmp___15 = __errno_location();
          p->fts_errno = *tmp___15;
          sp->fts_options |= 16384;
        }
      }
    } else {
      if ((int)p->fts_flags & 2) {
        if (!(sp->fts_options & 4)) {
          if (sp->fts_options & 512) {
            {
              cwd_advance_fd(sp, p->fts_symfd, (_Bool)1);
              tmp___21 = 0;
            }
          } else {
            {
              tmp___20 = fchdir(p->fts_symfd);
              tmp___21 = tmp___20;
            }
          }
          if (tmp___21) {
            {
              tmp___17 = __errno_location();
              saved_errno = *tmp___17;
              close(p->fts_symfd);
              tmp___18 = __errno_location();
              *tmp___18 = saved_errno;
              tmp___19 = __errno_location();
              p->fts_errno = *tmp___19;
              sp->fts_options |= 16384;
            }
          }
        }
        {
          close(p->fts_symfd);
        }
      } else {
        if (!((int)p->fts_flags & 1)) {
          {
            tmp___23 = fts_safe_changedir(sp, p->fts_parent, -1, "..");
          }
          if (tmp___23) {
            {
              tmp___22 = __errno_location();
              p->fts_errno = *tmp___22;
              sp->fts_options |= 16384;
            }
          }
        }
      }
    }
    if (p->fts_errno) {
      p->fts_info = (unsigned short)7;
    } else {
      p->fts_info = (unsigned short)6;
    }
    if (p->fts_errno == 0) {
      {
        while (1) {
        while_continue___4: /* CIL Label */;
          {
            leave_dir(sp, p);
          }
          goto while_break___4;
        }
      while_break___10: /* CIL Label */;
      }
    while_break___4:;
    }
    if (sp->fts_options & 16384) {
      tmp___24 = (FTSENT *)((void *)0);
    } else {
      tmp___24 = p;
    }
    return (tmp___24);
  }
}
__attribute__((__nothrow__)) int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p,
                                         int instr);
int fts_set(FTS *sp __attribute__((__unused__)), FTSENT *p, int instr) {
  int *tmp;
  {
    if (instr != 0) {
      if (instr != 1) {
        if (instr != 2) {
          if (instr != 3) {
            if (instr != 4) {
              {
                tmp = __errno_location();
                *tmp = 22;
              }
              return (1);
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
  int tmp;
  int tmp___0;
  {
    if ((*(a + 0))->fts_statp[0].st_ino < (*(b + 0))->fts_statp[0].st_ino) {
      tmp___0 = -1;
    } else {
      if ((*(b + 0))->fts_statp[0].st_ino < (*(a + 0))->fts_statp[0].st_ino) {
        tmp = 1;
      } else {
        tmp = 0;
      }
      tmp___0 = tmp;
    }
    return (tmp___0);
  }
}
static void set_stat_type(struct stat *st, unsigned int dtype) {
  mode_t type;
  {
    if (dtype == 6U) {
      goto case_6;
    }
    if (dtype == 2U) {
      goto case_2;
    }
    if (dtype == 4U) {
      goto case_4;
    }
    if (dtype == 1U) {
      goto case_1;
    }
    if (dtype == 10U) {
      goto case_10;
    }
    if (dtype == 8U) {
      goto case_8;
    }
    if (dtype == 12U) {
      goto case_12;
    }
    goto switch_default;
  case_6:
    type = (mode_t)24576;
    goto switch_break;
  case_2:
    type = (mode_t)8192;
    goto switch_break;
  case_4:
    type = (mode_t)16384;
    goto switch_break;
  case_1:
    type = (mode_t)4096;
    goto switch_break;
  case_10:
    type = (mode_t)40960;
    goto switch_break;
  case_8:
    type = (mode_t)32768;
    goto switch_break;
  case_12:
    type = (mode_t)49152;
    goto switch_break;
  switch_default:
    type = (mode_t)0;
  switch_break:
    st->st_mode = type;
    return;
  }
}
static FTSENT *fts_build(FTS *sp, int type) {
  register FTSENT *p;
  register FTSENT *head;
  register size_t nitems;
  FTSENT *tail;
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
  int dir_fd;
  FTSENT *cur;
  _Bool continue_readdir;
  DIR *dp;
  int *tmp;
  int *tmp___0;
  DIR *tmp___1;
  int tmp___2;
  int tmp___3;
  int tmp___4;
  int *tmp___5;
  _Bool tmp___6;
  size_t max_entries;
  unsigned long tmp___7;
  int tmp___8;
  int *tmp___9;
  int tmp___10;
  char *tmp___11;
  _Bool is_dir;
  size_t d_namelen;
  struct dirent *dp___0;
  struct dirent *tmp___12;
  int *tmp___13;
  int *tmp___14;
  _Bool tmp___15;
  int *tmp___16;
  _Bool skip_stat;
  int tmp___17;
  int tmp___18;
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  _Bool tmp___23;
  char *__cil_tmp53;
  {
    cur = sp->fts_cur;
    continue_readdir = (_Bool)(!(!cur->fts_dirp));
    if (continue_readdir) {
      {
        dp = cur->fts_dirp;
        dir_fd = dirfd(dp);
      }
      if (dir_fd < 0) {
        {
          while (1) {
          while_continue: /* CIL Label */;
            {
              closedir(cur->fts_dirp);
              cur->fts_dirp = (DIR *)((void *)0);
            }
            goto while_break;
          }
        while_break___6: /* CIL Label */;
        }
      while_break:;
        if (type == 3) {
          {
            cur->fts_info = (unsigned short)4;
            tmp = __errno_location();
            cur->fts_errno = *tmp;
          }
        }
        return ((FTSENT *)((void *)0));
      }
    } else {
      if (sp->fts_options & 16) {
        if (sp->fts_options & 1) {
          if (cur->fts_level == 0L) {
            tmp___2 = 0;
          } else {
            tmp___2 = 131072;
          }
        } else {
          tmp___2 = 131072;
        }
      } else {
        tmp___2 = 0;
      }
      if (sp->fts_options & 2048) {
        tmp___3 = 262144;
      } else {
        tmp___3 = 0;
      }
      if (!(sp->fts_options & 4)) {
        if (sp->fts_options & 512) {
          tmp___4 = sp->fts_cwd_fd;
        } else {
          tmp___4 = -100;
        }
      } else {
        tmp___4 = -100;
      }
      {
        tmp___1 = opendirat(tmp___4, (char const *)cur->fts_accpath, tmp___2 | tmp___3,
                            &dir_fd);
        cur->fts_dirp = tmp___1;
      }
      if ((unsigned long)tmp___1 == (unsigned long)((void *)0)) {
        if (type == 3) {
          {
            cur->fts_info = (unsigned short)4;
            tmp___0 = __errno_location();
            cur->fts_errno = *tmp___0;
          }
        }
        return ((FTSENT *)((void *)0));
      }
      if ((int)cur->fts_info == 11) {
        {
          cur->fts_info = fts_stat(sp, cur, (_Bool)0);
        }
      } else {
        if (sp->fts_options & 256) {
          {
            while (1) {
            while_continue___3: /* CIL Label */;
              {
                leave_dir(sp, cur);
              }
              goto while_break___0;
            }
          while_break___7: /* CIL Label */;
          }
        while_break___0 : {
          fts_stat(sp, cur, (_Bool)0);
          tmp___6 = enter_dir(sp, cur);
        }
          if (!tmp___6) {
            {
              tmp___5 = __errno_location();
              *tmp___5 = 12;
            }
            return ((FTSENT *)((void *)0));
          }
        }
      }
    }
    if ((unsigned long)sp->fts_compar == (unsigned long)((void *)0)) {
      tmp___7 = 100000UL;
    } else {
      tmp___7 = 0xffffffffffffffffUL;
    }
    max_entries = tmp___7;
    if (type == 2) {
      nlinks = (nlink_t)0;
      nostat = (_Bool)0;
    } else {
      if (sp->fts_options & 8) {
        if (sp->fts_options & 16) {
          if (sp->fts_options & 32) {
            tmp___8 = 0;
          } else {
            tmp___8 = 2;
          }
          nlinks = cur->fts_statp[0].st_nlink - (__nlink_t)tmp___8;
          nostat = (_Bool)1;
        } else {
          nlinks = (nlink_t)-1;
          nostat = (_Bool)0;
        }
      } else {
        nlinks = (nlink_t)-1;
        nostat = (_Bool)0;
      }
    }
    if (continue_readdir) {
      descend = (_Bool)1;
    } else {
      if (nlinks) {
        goto _L___0;
      } else {
        if (type == 3) {
        _L___0:
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
            goto _L;
          } else {
            {
              tmp___10 = fts_safe_changedir(sp, cur, dir_fd, (char const *)((void *)0));
            }
            if (tmp___10) {
            _L:
              if (nlinks) {
                if (type == 3) {
                  {
                    tmp___9 = __errno_location();
                    cur->fts_errno = *tmp___9;
                  }
                }
              }
              cur->fts_flags = (unsigned short)((int)cur->fts_flags | 1);
              descend = (_Bool)0;
              {
                while (1) {
                while_continue___4: /* CIL Label */;
                  {
                    closedir(cur->fts_dirp);
                    cur->fts_dirp = (DIR *)((void *)0);
                  }
                  goto while_break___1;
                }
              while_break___8: /* CIL Label */;
              }
            while_break___1:;
              if (sp->fts_options & 512) {
                if (0 <= dir_fd) {
                  {
                    close(dir_fd);
                  }
                }
              }
              cur->fts_dirp = (DIR *)((void *)0);
            } else {
              descend = (_Bool)1;
            }
          }
        } else {
          descend = (_Bool)0;
        }
      }
    }
    if ((int)*(cur->fts_path + (cur->fts_pathlen - 1UL)) == 47) {
      len = cur->fts_pathlen - 1UL;
    } else {
      len = cur->fts_pathlen;
    }
    if (sp->fts_options & 4) {
      cp = sp->fts_path + len;
      tmp___11 = cp;
      cp++;
      *tmp___11 = (char)'/';
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
      while_continue___5: /* CIL Label */;
      while_continue___2:;
        if (!cur->fts_dirp) {
          goto while_break___2;
        }
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
        if (!p) {
          goto mem1;
        }
        if (d_namelen >= maxlen) {
          {
            oldaddr = (void *)sp->fts_path;
            tmp___15 = fts_palloc(sp, (d_namelen + len) + 1UL);
          }
          if (!tmp___15) {
          mem1 : {
            tmp___13 = __errno_location();
            saved_errno = *tmp___13;
            free((void *)p);
            fts_lfree(head);
          }
            {
              while (1) {
              while_continue___6: /* CIL Label */;
                {
                  closedir(cur->fts_dirp);
                  cur->fts_dirp = (DIR *)((void *)0);
                }
                goto while_break___3;
              }
            while_break___10: /* CIL Label */;
            }
          while_break___3 : {
            cur->fts_info = (unsigned short)7;
            sp->fts_options |= 16384;
            tmp___14 = __errno_location();
            *tmp___14 = saved_errno;
          }
            return ((FTSENT *)((void *)0));
          }
          if ((unsigned long)oldaddr != (unsigned long)sp->fts_path) {
            doadjust = (_Bool)1;
            if (sp->fts_options & 4) {
              cp = sp->fts_path + len;
            }
          }
          maxlen = sp->fts_pathlen - len;
        }
        new_len = len + d_namelen;
        if (new_len < len) {
          {
            free((void *)p);
            fts_lfree(head);
          }
          {
            while (1) {
            while_continue___7: /* CIL Label */;
              {
                closedir(cur->fts_dirp);
                cur->fts_dirp = (DIR *)((void *)0);
              }
              goto while_break___4;
            }
          while_break___11: /* CIL Label */;
          }
        while_break___4 : {
          cur->fts_info = (unsigned short)7;
          sp->fts_options |= 16384;
          tmp___16 = __errno_location();
          *tmp___16 = 36;
        }
          return ((FTSENT *)((void *)0));
        }
        p->fts_level = level;
        p->fts_parent = sp->fts_cur;
        p->fts_pathlen = new_len;
        p->fts_statp[0].st_ino = dp___0->d_ino;
        if (sp->fts_options & 4) {
          {
            p->fts_accpath = p->fts_path;
            memmove((void *)cp, (void const *)(p->fts_name), p->fts_namelen + 1UL);
          }
        } else {
          p->fts_accpath = p->fts_name;
        }
        if ((unsigned long)sp->fts_compar == (unsigned long)((void *)0)) {
          goto _L___1;
        } else {
          if (sp->fts_options & 1024) {
          _L___1:
            if (sp->fts_options & 16) {
              if (sp->fts_options & 8) {
                if ((int)dp___0->d_type != 0) {
                  if (!((int)dp___0->d_type == 4)) {
                    tmp___17 = 1;
                  } else {
                    tmp___17 = 0;
                  }
                } else {
                  tmp___17 = 0;
                }
              } else {
                tmp___17 = 0;
              }
            } else {
              tmp___17 = 0;
            }
            {
              skip_stat = (_Bool)tmp___17;
              p->fts_info = (unsigned short)11;
              set_stat_type(p->fts_statp, (unsigned int)dp___0->d_type);
              fts_set_stat_required(p, (_Bool)(!skip_stat));
            }
            if (sp->fts_options & 16) {
              if ((int)dp___0->d_type == 4) {
                tmp___18 = 1;
              } else {
                tmp___18 = 0;
              }
            } else {
              tmp___18 = 0;
            }
            is_dir = (_Bool)tmp___18;
          } else {
            {
              p->fts_info = fts_stat(sp, p, (_Bool)0);
            }
            if ((int)p->fts_info == 1) {
              tmp___19 = 1;
            } else {
              if ((int)p->fts_info == 2) {
                tmp___19 = 1;
              } else {
                if ((int)p->fts_info == 5) {
                  tmp___19 = 1;
                } else {
                  tmp___19 = 0;
                }
              }
            }
            is_dir = (_Bool)tmp___19;
          }
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
          tail->fts_link = p;
          tail = p;
        }
        nitems++;
        if (max_entries <= nitems) {
          goto break_without_closedir;
        }
      }
    while_break___9: /* CIL Label */;
    }
  while_break___2:;
    if (cur->fts_dirp) {
      {
        while (1) {
        while_continue___8: /* CIL Label */;
          {
            closedir(cur->fts_dirp);
            cur->fts_dirp = (DIR *)((void *)0);
          }
          goto while_break___5;
        }
      while_break___12: /* CIL Label */;
      }
    while_break___5:;
    }
  break_without_closedir:
    if (doadjust) {
      {
        fts_padjust(sp, head);
      }
    }
    if (sp->fts_options & 4) {
      if (len == sp->fts_pathlen) {
        cp--;
      } else {
        if (nitems == 0UL) {
          cp--;
        }
      }
      *cp = (char)'\000';
    }
    if (!continue_readdir) {
      if (descend) {
        if (type == 1) {
          goto _L___2;
        } else {
          if (!nitems) {
          _L___2:
            if (cur->fts_level == 0L) {
              {
                tmp___20 = restore_initial_cwd(sp);
                tmp___22 = tmp___20;
              }
            } else {
              {
                tmp___21 = fts_safe_changedir(sp, cur->fts_parent, -1, "..");
                tmp___22 = tmp___21;
              }
            }
            if (tmp___22) {
              {
                cur->fts_info = (unsigned short)7;
                sp->fts_options |= 16384;
                fts_lfree(head);
              }
              return ((FTSENT *)((void *)0));
            }
          }
        }
      }
    }
    if (!nitems) {
      if (type == 3) {
        cur->fts_info = (unsigned short)6;
      }
      {
        fts_lfree(head);
      }
      return ((FTSENT *)((void *)0));
    }
    if (nitems > 10000UL) {
      if (!sp->fts_compar) {
        if (sp->fts_options & 512) {
          {
            tmp___23 = dirent_inode_sort_may_be_useful(sp->fts_cwd_fd);
          }
          if (tmp___23) {
            {
              sp->fts_compar = &fts_compare_ino;
              head = fts_sort(sp, head, nitems);
              sp->fts_compar = (int (*)(struct _ftsent const **, struct _ftsent const **))((void *)0);
            }
          }
        }
      }
    }
    if (sp->fts_compar) {
      if (nitems > 1UL) {
        {
          head = fts_sort(sp, head, nitems);
        }
      }
    }
    return (head);
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
        follow = (_Bool)1;
      }
    }
    if (sp->fts_options & 2) {
      goto _L;
    } else {
      if (follow) {
      _L : {
        tmp___3 = stat((char const * /* __restrict  */)((char const *)p->fts_accpath),
                       (struct stat * /* __restrict  */) sbp);
      }
        if (tmp___3) {
          {
            tmp = __errno_location();
            saved_errno = *tmp;
            tmp___1 = __errno_location();
          }
          if (*tmp___1 == 2) {
            {
              tmp___2 = lstat((char const * /* __restrict  */)((char const *)p->fts_accpath),
                              (struct stat * /* __restrict  */) sbp);
            }
            if (tmp___2 == 0) {
              {
                tmp___0 = __errno_location();
                *tmp___0 = 0;
              }
              return ((unsigned short)13);
            }
          }
          p->fts_errno = saved_errno;
          goto err;
        }
      } else {
        {
          tmp___5 = fstatat(sp->fts_cwd_fd, (char const * /* __restrict  */)((char const *)p->fts_accpath),
                            (struct stat * /* __restrict  */) sbp, 256);
        }
        if (tmp___5) {
          {
            tmp___4 = __errno_location();
            p->fts_errno = *tmp___4;
          }
        err : {
          memset((void *)sbp, 0, sizeof(struct stat));
        }
          return ((unsigned short)10);
        }
      }
    }
    if ((sbp->st_mode & 61440U) == 16384U) {
      if (sp->fts_options & 32) {
        tmp___6 = 0;
      } else {
        tmp___6 = 2;
      }
      p->fts_n_dirs_remaining = sbp->st_nlink - (__nlink_t)tmp___6;
      if ((int)p->fts_name[0] == 46) {
        if (!p->fts_name[1]) {
          goto _L___0;
        } else {
          if ((int)p->fts_name[1] == 46) {
            if (!p->fts_name[2]) {
            _L___0:
              if (p->fts_level == 0L) {
                tmp___7 = 1;
              } else {
                tmp___7 = 5;
              }
              return ((unsigned short)tmp___7);
            }
          }
        }
      }
      return ((unsigned short)1);
    }
    if ((sbp->st_mode & 61440U) == 40960U) {
      return ((unsigned short)12);
    }
    if ((sbp->st_mode & 61440U) == 32768U) {
      return ((unsigned short)8);
    }
    return ((unsigned short)3);
  }
}
static int fts_compar(void const *a, void const *b) {
  FTSENT const **pa;
  FTSENT const **pb;
  int tmp;
  {
    {
      pa = (FTSENT const **)a;
      pb = (FTSENT const **)b;
      tmp = (*(((*(pa + 0))->fts_fts)->fts_compar))(pa, pb);
    }
    return (tmp);
  }
}
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems) {
  register FTSENT **ap;
  register FTSENT *p;
  FTSENT *dummy;
  int (*compare)(void const *, void const *);
  int (*tmp)(void const *, void const *);
  FTSENT **a;
  FTSENT **tmp___0;
  {
    if (sizeof(&dummy) == sizeof(void *)) {
      if ((long)(&dummy) == (long)((void *)(&dummy))) {
        tmp = (int (*)(void const *, void const *))sp->fts_compar;
      } else {
        tmp = &fts_compar;
      }
    } else {
      tmp = &fts_compar;
    }
    compare = tmp;
    if (nitems > sp->fts_nitems) {
      sp->fts_nitems = nitems + 40UL;
      if (0xffffffffffffffffUL / sizeof(*a) < sp->fts_nitems) {
        {
          free((void *)sp->fts_array);
          sp->fts_array = (struct _ftsent **)((void *)0);
          sp->fts_nitems = (size_t)0;
        }
        return (head);
      } else {
        {
          a = (FTSENT **)realloc((void *)sp->fts_array, sp->fts_nitems * sizeof(*a));
        }
        if (!a) {
          {
            free((void *)sp->fts_array);
            sp->fts_array = (struct _ftsent **)((void *)0);
            sp->fts_nitems = (size_t)0;
          }
          return (head);
        }
      }
      sp->fts_array = a;
    }
    ap = sp->fts_array;
    p = head;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!p) {
          goto while_break;
        }
        tmp___0 = ap;
        ap++;
        *tmp___0 = p;
        p = p->fts_link;
      }
    while_break___1: /* CIL Label */;
    }
  while_break : {
    qsort((void *)sp->fts_array, nitems, sizeof(FTSENT *), compare);
    ap = sp->fts_array;
    head = *ap;
  }
    {
      while (1) {
      while_continue___0: /* CIL Label */;
        nitems--;
        if (!nitems) {
          goto while_break___0;
        }
        (*(ap + 0))->fts_link = *(ap + 1);
        ap++;
      }
    while_break___2: /* CIL Label */;
    }
  while_break___0:
    (*(ap + 0))->fts_link = (struct _ftsent *)((void *)0);
    return (head);
  }
}
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen) {
  register FTSENT *p;
  size_t len;
  {
    {
      len = sizeof(FTSENT) + namelen;
      p = (FTSENT *)malloc(len);
    }
    if ((unsigned long)p == (unsigned long)((void *)0)) {
      return ((FTSENT *)((void *)0));
    }
    {
      memcpy((void * /* __restrict  */)((void *)(p->fts_name)), (void const * /* __restrict  */)((void const *)name),
             namelen);
      p->fts_name[namelen] = (char)'\000';
      p->fts_namelen = namelen;
      p->fts_fts = sp;
      p->fts_path = sp->fts_path;
                      
                                       
                                       
                                      
                         
                                 
    }
    return (p);
  }
}
static void fts_lfree(FTSENT *head) {
  register FTSENT *p;
  {
    {
      while (1) {
      while_continue: /* CIL Label */;
        p = head;
        if (!p) {
          goto while_break;
        }
        head = head->fts_link;
        if (p->fts_dirp) {
          {
            closedir(p->fts_dirp);
          }
        }
        {
          free((void *)p);
        }
      }
    while_break___0: /* CIL Label */;
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
      {
        free((void *)sp->fts_path);
                                          
                                 
                  
      }
      return ((_Bool)0);
    }
    {
      sp->fts_pathlen = new_len;
      p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
    }
    if ((unsigned long)p == (unsigned long)((void *)0)) {
      {
        free((void *)sp->fts_path);
        sp->fts_path = (char *)((void *)0);
      }
      return ((_Bool)0);
    }
    sp->fts_path = p;
    return ((_Bool)1);
  }
}
static void fts_padjust(FTS *sp, FTSENT *head) {
  FTSENT *p;
  char *addr;
  {
    addr = sp->fts_path;
    p = sp->fts_child;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!p) {
          goto while_break;
        }
        {
          while (1) {
          while_continue___0: /* CIL Label */;
                                                                               
                                                                     
             
                               
                                 
          }
        while_break___4: /* CIL Label */;
        }
      while_break___0:
        p = p->fts_link;
      }
    while_break___3: /* CIL Label */;
    }
  while_break:
    p = head;
    {
      while (1) {
      while_continue___1: /* CIL Label */;
        if (!(p->fts_level >= 0L)) {
          goto while_break___1;
        }
        {
          while (1) {
          while_continue___2: /* CIL Label */;
                                                                               
                                                                     
             
                               
                                 
          }
        while_break___6: /* CIL Label */;
        }
      while_break___2:;
        if (p->fts_link) {
          p = p->fts_link;
        } else {
          p = p->fts_parent;
        }
      }
    while_break___5: /* CIL Label */;
    }
  while_break___1:;
    return;
  }
}
static size_t __attribute__((__pure__)) fts_maxarglen(char *const *argv) {
  size_t len;
  size_t max;
  {
    max = (size_t)0;
    {
      while (1) {
      while_continue: /* CIL Label */;
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
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return ((size_t __attribute__((__pure__)))(max + 1UL));
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
  void *__cil_tmp20;
  {
    if (dir) {
      {
        tmp = strcmp(dir, "..");
      }
      if (tmp == 0) {
        tmp___0 = 1;
      } else {
        tmp___0 = 0;
      }
    } else {
      tmp___0 = 0;
    }
    is_dotdot = (_Bool)tmp___0;
    if (sp->fts_options & 4) {
      if (sp->fts_options & 512) {
        if (0 <= fd) {
          {
            close(fd);
          }
        }
      }
      return (0);
    }
    if (fd < 0) {
      if (is_dotdot) {
        if (sp->fts_options & 512) {
          {
            tmp___1 = i_ring_empty((I_ring const *)(&sp->fts_fd_ring));
          }
          if (!tmp___1) {
            {
              parent_fd = i_ring_pop(&sp->fts_fd_ring);
              is_dotdot = (_Bool)1;
            }
            if (0 <= parent_fd) {
              fd = parent_fd;
              dir = (char const *)((void *)0);
            }
          }
        }
      }
    }
    newfd = fd;
    if (fd < 0) {
      {
        newfd = diropen((FTS const *)sp, dir);
      }
      if (newfd < 0) {
        return (-1);
      }
    }
    if (sp->fts_options & 2) {
      goto _L;
    } else {
      if (dir) {
        {
          tmp___4 = strcmp(dir, "..");
        }
        if (tmp___4 == 0) {
        _L : {
          tmp___2 = fstat(newfd, &sb);
        }
          if (tmp___2) {
            ret = -1;
            goto bail;
          }
          if (p->fts_statp[0].st_dev != sb.st_dev) {
            {
                                          
                           
                       
            }
            goto bail;
          } else {
            if (p->fts_statp[0].st_ino != sb.st_ino) {
              {
                                            
                             
                         
              }
              goto bail;
            }
          }
        }
      }
    }
    if (sp->fts_options & 512) {
      {
        cwd_advance_fd(sp, newfd, (_Bool)(!is_dotdot));
      }
      return (0);
    }
    {
      ret = fchdir(newfd);
    }
  bail:
    if (fd < 0) {
      {
        tmp___5 = __errno_location();
        oerrno = *tmp___5;
                    
                                     
                          
      }
    }
    return (ret);
  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1, 2))) mempcpy)(void *__restrict __dest,
                                                                                       void const *__restrict __src,
                                                                                       size_t __n);
int fd_safer(int fd) {
  int f;
  int tmp;
       
               
               
  {
    if (0 <= fd) {
      if (fd <= 2) {
        {
          tmp = dup_safer(fd);
          f = tmp;
                                      
                       
                    
                                      
                       
                 
        }
      }
    }
    return (fd);
  }
}
                                          
                                       
                                  
int rpl_fcntl(int fd, int action, ...) {
  va_list arg;
  int result;
  int target;
  int tmp;
              
            
              
                 
               
               
             
          
                
  {
    {
      result = -1;
      __builtin_va_start(arg, action);
    }
                        
                     
     
                        
              {
    tmp = __builtin_va_arg(arg, int);
    target = tmp;
  }
                                 
       
                                           
       
                        
                               
              
         
                                       
         
                             
                                 
                
           
                                              
           
                           
                              
           
                                  
         
       
            
       
                                          
       
     
                      
                                     
         
                                     
                          
         
                        
                  
                
           
                                                  
           
                              
                
                                         
                                   
                          
                                         
                                   
                        
           
           
         
       
     
                      
  switch_default : {
                                           
                
                                  
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
                                                                                     
                                                                        
                                                                                
                                 
extern int regexec(regex_t const *__restrict __preg, char const *__restrict __string,
                   size_t __nmatch, regmatch_t *__restrict __pmatch, int __eflags);
                                                                                           
                                  
                                                                       
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int),
                     struct exclude *ex, char const *file_name___1, int options,
                     char line_end);
                                                                                
                                                                                         
                                                                  
                                                               
_Bool exclude_fnmatch(char const *pattern, char const *f, int options);
                                                                          
                                                                
                              
                             
   
     
                                                            
                 
                       
                              
                        
     
           
   
 
                                                                                            
_Bool fnmatch_pattern_has_wildcards(char const *str, int options) {
  char const *tmp;
  int tmp___0;
  {
    {
      while (1) {
      while_continue___0: /* CIL Label */;
      while_continue:
        tmp = str;
             
                                      
                       
         
                                       
                       
          
        if ((int const) * tmp == 125) {
          goto case_46;
        }
                                     
                       
         
                                      
                       
         
                                      
                       
          
        if ((int const) * tmp == 43) {
          goto case_43;
        }
                                     
                       
         
                                      
                       
         
                                      
                       
          
        if ((int const) * tmp == 42) {
          goto case_63;
        }
                                     
                       
         
                                     
                      
         
                          
      case_46:
        if (options & (1 << 27)) {
          return ((_Bool)1);
        }
        goto switch_break;
      case_92:
        if (options & (1 << 27)) {
          goto while_continue;
        } else {
          if (!(options & (1 << 1))) {
            if (*str) {
              tmp___0 = 1;
            } else {
              tmp___0 = 0;
            }
          } else {
            tmp___0 = 0;
          }
          str += tmp___0;
        }
        goto switch_break;
      case_43:
        if (options & (1 << 5)) {
          if ((int const) * str == 40) {
            return ((_Bool)1);
          }
        }
        goto switch_break;
      case_63:
        return ((_Bool)1);
      case_0:
        return ((_Bool)0);
      switch_break:;
      }
    while_break: /* CIL Label */;
    }
    return ((_Bool)0);
  }
}
static void unescape_pattern(char *str) {
  char const *q;
  int tmp;
               
               
                      
  {
    q = (char const *)str;
    {
      while (1) {
                                     
                                    
                         
                    
                  
                    
           
                
                  
         
                 
                      
              
                    
            
                                 
                           
                       
                           
          
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return;
  }
}
struct exclude *new_exclude(void) {
  struct exclude *tmp;
  struct exclude *tmp___0;
  {
    {
      tmp___0 = (struct exclude *)xzalloc(sizeof(*tmp));
    }
    return (tmp___0);
  }
}
static size_t string_hasher(void const *data, size_t n_buckets) {
  char const *p;
  size_t tmp;
  {
    {
      p = (char const *)data;
      tmp = hash_string(p, n_buckets);
    }
    return (tmp);
  }
}
static size_t string_hasher_ci(void const *data, size_t n_buckets) {
  char const *p;
  mbui_iterator_t iter;
  size_t value;
  mbchar_t m;
  wchar_t wc;
  int tmp;
                   
                    
                    
  {
    {
                            
                        
                       
                              
                                                               
                                
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        {
          mbuiter_multi_next(&iter);
        }
        if (iter.cur.wc_valid) {
          if (iter.cur.wc == 0) {
            tmp = 0;
          } else {
            tmp = 1;
          }
        } else {
          tmp = 1;
        }
                  
                           
         
                     
                         
           
                                                 
           
                
                                   
          
        value = (value * 31UL + (size_t)wc) % n_buckets;
        iter.cur.ptr += iter.cur.bytes;
        iter.next_done = (_Bool)0;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return (value);
  }
}
static _Bool string_compare(void const *data1, void const *data2) {
  char const *p1;
  char const *p2;
  int tmp;
  {
    {
                              
                               
                           
    }
    return ((_Bool)(tmp == 0));
  }
}
static _Bool string_compare_ci(void const *data1, void const *data2) {
  char const *p1;
  char const *p2;
  int tmp;
  {
    {
                              
                               
                               
    }
    return ((_Bool)(tmp == 0));
  }
}
static void string_free(void *data) {
  {
    {
      free(data);
    }
    return;
  }
}
static void new_exclude_segment(struct exclude *ex, enum exclude_type type, int options) {
  struct exclude_segment *sp;
  struct exclude_segment *tmp;
  _Bool (*tmp___0)(void const *data1, void const *data2);
  size_t (*tmp___1)(void const *data, size_t n_buckets);
  {
    {
      tmp = (struct exclude_segment *)xzalloc(sizeof(struct exclude_segment));
              
                      
                            
    }
                                  
                  
     
                                   
                  
     
                      
  case_1:
    goto switch_break;
  case_0:
    if (options & (1 << 4)) {
      tmp___0 = &string_compare_ci;
    } else {
      tmp___0 = &string_compare;
    }
    if (options & (1 << 4)) {
      tmp___1 = &string_hasher_ci;
    } else {
      tmp___1 = &string_hasher;
    }
    {
      sp->v.table = hash_initialize((size_t)0, (Hash_tuning const *)((void *)0), tmp___1,
                                    tmp___0, &string_free);
    }
    goto switch_break;
  switch_break:
    sp->next = ex->head;
    ex->head = sp;
    return;
  }
}
static int fnmatch_no_wildcards(char const *pattern, char const *f, int options) {
  int tmp;
  int tmp___0;
  int tmp___1;
  size_t patlen;
  size_t tmp___2;
  int r;
  int tmp___3;
  char *fcopy;
  char *tmp___4;
  char *p;
  int r___0;
  char *tmp___5;
  {
    if (!(options & (1 << 3))) {
      if (options & (1 << 4)) {
        {
          tmp = mbscasecmp(pattern, f);
                       
         
              
         
                                       
                            
        }
      }
      return (tmp___1);
    } else {
      if (!(options & (1 << 4))) {
        {
          tmp___2 = strlen(pattern);
                          
                                                
                      
        }
        if (!r) {
          r = (int)*(f + patlen);
          if (r == 47) {
            r = 0;
          }
        }
        return (r);
      } else {
        {
          tmp___4 = xstrdup(f);
          fcopy = tmp___4;
                   
         
         
                     
                                          
             
                                               
             
                    
                                
             
             
                                                               
             
                     
                               
                    
                               
                                 
               
             
                        
                
                                 
           
                         /* CIL Label */;
        }
      while_break : {
        free((void *)fcopy);
      }
        return (r___0);
      }
    }
  }
}
_Bool exclude_fnmatch(char const *pattern, char const *f, int options) {
                                                     
                                                                     
                
             
                
              
  {
                             
                     
            
                                  
     
     
                        
                                                    
                                      
     
                                 
            
       
                   
                                        
                   
                              
                               
             
                  
                             
           
                                      
                                              
               
                                                                  
                                                
               
             
           
              
         
                                       
       
                 
     
                     
  }
}
_Bool exclude_patopts(struct patopts const *opts, char const *f) {
  int options;
  int tmp;
  _Bool tmp___0;
  int tmp___1;
  {
    options = (int)opts->options;
    if (options & (1 << 27)) {
      {
        tmp = regexec((regex_t const * /* __restrict  */)(&opts->v.re), (char const * /* __restrict  */)f,
                      (size_t)0, (regmatch_t * /* __restrict  */)((regmatch_t *)((void *)0)),
                      0);
                          
       
            
       
                                                                             
                               
      }
    }
    return ((_Bool)tmp___1);
  }
}
                                                                                    
                       
                                
           
            
   
                                                     
                                                         
                  
     
                 
                                      
                                   
                           
         
         
                                                
         
                  
                            
         
            
       
                                     
     
               
                      
   
 
                                                                                
                                                  
              
                    
            
          
                
   
                                
                                       
     
                 
                                      
         
                                                                                          
         
         
                     
                                              
                                
                                                                                   
           
                      
                                
             
                                     
               
                                                                 
                            
               
                      
                             
                                        
               
             
                                 
           
                                         
         
                       
                                     
           
                                             
           
                  
                
           
                
                           
         
                 
                           
         
       
                                     
     
               
                      
   
 
                                                                   
                              
               
                     
             
                
                
   
                      
                                       
                    
                        
     
                                             
     
                 
                                      
                                            
                              
             
                              
                                                        
             
           
           
                                                                                              
           
                        
                             
           
                
           
                                                                                   
           
                        
                             
           
         
                         
                            
                           
         
                        
       
                                     
     
                 
                               
   
                                                                
   
  
void add_exclude(struct exclude *ex, char const *pattern, int options) {
  struct exclude_segment *seg;
  struct exclude_pattern *pat;
  struct patopts *patopts;
  size_t tmp;
        
             
              
               
             
                 
  char *str;
  char *p;
  int exclude_hash_flags;
  _Bool tmp___3;
  char *__cil_tmp23;
  {
    if (options & ((1 << 27) | (1 << 28))) {
      {
        tmp___3 = fnmatch_pattern_has_wildcards(pattern, options);
      }
      if (tmp___3) {
        if (ex->head) {
          if ((unsigned int)(ex->head)->type == 1U) {
            if (!(((ex->head)->options & (1 << 29)) == (options & (1 << 29)))) {
              {
                new_exclude_segment(ex, (enum exclude_type)1, options);
              }
            }
          } else {
            {
              new_exclude_segment(ex, (enum exclude_type)1, options);
            }
          }
        } else {
          {
            new_exclude_segment(ex, (enum exclude_type)1, options);
          }
        }
        seg = ex->head;
        pat = &seg->v.pat;
        if (pat->exclude_count == pat->exclude_alloc) {
          {
            pat->exclude = (struct patopts *)x2nrealloc((void *)pat->exclude, &pat->exclude_alloc,
                                                        sizeof(*(pat->exclude)));
          }
        }
                                
                               
                                     
                                  
                                  
                                   
                             
                  
                        
           
                                            
                                   
             
                                        
                            
             
             
                         
                                              
                                
                                                                       
                                     
                   
                        
                                   
                 
                      
               
                                             
             
                       
                             
                     
                    
               
                                                     
                                                                                                                            
                            
                                                                                                             
                                                                                                                                    
                                     
                                      
               
             
                  
             
                                                                                                                  
                                   
             
           
                   
                                   
                   
           
                
                                    
             
                                                       
                                                              
             
           
                                       
         
              
                
      }
    } else {
    _L:
      exclude_hash_flags = (((1 << 29) | (1 << 30)) | (1 << 3)) | (1 << 4);
      if (ex->head) {
        if ((unsigned int)(ex->head)->type == 0U) {
          if (!(((ex->head)->options & exclude_hash_flags) == (options & exclude_hash_flags))) {
            {
              new_exclude_segment(ex, (enum exclude_type)0, options);
            }
          }
        } else {
          {
            new_exclude_segment(ex, (enum exclude_type)0, options);
          }
        }
      } else {
        {
          new_exclude_segment(ex, (enum exclude_type)0, options);
        }
      }
      {
        seg = ex->head;
        str = xstrdup(pattern);
      }
                                                         
         
                                
         
       
       
                                                                 
       
                                                   
         
                            
         
        
    }
    return;
  }
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
  {
    return ((_Bool)((i & (i - 1UL)) == 0UL));
  }
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
      {
        __assert_fail("state->magic == 9827862", "/home/khheo/project/benchmark/grep-2.19/lib/cycle-check.c",
                      60U, "cycle_check");
      }
    }
    if (state->chdir_counter) {
      if (sb->st_ino == (__ino_t const)state->dev_ino.st_ino) {
        if (sb->st_dev == (__dev_t const)state->dev_ino.st_dev) {
          return ((_Bool)1);
        }
      }
    }
    {
      (state->chdir_counter)++;
      tmp = is_zero_or_power_of_two(state->chdir_counter);
    }
    if (tmp) {
                                       
                          
       
                                                
                                                
    }
    return ((_Bool)0);
  }
}
int should_colorize(void);
void init_colorize(void);
                                                                         
                                                 
                           
                
                  
              
              
                   
   
     
                                         
              
     
            
       
                                    
       
                         
                    
              
                    
       
            
                  
     
                     
   
  
void init_colorize(void) {
  {
    return;
  }
}
                                                                          
   
     
                                                                     
     
           
   
 
                                                  
   
     
                                                                                            
     
           
   
 
                        
extern __attribute__((__noreturn__)) void _exit(int __status);
                              
                             
                          
                        
                          
                  
                
               
               
              
               
              
                    
   
     
                                     
     
                       
                         
         
                                       
         
                                
                  
         
              
            
                                                   
                          
       
                        
           
                                                
                                         
                                                               
           
                
           
                                         
                                                  
           
         
         
                                   
         
       
     
     
                                     
     
                       
       
                                 
       
     
           
   
 
                                                                  
                                
                     
             
                  
              
                    
              
               
               
   
     
                               
                                         
                                        
                                        
                               
                                          
     
                    
                  
            
                        
                           
                      
                
           
                                         
           
                              
                 
                               
               
                                             
                             
               
             
                        
           
         
       
     
               
   
  
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
        tmp___0 = flags & -2;
      }
      newflags = tmp___0;
      if (flags == newflags) {
                  
              
         
                                                 
         
                            
                     
          
      }
    }
    return (-1);
  }
}
extern __attribute__((__nothrow__)) void *(__attribute__((__nonnull__(1))) memrchr)(void const *__s,
                                                                                    int __c,
                                                                                    size_t __n) __attribute__((__pure__));
int c_tolower(int c) __attribute__((__const__));
int c_strcasecmp(char const *s1, char const *s2) __attribute__((__pure__));
int c_strcasecmp(char const *s1, char const *s2) {
  register unsigned char const *p1;
  register unsigned char const *p2;
  unsigned char c1;
  unsigned char c2;
  {
                                  
                                   
                                                 
                 
      
    {
      while (1) {
      while_continue: /* CIL Label */;
        {
          c1 = (unsigned char)c_tolower((int)*p1);
          c2 = (unsigned char)c_tolower((int)*p2);
        }
        if ((int)c1 == 0) {
          goto while_break;
        }
            
             
                                    
                           
          
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return ((int)c1 - (int)c2);
  }
}
_Bool c_isspace(int c) __attribute__((__const__));
                                                 
                        
          
   
                  
              
            
                   
                
              
                      
                  
                
                        
                    
                  
                          
                      
                    
                            
                        
                      
                        
               
             
           
         
       
     
                        
   
 
                                                
int c_tolower(int c) {
  int tmp;
  {
    if (c >= 65) {
      if (c <= 90) {
        tmp = (c - 65) + 97;
      } else {
        tmp = c;
      }
    } else {
      tmp = c;
    }
    return (tmp);
  }
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
                                                                                    
                                                                                                
                                                                                           
                                                  
__attribute__((__noreturn__)) void usage(int status);
                                 
   
     
               
     
           
   
 
                                             
                                                                                    
                                                             
ptrdiff_t argmatch(char const *arg, char const *const *arglist, char const *vallist,
                   size_t valsize) {
  size_t i;
  size_t arglen;
  ptrdiff_t matchind;
  _Bool ambiguous;
         
                 
              
  {
    {
                              
                           
                           
                   
     
     
                 
                                      
                              
                           
         
         
                                                                       
         
                       
           
                                                           
           
                                  
                                  
                  
                                  
                                      
                    
                                                                         
                                     
                      
                 
                                                                                                                           
                                        
                 
                          
                                       
                 
               
             
           
         
            
       
                     /* CIL Label */;
    }
  while_break:;
    if (ambiguous) {
      return ((ptrdiff_t)-2);
    } else {
      return (matchind);
    }
  }
}
void argmatch_invalid(char const *context, char const *value, ptrdiff_t problem) {
  char const *format;
  char *tmp;
  char *tmp___0;
  char *tmp___1;
  char const *tmp___2;
  char *tmp___3;
  char *__cil_tmp12;
  char *__cil_tmp13;
  {
    if (problem == -1L) {
      {
        tmp = gettext("invalid argument %s for %s");
                     
       
            
       
                                                          
                          
      }
    }
    {
      format = (char const *)tmp___1;
      tmp___2 = quote_n(1, context);
      tmp___3 = quotearg_n_style(0, (enum quoting_style)6, value);
      error(0, 0, format, tmp___3, tmp___2);
    }
    return;
  }
}
void argmatch_valid(char const *const *arglist, char const *vallist, size_t valsize) {
  size_t i;
  char const *last_val;
  char *tmp;
  char const *tmp___0;
                     
              
                    
  {
    {
      last_val = (char const *)((void *)0);
                                           
                                                                                                             
                    
    }
    {
      while (1) {
                                     
                              
                           
         
                       
           
                                                          
                                                                                                   
                             
                                             
           
                
           
                                                                                           
                                      
           
                        
             
                                                            
                                                                                                     
                               
                                               
             
                  
             
                                                            
                                                                                                 
                               
             
           
          
        i++;
      }
    while_break___0: /* CIL Label */;
    }
  while_break : {
    putc_unlocked('\n', stderr);
  }
    return;
  }
}
ptrdiff_t __xargmatch_internal(char const *context, char const *arg, char const *const *arglist,
                               char const *vallist, size_t valsize, void (*exit_fn)(void)) {
  ptrdiff_t res;
  ptrdiff_t tmp;
  {
    {
      tmp = argmatch(arg, arglist, vallist, valsize);
      res = tmp;
    }
    if (res >= 0L) {
      return (res);
    }
    {
                                         
                                                
                   
    }
    return ((ptrdiff_t)-1);
  }
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
  int e = 0;
  char const *ep = 0;
  char *re;
  char *tmp;
  int flags;
  int tmp___0;
  int tmp___2;
  int tmp___3;
  char const *patlim;
  char *n;
  char const *p;
  char const *pnul;
  char *tmp___4;
  void *tmp___5;
  size_t tmp___6;
  unsigned char const *tmp___7;
  char *tmp___8;
  int tmp___9;
                
                    
                    
                   
                    
                    
                   
                    
                    
  {
    {
      tmp = (char *)xnmalloc((size_t)4, size + 7UL);
      re = tmp;
    }
    if (match_icase) {
      tmp___0 = 1;
    } else {
      tmp___0 = 0;
    }
    {
      tmp___3 = using_utf8();
    }
    if (tmp___3) {
      tmp___2 = 2048;
    } else {
      tmp___2 = 0;
    }
    {
      flags = (2 | tmp___0) | tmp___2;
      patlim = pattern + size;
      n = re;
      tmp___5 = memchr((void const *)pattern, '\n', size);
    }
                 
       
                                                                          
                                           
       
     
                      
                      
       
                                                                                     
       
      
    if (match_words) {
      {
        strcpy((char * /* __restrict  */)n, (char const * /* __restrict  */) "(?<!\\w)(?:");
      }
    }
    {
      tmp___6 = strlen((char const *)n);
                  
                  
     
     
                 
                                      
         
                                                                                     
         
                    
                           
         
         
                                                                                                          
                                     
                        
                   
         
         
                     
                                              
                                                            
                                                    
                                     
               
                    
                                   
             
                        
                 
                
           
                                         
         
                         
                             
                                                                                      
               
                     
       
        
    while_break___1: /* CIL Label */;
    }
  while_break : {
    memcpy((void * /* __restrict  */)((void *)n), (void const * /* __restrict  */)((void const *)p),
           (size_t)(patlim - p));
    n += patlim - p;
    *n = (char)'\000';
  }
    if (match_words) {
      {
        strcpy((char * /* __restrict  */)n, (char const * /* __restrict  */) ")(?!\\w)");
      }
    }
    if (match_lines) {
      {
        strcpy((char * /* __restrict  */)n, (char const * /* __restrict  */) ")$");
      }
    }
    {
      tmp___7 = pcre_maketables();
      cre = pcre_compile((char const *)re, flags, &ep, &e, tmp___7);
    }
    if (!cre) {
      {
        error(2, 0, "%s", ep);
      }
    }
    {
                                                   
     
             
       
                              
       
     
     
                                                                                              
    }
    if (tmp___9) {
      {
        tmp___8 = gettext("internal error (should never happen)");
        error(2, 0, (char const *)tmp___8);
      }
    }
           
       
                                                        
       
                       
         
                                                                                 
                                              
         
       
       
                                                                                                   
       
     
     
                       
     
           
  }
}
size_t Pexecute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
  int sub[300] = {0};
  char const *line_buf;
  char const *line_end;
  char const *line_next;
  int e;
  ptrdiff_t start_ofs;
  long tmp;
  char *tmp___0;
  ptrdiff_t tmp___1;
  char *tmp___2;
  char *tmp___3;
  char *tmp___4;
  char *tmp___5;
  char const *beg;
  char const *end;
  char const *buflim___0;
  char eol;
                   
                    
                    
                   
                    
                    
  {
    e = -1;
    if (start_ptr) {
      tmp = start_ptr - buf;
    } else {
      tmp = 0L;
    }
    start_ofs = tmp;
    line_next = buf;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (e == -1) {
          if (!((unsigned long)line_next < (unsigned long)(buf + size))) {
            goto while_break;
          }
        } else {
          goto while_break;
        }
        {
          line_buf = line_next;
          line_end = (char const *)memchr((void const *)line_buf, (int)eolbyte, (size_t)((buf + size) - line_buf));
        }
        if ((unsigned long)line_end == (unsigned long)((void *)0)) {
                               
                               
                
                                   
        }
                       
                                                                    
                        
           
         
                                                
           
                                                                    
                                               
           
         
                             
                                 
                
                              
          
        {
          e = pcre_exec((pcre const *)cre, (pcre_extra const *)extra, line_buf, (int)(line_end - line_buf),
                        (int)tmp___1, 0, sub, (int)(sizeof(sub) / sizeof(sub[0])));
        }
      __Cont:
        start_ofs -= line_next - line_buf;
      }
    while_break___1: /* CIL Label */;
    }
  while_break:;
    if (e <= 0) {
      if (e == -1) {
        goto case_neg_1;
      }
      if (e == -6) {
        goto case_neg_6;
      }
                   
                        
       
                     
                         
       
                          
    case_neg_1:
      return ((size_t)-1);
    case_neg_6 : {
      tmp___2 = gettext("memory exhausted");
      error(2, 0, (char const *)tmp___2);
    }
    case_neg_8 : {
      tmp___3 = gettext("exceeded PCRE\'s backtracking limit");
      error(2, 0, (char const *)tmp___3);
    }
    case_neg_10 : {
      tmp___4 = gettext("invalid UTF-8 byte sequence in input");
      error(2, 0, (char const *)tmp___4);
    }
    switch_default : {
      tmp___5 = gettext("internal PCRE error: %d");
      error(2, 0, (char const *)tmp___5, e);
    }
                         
            
                              
                              
                             
                          
                       
         
                                                                                              
         
                  
                
                
                           
         
         
                     
                                              
                                                          
                                                                  
                                     
               
                    
                                   
             
                  
           
                                         
         
                       
        
      *match_size = (size_t)(end - beg);
      return ((size_t)(beg - buf));
    }
  }
}
void kwsincr(kwset_t kwset___1, char const *text, size_t len);
void kwsprep(kwset_t kwset___1);
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text,
                                                size_t size, struct kwsmatch *kwsmatch);
void kwsinit(kwset_t *kwset___1);
char *mbtoupper(char const *beg, size_t *n, mb_len_map_t **len_map_p);
ptrdiff_t mb_goback(char const **mb_start, char const *cur, char const *end);
wint_t mb_prev_wc(char const *buf, char const *cur, char const *end);
                                                   
                                                
                                                                                         
static _Bool wordchar(wint_t wc) {
  int tmp;
  int tmp___0;
  {
    if (wc == 95U) {
                 
            
       
                           
       
                
                    
              
                    
        
    }
    return ((_Bool)tmp___0);
  }
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
      while_continue: /* CIL Label */;
        {
          tmp___3 = (char const *)memchr((void const *)p, '\n', total);
          sep = tmp___3;
        }
        if (sep) {
                                 
                
                             
        } else {
          len = total;
          total = (size_t)0;
        }
        buf = (char *)((void *)0);
        if (match_lines) {
          {
                                            
                                       
                                                                                                                    
                        
                                                
                                  
                       
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
    while_break___0: /* CIL Label */;
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
                          
                           
                    
      {
        while (1) {
        while_continue: /* CIL Label */;
                           
                             
           
                                           
              
        }
      while_break___1: /* CIL Label */;
      }
    while_break:;
      {
        while (1) {
        while_continue___0: /* CIL Label */;
                                  
                                 
           
                                           
              
        }
      while_break___2: /* CIL Label */;
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
  void *__cil_tmp30;
  void *__cil_tmp31;
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
      while_continue: /* CIL Label */;
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
            while_continue___0: /* CIL Label */;
              {
                tmp___5 = mb_prev_wc(buf, try, buf + size);
                                           
               
                            
                                     
               
               
                                                            
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
                  
                                 
                                       
                      
                                 
                               
                        
                                              
                  
              }
            }
          while_break___3: /* CIL Label */;
          }
        while_break___0:;
        } else {
          goto success;
        }
      __Cont:
        beg++;
      }
    while_break___2: /* CIL Label */;
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
      while_continue___1: /* CIL Label */;
        if ((unsigned long)buf < (unsigned long)beg) {
          if (!((int const) * (beg + -1) != (int const)eol)) {
            goto while_break___1;
          }
        } else {
          goto while_break___1;
        }
        beg--;
      }
    while_break___4: /* CIL Label */;
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
    if (__o->chunk_limit - __o->next_free < (long)__len) {
      {
        _obstack_newchunk(__o, __len);
      }
    }
    __o->next_free += __len;
    __o1 = __h;
    __value = (void *)__o1->object_base;
                                                                  
                                    
     
                                        
                                  
            
                          
     
                                        
                                  
            
                          
      
    __o1->next_free = tmp___0 + (((__o1->next_free - tmp___1) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
    if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) {
      __o1->next_free = __o1->chunk_limit;
    }
    __o1->object_base = __o1->next_free;
    kwset___1->trie = (struct trie *)__value;
    (kwset___1->trie)->accepting = (size_t)0;
                                                         
                                                           
                                                         
                                                        
                                 
                                 
    kwset___1->mind = 2147483647;
                        
                                            
                                 
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
  int tmp___0;
  int tmp___1;
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
  struct tree *t;
                
                 
                  
                 
               
               
  size_t tmp___8;
  void *__cil_tmp39;
  void *__cil_tmp40;
  {
    trie = kwset___1->trie;
    trans___0 = kwset___1->trans;
    text += len;
    {
      while (1) {
      while_continue: /* CIL Label */;
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
          while_continue___0: /* CIL Label */;
            if (kwset_link) {
              if (!((int)label___0 != (int)kwset_link->label)) {
                goto while_break___0;
              }
            } else {
              goto while_break___0;
            }
            links[depth___0] = kwset_link;
            if ((int)label___0 < (int)kwset_link->label) {
              tmp___0 = depth___0;
              depth___0++;
                                                        
                                             
                    
                                  
                         
                                                         
                                             
            }
          }
        while_break___3: /* CIL Label */;
        }
      while_break___0:;
        if (!kwset_link) {
          __h = &kwset___1->obstack;
          __o = __h;
          __len = (int)sizeof(*kwset_link);
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
            tmp___2 = __o1->object_base;
          } else {
            tmp___2 = (char *)0;
          }
          if (sizeof(long) < sizeof(void *)) {
            tmp___3 = __o1->object_base;
          } else {
            tmp___3 = (char *)0;
          }
          __o1->next_free = tmp___2 + (((__o1->next_free - tmp___3) + (long)__o1->alignment_mask) & (long)(~__o1->alignment_mask));
          if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) {
            __o1->next_free = __o1->chunk_limit;
          }
          __o1->object_base = __o1->next_free;
          kwset_link = (struct tree *)__value;
          kwset_link->llink = (struct tree *)((void *)0);
          kwset_link->rlink = (struct tree *)((void *)0);
          __h___0 = &kwset___1->obstack;
          __o___0 = __h___0;
          __len___0 = (int)sizeof(*(kwset_link->trie));
          if (__o___0->chunk_limit - __o___0->next_free < (long)__len___0) {
            {
              _obstack_newchunk(__o___0, __len___0);
            }
          }
          __o___0->next_free += __len___0;
          __o1___0 = __h___0;
          __value___0 = (void *)__o1___0->object_base;
                                                                                
                                              
           
                                              
                                            
                  
                                
           
                                              
                                            
                  
                                
            
          __o1___0->next_free = tmp___4 + (((__o1___0->next_free - tmp___5) + (long)__o1___0->alignment_mask) & (long)(~__o1___0->alignment_mask));
          if (__o1___0->next_free - (char *)__o1___0->chunk > __o1___0->chunk_limit - (char *)__o1___0->chunk) {
            __o1___0->next_free = __o1___0->chunk_limit;
          }
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
            (links[depth___0])->rlink = kwset_link;
          }
          {
            while (1) {
            while_continue___1: /* CIL Label */;
              if (depth___0) {
                if (!(!(links[depth___0])->balance)) {
                  goto while_break___1;
                }
              } else {
                goto while_break___1;
              }
              if ((unsigned int)dirs[depth___0] == 0U) {
                (links[depth___0])->balance = (char)((int)(links[depth___0])->balance - 1);
              } else {
                (links[depth___0])->balance = (char)((int)(links[depth___0])->balance + 1);
              }
              depth___0--;
            }
          while_break___4: /* CIL Label */;
          }
        while_break___1:;
          if (depth___0) {
            if ((unsigned int)dirs[depth___0] == 0U) {
                                                                                        
                                                
                        
                      
                            
               
                    
                   
                                                        
                                                                                           
                                                  
                   
                                                               
                                    
                   
                                                              
                                
                   
                                          
                           
                                                                
                                
                   
                                                                
                                
                   
                                      
                       
                                       
                               
                                
                               
                                
                                    
                                       
                                       
                                        
                       
                                       
                               
                               
                                
                                
                               
                                
                               
                                
                                             
                                         
                          
                                          
                   
                                              
                                         
                          
                                         
                   
                                       
                                        
                                  
                          
                 
                                  
                                    
                       
                                                                
                                    
                   
                                                                
                                    
                   
                                          
                           
                                       
                               
                                
                               
                                
                                    
                                       
                                       
                                        
                           
                                       
                               
                               
                                
                                
                               
                                
                               
                                
                                             
                                         
                          
                                          
                   
                                              
                                         
                          
                                         
                   
                                       
                                        
                                      
                          
                 
                                  
                                    
                                      
                          
                 
                              
                                                                
                                                      
                          
                                                      
                   
                 
                
            }
          }
        }
        trie = kwset_link->trie;
      }
    while_break___2: /* CIL Label */;
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
                                                                                               
                          
   
                
             
     
     
                                                                  
                                                                  
     
     
                 
                                      
                    
                           
         
                                                
         
                     
                                              
                             
                                                                              
                                     
               
                    
                                   
             
                                                                        
                                             
                    
                                             
             
           
                                         
         
                       
                         
                                                
                 
         
                                               
       
                                     
     
              
                                  
           
   
 
                                                                                              
   
                
             
     
     
                                                                    
                                                                    
     
                                                                      
                                                                   
     
           
   
 
                                                                                           
                                    
                                        
   
             
                                                
     
     
                                                       
     
               
                                                
     
     
                                                           
     
                   
                                                
     
     
                 
                                      
                
                                                              
                             
           
                
                           
         
                                                        
                                            
                
                                            
         
       
                                     
     
               
                                                    
   
  
static void treenext(struct tree const *tree, struct trie **next) {
  {
    if (!tree) {
      return;
    }
    {
                                                      
                                                       
                                                                   
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
      while_continue: /* CIL Label */;
        if (!curr) {
          goto while_break;
        }
        {
          enqueue(curr->links, &last);
          curr->shift = kwset___1->mind;
                                          
                                                                                        
                                                                                      
                                     
                           
         
         
                     
                                              
                        
                                   
             
             
                                                                                                     
             
                           
                                                            
                                                        
               
             
                                  
                                                               
                                                           
               
             
                              
           
                         /* CIL Label */;
        }
      while_break___0:
        curr = curr->next;
      }
    while_break___6: /* CIL Label */;
    }
  while_break:
    curr = (kwset___1->trie)->next;
    {
      while (1) {
      while_continue___1: /* CIL Label */;
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
    while_break___8: /* CIL Label */;
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
        while_continue___2: /* CIL Label */;
          if (!(i < 256)) {
            goto while_break___2;
          }
          {
                                                      
                                                        
                
          }
        }
      while_break___9: /* CIL Label */;
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
        while_continue___3: /* CIL Label */;
          if (!(i >= 0)) {
            goto while_break___3;
          }
          *(kwset___1->target + i) = (char)(curr->links)->label;
          curr = curr->next;
          i--;
        }
      while_break___10: /* CIL Label */;
      }
    while_break___3:;
      if (kwset___1->mind > 1) {
        __h___0 = &kwset___1->obstack;
        __o___0 = __h___0;
                                                                                             
                                                                          
           
                                                  
           
         
                                        
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
                                           
                                          
                
                              
         
                                                                                                                                                 
                                                                                                              
                                                      
         
                                                    
        kwset___1->shift = (int *)__value___0;
        i = 0;
        curr = (kwset___1->trie)->next;
        {
          while (1) {
          while_continue___4: /* CIL Label */;
            if (!(i < kwset___1->mind - 1)) {
              goto while_break___4;
            }
            *(kwset___1->shift + i) = curr->shift;
            curr = curr->next;
            i++;
          }
        while_break___11: /* CIL Label */;
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
        while_continue___5: /* CIL Label */;
          if (!(i < 256)) {
            goto while_break___5;
          }
          {
                                                       
                                                           
                
          }
        }
      while_break___12: /* CIL Label */;
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
      while_continue: /* CIL Label */;
        {
          i = 2;
          tmp___3 = tr(trans___0, (char)*(tp + -2));
        }
        if ((int)tmp___3 == (int)gc2) {
          {
            while (1) {
            while_continue___0: /* CIL Label */;
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
          while_break___3: /* CIL Label */;
          }
        while_break___0:;
          if (i > d) {
            i = (d + skip) + 1;
            {
              while (1) {
              while_continue___1: /* CIL Label */;
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
            while_break___4: /* CIL Label */;
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
    while_break___2: /* CIL Label */;
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
                       
                                                                                                  
                                   
                              
                                
              
                    
       
            
                  
      
    ntrans = tmp___0;
    slim = s + ntrans;
    {
      while (1) {
      while_continue: /* CIL Label */;
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
    while_break___0: /* CIL Label */;
    }
  while_break:
    n -= ntrans;
    if (n == 0UL) {
      tmp___3 = (void *)0;
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
                       
                        
                        
                       
                        
                        
                       
                        
                        
  _Bool tmp___10;
  unsigned char tmp___11;
  unsigned char tmp___12;
  _Bool tmp___13;
  {
    len = kwset___1->mind;
    trans___0 = kwset___1->trans;
                  
                                                   
     
                             
                                                      
     
                   
       
                                                 
       
               
                        
              
                  
       
                                                     
      
    d1 = (unsigned char const *)(kwset___1->delta);
    sp = (char const *)(kwset___1->target + len);
    tp = text + len;
    gc1 = kwset___1->gc1;
    gc2 = kwset___1->gc2;
    if (size > (size_t)(12 * len)) {
      ep = (text + size) - 11 * len;
      {
        while (1) {
        while_continue: /* CIL Label */;
          if (!((unsigned long)tp <= (unsigned long)ep)) {
            goto while_break;
          }
          {
            tp0 = tp;
            tmp___0 = to_uchar((char)*(tp + -1));
            d = (int)*(d1 + (int)tmp___0);
            tp += d;
                                                
                                          
                    
          }
          if (d != 0) {
            {
                                                  
                                            
                      
                                                  
                                            
                      
                                                  
                                            
                      
            }
            if (d != 0) {
              {
                                                    
                                              
                        
                                                    
                                              
                        
                                                    
                                              
                        
              }
              if (d != 0) {
                {
                                                      
                                                
                          
                                                      
                                                
                          
                                                                
                 
                                                          
                                   
                 
                 
                       
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
      while_break___1: /* CIL Label */;
      }
    while_break:;
    }
    {
      ep = text + size;
      tmp___11 = to_uchar((char)*(tp + -1));
                                    
     
     
                 
                                          
                          
                                    
                               
         
         
                  
                                                
                                         
         
                     
                                  
         
         
                                                                                                                
                                                 
         
                       
                                                                 
         
       
                     /* CIL Label */;
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
  struct trie *const *next;
  struct trie const *trie;
  struct trie const *accept;
  char const *beg;
  char const *lim;
  char const *mch;
  char const *lmch;
  unsigned char c;
  unsigned char const *delta;
  int d;
  char const *end;
  char const *qlim;
  struct tree const *tree;
  char const *trans___0;
  unsigned char tmp;
  unsigned char tmp___0;
  unsigned char uc;
  unsigned char uc___0;
  {
                                       
                          
     
                                                   
                                                      
                                
                     
               
                       
                 
                                      
            
                 
                                                    
                 
     
                                               
                                       
            
                                       
      
    {
      while (1) {
                                         
                      
                                      
                           
          
        if (qlim) {
          if ((unsigned long)end <= (unsigned long)qlim) {
            end += d - 1;
            {
              while (1) {
              while_continue___5: /* CIL Label */;
                                       
                                           
                        
                                                                    
                                         
                   
                        
                                       
                  
                {
                  end += d;
                  tmp = to_uchar((char)*end);
                  end += (int const) * (delta + (int)tmp);
                  tmp___0 = to_uchar((char)*end);
                  end += (int const) * (delta + (int)tmp___0);
                }
              }
            while_break___7: /* CIL Label */;
            }
          while_break___0:
            end++;
          } else {
            end += d;
            c = (unsigned char)*(end + -1);
            d = (int)*(delta + (int)c);
          }
        } else {
          end += d;
          c = (unsigned char)*(end + -1);
          d = (int)*(delta + (int)c);
        }
               
                              
         
                      
                                                     
        if (trie->accepting) {
          mch = beg;
          accept = trie;
        }
                            
         
                     
                                              
                                                              
                                   
             
                  
                                     
                            
                                                        
                    
                     
             
                                                    
             
                         
                                                  
                           
                                                      
                                         
                   
                        
                                       
                 
                                                
                                                          
                        
                                                          
                 
               
                                             
             
                           
                       
                                                     
                                    
                          
                              
               
                    
                                   
             
                                 
           
                                         
         
                       
                  
                     
          
      }
    while_break___6: /* CIL Label */;
    }
  while_break:;
    return ((size_t)-1);
  match:
                                           
                                  
     
                           
          
    {
      while (1) {
      while_continue___8: /* CIL Label */;
      while_continue___3:;
        if (!(lim - end >= (long)d)) {
          goto while_break___3;
        }
                
                                       
                                   
        if (d != 0) {
          goto while_continue___3;
        }
                     
                                                     
                    
                
                                  
          
        if (trie->accepting) {
          if ((unsigned long)beg <= (unsigned long)mch) {
            lmch = beg;
            accept = trie;
          }
        }
                            
         
                     
                                              
                                                              
                                   
             
                  
                                         
                            
                                                            
                    
                         
             
                                                    
             
                         
                                                   
                           
                                                      
                                         
                   
                        
                                       
                 
                                                
                                                          
                        
                                                          
                 
               
                                              
             
                           
                       
                                                     
                                    
                                                               
                             
                                
                 
               
                    
                                   
             
                                 
           
                                          
         
                       
                   
                     
                     
          
        if (!d) {
          d = 1;
        }
      }
    while_break___10: /* CIL Label */;
    }
  while_break___3:
    kwsmatch->index = (size_t)(accept->accepting / 2UL);
                                              
                                              
                                  
  }
}
size_t(__attribute__((__nonnull__(4))) kwsexec)(kwset_t kwset___1, char const *text,
                                                size_t size, struct kwsmatch *kwsmatch) {
  size_t ret;
  size_t tmp;
  size_t tmp___0;
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
        tmp___0 = cwexec(kwset___1, text, size, kwsmatch);
      }
      return (tmp___0);
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
                                                                               
                                                                                          
                                      
          
              
   
                    
                  
            
       
                           
       
                
                    
              
                    
       
     
                            
   
  
static kwset_t kwset___0;
static struct dfa *dfa;
static struct patterns patterns0;
static struct patterns *patterns;
static size_t pcount;
static size_t kwset_exact_matches;
static _Bool begline;
__attribute__((__noreturn__)) void dfaerror(char const *mesg);
void dfaerror(char const *mesg) {
  {
    {
      error(2, 0, "%s", mesg);
      abort();
    }
  }
}
static enum __anonenum_mode_60 mode;
void dfawarn(char const *mesg) {
  char *tmp___0;
  char *__cil_tmp4;
  {
                                  
       
                                            
       
                    
                                          
              
                                          
       
     
                                   
       
                       
       
     
           
  }
}
static void kwsmusts(void) {
  struct dfamust const *dm;
  struct dfamust const *tmp;
  size_t old_len;
                
                 
                 
               
           
                 
  {
    {
      tmp = (struct dfamust const *)dfamusts((struct dfa const *)dfa);
      dm = tmp;
    }
    if (dm) {
      {
                           
       
       
                   
                                        
                    
                             
           
                           
                        
           
           
                                  
                                                     
                              
                                                                            
                                               
                               
                          
                                
                                         
                                                               
                                                                                                                    
                            
           
                            
                                            
           
           
                                                                
                                   
           
               
                                                
         
                       /* CIL Label */;
      }
    while_break : {
                                                                    
     
       
                   
                                            
                    
                                 
           
                          
                            
           
           
                                                     
                                                                
           
                   
                                                
         
                       /* CIL Label */;
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
      while_continue: /* CIL Label */;
        {
          tmp = (char const *)memchr((void const *)p, '\n', total);
          sep = tmp;
        }
        if (sep) {
                                 
                
                             
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
    while_break___0: /* CIL Label */;
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
                      
                
                 
              
                      
               
              
                 
              
                    
                       
                  
                
                  
                 
  size_t off;
  void *__cil_tmp53;
  void *__cil_tmp54;
  {
    {
      eol = (char)eolbyte;
      tmp = dfasuperset((struct dfa const *)dfa);
      superset = tmp;
                                                  
                        
                     
      buflim___0 = buf + size;
      end = buf;
      beg = end;
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((unsigned long)end < (unsigned long)buflim___0)) {
          goto while_break;
        }
        end = buflim___0;
        if (!start_ptr) {
          dfa_beg = beg;
          count = (size_t)0;
                                      
                          
             
                                                                                                            
                                       
                               
             
                                                 
                           
             
             
                                   
                             
                                                                                              
             
                      
                    
                    
                        
             
                          
                                                                          
                                    
                          
                    
                             
                            
                      
                                        
                                
                        
                                        
                 
                                                     
                              
                        
                                          
                                  
                          
                                          
                   
                                                            
                                            
                                    
                            
                                            
                     
                                                      
                          
                                         
                   
                                
                 
               
             
             
                                                                                                  
             
                      
                    
                    
                               
             
                                    
               
                                                   
               
                                   
                             
                      
                 
                                         
                 
                              
                               
                 
               
                                                                 
                               
               
               
                                                                   
               
                                   
                             
               
                                 
             
           
                         
                                     
               
                           
                                                    
                   
                                                                                       
                                                                                 
                   
                                 
                                                                        
                                            
                                             
                       
                            
                                           
                     
                          
                                         
                   
                   
                                      
                                                                                                       
                          
                                  
                   
                 
                                               
               
                             
                                                                          
                            
                      
                                                                    
                              
                 
               
               
                                                                                                              
               
                        
                      
                      
                                 
               
             
            
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
          while_continue___1: /* CIL Label */;
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
                    while_continue___2: /* CIL Label */;
                      if (!((unsigned long)match <= (unsigned long)best_match)) {
                        goto while_break___2;
                      }
                      {
                                       
                                                                   
                                                          
                      }
                                     
                         
                                                                      
                                                            
                         
                                        
                                                    
                         
                       
                                      
                         
                                
                                                                
                                                                                                                   
                                                                                                   
                         
                                               
                           
                                         
                           
                         
                       
                                            
                                                  
                              
                                                                               
                                               
                         
                         
                                  
                                                                
                                                                                                           
                                                                                                      
                                                                   
                         
                                        
                                           
                             
                                           
                             
                           
                                               
                         
                                                                                
                                            
                        
                    }
                  while_break___6: /* CIL Label */;
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
        while_break___5: /* CIL Label */;
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
    while_break___3: /* CIL Label */;
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
                           
                            
                                                        
void dfaanalyze(struct dfa *d, int searchflag);
                                                               
                                                     
                                                     
extern __attribute__((__nothrow__)) int iscntrl(int);
                                                    
                                                     
                                                     
extern __attribute__((__nothrow__)) int isprint(int);
                                                    
                                                     
                                                     
extern __attribute__((__nothrow__)) int isxdigit(int);
                                                        
                                                     
                                                                                                               
                                                                                                                    
                                                                                                   
extern __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1, 2))) strcoll)(char const *__s1,
                                                                                    char const *__s2) __attribute__((__pure__));
                                                                                         
                                                          
                                                                                      
                                                                               
extern __attribute__((__nothrow__)) int iswalpha(wint_t __wc);
                                                                           
                                                                               
                                                                 
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
  void *__cil_tmp9;
  {
    i = -128;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!(i <= 127)) {
          goto while_break;
        }
        {
          c = (char)i;
          uc = (unsigned char)i;
                       
                               
                                                                                                                     
                                                                            
        }
        if (tmp___0 <= 1UL) {
          d->mbrtowc_cache[uc] = (wint_t)wc;
        } else {
          d->mbrtowc_cache[uc] = 4294967295U;
        }
        i++;
      }
    while_break___0: /* CIL Label */;
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
      while_continue: /* CIL Label */;
                      
                           
         
                                                        
            
      }
    while_break___0: /* CIL Label */;
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
      while_continue: /* CIL Label */;
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
    while_break___0: /* CIL Label */;
    }
  while_break : {
                                                                                             
                                                                           
                  
                                      
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
  int tmp;
  {
                                              
                 
            
                     
                   
       
     
                    
                 
            
       
                           
       
                
                   
       
     
               
  }
}
void dfasyntax(reg_syntax_t bits, int fold, unsigned char eol) {
  unsigned int i;
  {
    syntax_bits_set = (reg_syntax_t)1;
    syntax_bits = bits;
                                  
                      
           
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!(i < 256U)) {
          goto while_break;
        }
        {
          sbit[i] = char_context((unsigned char)i);
        }
                          
                      
         
                           
                      
         
                          
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
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return;
  }
}
static _Bool setbit_wc(wint_t wc, charclass_word *c) {
  int b;
  int tmp;
  {
    {
      tmp = wctob(wc);
      b = tmp;
    }
                 
                        
     
     
                                 
     
                      
  }
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
           
     
     
                 
                                      
                         
                           
         
         
                               
         
                            
           
                                       
           
         
            
       
                     /* CIL Label */;
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
  void *__cil_tmp6;
  {
    if (utf8 < 0) {
      {
                       
                               
                                                                                                      
                                                                        
      }
      if (tmp == 2UL) {
        if (wc == 256) {
          tmp___0 = 1;
        } else {
          tmp___0 = 0;
        }
      } else {
        tmp___0 = 0;
      }
      utf8 = tmp___0;
    }
    return (utf8);
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
  int i;
  int n;
  wint_t uc;
  wint_t tmp;
  wint_t lc;
  wint_t tmp___0;
             
              
                 
           
              
                 
  {
    {
      n = 0;
      tmp = towupper((wint_t)c);
              
                             
                   
    }
                         
                  
          
                                        
     
                   
                            
         
                                 
         
                            
                      
              
                                            
         
       
     
          
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((unsigned long)i < sizeof(lonesome_lower) / sizeof(lonesome_lower[0]))) {
          goto while_break;
        }
                                      
                       
                         
                                  
               
                                       
               
                                  
                            
                    
                                                  
               
             
           
         
            
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return (n);
  }
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
      while_continue: /* CIL Label */;
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
    while_break___0: /* CIL Label */;
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
                      
                   
                       
            
                
                
            
                
                 
                       
                
                
                
                    
                 
                       
                
                
                
                    
                  
                        
               
             
                
                 
                 
                   
                  
                         
                 
                 
                 
                
                    
                  
                        
                    
                       
              
               
                               
                                  
                 
              
                   
                  
               
                
                 
                 
                   
                  
                         
                
                 
                 
                   
                  
                         
  char *tmp___39;
  char *tmp___40;
  wint_t _wc___6;
  size_t nbytes___6;
  size_t tmp___41;
  unsigned char tmp___42;
  char *tmp___43;
  char *tmp___44;
                
                    
                  
                        
                 
                 
                
                    
                  
                        
                  
                  
                 
                  
               
              
         
               
         
               
          
              
                 
                 
                
                 
                    
                 
                         
               
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
                 
                     
                     
                    
                     
                     
                    
                     
                     
                    
                     
                     
                    
                     
                     
                    
                     
                     
                    
                     
                     
                    
                     
                     
                    
                     
                     
                    
                     
                     
  {
    known_bracket_exp = (_Bool)1;
                   
                              
                              
                             
                              
                         
                            
       
                                                                                            
                                                                                     
                                                                                           
                                                                                                
                                
                              
                                          
                                                       
       
            
                                                       
     
     
                                            
     
     
                 
                                      
                       
           
                                              
           
                                                                     
             
                                                
                                              
             
                  
                                
                             
           
                
           
                                                                   
                             
                                     
                     
           
                              
             
                                                    
                               
             
                  
                   
           
                           
                            
         
                         
       
                                      
     
               
                  
       
                   
                                            
                         
             
                                                
             
                                                                       
               
                                                  
                                                
               
                    
                                  
                               
             
                  
             
                                                                         
                                   
                                           
                           
             
                                    
               
                                                      
                                 
               
                    
                     
             
                                 
                                  
           
                               
         
                                        
       
                       
                        
                                                
     
            
                        
      
    colon_warning_state = c == 58;
    {
      while (1) {
      while_continue___1: /* CIL Label */;
        c1 = 256;
                                 
                      
           
                       
                                                
                             
                 
                                                    
                 
                                                                           
                   
                                                      
                                                    
                   
                        
                                      
                                   
                 
                      
                 
                                                                              
                                        
                                               
                                
                 
                                        
                   
                                                           
                                       
                   
                        
                          
                 
                                     
                                      
               
                                   
             
                                            
           
                         
                         
                                                  
                          
                    
                          
             
                  
                 
                           
                          
                    
                             
                     
                                
                 
                             
                                                      
                     
                                 
                                                          
                                       
                           
                                                               
                           
                                                                                      
                             
                                                                 
                                                               
                             
                                  
                                                
                                             
                           
                                
                           
                                                                                        
                                                  
                                                         
                                         
                           
                                                  
                             
                                                                     
                                                
                             
                                  
                                   
                           
                                               
                                                
                         
                                             
                       
                                                      
                     
                                   
                                  
                                                       
                                             
                              
                                
                       
                            
                       
                                           
                                             
                       
                     
                                     
                                     
                            
                                              
                            
                                            
                     
                   
                                                  
                 
                              
                                        
                 
                             
                                                      
                                   
                       
                                                           
                       
                                                                                  
                         
                                                             
                                                           
                         
                              
                                            
                                         
                       
                            
                       
                                                                                    
                                              
                                                     
                                     
                       
                                              
                         
                                                                 
                                            
                         
                              
                               
                       
                                           
                                            
                     
                                         
                   
                                                  
                 
                               
                               
                                  
                     
                                                                      
                     
                                        
                                         
                            
                       
                                                                        
                       
                                          
                                           
                              
                                                       
                       
                     
                          
                                                   
                   
                   
                                     
                                                                          
                                    
                   
                              
                     
                                                                    
                                                       
                     
                   
                                           
                                                  
                       
                                                 
                                      
                                                                                                      
                                                                                               
                                                                                                                          
                                                         
                                                  
                                                                
                       
                     
                   
                         
                   
                               
                                                        
                                        
                                             
                       
                       
                                                       
                       
                                     
                         
                                                        
                         
                       
                           
                     
                                                    
                   
                                 
                        
                                               
                 
                                         
                 
                             
                                                      
                                   
                       
                                                           
                       
                                                                                  
                         
                                                             
                                                           
                         
                              
                                            
                                         
                       
                            
                       
                                                                                    
                                              
                                                     
                                      
                       
                                              
                         
                                                                 
                                             
                         
                              
                                
                       
                                           
                                            
                     
                                         
                   
                                                  
                 
                               
                            
               
             
           
         
                      
                                  
             
                         
                                                  
                               
                   
                                                       
                   
                                                                              
                     
                                                         
                                                       
                     
                          
                                        
                                     
                   
                        
                   
                                                                                
                                          
                                                 
                                 
                   
                                          
                     
                                                             
                                        
                     
                          
                           
                   
                                       
                                        
                 
                                     
               
                                              
             
                           
           
          
        if (c1 == 256) {
          {
            while (1) {
            while_continue___9: /* CIL Label */;
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
          while_break___26: /* CIL Label */;
          }
        while_break___9:;
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
            while_continue___15: /* CIL Label */;
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
                                             
                                       
                                                            
                }
              }
              i++;
            }
          while_break___32: /* CIL Label */;
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
    while_break___18: /* CIL Label */;
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
             
              
              
             
              
              
  char const *p;
  char const *lim;
  char *tmp___8;
  char const *tmp___9;
  char const *tmp___10;
  char *tmp___11;
                 
                                  
                  
  char const *lexptr_saved;
  size_t lexleft_saved;
                                 
                  
                  
  unsigned short const **tmp___18;
                   
                    
                    
                   
                    
                    
  {
    backslash = (_Bool)0;
    i = 0;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!(i < 2)) {
          goto while_break;
        }
        {
          while (1) {
          while_continue___0: /* CIL Label */;
            if (!lexleft) {
              lasttok = (token)-1;
              return (lasttok);
            } else {
              {
                tmp = mbs_to_wchar(&_wc, lexptr, lexleft, dfa___0);
                            
                                         
                            
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
        while_break___7: /* CIL Label */;
        }
      while_break___0:;
                     
                       
         
                      
                       
         
                      
                       
          
        if (c == 49) {
          goto case_49;
        }
                     
                       
         
                      
                       
         
                      
                       
          
        if (c == 53) {
          goto case_49;
        }
                     
                       
         
                      
                       
         
                      
                       
          
        if (c == 57) {
          goto case_49;
        }
                     
                       
         
                      
                       
         
                      
                       
          
        if (c == 62) {
          goto case_62;
        }
                     
                       
         
                      
                       
         
                      
                       
          
        if (c == 42) {
          goto case_42;
        }
                     
                       
         
                       
                        
         
                       
                        
          
        if (c == 10) {
          goto case_10;
        }
                     
                       
         
                      
                       
         
                      
                       
          
        if (c == 115) {
          goto case_115;
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
                       
                           
         
                                                     
                               
                           
                
                               
                                 
                             
                  
                                  
                                   
                               
                    
                                    
                                     
                                 
               
             
           
         
                         
      case_36:
                       
                           
         
                                                     
                               
                           
                
                               
                                 
                             
                  
                                                                                                                               
                                  
                                                 
                              
                        
                              
                 
                      
                            
               
                                
                    
                                  
                                                       
                                                         
                                
                          
                                
                   
                        
                              
                 
                      
                            
               
                                
             
                          
                                   
                               
                    
                                                                                                                                               
                                    
                                                    
                                
                          
                                
                   
                        
                              
                 
                                  
                      
                                    
                                                         
                                                            
                                  
                            
                                  
                     
                          
                                
                   
                        
                              
                 
                                  
               
                            
                                     
                                 
                      
                                                                                                                     
                                      
                                                     
                                           
                                       
                     
                   
                 
               
             
           
         
                         
      case_49:
        if (backslash) {
          if (!(syntax_bits & ((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
                                
                                 
                             
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
                                                              
                          
                             
           
         
                             
                         
      case_42:
        if (backslash) {
          goto normal_char;
        }
                                                              
                          
                             
           
         
                             
                         
      case_43:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & (1UL << 1)) != 0UL)) {
          goto normal_char;
        }
                                                              
                          
                             
           
         
                             
                         
      case_123:
        if (!(syntax_bits & (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
          goto normal_char;
        }
        if ((int)backslash != ((syntax_bits & ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
                                                              
                          
                             
           
         
                   
                          
        maxrep = -1;
                       
         
                     
                                              
                                                         
                                                    
                                     
               
                    
                                   
             
                             
                                                   
                    
                                                         
                               
                      
                                                      
               
             
                
           
                                         
         
                       
                                                     
                                      
                            
                  
                             
                         
             
             
                         
                                                  
                    
                                                             
                                                        
                                         
                   
                        
                                       
                 
                                 
                                                       
                        
                                                             
                                   
                          
                                                          
                   
                 
               
                                             
             
                           
           
          
        if (!backslash) {
          goto _L___3;
        } else {
          if ((unsigned long)p != (unsigned long)lim) {
            tmp___9 = p;
            p++;
            if ((int const) * tmp___9 == 92) {
            _L___3:
              if ((unsigned long)p != (unsigned long)lim) {
                            
                    
                                                    
                                    
                                        
                                                
                                    
                       
                     
                          
                                
                   
                        
                              
                  
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
                  
                                    
                             
        lasttok = (token)267;
        return (lasttok);
      case_124:
        if (syntax_bits & ((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) {
          goto normal_char;
        }
                                                                                                                                                                     
                           
         
                             
                             
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
                            
                             
                         
      case_40:
                                                                                                                                                       
                           
         
                 
                             
        lasttok = (token)270;
        return (lasttok);
      case_41:
        if ((int)backslash != ((syntax_bits & (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0UL)) {
          goto normal_char;
        }
                           
                                                                                                                                                         
                             
           
         
                 
                             
        lasttok = (token)271;
        return (lasttok);
      case_46:
        if (backslash) {
          goto normal_char;
        }
        if (dfa___0->multibyte) {
                              
                               
                           
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
                  
           
           
                       
                                                
                                
                                     
               
               
                                           
               
                                                          
                 
                                                
                 
               
                   
             
                            /* CIL Label */;
          }
        while_break___3:;
          if (c == 83) {
            {
              notset(ccl);
            }
          }
          {
                                
                                                                             
                                                
          }
          return (lasttok);
        }
        {
          while (1) {
          while_continue___4: /* CIL Label */;
                                 
                                    
                           
                                    
                    
                                     
              
            {
              lexleft = strlen(lexptr);
              lasttok = parse_bracket_exp();
              lexptr = lexptr_saved;
              lexleft = lexleft_saved;
            }
            goto while_break___4;
          }
        while_break___11: /* CIL Label */;
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
                
         
         
                     
                                              
                              
                                   
             
             
                                         
             
                                                     
               
                                              
               
                    
                             
                 
                                                
                 
               
             
                 
           
                          /* CIL Label */;
        }
      while_break___5:;
        if (c == 87) {
          {
            notset(ccl);
          }
        }
        {
                              
                                                                           
                                              
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
                                        
                                                                               
                                                  
            }
            return (lasttok);
          }
        }
        lasttok = (token)c;
        return (lasttok);
      switch_break:
        i++;
      }
    while_break___6: /* CIL Label */;
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
  _Bool need_or;
  struct mb_char_classes *work_mbc;
  size_t i;
  {
    if (dfa___0->multibyte) {
      if (t == 273L) {
                          
                                                                
                                
                        
           
                       
                                            
                                            
                                 
               
               
                                                            
               
                            
                 
                                     
                 
               
                                 
                  
             
                                           
           
                    
                                       
          
        if (work_mbc->invert) {
          goto _L;
        } else {
          if (work_mbc->nch_classes != 0UL) {
            goto _L;
          } else {
            if (work_mbc->nranges != 0UL) {
              goto _L;
            } else {
              if (work_mbc->nequivs != 0UL) {
                goto _L;
              } else {
                if (work_mbc->ncoll_elems != 0UL) {
                _L : {
                  addtok_mb((token)273, (int)(((dfa___0->nmbcsets - 1UL) << 2) + 3UL));
                }
                  if (need_or) {
                    {
                      addtok((token)269);
                    }
                  }
                } else {
                  if (work_mbc->cset != -1L) {
                    {
                      addtok(275L + work_mbc->cset);
                    }
                    if (need_or) {
                      {
                        addtok((token)269);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        {
          addtok_mb(t, 3);
        }
      }
    } else {
      {
        addtok_mb(t, 3);
      }
    }
    return;
  }
}
static void addtok_wc(wint_t wc) {
  unsigned char buf[16];
  mbstate_t s;
  int i;
  size_t stored_bytes;
  size_t tmp;
  int tmp___0;
  int tmp___1;
  void *__cil_tmp11;
  void *__cil_tmp12;
  {
    {
      s.__count = 0;
      s.__value.__wch = 0U;
      tmp = wcrtomb((char * /* __restrict  */)((char *)(buf)), (wchar_t)wc, (mbstate_t * /* __restrict  */)(&s));
      stored_bytes = tmp;
    }
    if (stored_bytes != 0xffffffffffffffffUL) {
                                    
            
                     
                                
    }
    if (cur_mb_len == 1) {
      tmp___0 = 3;
    } else {
      tmp___0 = 1;
    }
    {
      addtok_mb((token)buf[0], tmp___0);
      i = 1;
    }
    {
      while (1) {
                                     
                                
                           
         
                                  
                      
                
                      
          
        {
          addtok_mb((token)buf[i], tmp___1);
          addtok((token)268);
          i++;
        }
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return;
  }
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
  unsigned int n;
  unsigned int i;
             
             
                   
  {
                                                                      
                                                 
             
       
                   
                                        
                         
                             
           
           
                                        
           
                        
                                                                                 
               
                                                     
               
             
                                                                                     
               
                                                
               
             
           
           
                                                                      
                                                                    
                
           
         
                                       
       
                 
     
           
     
                 
                                          
                       
                               
         
         
                                                   
              
         
       
                                     
     
                  ;
    {
      while (1) {
      while_continue___1: /* CIL Label */;
        i--;
        if (!(i > 1U)) {
          goto while_break___1;
        }
        {
                                                  
                             
                             
        }
      }
    while_break___4: /* CIL Label */;
    }
  while_break___1:;
    return;
  }
}
static void atom(void) {
  wchar_t folded[21];
  int i;
  int n;
  int tmp;
  char *tmp___0;
  int tmp___1;
  void *__cil_tmp9;
  char *__cil_tmp10;
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
                 
           
           
                       
                                            
                             
                                 
               
               
                                             
                                   
                    
               
             
                           /* CIL Label */;
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
                  
                                        
                               
                             
           
           
                                                                                                    
                
           
         
                                       
       
                 
            
                    
       
                   
                                            
                               
                                 
           
           
                                                            
                
           
         
                       /* CIL Label */;
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
      while_continue: /* CIL Label */;
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
                              
                 
                                     
                 
               
                                
                 
                                     
                 
               
                    
               
                           
                                                    
                                      
                                         
                   
                   
                                              
                                       
                        
                   
                 
                                               
               
                            ;
              {
                while (1) {
                while_continue___1: /* CIL Label */;
                  if (!(i < maxrep)) {
                    goto while_break___1;
                  }
                  {
                    copytoks(tindex, ntokens);
                                      
                                       
                        
                  }
                }
              while_break___4: /* CIL Label */;
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
                                            
                          
                        
            }
          } else {
            {
              addtok(tok);
              tok = lex();
            }
          }
        }
      }
    while_break___2: /* CIL Label */;
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
      while_continue: /* CIL Label */;
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
    while_break___0: /* CIL Label */;
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
      while_continue: /* CIL Label */;
        if (!(tok == 269L)) {
          goto while_break;
        }
        {
          tok = lex();
          branch();
          addtok((token)269);
        }
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    return;
  }
}
void dfaparse(char const *s, size_t len, struct dfa *d) {
  char *tmp;
  char *tmp___0;
  char *__cil_tmp8;
  char *__cil_tmp9;
  {
    dfa___0 = d;
    lexptr = s;
    lexleft = len;
    lasttok = (token)-1;
                        
                       
                             
       
                       
                                                     
       
      
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
                     
       
                           
       
     
                    
           
  }
}
static void copy(position_set const *src, position_set *dst) {
  {
    if (dst->alloc < (size_t)src->nelem) {
      {
                                
                                        
                                                                                           
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
                                                
               
            
            
           
             
   
                     
                   
               
     
                 
                                      
                         
                           
         
                             
                                                
                         
                
                   
         
       
                                     
     
               
                     
                                              
                                                    
               
       
     
     
                                                                                                    
                
     
     
                 
                                          
                        
                               
         
                                                  
            
       
                                     
     
                  
                         
                 
           
   
 
                                                                                    
           
           
             
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
   
                  
                  
                                                     
       
                               
                                                                                        
                                                                             
       
     
                         
     
                 
                                      
                                    
                                         
                             
           
                
                           
         
                                                              
                         
                       
                      
              
                                                     
                
                                                                
                               
                         
                        
                
                                                           
                  
                        
                
                                                            
                               
                         
                        
                
                                                                                  
           
         
       
                                     
     
               
     
                 
                                          
                                       
                               
         
                           
                     
                    
            
                                                       
       
                                     
     
                   
     
                 
                                          
                                       
                               
         
                           
                     
                    
            
                                                       
       
                                     
     
                   
           
   
 
                                                  
           
   
                  
     
                 
                                      
                              
                           
         
                                               
                           
         
            
       
                                     
     
               
                       
                   
       
                   
                                            
                                
                                 
           
                                                    
              
         
                                       
       
                     
     
           
   
  
static state_num state_index(struct dfa *d, position_set const *s, int context) {
  size_t hash;
  int constraint;
  state_num i;
  state_num j;
  {
    hash = (size_t)0;
    i = (state_num)0;
    {
                
                                      
                                            
                           
         
                                                                           
            
       
                                     
     
              
                     
     
                 
                                          
                               
                               
         
                                            
                      
                
                                                                       
                        
                  
                                                           
                          
             
           
         
                         
         
                     
                                              
                                                
                                   
             
                                                                                               
                                   
                    
                                                                                       
                                     
               
             
                
           
                                         
         
                       
                                          
                     
         
             
            
       
                     /* CIL Label */;
    }
  while_break___0 : {
    d->states = (dfa_state *)maybe_realloc((void *)d->states, (size_t)d->sindex, &d->salloc,
                                           sizeof(*(d->states)));
    (d->states + i)->hash = hash;
                                                                 
                                     
                                                      
                                            
                                           
                                                    
                                          
                                            
                                                          
                     
   
     
                 
                                          
                                            
                               
         
                                                        
                                                       
                                                                                                      
                                                                                                          
           
                                            
                                                                              
           
                
                                                             
                                                               
                                                    
           
         
            
       
                     /* CIL Label */;
    }
  while_break___2:
    (d->sindex)++;
    return (i);
  }
}
static void epsclosure(position_set *s, struct dfa const *d, char *visited) {
  size_t i;
          
             
               
  _Bool initialized;
  {
    initialized = (_Bool)0;
    i = (size_t)0;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!(i < s->nelem)) {
          goto while_break;
        }
                                                          
                                                             
                                                               
                                                                 
                                                                  
                                     
                     
                                                                                                       
                                             
                     
                   
                   
                                          
                                                  
                                                
                   
                                               
                        
                                
                   
                                                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                      
                         
                                        
                                    
                         
                                        
                                    
                         
                                      
                                    
                         
                                       
                                    
                         
                                       
                                    
                         
                                        
                                    
                               
                                    
                             
                                
                   
                               
                                                        
                                                                   
                                             
                       
                       
                                                                               
                                     
                            
                       
                     
                                                   
                   
                                
                                 
                 
               
             
           
         
             
            
      }
    while_break___1: /* CIL Label */;
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
             
                   
     
           
     
                 
                                      
                        
                           
         
                                    
                       
         
                                                    
                       
         
            
       
                                     
     
               
                     
  }
}
static int __attribute__((__pure__)) state_separate_contexts(position_set const *s) {
  int separate_contexts;
  size_t j;
  {
                         
                  
     
                 
                                      
                                      
                           
         
                                                                                                
                                 
         
                                                                                                
                                 
         
            
       
                                     
     
               
                                                              
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
          
           
                
  char *visited;
  char *tmp___2;
                
                 
                 
                
                       
  int tmp___8;
  {
    {
      tmp = (position *)xnmalloc(d->nleaves, 2UL * sizeof(*posalloc));
      posalloc = tmp;
                                       
                                      
      tmp___0 = (struct __anonstruct_stkalloc_43 *)xnmalloc(d->depth, sizeof(*stkalloc));
      stkalloc = tmp___0;
                     
      tmp___2 = (char *)xnmalloc(d->tindex, sizeof(*visited));
      visited = tmp___2;
      d->searchflag = (_Bool)(searchflag != 0);
      alloc_position_set(&merged, d->nleaves);
                                                                             
                   
     
     
                 
                                      
                               
                           
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                            
               
                                 
                            
                                
                                 
              
                          
               
                                              
                                 
                      
                      
         
                     
                                              
                                              
                                   
             
             
                                                                                                            
                             
                                                                                   
                  
             
           
                                         
         
                       
               
                                       
                                          
         
                          
               
                                              
                                 
                                             
                      
         
                     
                                              
                                              
                                   
             
             
                                                                                                            
                             
                                                                                   
                  
             
           
                                         
         
                       
                                   
                                                         
                
                                            
         
                                   
                                                       
                
                                               
                                   
           
                       
                                                
                          
                  
                                     
                                     
               
                                          
             
                                           
           
                        
                                          
                                                      
         
                                                                                              
              
                          
               
                                                       
                                                     
                                                                                              
              
                          
                        
                                                          
                            
                                
                                 
              
                   
                  
                    
                                 
                                  
                        
                                      
                                       
                                                      
       
                          
                   
            
       
                                     
     
              
                  
     
                 
                                          
                               
                               
         
                                      
           
                                                                  
                                                                
                                                                  
           
                
                                         
             
                                                                    
                                                                  
                                                                    
             
                  
                                           
               
                                                                      
                                                                    
                                                                      
               
                    
                                             
                 
                                                                        
                                                                      
                                                                        
                 
                      
                                               
                   
                                                                          
                                                                        
                                                                          
                   
                 
               
             
           
         
            
       
                                     
     
                  
                             
                  
     
                 
                                          
                                           
                               
         
         
                                           
              
         
       
                      /* CIL Label */;
    }
  while_break___4 : {
                                                        
                                                                                      
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
                    
                        
               
              
                    
                          
                      
                            
                      
                            
                       
                   
                        
                        
                  
                         
                         
                           
           
           
           
                
                         
                       
                           
                         
                         
                
                                 
        
                                 
                    
                  
                    
                  
                    
                    
                    
                    
  {
    {
                       
                                    
                       
                    
     
     
                 
                                      
                                                  
                           
         
                                                  
                                             
                                                
             
                                                                      
             
                  
                        
           
                
               
                                                 
             
                                                                                                             
                               
             
                  
                                                   
                      
                    
                                                     
                 
                                                       
                                                         
                 
                                                         
                   
                                                                          
                   
                 
                 
                                                      
                 
               
             
                        
           
         
                                      
                                                                                          
                          
             
                         
                                                  
                                 
                                       
                 
                                          
                    
               
                                              
             
                           
           
                                                                                          
                          
             
                         
                                                  
                                 
                                       
                 
                                          
                    
               
                                              
             
                           
           
                                                                                   
                          
             
                         
                                                  
                                 
                                       
                 
                                                      
                    
               
                                              
             
                           
           
                        
           
                       
                                                
                            
                                     
                                       
                 
                      
                                     
               
                              
                       
                  
             
                                            
           
                         
                         
                        
           
         
                      
         
                     
                                              
                               
                                   
             
                                                 
                                                    
                 
                                                                                                                       
                 
                               
                                  
                 
               
             
                                           
                          
             
                         
                                                  
                                 
                                       
                 
                                                    
                                       
                                      
                    
               
                                              
             
                           
                              
                              
             
                                         
                                  
                          
             
                         
                                                  
                                 
                                       
                 
                                   
                                         
                                             
                                       
                                      
                                             
                                     
                                    
                    
               
                                              
             
                           
                             
               
                                                                                   
                                                                               
                                                                                                 
                                                                                                                                            
                                                                     
                                                  
                        
               
             
                                    
                              
                                                   
                            
                                   
             
                     
                
           
                                          
         
                       
                         
           
                                                                             
                             
                                                                                             
                                          
                                                 
                    
           
         
             
            
       
                      /* CIL Label */;
    }
  while_break : {
                                            
                                         
   
                        
       
                                                                        
                                                                                           
                                                                                        
       
                                  
         
                                                                              
         
              
                              
       
                                  
         
                                                                             
         
              
                             
       
                    
       
                   
                                            
                             
                                 
           
           
                                      
           
                                                      
                                            
                  
                            
                                              
                    
                                       
             
           
              
         
                                        
       
                    
                                                      
            
                    
       
                   
                                            
                             
                                 
           
                                           
              
         
                                        
       
                     
     
                  
     
                 
                                          
                           
                               
         
                                  
                      
         
                     
                                               
                                       
                                    
             
                          
             
                         
                                                   
                                                                        
                                        
                 
                 
                                                                                      
                      
                 
               
                                              
             
                           
                
           
                                          
         
                        
                           
                                        
                        
           
                       
                                                 
                                         
                                      
               
                                                                             
                                              
                                      
               
                  
             
                                            
           
                          
         
                            
                              
             
                                                                                                      
                          
                                                           
             
                  
                                      
               
                                                                                                        
                            
                                                             
               
             
           
         
         
                                                           
                                                                                             
         
                                                                           
           
                                                                                            
           
                
                                
         
                                                          
           
                                                                                
           
                
                                
         
                                                          
           
                                                                               
           
                
                               
         
                      
         
                     
                                               
                             
                                    
             
                          
             
                         
                                                   
                                  
                                        
                 
                                               
                                          
                                              
                                                     
                          
                     
                                                
                     
                                                           
                                                      
                            
                                    
                                                        
                              
                                      
                                                   
                         
                       
                     
                   
                 
                    
               
                                              
             
                           
                
           
                                          
         
                       
            
       
                                      
     
                  
                  
     
                 
                                           
                           
                                
         
         
                                      
              
         
       
                                      
     
                      
                                
                            
  }
           
  }
}
static void realloc_trans_if_necessary(struct dfa *d, state_num new_state) {
                     
  state_num **realtrans;
  state_num **tmp;
  size_t newalloc;
  size_t newalloc1;
  {
                          
                                 
                    
                           
              
                                        
        
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
                    
                        /* CIL Label */;
                                              
                             
            
                                                            
                                                            
                     
          
      while_break___0: /* CIL Label */;
      }
    while_break:;
      
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
                       
  {
    {
                           
                                
                     
                                          
                                           
                                      
                                             
                                                                 
                                   
    }
    return;
  }
}
static status_transit_state transit_state_singlebyte(struct dfa *d, state_num s,
                                                     unsigned char const *p, state_num *next_state) {
  state_num *t;
  state_num works;
  status_transit_state rval;
  {
    works = s;
    rval = (status_transit_state)0;
    {
      while (1) {
                                     
                                          
                           
         
                                
                                                             
                                         
                                         
                           
                                 
           
                
                           
                                 
                  
                                      
                                                               
                                             
                    
               
                                      
               
             
           
          
      }
    while_break___0: /* CIL Label */;
    }
  while_break:
    *next_state = works;
    return (rval);
  }
}
                                                                            
                                         
              
                   
                       
                       
   
                                               
                                                                           
                   
       
            
                     
                                                                                 
                     
         
              
                                
                     
         
       
     
     
                                  
     
                      
                                 
            
               
     
                      
                                            
            
                   
     
                      
                                            
            
                   
     
                                                                                  
                 
     
                         
   
 
                                                                                    
                                                          
           
              
             
                       
                                   
              
                   
                       
                       
                        
                
              
              
              
                 
                    
   
                                               
                                                                           
                   
       
            
                     
                                                                                 
                     
         
              
                                
                     
         
       
     
     
                                  
     
                      
                                 
            
               
     
                      
                                            
            
                   
     
                      
                                            
            
                   
     
                                                                                  
                 
     
                                                                    
                                       
                    
                                  
         
                                           
                                                                                                                       
         
                      
                               
         
       
     
                  
     
                 
                                      
                                           
                           
         
         
                                                              
         
                      
                               
         
            
       
                                     
     
                 
                                                                                      
                       
                                         
                  
   
     
                 
                                          
                                       
                               
         
         
                                                                      
                                                                                            
                                  
                                            
                                                                                               
         
                           
                                     
                               
         
            
       
                                     
     
                  
                  
     
                 
                                          
                                           
                               
         
         
                                                                          
                                                                                            
                                  
                                            
                                                                                                   
         
                           
                                     
                               
         
            
       
                                     
     
                  
                  
     
                 
                                          
                                       
                               
         
                                                        
                                                          
                                 
           
         
            
       
                                     
     
                  
                  
     
                 
                                          
                                      
                               
         
                                                     
                               
         
            
       
                                     
     
                  
                            
                  
                
                          
            
                          
     
                          
   
 
                                                                                        
                                                                         
           
              
               
   
                              
                  
     
                 
                                      
                                                 
                           
         
                                                 
                                               
                        
         
                                               
                        
         
                            
                  
                                                             
       
                          
                  
                                                                   
       
                          
                     
                          
                   
            
       
                                     
     
               
                    
   
 
                                                                                   
                                                                                 
                                                                                 
                                                                          
           
           
        
               
               
                          
                           
   
                                 
                      
                                               
         
                                                                                     
                                                                 
         
       
     
           
          
     
                 
                                      
                                    
                           
         
         
                  
                    
                  
                                                         
              
         
       
                                     
     
                 
                                                                           
                  
   
     
                 
                                          
                                                 
                               
         
                                                    
                        
           
                       
                                                
                                                                                          
                                     
               
               
                                                                                             
                                       
                    
               
             
                                           
           
                         
         
            
       
                                     
     
                   
                
   
  
static state_num transit_state(struct dfa *d, state_num s, unsigned char const **pp,
                               unsigned char const *end) {
  state_num s1;
  int mbclen;
  int maxlen;
          
           
                  
  size_t nelem;
  unsigned char const *p1;
  wint_t wc;
  status_transit_state rs;
  int tmp;
  int tmp___0;
  {
    maxlen = 0;
                                   
                                        
             
                      
       
                                                                                   
                                                                                   
                                                                       
                      
       
       
                   
                                        
                             
                             
           
                                           
                                       
           
              
         
                                       
       
                 
      
    if (nelem == 0UL) {
      goto _L;
    } else {
      if (maxlen == 0) {
      _L : {
        rs = transit_state_singlebyte(d, s, *pp, &s1);
      }
        if ((unsigned int)rs == 1U) {
          (*pp)++;
        }
        return (s1);
      }
    }
    {
      d->mb_follows.nelem = (size_t)0;
                                                                           
                              
                                                                       
                                        
     
     
                 
                                          
                                         
                               
         
         
                                                                                     
                                                                                         
                        
         
         
                     
                                              
                               
                                   
             
                                                      
                            
               
                           
                                                    
                                                                                               
                                         
                   
                   
                                                                                                  
                                           
                        
                   
                 
                                               
               
                             
             
                
           
                                         
         
                         
                                    
                                                                             
                                          
       
       
                     /* CIL Label */;
    }
  while_break___0:;
                
  }
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
            
             
                               
  unsigned char const *tmp___1;
  state_num tmp___2;
  unsigned char const *tmp___3;
  unsigned char const *tmp___4;
  {
                      
    nlcount = (size_t)0;
                     
       
                            
       
      
                      
           
    mbp = (unsigned char const *)begin;
    p = mbp;
                        
                                        
                     
                       
       
                                                     
       
                              
         
                                                                                      
                                                         
         
       
      
    {
                  
                      /* CIL Label */;
                            
          {
                        
                                /* CIL Label */;
                              
                                   
                                                                      
                                     
               
                     
                            
                 
                             
                                                      
                                                                   
                                           
                     
                     
                                                                                                             
                                            
                                 
                     
                   
                                                 
                 
                              
                        
                                                                      
                                                         
                            
                 
               
                                                       
                            
                    
                                                 
                                        
                
                                                 
                if (backref) {
                  *backref = 1;
                  goto done;
                }
                
              {
                s = transit_state(d, s, &p, (unsigned char const *)((unsigned char *)end));
                mbp = p;
                trans___0 = d->trans;
              }
              
          while_break___3: /* CIL Label */;
          }
        while_break___0:;
                 
          {
            while (1) {
                                /* CIL Label */;
              t = *(trans___0 + s);
              if (!((unsigned long)t != (unsigned long)((void *)0))) {
                goto while_break___2;
              }
              tmp___1 = p;
              p++;
              s1 = *(t + (int const) * tmp___1);
                                    
                                                                    
                tmp___2 = s;
                s = s1;
                s1 = tmp___2;
                goto while_break___2;
                
              tmp___3 = p;
              p++;
              s = *(t + (int const) * tmp___3);
            }
          while_break___5: /* CIL Label */;
          }
        while_break___2:;
          
        if ((unsigned long)((char *)p) > (unsigned long)end) {
          p = (unsigned char const *)((void *)0);
          goto done;
        }
                     
                                
                                               
                            
                                                             
               
                        
             
                   
                               
               
                                                                                           
                        
                                     
               
                    
                          
                  
                                                             
             
                        
           
         
                                                       
                                                                   
                      
                    
           
         
                      
                                 
             
                                
             
           
                               
                      
          
        if ((int const) * (p + -1) == (int const)eol) {
          if (allow_nl) {
                                   
                        
          }
        }
        s = (state_num)0;
      __Cont:;
        
    while_break: /* CIL Label */;
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
                                       
           
           
                            
   
     
                                      
                    
     
     
                 
                                      
                                 
                           
         
         
                             
                                 
                                      
                                  
                        
         
         
                     
                                              
                                    
                                   
             
             
                                             
                  
             
           
                                         
         
                         
                                
                      
       
         
                     
                                              
                                        
                                   
             
             
                                                 
                  
             
           
                                         
         
                         
                                    
            
       
       
                                     
     
                 
                             
                                      
                                   
                                          
   
           
   
 
                             
             
   
     
                                       
                                     
                                        
                                       
     
           
   
 
                                        
           
                     
          
   
     
                              
                         
     
               
             
     
                  
     
                 
                                      
                               
                           
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                            
                  
                
       
               
                                
                          
               
               
                     
                          
                   
            
       
                                     
     
               
                        
                        
         
                               
                                    
                                                  
         
       
     
     
                     
                              
     
           
   
 
                                       
           
           
                
                   
                   
                  
                  
                 
                 
                 
                 
                 
                    
   
     
                            
                            
                       
                
                
                                
                                               
                                                           
                                                
                                             
                                 
                                                 
                                  
                                             
                                             
                                        
                                               
                                                 
                                                                                         
                                                                                                                                  
                                                      
                                                                               
                                    
                    
            
     
     
                 
                                      
                               
                           
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                                       
                        
         
                            
                  
                     
                    
                    
            
                                                                                 
                                                            
                    
            
                                              
       
                                               
              
                
                                                 
                
                  
                                                   
                  
             
           
         
                              
                          
               
                           
                      
              
                                                
                                        
                            
         
                     
                    
            
                                                    
                                     
                                        
                                  
                  
                    
           
                
           
                                         
                                  
           
         
                          
                   
            
       
                                     
     
              
                    
                     
                       
                          
              
                           
                            
                
           
                         
                              
           
         
       
            
       
                     
                          
       
     
           
   
  
void dfacomp(char const *s, size_t len, struct dfa *d, int searchflag) {
  {
    {
                
                    
      dfaparse(s, len, d);
      dfamust(d);
                   
                     
      dfaanalyze(d, searchflag);
    }
                     
       
                           
                                            
       
     
           
  }
}
void dfafree(struct dfa *d) {
           
                    
                      
  {
    {
      free((void *)d->charclasses);
                              
    }
                      
       
                       
       
      
                 
     
                 
                                      
                                       
                           
         
         
                                                     
                                                    
              
         
       
                                     
     
                 
                            
   
                     
                    
       
                   
                                            
                                 
                                 
           
           
                                                  
                
           
         
                                       
       
                       
                               
     
      
    if (d->trans) {
                   
       
                   
                                            
                                          
                                 
           
           
                                          
                                          
                
           
         
                                       
       
                      {
                                  
                             
                                
                               
    }
    }
                 
     
                 
                                          
                  
                               
         
         
                         
                                 
                           
                   
         
       
                                     
     
                   
                      
       
                             
       
     
           
  }
}
static char *icatalloc(char *old, char const *new) {
              
                 
                 
             
  {
    {
                       
                    
     
                         
                   
     
     
                                          
                                                                       
                                                                                                                         
                            
    }
                    
  }
}
                                                                                        
                 
             
          
   
     
                            
                  
     
     
                 
                                      
                                       
                           
         
         
                                          
         
                       
                                                                        
         
             
       
                                     
     
               
                                                                           
   
 
                                  
             
   
     
                 
                                      
                    
                           
         
         
                    
                
                             
         
       
                                     
     
               
           
   
  
static char **enlist(char **cpp, char *new, size_t len) {
           
          
            
                                          
                                          
  {
    {
                              
                                                                                                              
                                
                                 
                    
     
     
                 
                                      
                                                                         
                           
         
         
                                                                         
         
                                                                   
           
                              
           
                       
         
            
       
                     /* CIL Label */;
    }
  while_break:
                  
    {
                
                                          
                                                                         
                               
         
         
                                                                         
         
                                                                   
              
                
           
                                     
                
           
                       
                                 
           
                                  
                                           
         
       
                                     
     
                     
                                                                 
                     
                                             
  }
                 
  }
}
                                                     
             
             
            
             
            
                
           
   
     
                                           
                
                 
     
     
                 
                                      
                                
                           
         
         
                          
                                             
                        
         
         
                     
                                              
                                                                      
                                   
             
                          
             
                         
                                                  
                                           
                                                              
                                         
                   
                        
                                       
                 
                            
                     
                    
               
                                             
             
                           
                          
                      
             
             
                                                               
             
           
                                         
         
                       
                         
           
                                        
           
         
              
       
                                     
     
               
                 
   
  
static char **addlists(char **old, char **new) {
             
  {
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!*new) {
          goto while_break;
        }
        {
                                          
                                       
                 
        }
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
                 
  }
}
static char **inboth(char **left, char **right) {
  char **both;
  char **tmp;
              
             
              
                 
  {
    {
      tmp = (char **)xzalloc(sizeof(*both));
                
                       
     
     
                 
                                      
                                                                             
                           
         
                         
         
                     
                                              
                                                                                  
                                   
             
             
                                                                               
                             
                                          
                             
                                 
                     
             
           
                                         
         
                      
               
       
                     /* CIL Label */;
    }
  while_break:;
                  
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
                                             
                                 
                                 
                        
    }
    return (new_mp);
  }
}
                                
           
               
   
     
                       
                                          
                             
                              
                    
                             
                            
                             
                             
     
           
   
  
static void freemust(must *mp) {
  {
    {
                       
                           
      free((void *)mp->left);
                              
                          
                       
    }
           
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
                     
                          
                       
    ri = (size_t)0;
    {
                  
                      /* CIL Label */;
        if (!(ri < d->tindex)) {
          goto while_break;
        }
                             
                        
                        
          
                         
          goto case_259;
          
                       
                        
          
                       
                        
         
                        
                        
         
                        
                        
         
                        
                        
          
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
                       
         
                        
                        
         
                        
                        
         
                        
                        
         
                        
                        
        }
        if (t == -1L) {
                         
         
                        
                        
         
                      
                      
         
                            
                  
                           
                               
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
                                             
                                             
                                                                      
                                     
               
                    
                                   
             
                
           
                                         
         
                         
                                        
                                              
                                              
               
       
                     
                 
         
                      
         
                     
                                              
                          
                                   
             
                                                                                                 
                                   
             
                
           
                                         
         
                      
                      
         
                     
                                              
                           
                                   
             
                                                               
            j++;
          }
        while_break___10: /* CIL Label */;
        }
      while_break___2 : {
                                        
                                       
                          
                              
                      
                      
      }
        goto switch_break;
      case_266:
                                    
                          
      case_neg_1:
        if (!(!mp->prev)) {
          {
            __assert_fail("!mp->prev", "/home/khheo/project/benchmark/grep-2.19/src/dfa.c",
                          4011U, "dfamust");
          }
        }
                     
         
                     
                                              
                                                                                
                                   
             
             
                                                            
                                       
             
                                    
                                                   
             
                
           
                                          
         
                        {
        tmp___2 = strcmp(result, (char const *)mp->is);
      }
        if (tmp___2 == 0) {
                          
                                    
          endline = mp->endline;
        }
        goto done;
      case_268 : {
        rmp___0 = mp;
                     
                     
                                                         
       
                                              
                                              
             
                                                             
                              
                                                            
                              
                                                      
                           
                                                                                                                            
                            
                                                                                                                                     
                            
                                                                   
                               
             
           
         
                                           
           
                                                                                  
           
         
                                           
                                               
         
         
                                                                                   
        }
        if ((int)*(lmp___0->is + 0) != 0) {
          goto _L;
        } else {
          if (lmp___0->begline) {
          _L:
            if ((int)*(rmp___0->is + 0) != 0) {
              {
                lmp___0->is = icatalloc(lmp___0->is, (char const *)rmp___0->is);
                                                   
               
                    
                                     
                 
                                                                                  
                                                      
                 
                      
                                                  
                                            
                                            
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
                                           
                    
           
                       
                                                
                                   
                                     
               
               
                                                                                             
               
                            
                                     
               
                      
             
                                            
           
                        ;
          if (!(j___0 < 256)) {
            goto switch_break;
          }
          t = (token)j___0;
          {
            while (1) {
            while_continue___5: /* CIL Label */;
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
                                               
                     
                                                
                                           
                    }
                  } else {
                    goto while_break___5;
                  }
                } else {
                  goto while_break___5;
                }
              }
            }
          while_break___13: /* CIL Label */;
          }
        while_break___5:;
                           
                              
           
         
                        
                              
             
                                         
                                        
             
                  
                               
            
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
        
    while_break___7: /* CIL Label */;
    }
  while_break:;
  done:
    if (*result) {
      {
        dm = (struct dfamust *)xmalloc(sizeof(*dm));
                         
                                  
                              
                                   
                            
                      
      }
    }
    {
      while (1) {
      while_continue___6: /* CIL Label */;
        if (!mp) {
          goto while_break___6;
        }
        {
          prev = mp->prev;
          freemust(mp);
          mp = prev;
        }
      }
    while_break___14: /* CIL Label */;
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
          while_continue: /* CIL Label */;
            if (!(i < 256)) {
              goto while_break;
            }
            {
                                         
                  
            }
          }
        while_break___0: /* CIL Label */;
        }
      while_break : {
        *kwset___1 = kwsalloc((char const *)(trans));
      }
      } else {
        {
          *kwset___1 = kwsalloc((char const *)((void *)0));
        }
      }
    } else {
      {
        *kwset___1 = kwsalloc((char const *)((void *)0));
      }
    }
    if (!*kwset___1) {
      {
        xalloc_die();
      }
    }
    return;
  }
}
static char *out;
static mb_len_map_t *len_map;
static size_t outalloc;
char *mbtoupper(char const *beg, size_t *n, mb_len_map_t **len_map_p) {
  size_t outlen;
  size_t mb_cur_max;
  mbstate_t is;
  mbstate_t os;
  char const *end;
  char *p;
  mb_len_map_t *m;
  _Bool lengths_differ;
  wchar_t wc;
  size_t mbclen;
  size_t tmp;
  size_t dm;
  mb_len_map_t *tmp___0;
               
                      
                 
                 
                    
                    
  {
    lengths_differ = (_Bool)0;
                       
              
            
                            
        
                       
                               
                
                        
         
         
                                                        
                                                                        
         
        
     
               
       
                                                                                         
                                        
       
     
                   
       
                                                                                             
                                        
       
      
    if (*n == 0UL) {
      return (out);
    }
    {
      memset((void *)(&is), 0, sizeof(is));
                                          
                     
                                            
              
                  
      outlen = (size_t)0;
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((unsigned long)beg < (unsigned long)end)) {
          goto while_break;
        }
        {
          tmp = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */)beg,
                        (size_t)(end - beg), (mbstate_t * /* __restrict  */)(&is));
          mbclen = tmp;
        }
        if (outlen + mb_cur_max >= outalloc) {
          {
                                      
                                                                        
                                                                          
                             
                             
          }
        }
        if (mbclen == 0xffffffffffffffffUL) {
          goto _L___0;
        } else {
          if (mbclen == 0xfffffffffffffffeUL) {
            goto _L___0;
          } else {
            if (mbclen == 0UL) {
            _L___0 : {
              tmp___0 = m;
              m++;
                                        
                          
                  
                            
                    
                                        
                       
                                                   
                                                   
            }
            } else {
              {
                             
                                               
                                                                                                                       
                                                      
                                                          
                             
                             
                                  
                                                                                    
              }
            }
          }
        }
      }
    while_break___0: /* CIL Label */;
    }
  while_break:;
    if (lengths_differ) {
      *len_map_p = len_map;
    } else {
      *len_map_p = (mb_len_map_t *)((void *)0);
    }
    *n = (size_t)(p - out);
    *p = (char)0;
    return (out);
  }
}
void build_mbclen_cache(void) {
  int i;
  char c;
  unsigned char uc;
  mbstate_t mbs;
  void *__cil_tmp6;
  {
    i = -128;
    {
      while (1) {
                      /* CIL Label */;
        if (!(i <= 127)) {
                          
         
         
                      
                                
                          
                                 
                                                                                        
                                                                                      
          i++;
        }
      }
                     /* CIL Label */;
    }
  while_break:;
           
  }
}
ptrdiff_t mb_goback(char const **mb_start, char const *cur, char const *end) {
  char const *p;
  char const *p0;
  mbstate_t cur_state;
  size_t mbclen;
  unsigned char tmp;
  long tmp___0;
  void *__cil_tmp11;
  {
    {
      p = *mb_start;
      p0 = p;
      memset((void *)(&cur_state), 0, sizeof(cur_state));
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!((unsigned long)p < (unsigned long)cur)) {
          goto while_break;
        }
        {
          tmp = to_uchar((char)*p);
          mbclen = mbclen_cache[tmp];
        }
        if (mbclen == 0xfffffffffffffffeUL) {
          {
                                                                                                                              
           
         
                           
                                                 
             
                                 
                                                                 
             
           
                
           
                               
            memset((void *)(&cur_state), 0, sizeof(cur_state));
          }
        }
        p0 = p;
        p += mbclen;
      }
    while_break___0: /* CIL Label */;
    }
  while_break:
    *mb_start = p;
    if ((unsigned long)p == (unsigned long)cur) {
      tmp___0 = 0L;
    } else {
      tmp___0 = cur - p0;
    }
    return (tmp___0);
  }
}
wint_t mb_prev_wc(char const *buf, char const *cur, char const *end) {
  char const *p;
  ptrdiff_t tmp;
  wint_t tmp___0;
  {
    if ((unsigned long)cur == (unsigned long)buf) {
                          
     
     
              
            
                                    
                 
                                     
    }
    return (tmp___0);
  }
}
wint_t mb_next_wc(char const *cur, char const *end) {
  wchar_t wc;
  mbstate_t mbs;
  unsigned int tmp___0;
  size_t tmp___1;
  void *__cil_tmp8;
  {
    mbs.__count = 0;
    mbs.__value.__wch = 0U;
    if (end - cur != 0L) {
      {
        tmp___1 = mbrtowc((wchar_t * /* __restrict  */)(&wc), (char const * /* __restrict  */)cur,
                          (size_t)(end - cur), (mbstate_t * /* __restrict  */)(&mbs));
      }
      if (tmp___1 < 0xfffffffffffffffeUL) {
        tmp___0 = (unsigned int)wc;
      } else {
        tmp___0 = 4294967295U;
      }
    } else {
      tmp___0 = 4294967295U;
    }
    return (tmp___0);
  }
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
                                                                         
                                                                                                        
                                                                                                                                   
                                                                               
                                                                                  
                                                                                
                                                                                  
                                                                        
                            
static int show_help;
static int show_version;
                           
static int color_option;
static int only_matching;
static int align_tabs;
static char const *group_separator = "--";
                                                 
                                                 
                                         
static char const *line_num_color = "32";
                                        
                                    
                                           
                                           
                                                
                                            
                                        
   
             
       
                                           
       
     
           
   
 
                                       
   
             
       
                                    
       
     
           
   
 
                                            
   
                       
       
                        
       
     
           
   
 
                                         
   
                       
       
                      
       
     
           
   
 
                                    
   
                                               
           
   
 
                                   
   
                      
           
   
  
static void color_cap_ne_fct(void) {
                  
                   
  {
                          
                       
           
  }
}
                                             
                                                      
                                                                
                                                               
                                                          
                                                          
                                                          
                                                     
                                                               
                                                              
                                                           
                                                           
                                                                                           
                                         
                                                   
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
                           
static char const *filename;
static size_t filename_prefix_len;
                  
                            
static char const *const directories_args[4] = {(char const * /* const  */) "read", (char const * /* const  */) "recurse", (char const * /* const  */) "skip", (char const * /* const  */)((char const *)((void *)0))};
static enum directories_type const directories_types[3] = {(enum directories_type const)2, (enum directories_type const)3, (enum directories_type const)4};
static enum directories_type directories = (enum directories_type)2;
static int fts_options = 793;
                                                                          
static int grepfile(int dirdesc, char const *name, int follow, int command_line);
static int grepdesc(int desc, int command_line);
                            
                                        
                                                     
                                    
          
   
                                
              
            
                                   
                
              
                                     
                 
                
                                      
                    
                  
                    
           
         
        
     
                 
   
 
                                                 
          
   
                                           
              
            
                                      
                
              
                
        
     
                 
   
  
static void (*compile)(char const *, size_t);
static size_t (*execute)(char const *, size_t, size_t *, char const *);
                                                             
   
                           
       
                                    
       
     
                
           
   
 
                                  
   
                            
       
                       
       
     
           
   
  
static int file_is_binary(char const *buf, size_t bufsize, int fd, struct stat const *st) {
           
                
  off_t cur;
                  
                
               
                  
              
  {
    if (!eolbyte) {
      {
                                                         
      }
                                                               
     
     
                                                           
     
                  
                 
     
     
                                   
     
                  
                           
      if (fd == 0) {
        {
          cur = lseek(fd, (__off_t)0, 1);
        }
                      
                     
         
       
       
                                    
                             
       
                             
         
                                      
         
                          
           
                                         
                                                   
           
         
                                              
                     
          
      }
    }
    return (0);
  }
}
static void context_length_arg(char const *str, intmax_t *out___0) {
  strtol_error tmp;
               
                   
                   
  {
    {
      tmp = xstrtoimax(str, (char **)0, 10, out___0, "");
    }
                                 
                  
     
                                  
                  
     
                        
         
                         
                        
     
                   {
                                                        
                                        
  }
  switch_break:;
    return;
  }
}
static int skipped_file(char const *name, int command_line, int is_dir) {
           
              
                
  int tmp___2;
  int tmp___3;
  {
    if (is_dir) {
                                           
                    
              
                           
                                           
                       
                  
                    
            
                
           
                                            
             
                                                                                          
                                             
             
                      
                          
                    
                          
             
                  
                        
           
          
       
                        
            
                              
         
                                                                                        
         
                      
                      
                
                      
         
              
                    
        
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
              
                
                   
  {
                     
      {
        pagesize = (size_t)getpagesize();
      }
                           
         
                  
         
              
                                               
           
                    
           
         
        
                                       
        tmp = (size_t)32768;
               
                                                        
        
      {
        bufalloc = (tmp + pagesize) + 1UL;
        buffer = (char *)xmalloc(bufalloc);
      }
      
                                                  
                          
             
      buflim = (buffer + 1) + (pagesize - (size_t)(buffer + 1) % pagesize);
      
    bufbeg = buflim;
    *(bufbeg + -1) = (char)eolbyte;
    bufdesc = fd;
                                          
                    
                             
              
         
                                               
         
                             
           
                                         
                                              
                                                                
           
                     
         
       
     
               
  }
}
static int fillbuf(size_t save, struct stat const *st) {
  ssize_t fillsize;
         
  char *readbuf;
  size_t readsize;
                     
                 
                 
                  
               
                   
                    
          
                
  {
          
                                                      
                                                              
      readbuf = buflim;
      bufbeg = buflim - save;
             
                               
                                            
       
                   
                                        
                                     
                             
           
                                        
             
                           
             
                  
                                                                   
               
                             
               
             
           
                         
         
                                       
       
                   
                               
     
                
                                                                     
                                                         
                               
                                          
                                                             
                                                   
                                                    
                                                
                 
               
             
           
         
       
                                            
                                
         
                              
                                      
                                   
         
              
                        
       
                                                            
                                      
              
                                                                                                
       
       
                                
                                                                             
                                       
       
                                                           
         
                               
                          
         
        
      
    {
      readsize = (size_t)((buffer + bufalloc) - readbuf);
                                      
      fillsize = (ssize_t)safe_read(bufdesc, (void *)readbuf, readsize);
    }
                       
             
                             
      
    {
                           
                                                                     
      buflim = readbuf + fillsize;
    }
                
  }
}
static enum __anonenum_binary_files_72 binary_files;
static int filename_mask;
static int out_quiet;
static _Bool out_invert;
static int out_file;
static int out_line;
static int out_byte;
                          
                          
static int count_matches;
static int list_files;
static int no_filenames;
static intmax_t max_count;
                        
                                         
                         
static char const *lastnl;
                           
static uintmax_t totalnl;
static intmax_t outleft;
                        
static int done_on_match;
static int exit_on_match;
                                     
                                              
                                                  
                                         
                                   
                                
                                
                           
                           
                              
   
           
   
 
                                         
   
           
   
  
static int undossify_input(char *buf, size_t buflen) {
                
              
            
                
              
                
                 
  {
                        
                   
                         
                      
                      
                           
                                  
                                        
     
                                            
       
                                                           
       
      
                                           
                  
       
                   
                                        
                           
                   
                         
                             
           
                                
                        
                    
                          
                  
                            
                         
                  
                  
                           
                                            
                                   
                 
                             
                                                      
                                 
                                               
                                             
                       
                            
                                           
                     
                                       
                             
                          
                   
                                                 
                 
                               
                                                          
                                    
                                                       
                          
                                            
                   
                   
                                                                                                                                            
                   
                 
                                   
                                                              
                                        
                                
                                                          
                                                              
                 
                              
                                      
                                      
                        
                                  
                 
                                                                                                          
                                                                    
                                               
                                                                                                          
               
             
           
         
                                       
       
                 
                          
      
    return ((int)buflen);
  }
}
                                         
               
               
   
                    
                                            
                      
            
                                   
                        
       
     
                                                    
                                              
                           
                    
       
                   
                                        
                                               
                                                                
                               
             
                  
                             
           
                        
         
                                       
       
                 
            
                            
                      
         
                     
                                              
                                  
                                                                       
                                     
               
                    
                                   
             
                          
           
                                         
         
                       
       
     
                                                       
   
  
static uintmax_t add_count(uintmax_t a, uintmax_t b) {
  uintmax_t sum;
           
                   
  {
    sum = a + b;
                 
       
                                                     
                                       
       
      
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
                      /* CIL Label */;
        if (!((unsigned long)beg < (unsigned long)lim)) {
          goto while_break;
        }
        {
          beg = (char const *)memchr((void const *)beg, (int)eolbyte, (size_t)(lim - beg));
        }
                  
                           
          
        newlines++;
        beg++;
      }
                     /* CIL Label */;
    }
  while_break : {
    totalnl = add_count(totalnl, newlines);
                 
  }
           
  }
}
static void print_filename(void) {
  {
    {
                                      
      fputs_unlocked((char const * /* __restrict  */)filename, (FILE * /* __restrict  */) stdout);
                                    
    }
           
  }
}
static void print_sep(char sep) {
  {
    {
                                 
      fputc_unlocked((int)sep, stdout);
                               
    }
           
  }
}
static void print_offset(uintmax_t pos, int min_width, char const *color) {
  char buf[sizeof(pos) * 8UL];
  char *p;
                   
  {
    p = buf + sizeof(buf);
    {
      while (1) {
                      /* CIL Label */;
        p--;
        *p = (char)(48UL + pos % 10UL);
                    
        pos /= 10UL;
        if (!(pos != 0UL)) {
          goto while_break;
        }
      }
                     /* CIL Label */;
    }
  while_break:;
                    
       
                   
                                            
                      
                                  
                                 
           
              
                         
         
                                       
       
                     
      
    {
                             
      fwrite_unlocked((void const * /* __restrict  */)((void const *)p), (size_t)1,
                      (size_t)((buf + sizeof(buf)) - p), (FILE * /* __restrict  */) stdout);
                           
    }
           
  }
}
static void print_line_head(char const *beg, char const *lim, int sep) {
  int pending_sep;
               
                
  {
    pending_sep = 0;
    if (out_file) {
      {
        print_filename();
      }
                           
                       
               
         
                                    
         
        
    }
    if (out_line) {
                                                        
        {
          nlscan(beg);
          totalnl = add_count(totalnl, (uintmax_t)1);
          lastnl = lim;
        }
        
                       
         
                               
         
        
      {
        print_offset(totalnl, 4, line_num_color);
        pending_sep = 1;
      }
    }
                  
       
                                                                          
                  
                                                   
       
                        
         
                               
         
       
       
                                             
                        
       
      
    if (pending_sep) {
                      
         
                                                                                                     
         
        
      {
        print_sep((char)sep);
      }
    }
           
  }
}
static char const *print_line_middle(char const *beg, char const *lim, char const *line_color,
                                     char const *match_color) {
  size_t match_size;
  size_t match_offset;
  char const *cur;
                  
  char const *b;
          
  {
    cur = beg;
                                    
    {
                  
                      /* CIL Label */;
                                                       
          {
            match_offset = (*execute)(beg, (size_t)(lim - beg), &match_size, beg + (cur - beg));
          }
          if (!(match_offset != 0xffffffffffffffffUL)) {
            goto while_break;
          }
                 
                           
          
        b = beg + match_offset;
                                                    
                           
          
                                 
                                
                     
                      
            
                 
                             
                             
                        
                    
                        
             
             
                                           
             
                  
             
                                       
             
                      
                        
                                              
             
             
                                                                                                
                                                                                    
             
            
          {
                                         
            fwrite_unlocked((void const * /* __restrict  */)((void const *)b), sizeof(char),
                            match_size, (FILE * /* __restrict  */) stdout);
                                       
          }
                               
            {
              fputs_unlocked((char const * /* __restrict  */) "\n", (FILE * /* __restrict  */) stdout);
            }
            
          
        cur = b + match_size;
        
                     /* CIL Label */;
    }
  while_break:;
                         
      cur = lim;
             
               
                  
        
      
    return (cur);
  }
}
                                                                                             
                  
                   
          
              
   
                                                  
                                                           
                
              
                
       
            
              
     
                           
                                                               
                                                          
                    
              
                    
       
            
                  
     
                                
                                                 
                          
       
                                 
                                                                                       
                                                                      
                         
                               
       
     
                 
   
  
static void prline(char const *beg, char const *lim, int sep) {
               
  char const *line_color;
  char const *match_color;
             
                
              
                    
  {
                          
      {
        print_line_head(beg, lim, sep);
      }
      
                                            
                       
                       
                               
                      
                
                      
         
              
                    
       
                                  
                                         
              
                                        
       
                      
                                           
              
                                          
       
            
                                              
                               
      
    if (only_matching) {
                      
        goto _L___0;
               
                    
        
    } else {
    _L___1:
      if (color_option) {
                           
                      
                 
                              
          _L___0:
                            
                                   
                {
                  beg = print_line_middle(beg, lim, line_color, match_color);
                }
                       
                                  
                   
                                                                               
                   
                  
                
              
                                
                                
                 
                                                              
                 
               
              
            
          
      }
    }
                          
                                                     
        {
          fwrite_unlocked((void const * /* __restrict  */)((void const *)beg), (size_t)1,
                          (size_t)(lim - beg), (FILE * /* __restrict  */) stdout);
        }
        
      
    {
                                        
    }
                 
       
                             
                                         
                                           
       
     
                  
                        
       
                                
       
     
           
  }
}
                                       
                 
                  
                    
                 
   
                   
                                     
     
     
                 
                                      
                           
                                                               
                             
           
                
                           
         
         
                                                                                                   
                   
                    
         
                      
           
                                         
           
                
           
                                                                                                                
           
                                                                 
             
                                           
             
                  
                                  
           
         
       
                                     
     
               
           
   
  
static _Bool used;
static void prtext(char const *beg, char const *lim) {
  char eol;
  char const *p;
                
                  
             
                 
                      
  intmax_t n;
  char const *nl___0;
  char const *tmp___1;
  {
    eol = (char)eolbyte;
                    
                         
         
                         
         
       
      
    p = beg;
                    
                    
                      
              
                                   
       
               
                      
       
                   
                                        
                                  
                             
           
                                                     
             
                         
                                                  
                    
                                                                  
                                       
                 
               
                                             
             
                           
           
              
         
                                       
       
                 
                             
                
              
                              
           
                     
                                                             
                                    
                 
                                             
                                                                                                                     
                                           
                                               
                 
               
             
           
         
       
       
                   
                                            
                                                         
                                 
           
           
                                                                                         
                         
                 
                               
                   
           
         
                                       
       
                     
      
    if (out_invert) {
                      
      {
        while (1) {
                            /* CIL Label */;
          if ((unsigned long)p < (unsigned long)lim) {
                                
                                   
              
          } else {
            goto while_break___2;
          }
          {
            tmp___1 = (char const *)memchr((void const *)p, (int)eol, (size_t)(lim - p));
            nl___0 = tmp___1;
            nl___0++;
          }
                            
            {
              prline(p, nl___0, ':');
            }
            
          p = nl___0;
              
        }
                       /* CIL Label */;
      }
    while_break___2:;
    } else {
      if (!out_quiet) {
        {
          prline(beg, lim, ':');
        }
      }
      n = (intmax_t)1;
              
    }
                                                        
                   
                            
            
                          
      
    used = (_Bool)1;
    outleft -= n;
    return;
  }
}
static size_t do_execute(char const *buf, size_t size, size_t *match_size, char const *start_ptr) {
                
  char const *line_next;
  size_t tmp;
                
                       
                       
                      
  {
                                                                
             
             
                                                                  
           {
                                           
      }
                              
          {
            tmp = (*execute)(buf, size, match_size, start_ptr);
          }
          return (tmp);
                 
                            
             
                                                                 
             
                         
            
          
               
        {
          tmp = (*execute)(buf, size, match_size, start_ptr);
        }
                    
        
      
    line_next = buf;
    {
                
                                      
                                                                        
                           
         
         
                               
                                                                                                                  
                             
         
                                                                    
                                
                               
                
                                   
         
                        
                                                                    
                        
           
         
         
                                                                                               
         
                                             
                                                     
         
              
       
                     /* CIL Label */;
    }
  while_break:;
                        
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
                      /* CIL Label */;
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
                                 
        }
        b = p + match_offset;
        endp = b + match_size;
                         
                                                       
                             
           
          
                           
                     
                 
                                                     
                 
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
                          
                      
                    
                                  
                 
                                    
                   
                            
                   
                 
                                 
               
              
            
          
        p = endp;
      }
                     /* CIL Label */;
    }
  while_break:;
    return (outleft0 - outleft);
  }
}
static intmax_t grep(int fd, struct stat const *st) {
  intmax_t nlines;
            
               
                 
  size_t save;
            
  char *beg;
  char *lim;
  char eol;
  int tmp;
               
  int tmp___1;
             
              
  intmax_t tmp___4;
               
  int tmp___6;
               
                   
                
                    
  {
    {
      eol = (char)eolbyte;
      tmp = reset(fd, st);
    }
              
                           
      
    {
                            
                                
                             
      outleft = max_count;
                                 
                            
      nlines = (intmax_t)0;
                         
                       
      tmp___1 = fillbuf(save, st);
    }
                  
       
                                     
                                               
       
                           
     
                                           
                       
                
              
                    
       
            
           
                                             
            
                                                                                     
                                     
       
                      
                      
                
                      
         
              
                    
       
     
                       
                   
                                             
                             
       
     
                              
                          
    {
                  
                      /* CIL Label */;
        lastnl = (char const *)bufbeg;
                     
                                         
          
        beg = bufbeg + save;
        if ((unsigned long)beg == (unsigned long)buflim) {
          goto while_break;
        }
        {
                            
                            
          lim = (char *)memrchr((void const *)(beg - 1), (int)eol, (size_t)((buflim - beg) + 1L));
          lim++;
                             
        }
                                                      
                              
         
                       
                                         
                                                       
                         
            {
              tmp___4 = grepbuf((char const *)beg, (char const *)lim);
                               
             
            
                       
             
                                           
             
           
                         
                           
                               
                    
                          
             
                  
                 
                         
                                  
                                 
               
             
            
          
                       
                  
         
                     
                                              
                                 
                                                               
                                                                      
                                       
                 
                      
                                     
               
                    
                                   
             
                
             
                         
                                                  
                      
                                                      
                                       
                 
               
                                             
             
                           
           
                                         
         
                       
                                                           
                                    
         
                                               
                       
           
                                                                           
           
          
                      
           
                                      
           
          
         
                                      
        }
                      
           
                                         
                                                   
           
                           
          
        
                     /* CIL Label */;
    }
  while_break:;
                 
                       
               
                     
                    
         
                                                                                             
                            
         
       
                    
         
                                          
         
       
      
  finish_grep:
                             
                          
                               
                         
         
                                                        
                                                                                    
         
       
      
    return (nlines);
  }
}
static int grepdirent(FTS *fts, FTSENT *ent, int command_line) {
  int follow;
  int dirdesc;
                  
  int tmp;
  int tmp___0;
  int tmp___1;
               
                
                  
           
              
               
              
              
  int tmp___8;
                   
                    
                    
  {
                       
                                         
    if ((int)ent->fts_info == 6) {
                                           
                           
                                           
         
        
      return (1);
    }
                                   
              
             
                                     
                
               
                                       
                  
                 
          tmp = 0;
          
        
      
    {
      tmp___0 = skipped_file((char const *)(ent->fts_name), command_line, tmp);
    }
                 
       
                             
       
                 
      
    filename = (char const *)(ent->fts_path + filename_prefix_len);
                              
                  
            
                                 
                           
                      
                
                      
         
              
                    
       
      
    follow = tmp___1;
    if ((int)ent->fts_info == 1) {
      goto case_1;
    }
                                 
                  
     
                                  
                  
     
                                  
                  
     
                                   
                  
     
                                  
                  
      
                                    
      goto case_3;
      
                                 
                  
     
                                   
                  
     
                                   
                   
     
                                   
                   
     
                        
  case_1:
                                           
      out_file |= 2 * !no_filenames;
      return (1);
      
    {
                           
    }
                      
        
                          
       
                                                      
                                             
                                                              
       
     
               
           {
                                                 
  }
               
  case_3:
                                     
              
            
                                        
                            
           
                             
                         
                          
                    
                            
             
             
                             
                                                                                                                  
                                                                               
             
                               
               
                                             
                                                       
               
                         
             
                      
           
           
                                                  
           
                        
                       
           
         
       
     
                      
        
                      
          
               
                    
            
   
               ;
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
              
               
               
  int tmp___4;
  {
                
              
            
                   
      
    {
      tmp___0 = openat_safer(dirdesc, name, tmp);
      desc = tmp___0;
    }
                  
                   
         
                                       
                                                 
         
              
         
                                       
         
                             
           
                                         
           
                               
             
                                           
                                                     
             
           
         
       
                 
      
    {
      tmp___4 = grepdesc(desc, command_line);
    }
                     
  }
}
static int grepdesc(int desc, int command_line) {
  intmax_t count;
  int status;
  struct stat st;
           
  int tmp___0;
              
  FTS *fts;
  FTSENT *ent;
  int opts;
  int tmp___2;
  char *fts_arg[2];
               
  int tmp___4;
  int tmp___5;
              
               
               
              
               
                      
                 
               
                        
                 
                
                   
                
               
                    
                    
                    
  {
    {
                 
      tmp___0 = fstat(desc, &st);
    }
                      
       
                                 
                                           
       
                    
     
                    
                         
         
                                                                               
         
                      
                        
         
       
      
                     
                                             
        if ((st.st_mode & 61440U) == 16384U) {
                            
                        
                  
                        
            
          {
            opts = fts_options & ~tmp___2;
            tmp___4 = close(desc);
          }
                            
             
                                           
                                                     
             
            
          {
            fts_arg[0] = (char *)filename;
            fts_arg[1] = (char *)((void *)0);
            fts = fts_open((char *const *)(fts_arg), opts, (int (*)(FTSENT const **, FTSENT const **))((void *)0));
          }
                    
             
                           
             
            
          {
            while (1) {
                            /* CIL Label */;
              {
                ent = fts_read(fts);
              }
              if (!ent) {
                goto while_break;
              }
              {
                tmp___5 = grepdirent(fts, ent, command_line);
                                  
              }
            }
                           /* CIL Label */;
          }
        while_break : {
                                      
         
                         
             
                                           
                                                     
             
           
           
                                     
          }
                            
             
                                           
                                                     
             
            
          return (status);
        }
        
      
                   
                                            
                                              
                        
                
                      
         
              
             
                                          
                  
                
                                            
                                
                  
                                                    
             
                             
                              
               
             
           
         
       
      
                    
                            
                             
                                                      
                                  
                                                 
                                                   
                                         
                     
                                                 
                                                                             
                                                                    
                     
                   
                              
                                
                 
               
             
           
         
       
      
    {
                              
    }
                   
       
                                 
       
      
    {
      count = grep(desc, (struct stat const *)(&st));
    }
                      
                                 
             
      if (count_matches) {
                        
          {
            print_filename();
          }
                               
            {
              print_sep((char)':');
            }
                   
            {
                                        
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
                     
                      
                               
                
                                      
         
                                   
                                           
           
                                                       
           
                              
                                                  
               
                                              
                                                        
               
             
           
         
        
      
           
                     
      {
                               
      }
                         
         
                                        
                                                  
         
        
      
                    
  }
}
static int grep_command_line_arg(char const *arg) {
  char *tmp;
  int tmp___0;
  int tmp___1;
  int tmp___2;
                   
  {
    {
                                 
    }
    if (tmp___2 == 0) {
                 
                                       
              
         
                                            
                                       
         
        
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
                                                     
void usage(int status) {
           
                
                
                
                
                
               
                
                
                
                
                 
                 
                 
                 
                 
                 
                 
                
                 
                 
                    
                    
                    
                    
                    
                    
                    
                    
                    
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
                     
       
                                                                   
                                                                                                       
                              
                                                                       
                                                                                                           
                              
       
            
       
                                                                       
                                                                                      
                                                                                  
                                                                        
                                                                                         
                                                                        
                                                                                                                    
                                                                                      
                                                                                                                                                                                                                                                                                                                                       
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                               
                                                                        
                                                                                                                                                                                                                                                                                           
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                
                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
                                                                         
                                                                                                                                                                                                                                                                                                                                                  
                                                                         
                                                                                                                                                                                                                                                                                                                                                                                     
                                                                         
                                                                                                                                                                                                                                                   
                                                                         
                                                                                                                                                                                                                                                                                                                                                                                                                                                                
                                                                         
                                                                                                                                                              
                                                                         
                                                                                                                                                                                                                                                                                                               
                                                                         
                                                     
                                                                                             
                                                         
                                                                                                              
                                                                                               
                                                                                                                    
       
      
    {
      exit(status);
    }
  }
}
static void Gcompile(char const *pattern, size_t size) {
  {
    {
      GEAcompile(pattern, size, (((((1UL << 1) | ((1UL << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
           
  }
}
static void Ecompile(char const *pattern, size_t size) {
  {
    {
      GEAcompile(pattern, size, (((((((((((1UL << 1) << 1) | (((1UL << 1) << 1) << 1)) | ((((1UL << 1) << 1) << 1) << 1)) | ((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((((((((((((((((1UL << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }
           
  }
}
static void Acompile(char const *pattern, size_t size) {
  {
    {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    }
           
  }
}
static void GAcompile(char const *pattern, size_t size) {
  {
    {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
    }
           
  }
}
static void PAcompile(char const *pattern, size_t size) {
  {
    {
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    }
           
  }
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
                      /* CIL Label */;
        if (!p->compile) {
          goto while_break;
        }
        {
          tmp___1 = strcmp(m, (char const *)(p->name));
        }
        if (tmp___1 == 0) {
                                            
          compile = (void (*)(char const *, size_t))p->compile;
          execute = (size_t(*)(char const *, size_t, size_t *, char const *))p->execute;
                 
        }
        p++;
      }
                     /* CIL Label */;
    }
  while_break : {
                                           
                                          
  }
           
  }
}
                                                                        
                
          
           
                    
                
                      
                
               
                      
                        
                
                
   
                
            
                  
     
                 
                                      
         
                     
                                              
             
                                       
                                            
             
                           
                                   
             
                
           
                                         
         
                       
                  
                     
         
                   
                          
         
            
         
                     
                                              
                        
                
                        
                
                                     
                               
                                     
                       
                            
                    
                                           
               
             
                     
               
                                             
                                                  
               
                            
                                     
               
                    
                                   
             
           
                                         
         
                      
                    
            
                                
       
                                 
     
                 
   
 
                                                                                    
            
             
                
                   
                 
           
                    
            
                 
                       
                 
                 
                
                       
   
                  
                     
         
                                
                                               
                        
                                                                     
                              
                        
                                       
         
                                                      
           
                         
           
         
         
                                                                                  
                                                   
                      
                       
               
                         
                 
                                      
                                                   
                        
         
         
                     
                                              
                         
                         
                 
                           
                   
                                       
                               
                           
                               
             
                                
           
                                         
         
                   
                                
       
     
               
   
 
                                                                                       
                                  
static int get_nondigit_option(int argc, char *const *argv, intmax_t *default_context) {
                       
                
                                                                                           
          
  int opt;
           
                    
                    
  {
           
                  
                               
    {
                  
                      /* CIL Label */;
        {
          opt = getopt_long(argc, (char *const *)((char **)argv), short_options, long_options,
                            (int *)((void *)0));
        }
                         
                              
                            
            
                 
                           
          
                                                    
                  
                
                           
                    
                  
                                   
           
         
                                                                           
           
                                                                                        
                   
           
                           
         
                
            
                         
                      
                                              
                                   
        
                     /* CIL Label */;
    }
  while_break:;
                                                  
       
                          
                                                                 
       
      
    return (opt);
  }
}
                                    
                
          
             
            
         
                              
            
              
                
                    
   
     
                                              
     
                                                         
             
            
                                 
               
       
     
     
                     
               
                                
     
     
                 
                                      
                            
                  
                
                             
             
                   
                    
                
                                
                             
             
                         
                                                  
                                 
                                       
                 
                 
                                                                                
                 
                                   
                                       
                 
                      
               
                                             
             
                           
                           
                        
                                                
               
             
                           
               
                                
               
             
                              
                     
             
                     
                                      
                  
                                
                                                            
                       
                      
                          
                         
                 
               
                          
                  
                                      
                      
                    
                                                                     
                    
                      
                                    
                      
                        
                                      
                                        
                          
                            
                             
                     
                          
                           
                   
                 
               
             
           
         
       
                                 
     
           
   
 
                                                                      
                
           
                 
                   
   
                    
                           
                  
     
                 
                                      
                            
                           
         
         
                                                                                                                         
         
                                              
                            
         
                                                
       
                                     
     
               
                      
   
 
                                                                                
                                                    
          
            
                     
           
             
                
                
                    
                    
   
     
                                                   
                      
              
                           
                                  
     
     
                 
                                      
                   
                           
         
         
                                                                                               
                                                                       
         
                                        
                                         
         
                                        
                                         
         
                       
                      
         
                       
                      
         
                            
                                
                
                        
                                                                                                                        
                               
       
                          
                                   
                                                         
       
                
                        
                                                
                                                                  
       
             
                    
            
                               
                      
                          
                   
                  
                 
       
                                     
     
              
                                       
           
   
  
int main(int argc, char **argv) {
    AFL_INIT_SET0("grep");
  char *keys;
  size_t keycc;
              
                  
  int with_filenames;
            
  int opt;
  int status;
                
                 
                     
                  
  intmax_t default_context;
          
            
                
              
              
  ptrdiff_t tmp___3;
                
                
              
               
               
               
                  
                        
                 
                 
              
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
                
                 
                 
                       
                       
               
  int tmp___37;
  size_t new_keycc;
  char *new_keys;
                  
  _Bool tmp___39;
                 
               
  int tmp___42;
  int tmp___43;
                   
                    
                    
                    
                    
                    
                    
                    
                   
                    
                    
                     
                     
                     
                     
                     
                     
                     
                     
                     
  {
    {
                                    
                                                  
                                               
                                 
                        
                         
      eolbyte = (unsigned char)'\n';
      filename_mask = ~0;
                                      
                                
                             
                                    
                        
                       
                                                        
                         
                                     
                               
                         
                                   
                                                                           
      compile = (void (*)(char const *, size_t))matchers[0].compile;
      execute = (size_t(*)(char const *, size_t, size_t *, char const *))matchers[0].execute;
    }
    {
      while (1) {
                      /* CIL Label */;
        {
                               
          opt = get_nondigit_option(argc, (char *const *)argv, &default_context);
        }
        if (!(opt != -1)) {
          goto while_break;
        }
                       
                       
         
                        
                       
         
                        
                       
         
                        
                       
          
        if (opt == 69) {
          goto case_69;
        }
        if (opt == 70) {
          goto case_70;
        }
                       
                       
         
                        
                       
         
                        
                       
          
        if (opt == 72) {
          goto case_72;
        }
                       
                       
         
                        
                       
         
                        
                       
         
                         
                        
         
                        
                       
         
                        
                       
         
                        
                       
          
        if (opt == 99) {
          goto case_99;
        }
                        
                        
         
                         
                        
         
                         
                        
          
        if (opt == 104) {
          goto case_104;
        }
        if (opt == 105) {
          goto case_105;
        }
                        
                        
          
        if (opt == 76) {
          goto case_76;
        }
        if (opt == 108) {
          goto case_108;
        }
                        
                        
          
        if (opt == 110) {
          goto case_110;
        }
        if (opt == 111) {
          goto case_111;
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
                          
          goto case_120;
          
                       
                       
          
                        
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                         
                        
         
                       
                          
         
                                
                
                                                             
       
                          
                 
                                                              
       
                          
                 
                                                                   
       
                          
                {
                                                       
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
                                             
                                       
         
                          
                 
                                         
                                                                  
                                                                                                                 
                    
                        
                
                                       
       
                          
                 {
                                                    
      }
                          
                     
                
           
                                                                                                                          
                         
           
         
                  
           
                                         
                                             
           
         
                             
        {
                    
                                              
                                             
                                   
             
                            
           
                                         
         
                         
                                                        
                      
       
         
                     
                                              
             
                                                                                                
                                                                                           
             
                               
                                   
             
                        
                                          
               
                                                                                  
               
             
           
                                         
         
                         
                                     
                               
                                       
      }
                      
           
                                                
           
         
                                                        
           
                       
           
         
                             
                                                   
                             
                    
                                            
           
         
                          
      case_104:
                           
        no_filenames = 1;
                          
      case_105:
        match_icase = 1;
        goto switch_break;
      case_76:
        list_files = -1;
        goto switch_break;
      case_108:
        list_files = 1;
                          
                 {
                                                                                    
      }
                                          
                      
         
                                           
                      
         
                            
             
                              
                        
                                                
                                            
       
                        
                          
      case_110:
        out_line = 1;
        goto switch_break;
      case_111:
        only_matching = 1;
                         
               
                          
                                      
                          
              
                          
      case_114:
                                               
                                    
                          
      case_115:
                            
        goto switch_break;
      case_118:
        out_invert = (_Bool)1;
                          
      case_119:
                        
        goto switch_break;
      case_120:
        match_lines = 1;
                          
             
                         
                          
               
                                       
                          
                  
                                                          
       
                           
                                                            
                
           
                                                            
           
                              
                                                              
                  
             
                                                                       
             
                                
                                                                
                    
               
                                                                
                                                    
               
             
           
          
                          
               
                    
           
                                                                  
           
                         
             
                                                                 
             
                           
               
                                                                     
               
                             
                 
                                                                       
                 
                               
                   
                                                                      
                   
                                 
                     
                                                                          
                     
                                   
                       
                                                                            
                       
                                     
                         
                                                                             
                         
                                       
                           
                                                                                  
                           
                                         
                                          
                                  
                                             
                           
                                
                                           
                         
                              
                                         
                       
                            
                                       
                     
                          
                                     
                   
                        
                                   
                 
                      
                                 
               
                    
                               
             
                  
                             
           
                
                           
          
                          
               
                                
           
                                              
           
          
                        
                             
                
                       
          
         
                                                                                     
         
                          
               
                                
           
                                              
           
         
         
                                                                                            
                                                           
         
                            
           
                                          
                                              
           
         
                          
               
                                          
           
                                                        
           
         
         
                                                                                  
         
                          
               
                                              
                          
               
                         
                          
               
                      
                          
                 
                          
                           {
                 
      }
                          
      switch_break:;
      }
                     /* CIL Label */;
    }
  while_break:;
                           
       
                             
       
                     
         
                                       
         
                       
                       
                
                       
         
              
                     
       
                              
     
     
                      
     
                        
                     
      
    if (exit_on_match | list_files) {
                        
      done_on_match = 1;
    }
    out_quiet = count_matches | done_on_match;
                        
                                  
     
                          
                                   
     
                       
       
                                        
                           
       
                                                                 
                                 
                                                      
                                                     
         
       
       
                            
       
     
                       
       
                                                                                             
                                               
                                                                                                       
                
       
     
                    
       
                 
       
     
     
                                     
     
                        
                                                  
                            
       
      
                
                        
                                                  
                        
                                  
              
                
        
             
                           
        {
          keycc = strlen((char const *)*(argv + optind));
          tmp___37 = optind;
          optind++;
          keys = (char *)xmemdup((void const *)*(argv + tmp___37), keycc + 1UL);
        }
               
        {
                   
        }
        
      
                                                              
       
                                            
       
                           
                          
                  
                
           
                                                                          
           
                         
                
                                                                                    
                               
                            
                              
                             
                                
                                 
           
           
         
       
      
    {
                                          
    }
                        
       
                             
       
      
    {
      (*compile)((char const *)keys, keycc);
                         
    }
                           
                          
                     
              
                    
       
            
           
                           
                     
       
     
     
                           
     
                    
       
                              
       
     
                          
       
                
       
     
                          
                                        
                                                
       
      
                         
                 
      {
                    
                            /* CIL Label */;
          {
            tmp___42 = grep_command_line_arg((char const *)*(argv + optind));
                              
                     
          }
                                  
                                
            
          
                       /* CIL Label */;
      }
    while_break___2:;
             
                                           
                                         
           
                                            
                                                
           
                
           
                                                
           
         
              
         
                                              
         
        
      
                 
                   
            
                        
      
    {
      exit(tmp___43);
    }
  }
}
