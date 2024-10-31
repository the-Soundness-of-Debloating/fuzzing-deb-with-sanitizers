#include "argv-fuzz-inl.h"
#include "path_check.h"
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
                                                                        
   
                           
                                  
     
           
   
 
                              
          
              
              
   
                                                              
                           
                   
            
                                   
                            
                             
                     
       
     
                                                    
                             
                     
   
 
int fd_safer(int fd);
int fd_safer(int fd) {
  int f;
  int tmp;
  int e;
  int *tmp___0;
  int *tmp___1;
  {
                  
                    
                            
                
                                     
                     
                  
                                     
                     
               
       
     
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
                        {
      goto case_1030;
    }
    goto switch_default;
  case_1030:
    tmp = __builtin_va_arg(arg, int);
    target = tmp;
                                 {
      result = fcntl(fd, action, target);
                       {
        have_dupfd_cloexec = 1;
      }       
                                     
                             
                                 
                
                                            
                           
                              
           
                                  
         
       
    }       
                                        
     
                     {
                                     
        tmp___1 = fcntl(result, 1);
        flags = tmp___1;
                        
                  
               {
          tmp___4 = fcntl(result, 2, flags | 1);
                             {
          _L:
                      tmp___2 = __errno_location();
            saved_errno = *tmp___2;
            close(result);
            tmp___3 = __errno_location();
            *tmp___3 = saved_errno;
            result = -1;
          }
        }
       
    }
    goto switch_break;
  switch_default:
    tmp___5 = __builtin_va_arg(arg, void *);
    p = tmp___5;
    result = fcntl(fd, action, p);
    goto switch_break;
  switch_break:
    __builtin_va_end(arg);
    return (result);
  }
}
                          
                                            
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
                                     
                                        
   
                                                                    
                                                      
                         
   
 
size_t strnlen1(char const *string, size_t maxlen);
                                                                     
          
                 
                 
              
                
   
                          
             
     
                         
                      
     
                                               
                  
                                  
                                                 
                                    
            
                                                       
                 
                      
                                     
                                                                              
                                  
       
                                
               
                                         
                                                 
                       
                                                                       
                                                    
                                    
                                      
              
                                                      
                                                  
                                        
                
                                       
                                        
                                                        
                            
                                              
                                                                              
                                              
             
                                       
                            
                                      
                                                                              
                                              
             
           
                                        
                                                               
                        
                                      
           
         
       
     
                               
           
   
 
void *xrealloc(void *p, size_t n);
_Bool euidaccess_stat(struct stat const *st, int mode);
extern __attribute__((__nothrow__))
__uid_t(__attribute__((__leaf__)) geteuid)(void);
extern __attribute__((__nothrow__))
__gid_t(__attribute__((__leaf__)) getegid)(void);
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        group_member)(__gid_t __gid);
                                                        
             
                       
              
              
              
              
              
              
              
              
               
             
                 
               
   
              
                    
                        
     
                     
                     
                            
                          
               
                         
                                                                        
                            
         
       
     
                        
                          
                           
                                   
                                     
                                      
                                           
                                             
                                              
                                                          
                            
                                  
                     
                          
                                
                   
                        
                              
                 
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
                    
       
            
           
                               
                         
              
                    
       
                               
                         
              
                    
       
                              
                         
              
                    
       
                                                         
                         
              
                    
       
                                                         
                         
              
                    
       
                                                        
                         
              
                    
       
                                                                
                    
              
                    
       
                                                                
                    
              
                    
       
                                                               
                     
              
                     
       
                                                                                
                                             
                                            
                                           
                                          
                                         
     
                                    
                    
            
                           
                      
                                      
                      
              
                                                     
                       
                        
         
       
     
                                                
                        
     
                      
   
 
                       
          
   
                              
                 
   
 
extern __attribute__((__nothrow__)) int(
    __attribute__((__nonnull__(1, 2), __leaf__))
    stat)(char const *__restrict __file, struct stat *__restrict __buf);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fstat)(int __fd, struct stat *__buf);
                             
                             
                                
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                                     
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                               
                                                                     
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                               
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                                     
                                                                       
                                                                   
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                                     
                                                                       
                                                                      
                                
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                   
void cycle_check_init(struct cycle_check_state *state);
_Bool cycle_check(struct cycle_check_state *state, struct stat const *sb);
                                                            
                                                
 
                                                        
   
                                        
                           
           
   
 
                                                                           
            
   
                                     
                    
                                    
                                                                               
                         
     
                               
                                                               
                                                                 
                            
         
       
     
                             
                                                        
              
                                        
                          
       
                                                
                                                
     
                      
   
 
extern void error(int __status, int __errnum, char const *__format, ...);
char const *quote(char const *name);
void close_stdout(void);
                               
                               
extern __attribute__((__noreturn__)) void _exit(int __status);
int close_stream(FILE *stream);
char *quotearg_colon(char const *arg);
                             
                          
                         
                          
                  
                
               
               
              
               
              
   
                                   
                       
                         
                                     
                                
                  
         
              
         
                                                   
                          
                        
                                              
                                       
                                                             
                
                                       
                                                
         
                                 
       
     
                                   
                       
                               
     
           
   
 
void close_stdin(void);
                                 
                        
             
          
              
                 
              
                          
                      
                
               
               
   
                    
                                
                        
                                           
                     
                                    
                           
                          
         
       
     
                                  
                       
                      
     
               
                                                            
                            
                          
                                                
                                     
                                                           
              
                                     
                                              
       
     
                   
               
                               
     
           
   
 
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__)) __fpending)(FILE *__fp);
                                
                     
             
                  
              
                    
              
               
               
   
                             
                                       
                                      
                                      
                             
                                        
                    
                  
            
                        
                           
                      
                
                                       
                              
                 
                               
                                           
                           
             
                        
           
         
       
     
               
   
 
int set_cloexec_flag(int desc, _Bool value);
                                             
            
          
               
              
              
   
                                
                
                     
                  
                            
              
                             
       
                         
                              
                   
              
                                               
                            
                     
         
       
     
                
   
 
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
                   
            
                 
                       
                       
              
              
   
                                   
                              
                                                    
                       
                             
                     
            
                                                       
                                                
                                 
     
                           
                 
   
 
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
__inline static void *xnmalloc(size_t n, size_t s) __attribute__((__malloc__));
                                                    
          
                
   
                                              
               
            
               
     
                              
                   
     
                             
                     
   
 
extern
    __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                        calloc)(size_t __nmemb, size_t __size)
        __attribute__((__malloc__));
void *xmalloc(size_t n) __attribute__((__malloc__));
                         
          
            
   
                    
            
             
                     
                     
       
     
               
   
 
                                   
   
                      
             
                     
                     
       
     
               
   
 
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
                                                           
                                   
                              
                                                     
                                                                               
                                        
       
                   
     
    return (fts);
  }
}
__attribute__((__noreturn__)) void xalloc_die(void);
                       
            
   
                                      
                                           
            
   
 
_Bool can_write_any_file(void);
                         
                       
                                
            
              
   
                       
                     
                      
                               
                      
                             
     
                       
   
 
extern int printf(char const *__restrict __format, ...);
extern int fputs_unlocked(char const *__restrict __s,
                          FILE *__restrict __stream);
                                     
void version_etc_arn(FILE *stream, char const *command_name,
                     char const *package, char const *version,
                     char const *const *authors, size_t n_authors);
void version_etc_va(FILE *stream, char const *command_name, char const *package,
                    char const *version, va_list authors);
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
                                                            
                                                              
                                                                    
            
                
                
                
                
                
                
                
                
                
                
                 
   
                       
                                                                      
            
                                                   
     
                         
                                                      
             
                                                               
                                                                              
                                                                           
                                                                 
                                                  
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                        
         
            
         
                                          
                                                           
                      
         
                                                 
                                                                           
                      
         
                                                      
                                                                          
                            
                      
         
                                                           
                                                                          
                                            
                      
         
                                                               
                                                                          
                                                            
                      
         
                                                                   
                                                                          
                                                                            
                      
         
                                                                       
                                                                          
                                                                           
                            
                      
         
                                                                            
                                                                          
                                                                           
                                            
                      
         
                                                                                
                                                                          
                                                                           
                                                            
                      
                 
                       
                                                                          
                                                                           
                                                                           
                                                            
                      
                
           
   
 
                                                                                
                                                           
                   
                          
                  
   
                          
               
                             
                                                      
                                 
                                                                  
                           
         
              
                         
       
                  
     
              
                                                           
                                                               
           
   
 
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
                                                                             
                                            
                  
   
                                         
                                                                    
                              
           
   
 
                                        
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                          
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
                                                    
                  
                  
   
                                                                     
              
                                                           
                                             
            
                      
     
   
 
_Bool strip_trailing_slashes(char *file);
                                          
             
            
                 
                  
                 
   
                                             
               
                 
                  
     
                                           
                              
                                             
                             
                       
   
 
int open_safer(char const *file, int flags, ...);
extern DIR *fdopendir(int __fd);
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i);
                                                            
                      
          
   
                               
              
                                             
     
                                      
                                      
                      
   
 
                                   
                                        
                                               
int set_char_quoting(struct quoting_options *o, char c, int i);
char *quotearg_char(char const *arg, char ch);
char *quotearg_char_mem(char const *arg, size_t argsize, char ch);
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__));
__inline static char *xcharalloc(size_t n) __attribute__((__malloc__));
                                            
            
                
                
   
                              
                       
                    
            
                                          
                        
     
                             
   
 
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        iswprint)(wint_t __wc);
                                           
                                                                 
                                          
                                                  
                                                             
                                                             
                                                             
                                                              
                                                      
                                                                
                   
                  
                              
            
        
   
                          
            
              
            
                                     
     
                                                                       
                                                           
                                  
                                                 
               
   
 
                             
                                                      
                           
   
                    
                
                                                                      
               
   
 
static char const *gettext_quote(char const *msgid, enum quoting_style s) {
  char const *translation;
  char const *tmp;
  {
    tmp = (char const *)gettext(msgid);
    translation = tmp;
                                                             
                                  
                           
       
     
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
                    
                                   
                                 
                                 
                                   
                                         
                                                   
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                        
         
                                          
                                  
         
                              
                 
                               
                                       
         
              
                         
       
                 
     
                                 
                        
                                 
                      
         
                                 
                                  
                      
  case_6:
                                                    {
      left_quote = gettext_quote("`", quoting_style);
      right_quote = gettext_quote("\'", quoting_style);
    }
                             {
      quote_string = left_quote;
                {
                             
                               
         
                   
                                {
            *(buffer + len) = (char)*quote_string;
          }
          len++;
                               
         
                      
                        
      }
                     
    }
                                 
    quote_string = right_quote;
                                            
                      
         
                                          
                                  
         
                              
                 
                               
                                       
         
              
                             
       
                     
     
                        
                                 
                      
  case_0:
              elide_outer_quotes = (_Bool)0;
                      
                 
              
               
                  
    while (1) {
                                           {
        tmp___6 = (int const) * (arg + i) == 0;
      }       
                               
       
      if (tmp___6) {
        goto while_break___3;
      }
                                
                              
                               
                                                
                                                     
                                                                           
                               
                                       
                                               
               
                                        
             
           
         
       
      c = (unsigned char)*(arg + i);
                        
                        
       
                         
                     
       
                        
                        
       
                        
                        
       
                         
                     
       
                         
                     
       
                         
                     
       
                        
                    
       
                         
                     
       
                         
                     
       
                          
                      
       
                          
                      
       
                         
                     
       
                          
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                          
                     
       
                         
                         
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                              
               
                              
                                 
                                         
         
                   
                                 
                                         
           
                
                               
         
                       
                                
                                              
                                                        
                         
                                       
                                              
                 
                      
                                     
               
                             
                         
                                       
                                              
                 
                      
                                     
               
                             
             
           
         
                               
              
                        
                      
         
       
                            
            
                                              
                        
       
                                              
                        
       
                              
               
                               
                                       
       
                            
               
                      
                                
                                                      
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                    
                  
                                     
                                             
             
                                                  
                     
                       
                                     
                                            
               
                    
                                   
             
                           
                       
                                     
                                             
               
                    
                                   
             
                           
                       
                                     
                                             
               
                    
                                   
             
                           
                       
                                     
                                            
               
                    
                                    
             
                            
                                  
                             
                                  
                            
           
         
       
                            
                       
                            
                      
                            
               
                               
                    
               
                               
                    
            
                               
                    
            
                               
                              
            
                               
                              
           
                               
                              
            
                               
                    
            
              
                              
                                 
                                 
                         
           
         
       
                       
                                              
                                 
                                         
         
       
             
                              
                
                          
       
                            
             
                                            
                                               
              
                                 
       
                     
                              
       
            
                     
                              
       
            
                                              
                                 
                                         
         
       
                            
                
                                              
                                 
                                         
         
                   
                                 
                                         
           
                
                                
         
                        
                   
                                 
                                         
           
                
                                
         
                        
                   
                                 
                                         
           
                
                                
         
                        
       
                            
            
                             
                       
                             
                      
                                  
                                                                              
              
                                                       
                      
                             
                                              
                                
         
                   
                                                                            
                          
                             
                                  
                  
                                                
                                   
                                    
                    
                                                  
                                     
                           
                                        
                                            
                                            
                     
                          
                                          
                   
                      
                 
                                
                                      
                      
                                         
                                                          
                                  
                               
                                         
                                              
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                       
                                         
                       
                                              
                                
                                                     
                                       
                                            
                                     
                          
                     
                                    
                   
                 
                                              
                               
                                       
                 
                           
               
             
           
                                                           
                        
                                  
           
         
                        
       
                    
                    
              
                                
                           
                 
                         
                       
                                      
                                 
                                           
                                                   
                   
                             
                                           
                                                   
                     
                          
                                          
                   
                                  
                             
                                           
                                                                   
                     
                          
                                          
                   
                                  
                             
                                           
                                                                         
                     
                          
                                          
                   
                                 
                                                         
                        
                          
                 
                      
                 
                                     
                             
                                           
                                                   
                     
                          
                                          
                   
                                 
                                            
                 
               
                                    
                                      
               
                         
                                       
                                            
                 
                      
                                      
               
                             
                  
                                            
             
                            
                         
           
         
       
                      
                              
                    
              
                                 
               
                                
                                                                               
                                                              
                                                                        
                          
             
                  
                        
           
                
               
                                
                         
           
         
       
                 
                               
                                       
       
                 
                               
                                       
         
              
                              
       
                      
    store_c:
                          {
                              {
          *(buffer + len) = (char)c;
        }
        len++;
                              
      }
                      
    __Cont:
                i++;
    }
  while_break___3:;
                     
                                              
                                 
                                         
         
       
     
                      {
                                
                  {
                               
                                  
           
                     
                                   
              *(buffer + len) = (char)*quote_string;
             
                  
                                  
           
                         
                          
        }
                        
       
    }
                           
                                     
     
    return (len);
                            
                                        
                                                                    
                                                                    
                     
  }
}
static char slot0[256];
                                
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
                             
             
                         
    sv = slotvec;
                
              
     
                       
                             
                                                                              
                                                
                     
              
                     
       
                                               
                     
       
                         
                                                
              
                     
       
                                                                         
                   
                         
                       
       
                                                                            
                                
     
    size = (sv + n)->size;
    val = (sv + n)->val;
    flags = (int)(options->flags | 1);
    tmp___2 = quotearg_buffer_restyled(
        val, size, arg, argsize, (enum quoting_style)options->style, flags,
        (unsigned int const *)(options->quote_these_too),
        (char const *)options->left_quote, (char const *)options->right_quote);
                    
                        
                         
                            
                                                         
                          
       
                             
                          
                                                       
                                                                         
                                                                                
                                                                 
                                                                   
     
                                 
                 
    return (val);
  }
}
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
  struct quoting_options o;
  struct quoting_options tmp;
  char *tmp___0;
  {
                                        
            
    tmp___0 = quotearg_n_options(n, arg, (size_t)-1,
                                 (struct quoting_options const *)(&o));
    return (tmp___0);
  }
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
                         
void set_program_name(char const *argv0);
                                     
                                           
extern int fputs(char const *__restrict __s, FILE *__restrict __stream);
                                                     
                                          
                    
                   
          
              
   
                                                             
                                                                                
              
     
                                              
                                                             
                       
            
                   
     
                             
                                                        
                         
                     
                                              
                       
                           
                                                        
         
       
     
                         
                                            
           
   
 
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(1), __leaf__))
                                     dirfd)(DIR *__dirp);
                                      
          
           
         
              
             
        
        
              
               
               
   
                        
             
             
                          
                   
                    
                      
                                  
                      
                               
                                       
                       
                       
                     
           
                       
                                       
                       
                     
         
       
     
                
   
 
int openat_safer(int fd, char const *file, int flags, ...);
                                                            
              
             
          
              
   
                     
                     
                                    
                                          
                           
     
                                        
                            
                     
   
 
                                                  
              
             
          
              
   
                     
                     
                                    
                                          
                           
     
                                  
                            
                     
   
 
                                                                  
                                                                    
                        
                        
          
             
                 
              
              
              
              
              
              
              
               
               
               
               
               
               
               
                          
                          
                   
                   
               
                                  
               
                                  
                  
   
                                                 
                 
     
                                        
                         
                         
                                
                                                                
                                 
                         
                                
                                                                
                                 
                 
                                   
                                 
                                  
                         
                  
                         
           
                
                       
         
                       
                                     
                                   
                                    
                           
                    
                           
             
                  
                         
           
                          
                             
           
                
                           
         
                                 
                                   
                                                 
                                                     
                                              
                  
                         
           
                             
                
                                   
                         
                  
                                                     
                                                           
                                                                             
                                 
                    
                                                      
                                                             
                                                                               
                                  
                              
                        
                               
                 
                                  
                      
                                                             
                                                                               
                                   
                              
                        
                               
                 
                                  
               
                                 
             
                                
           
                              
         
                       
                       
                       
         
                                         
                                   
                                         
                                   
       
                
                                 
                               
                                
                       
                
                       
         
              
                     
       
                     
                   
       
                                 
                               
                                
                       
                
                       
         
              
                     
       
                     
                    
       
                 
            
                                     
                                     
                 
                                   
                                                         
                                       
                                       
                
                                  
         
                                   
                                                         
                                       
                                       
                
                                  
         
                           
                               
         
             
             
                                    
                               
         
       
                     
                                 
     
   
 
                                        
                                                              
                                                                     
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
                                               
        
   
                            
                      
                     
          
               
                     
                         
       
                                   
          
     
              
                                      
           
   
 
                                      
                                    
 
                                      
                        
              
   
                                                                   
                                    
                                
                            
                                  
                                                                       
     
                            
                     
   
 
                            
              
            
   
                                           
              
              
     
                                        
                                                   
                                      
                              
            
                                                     
     
                     
   
 
_Bool(__attribute__((__warn_unused_result__))
      hash_rehash)(Hash_table *table___0, size_t candidate);
void *hash_delete(Hash_table *table___0, void const *entry);
                                                 
   
                                                                      
                                  
   
 
                                                  
                                                                
                                                                   
                                  
             
                                  
                
   
                                                                      
                                                                  
                                                                            
              
     
                                                                    
                         
     
                    
               
                    
                         
       
                                                                
                                      
              
                                                                                
                      
                                        
         
       
                                                       
     
               
                       
   
 
                                                          
               
                   
   
                      
               
                                  
                
                         
       
                                                      
               
     
               
                   
   
 
                                         
                 
                
          
   
                        
                               
               
                               
                                     
                           
         
              
                         
       
                
                              
                
     
               
                              
              
            
              
     
                        
   
 
                                            
            
   
                           
                             
     
                     
               
                                              
                                  
                  
                           
         
              
                         
       
                       
     
               
                       
   
 
                                                      
             
             
   
                                   
              
                     
   
 
                                                           
                                                              
 
                                                  
                            
                
   
                               
                                                                    
                        
     
                   
                                                    
                                                                         
                                                                
                                                           
                                                                 
                                        
                                                            
                                                                     
                                               
                                    
                 
               
             
           
         
       
     
                                        
                      
   
 
                                                                                
                      
          
   
                                
                     
                                                                     
                                                         
                           
       
                                        
     
                                      
                                              
               
            
               
     
                                                                
                         
     
                       
   
 
                                                    
                                                                          
                                                                     
                                                                              
                                                           
                        
            
   
                                                              
                           
     
                                                                  
                                   
     
                                                         
                                                                 
                                         
     
                  
                               
     
                               
                                  
               
                
     
                                                                  
                                
                
     
                                                    
                                                            
                                                                         
                
     
                             
                                                                              
                                          
                                     
                               
                                       
                                       
                                                                  
                       
       
                            
                                       
   
 
                                       
                            
                            
                          
   
                                
                                 
                                   
                   
                                       
                                                          
                             
           
                             
                            
                       
                            
                                     
               
                                                       
                                    
             
                           
           
                   
         
                   
       
     
                               
               
                                                                              
                             
       
                            
                 
                      
                               
         
                            
                             
                      
       
                    
               
     
                  
                                        
               
                    
                             
       
                          
                           
                    
     
                  
                                    
                            
           
   
 
                                                                 
                         
   
                                     
                                       
                                             
            
                                                      
     
                 
   
 
                                                                         
   
                            
                                             
                                       
           
   
 
                                                                      
                                                                             
                            
             
                            
             
                          
                
                 
                              
                
   
                                                              
                                     
                                                                            
              
     
                          
                                                                    
                         
     
                                                              
              
            
                                                                              
                    
         
                            
                     
                             
                                
                            
                                        
                  
                                     
           
         
                      
       
     
                    
               
                          
                         
       
                                                                        
                    
              
                                             
                                                       
                      
               
                                          
                       
                                    
                                          
                                            
           
                            
         
       
                            
     
               
                       
   
 
                                                                             
                            
                            
                          
             
                                
             
                 
                               
                             
   
                         
               
                                                                        
                         
       
                         
                              
                   
                        
                                 
           
                              
                                                                     
                                         
                                                                                
                    
           
                              
                                 
                                            
                                      
                  
                                    
                                    
                                    
           
                        
         
                      
                            
                                                        
                   
                      
         
                                                                       
                                           
                                                                              
                  
         
                               
                                        
                              
                                                                       
                              
           
                                 
                                             
                                       
                
                                  
                                  
         
                                 
                                
       
           
               
     
               
                      
   
 
                                             
                                                             
                     
                        
                  
             
                
                
                
   
                                                            
                   
                    
                        
     
                                           
                        
     
                         
                       
                                                                            
                                                                         
                        
     
                                    
                             
                                                                  
                                          
                                     
                                          
                                          
                                                  
                                                  
                                                            
                                                               
                  
                                      
                                            
                                                        
                                                  
                                                            
                                                              
                        
     
                                                            
                                                               
                  
                                                                 
                     
                
       
            
              
     
                                    
                      
   
 
                                              
                                                               
             
                            
                            
                  
            
                
                
                               
                             
   
                 
              
     
                                                                
                                                            
                    
     
                                                
                                               
                                                
                              
                                                  
                                                 
                                                  
                                   
                                   
                                                           
                                               
                
                                                            
                                                 
                                                  
         
                        
                                                       
                             
         
                                                            
                       
                             
         
                                                                       
                                                                   
                  
         
       
     
                       
                                          
                          
                                                                   
                           
       
                                      
                                     
                               
                               
                             
     
                                 
                             
                                  
                           
   
 
                                                             
             
                            
                            
                   
            
                            
                          
                
   
                                                                
                
                         
     
                             
                        
                                    
                                                  
                                                 
                                                  
                                
                                                    
                                                   
                                                    
                                     
                                     
                                                             
                                                 
                  
                                                              
                                                   
                                                    
           
                                  
                                                      
                         
                                                
                       
                            
                                 
               
                                  
                                   
                            
             
                      
                                                                          
           
         
       
     
                  
   
 
size_t hash_pjw(void const *x, size_t tablesize);
                                                      
                           
             
                 
   
                                   
                                                          
                  
                                                           
   
 
                                                            
                           
                           
              
              
   
                                   
                                   
                                 
                                   
                                                                       
                           
                      
                
                      
         
              
                    
       
            
                  
     
                            
   
 
                           
                     
   
                             
                          
                    
           
   
 
                                                  
                
           
   
                  
                        
               
                
                         
       
                                                                               
          
     
               
                           
   
 
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
                                   
                                
                          
                                   
                    
                                  
     
                      
                          
                                     
                      
                                    
       
     
                          
                                   
                    
                                  
     
    sp = (FTS *)malloc(sizeof(FTS));
                                                          
                                  
     
                                       
                            
                              
                              
                           
                              
     
    sp->fts_cwd_fd = -100;
    tmp___4 = fts_maxarglen(argv);
    maxarglen = tmp___4;
                            {
      tmp___5 = maxarglen;
    }       
                             
     
    tmp___6 = fts_palloc(sp, tmp___5);
                   
                
     
                                                            {
      parent = fts_alloc(sp, "", (size_t)0);
                                                                
                  
       
                                        
    }
                                                              
                  
            
                                   
                    
              
                    
       
     
                                
                                 
                       
              {
                                                                  
                         
       
      tmp___8 = strlen((char const *)*argv);
      len = tmp___8;
      p = fts_alloc(sp, (char const *)*argv, len);
                                                           
                  
       
                                  
      p->fts_parent = parent;
      p->fts_accpath = p->fts_name;
                      {
                                                                
                                           
                                             
                
          p->fts_info = fts_stat(sp, p, (_Bool)0);
         
      }       
                                                
       
                  {
                           
        root = p;
      }       
                                                    
                                                                
                   
                     
                
                            
                  
         
       
             
               
    }
               
                 
                         
                                          
       
     
    tmp___9 = fts_alloc(sp, "", (size_t)0);
    sp->fts_cur = tmp___9;
                                                               
                
     
    (sp->fts_cur)->fts_link = root;
                                                
                             
                    
                
     
                                 
                                     
                                                 
                               
                           
                               
         
       
     
                                      
    return (sp);
       
                     
                         
       
                                
       
                     
                                
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
                    
                      
                      
                 
                                    
                           
         
                  
                                                                       
                          
                
                            
         
                            
       
                
                      
     
                        
                               
     
                                
                               
                                
                                
                                        
                      
                                   
                             
         
       
            
                                   
                                      
                      
                                       
                                 
         
                                     
                      
                                 
                                         
                                   
           
         
       
     
                                    
                                             
                                                    
     
                 
                     
                      
                                   
                             
                  
     
    return (0);
  }
}
extern
    __attribute__((__nothrow__)) int(__attribute__((__nonnull__(2), __leaf__))
                                     fstatfs)(int __fildes,
                                              struct statfs *__buf);
                                                          
                       
          
   
                                   
                   
                        
     
                                     
                         
     
                                  
                         
     
                        
                
                      
                 
                      
                      
   
 
                                                    
                       
          
   
                                   
                   
                        
     
                                       
                           
     
                        
                  
                      
                 
                      
                      
   
 
                                                          
                           
   
                                   
                                                
   
 
                                                        
                           
                           
   
                                   
                                   
                                               
   
 
                                                      
          
                
                     
                      
               
                     
                             
   
                           
                                           
                                   
                        
     
                                                         
               
                                                                       
                                                                              
                                                   
                  
                                                           
                          
       
     
                                               
                                                              
                                                              
              
                           
     
                                               
                                                          
                        
     
                                                       
                        
                                               
                                                             
                                                           
                       
                        
     
               
                                                       
                
       
                       
     
               
                    
   
 
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
                                                                   
                                     
            
                                   
                                       
       
     
    p = sp->fts_cur;
                         
                                     
                          
                                              
                 
     
                          
                                   
                
              
                                     
           
                                                  
                                      
                                         
                                                      
                                     
                                
                                             
                                        
                                                
                      
                                                                       
               
             
           
                             
         
       
     
    if ((int)p->fts_info == 1) {
                            
                    
              
                                   
                                                      
                 
                                        
                                  
             
                                
                                       
                                                            
             
                                            
                       
                               
                               
             
                       
                       
           
         
       
                                                                       
                                     
                                   
                                   
                                                        
         
       
                                                                       
                                                                              
                      
                                       
                                  
                                                                 
                            
                     
                                                                    
                                   
             
                                                          
                            
           
                         
         
              
        tmp___4 = fts_build(sp, 3);
                                
                                                                  {
                                       
                                           
           
                             
                                        
                                              
             
           
                     
                             
                                 
           
                         
          return (p);
        }
       
                        
                                                    
                
    }
       
             
    p = p->fts_link;
    if ((unsigned long)p != (unsigned long)((void *)0)) {
                      
                        
                               
                                        
                                     
                                      
                                        
                             
                    
                                    
             
                                                  
                        
                  
                                        
                             
                    
                                    
             
                                      
                              
           
                        
                        
                  
                        
           
                
                      
         
                      
                                  
                                         
         
                     
                        
                      
                           
       
                                   
                  
       
                                   
                                                
                                    
                                       
                                                     
                                    
                               
                                            
                                       
                                              
                    
                                                                     
             
           
         
                                         
       
    name:
                                            
                                                               
                                                      
                       {
        tmp___12 = (p->fts_parent)->fts_pathlen;
      }
      t = sp->fts_path + tmp___12;
                   
          
                            
      memmove((void *)t, (void const *)(p->fts_name), p->fts_namelen + 1UL);
    check_for_dir:
                sp->fts_cur = p;
                                   
                                            
                                 
                                  
                                                      
                                        
                                           
                                                                            
                                  
                                
                   
                        
                              
                 
                      
                            
               
                    
                          
             
                  
                 
                                                    
                                                               
                                       
                                                   
                                                   
                 
               
             
           
                
                     
                                                   
                      
             
                                 
           
                         
         
       
                                  
                                 
                                               
         
                                    
                        
                                        
                         
                                         
         
       
      return (p);
    }
                        
                    
                      
                             {
                      
                                    
                    
      tmp___18 = (struct _ftsent *)((void *)0);
                             
      return (tmp___18);
    }
               
                                      
                
       
                           
     
                  
                                                    
                             
                                      
                                   
                                    
                                      
                            
                  
                                   
           
                                                 
                       
                
                                      
                            
                  
                                   
           
                                      
                              
         
                       
                       
                
                       
         
              
                     
       
                     
                                      
                                 
                                
       
            
                                  
                                     
                                      
                                                       
                         
                  
                                            
                                
           
                         
                                          
                                    
                                
                                          
                                    
                                          
                                     
                                    
           
         
                            
              
                                       
                                                                     
                         
                                          
                                     
                                    
           
         
       
     
                       
                                      
            
                                      
     
                            
                 
                         
                             
       
                     
     
                                 
                                       
            
                   
     
                      
  }
}
__attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                 fts_set)(FTS *sp __attribute__((__unused__)),
                                          FTSENT *p, int instr);
                                                                           
                                                              
           
   
                     
                       
                         
                           
                             
                                       
                        
                         
             
           
         
       
     
                                         
               
   
 
                                                                                
          
              
   
                                                                            
                   
            
                                                                              
                
              
                
       
                    
     
                     
   
 
                                                                
              
   
                      
                  
     
                      
                  
     
                      
                  
     
                      
                  
     
                       
                   
     
                      
                  
     
                       
                   
     
                        
         
                         
                      
         
                        
                      
         
                         
                      
         
                        
                      
          
                         
                      
         
                         
                      
          
                         
                      
                 
                     
               
                       
           
   
 
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
                                 
                                  
                                                                            
                       
              
                                                                
                       
       
            
                                                              
                     
     
                                                            
                      
                                          
                                 
                              
       
                                     
     
                                   
                                                  
            
                                  
                   
                             
                           
         
                  
                                    
                                     
                       
                                       
                        
                                         
         
       
     
                    
                          
                        
            
                                
                                   
                                     
                        
                  
                        
           
                                                                   
                            
                
                               
                            
         
              
                             
                          
       
     
                 
                  
            
                      
             
                              
                         
                                    
                            
                                       
                                               
           
         
                         
                  
                
                   
                                                                             
                        
             
                         
                              
                                             
                                          
               
             
                                                                       
                               
                           
                                        
                                
                              
               
             
                                      
                  
                               
           
         
              
                           
       
     
                                                                 
                                   
            
                             
     
                              
                              
                   
           
                           
            
                               
     
          
                                   
                                
                        
                                 
                
                       
               
                 
                           
                  
                               
         
              
                             
       
                                    
                                       
                               
                        
                  
                                           
                                   
                            
               
             
           
         
       
                                                   
                                                             
                                                           
                  
       
                                                    
                               
                                       
                                                      
                                                          
                        
             
                                        
                                  
                          
                          
                         
                                            
                                  
                                        
                                  
                                         
         
                                                                    
                              
                                    
                                    
           
         
                                       
       
                                                    
                               
                          
                        
                        
                       
                                          
                                
                                      
                       
                                       
       
                           
                                  
                               
                                         
                                
                                     
                                                                               
              
                                     
       
                                                                        
                    
              
                                     
               
                                     
                                      
                                         
                                              
                               
                        
                               
                 
                      
                             
               
                    
                           
             
                  
                         
           
                                      
                                           
                                                                
                                                        
                                     
                                       
                           
                    
                           
             
                  
                         
           
                                   
                
                                                  
                                      
                         
                  
                                        
                           
                    
                                          
                             
                      
                             
               
             
           
                                   
         
       
                         
                     
                                    
         
       
                                                  
                                                              
                 
                    
              
                           
                 
       
               
            
     
                   
               
                     
     
                   
                            
     
                              
                                   
             
              
                            
               
         
       
                         
     
                  
                      
                    
              
                      
               
                                     
                                            
                                         
                                          
                                            
                                  
                        
                                         
                 
                                                       
                             
                      
                                            
                                  
                        
                                         
                 
                                            
                                    
               
                             
                             
                      
                             
               
                    
                           
             
                                
                  
                                                                         
                                
           
                         
                                              
                                    
                            
                                           
           
         
       
     
                 {
                     {
        cur->fts_info = (unsigned short)6;
      }
                      
      return ((FTSENT *)((void *)0));
    }
                           
                            
                                    
                                                                     
                         
                                              
                                              
                                                                                                    
           
         
       
     
                         
                         
                                          
       
     
                  
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
                             
                                
                          
       
     
                              
              
           {
                   
         
                                                          
                      
                                   
                             
                                       
                              
                                                               
                               
                                           
                           
                                          
             
           
                                     
                   
         
              
        tmp___5 =
            fstatat(sp->fts_cwd_fd, (char const *)p->fts_accpath, sbp, 256);
                      
                                       
                                  
            
                                                      
                                      
         
       
    }
    if ((sbp->st_mode & 61440U) == 16384U) {
                                 
                    
              
                    
       
                                                                   
                                      
                              
                      
                
                                          
                                  
                   
                                       
                            
                      
                            
               
                                               
             
           
         
       
      return ((unsigned short)1);
    }
                                            
                                  
     
                                            
                                 
     
    return ((unsigned short)3);
  }
}
                                                     
                    
                    
          
   
                            
                            
                                                          
                 
   
 
                                                               
                       
                     
                    
                                             
                                         
             
                   
   
                                           
                                                       
                                                                  
              
                          
       
            
                        
     
                  
                                  
                                     
                                                               
                                    
                                                       
                                   
                      
              
                                                     
                                                            
                 
                                      
                                                         
                                     
                        
         
       
                        
     
                       
             
               
               
                         
       
                   
           
                   
                      
     
              
                                                                    
                       
               
               
               
                    
                             
       
                                        
           
     
                  
                                                          
                  
   
 
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen) {
  register FTSENT *p;
  size_t len;
  {
    len = sizeof(FTSENT) + namelen;
    p = (FTSENT *)malloc(len);
                                                         
                                     
     
    memmove((void *)(p->fts_name), (void const *)name, namelen);
                                        
    p->fts_namelen = namelen;
                    
    p->fts_path = sp->fts_path;
                     
                                     
                                     
                       
                               
    return (p);
  }
}
static void fts_lfree(FTSENT *head) {
  register FTSENT *p;
   
               
               
               
                         
       
                            
                      
     
               
           
   
}
static _Bool fts_palloc(FTS *sp, size_t more) {
  char *p;
  size_t new_len;
  int *tmp;
  {
                                               
                                    
                                 
                                         
                               
                
                        
     
                              
    p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
    if ((unsigned long)p == (unsigned long)((void *)0)) {
                                 
                                         
      return ((_Bool)0);
    }
    sp->fts_path = p;
                      
  }
}
                                                
            
             
   
                        
                      
               
               
                         
       
                 
                                                                            
                                                                 
         
                           
                             
       
                    
                      
     
              
             
               
                                  
                             
       
                 
                                                                            
                                                                 
         
                           
                             
       
                     
                        
                        
              
                          
       
     
                   
           
   
 
static size_t fts_maxarglen(char *const *argv) {
  size_t len;
  size_t max;
  {
                    
              {
                   
                         
       
      len = strlen((char const *)*argv);
                     {
        max = len;
      }
             
    }
               
    return (max + 1UL);
  }
}
                                                                            
          
                  
          
              
            
                
                
                 
              
               
              
             
               
               
   
              
                              
                     
                    
              
                    
       
            
                  
     
                               
                              
                                  
                      
                    
         
       
                 
     
                 
                      
                                    
                                                                     
                         
                                                     
                                 
                                 
                             
                                              
             
           
         
       
     
               
                 
                                            
                      
                    
       
     
                              
              
            
                
                                    
                           
           
                                      
                        
                     
                      
           
                                                    
                                         
                         
                     
                      
                  
                                                      
                                           
                           
                       
                        
             
           
         
       
     
                                
                                                     
                 
     
                        
       
                 
                                   
                        
                   
                                   
                        
     
                 
   
 
extern int fseeko(FILE *__stream, __off_t __off, int __whence);
extern __attribute__((__nothrow__))
__off_t(__attribute__((__leaf__)) lseek)(int __fd, __off_t __offset,
                                         int __whence);
                                                                       
                                                             
            
            
              
                
              
   
                                                                             
                                             
                                              
                                                                             
                            
                              
                             
                    
                           
             
                  
                         
           
                               
                                                
                        
                           
                        
           
                            
                            
                                 
                         
             
                   
                       
           
         
       
     
                                         
                     
   
 
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
                                                                        
          
   
                                     
                 
   
 
                                                                
           
          
   
                                                  
                                   
                                                                     
                 
                
              
                             
                  
                
                  
         
       
                          
            
                        
     
   
 
                                     
                                            
                          
                           
                
   
               
                                                 
               
                                                            
                    
              
                                                            
                       
                      
         
       
     
                                      
   
 
                                                                 
            
                          
                  
         
          
               
               
              
   
                                      
             
                 
                        
     
                         
                                                            
                
                        
     
                                 
                 
                                               
                                 
                           
                   
                                                          
                        
     
                           
                  
            
                  
     
                            
   
 
enum RM_status rm(char *const *file, struct rm_options const *x);
                                                                               
           
              
               
   
                             
                                            
                         
                                  
                                 
                                   
       
     
                            
                 
     
                                 
                               
                
   
 
                                                               
   
                              
                
   
 
                                                                    
                                                             
                                                              
            
              
              
                       
                 
                
              
              
               
               
   
                               
              
                 
     
                                                        
                       
                  
     
                                                
                 
     
                                              
                       
                 
     
                                
                            
                                  
                                                                 
                    
                    
              
                    
       
                       
     
                                       
                       
                 
     
                                 
                         
                                   
                   
                 
     
                
   
 
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
                                  
                                            
                                              
                     
                               
     
               
                          
                 
              
            
              
     
                      
                        
                          
                                 
     
                                                   
                                 
     
                 
                                   
                                                     
                
              
                           
           
                                  
                             
                                                                               
                                         
                                
           
         
       
     
                          
                  
            
                                                     
             
                                   
                                 
                                                                 
                               
                                                       
                                 
                      
                                                         
                                  
                 
               
                    
                                   
                                           
                                  
             
           
         
                                   
                                  
                         
           
                                 
                        
           
                            
                
                                                         
                                       
           
                            
               
                              
                                 
                          
           
                            
                      
         
                                   
                              
                                  
                                                
                                                                 
                                     
         
                         
                                                    
                         
                                     
                  
                                     
           
                
                              
         
                               
                                         
                            
                                    
                         
                                                                               
                                  
                      
                                                                     
                                  
               
                                                                                
                    
                          
             
                  
                        
           
                
               
                                                                
                              
                                                  
                                         
                                                                   
                                       
           
                                                          
                                
                                                                     
                                
                  
                                                     
                                
           
                                                                         
                               
         
                           
                        
                                     
         
       
     
    return ((enum RM_status)2);
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
              
    }
    flag = tmp;
    tmp___4 = unlinkat(fts->fts_cwd_fd, (char const *)ent->fts_accpath, flag);
    if (tmp___4 == 0) {
                       
                                                     
                     
                                                       
                            
                
                                            
                            
         
                                               
       
      return ((enum RM_status)2);
    }
                                 
                         
                                                                              
                    
                                     
                               
                                       
                        
         
              
                                     
                      
       
     
                                 
                                              
                   
                                 
     
                                  
                                    
                                 
     
    tmp___12 = quote((char const *)ent->fts_path);
    tmp___13 = gettext("cannot remove %s");
    tmp___14 = __errno_location();
    error(0, *tmp___14, (char const *)tmp___13, tmp___12);
                            
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
                                  
                  
     
                                  
                  
     
                                   
                  
     
                                   
                  
     
                                   
                  
     
    if ((int)ent->fts_info == 6) {
      goto case_8;
    }
                                  
                  
     
                                   
                  
     
    if ((int)ent->fts_info == 3) {
      goto case_8;
    }
                                  
                  
     
                                  
                  
     
                        
  case_1:
              if (!x->recursive) {
      tmp = quote((char const *)ent->fts_path);
      tmp___0 = gettext("cannot remove %s");
      error(0, 21, (char const *)tmp___0, tmp);
                              
                              
      return ((enum RM_status)4);
    }
                               
                                                      
                    
                                                               
       
                                                               
                                                     
                    
                                                     
                                                         
                                                    
                                
                                   
       
                            
                                                                    
                                                                      
                       
                                                                  
                                  
                                                             
                         
                                                                            
                                                            
                      
                                          
                                                                  
                                                                               
                                                      
                                                                      
               
                        
                                                                              
                                                  
                               
             
                      
                                    
                                       
           
         
       
     
    tmp___13 = prompt((FTS const *)fts, (FTSENT const *)ent, (_Bool)1, x,
                      (enum Prompt_action)2, &is_empty_directory);
    s = tmp___13;
                                
                                                   
                                          
                                
       
     
                                
                              
                              
     
    return (s);
  case_8:
                                 {
                               
                                  
                                                         
                                    
                                                          
                      
                                                                          
                                                          
                                       
           
         
       
    }
    if ((int)ent->fts_info == 6) {
                   
    } else {
                                    
                     
              
        tmp___16 = 0;
       
    }
    is_dir = (_Bool)tmp___16;
    tmp___17 = prompt((FTS const *)fts, (FTSENT const *)ent, is_dir, x,
                      (enum Prompt_action)3, (Ternary *)((void *)0));
                     
                                    
                     
     
    tmp___18 = excise(fts, ent, x, is_dir);
    return (tmp___18);
         
               
                                                    
                         
                                                                                
                                                                       
                                                                             
                                                    
                           
     
                  
                            
                               
         
                                                  
                                               
                                                               
                            
                               
                 
                                                  
              
                                                                            
                                                                     
                                   
            
                               
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
                                  
               {
      bit_flags = 536;
                               
                        
       
      tmp = xfts_open(file, bit_flags,
                      (int (*)(FTSENT const **, FTSENT const **))((void *)0));
      fts = tmp;
      while (1) {
        ent = fts_read(fts);
        if ((unsigned long)ent == (unsigned long)((void *)0)) {
                                       
                              
                                                 
                                         
                                                      
                                          
           
          goto while_break;
        }
        tmp___3 = rm_fts(fts, ent, x);
        s = tmp___3;
                                       
                                         
                                           
                            
                                                                       
                              
                                                                             
                              
             
           
         
                  {
          if ((unsigned int)s == 4U) {
            rm_status = s;
          } else {
                                        
                                                  
                              
               
             
          }
                               
        }
                       
      }
    while_break:
      tmp___6 = fts_close(fts);
                         
                                              
                                     
                                                  
                                      
       
    }
    return (rm_status);
  }
}
                    
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
                                                
                                                                               
                                                           
                                                                   
                                                                   
                                                                    
                                                            
        
                  
                 
                  
                
                
              
   
          
               
                        
                         
       
                                      
                                          
                         
                                    
                             
                             
                                                                      
                                                                         
                                                                              
                             
           
         
       
          
     
               
           
   
 
__attribute__((__noreturn__)) void usage(int status);
                        
            
                
                
                
                
                
                
                
                
                
                
   
                      
                                                                
                                                       
            
                                                           
                                                  
                                                                                
                                                                                
                                                                     
                                                    
                        
                                                                                
                                                                             
                                                                           
                                                                                
                                                                                
                                                                
                                                    
               
                                                                       
                                                                               
                                                                                
                                                                              
                                                    
                        
                                                                         
                                                                      
                                                                               
                                                                
                                                    
                                                                         
                                                    
               
                                                                            
                                                    
               
                                                                           
                                                                         
                                                                       
                                                    
                                                                                
                                                                                
                                                 
                                                                
                                                                            
                                                                            
                                                                              
                                                                             
                                                    
                            
     
                 
   
 
                                                  
   
                                       
                                            
                                  
                            
                                                    
                                    
                          
                                      
           
   
 
                                  
int main(int argc, char **argv) {
    AFL_INIT_SET0("rm");
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
                             
                           
                                                
                     
                                                           
                            
                         
                       
                              
    while (1) {
      c = getopt_long(argc, (char *const *)argv, "dfirvIR", long_opts,
                      (int *)((void *)0));
      if (!(c != -1)) {
        goto while_break;
      }
                     
                      
       
                     
                      
       
                     
                      
       
                    
                     
       
      if (c == 114) {
        goto case_114;
      }
                    
                      
       
                     
                      
       
                     
                      
       
                     
                      
       
                     
                      
       
                     
                      
       
                     
                      
       
                      
                          
       
                      
                          
       
                          
    case_100:
                goto switch_break;
             
                                             
                                        
                             
                        
             
                                             
                                        
                             
                        
            
                                             
                                        
                             
                        
    case_114:
      x.recursive = (_Bool)1;
                        
             
                   
                                                                         
                                                    
                                                                     
                                                                               
                                        
              
              
       
                   
                    
       
                   
                    
       
                   
                    
       
                            
           
                                             
                             
                            
           
                                             
                                        
                             
                            
           
                                             
                                        
                             
                            
                      
                        
             
                                   
                        
             
                               
                        
             
                               
                        
             
                             
                        
             
                           
                        
                 
               
                        
                 
                                                                       
                                                                           
                                       
              
                        
                   
                                          
               
    switch_break:;
    }
  while_break:;
                         
                                   
                
              
                                             
                                           
                 
       
     
                      
                          
                                                        
                                                                          
                               
                                                              
                                       
                                                             
         
       
     
                                      
    file = argv + optind;
                      
                        
                
              
                            
           
                            
                                                                        
                              
                  
                                                            
                              
           
                                                               
                            
                         
                    
           
         
       
     
    tmp___8 = rm((char *const *)file, (struct rm_options const *)(&x));
    status = tmp___8;
                                        
                                          
                                            
                                                                                
                                                
                                                                               
                                      
         
       
     
    if ((unsigned int)status == 4U) {
      tmp___9 = 1;
    } else {
                  
    }
    exit(tmp___9);
  }
}
