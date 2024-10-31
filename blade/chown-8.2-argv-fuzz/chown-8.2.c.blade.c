typedef unsigned long size_t;
typedef long __off_t;
                      
                
                
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
                  
                           
                         
           
  
struct _IO_FILE {
  int _flags;
                     
  char *_IO_read_end;
  char *_IO_read_base;
                       
  char *_IO_write_ptr;
  char *_IO_write_end;
                    
                    
                      
                        
                     
                              
                          
              
              
                     
                             
                             
                    
                    
                    
               
               
               
              
                
            
                                                                              
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
typedef struct hash_table Hash_table;
                
             
               
               
  
                   
struct __dirstream;
                   
typedef struct __dirstream DIR;
typedef int wchar_t;
union __anonunion___value_4 {
  unsigned int __wch;
                 
};
struct __anonstruct___mbstate_t_3 {
  int __count;
  union __anonunion___value_4 __value;
};
typedef struct __anonstruct___mbstate_t_3 __mbstate_t;
                            
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
struct quoting_options {
                          
            
                                                                  
  char const *left_quote;
  char const *right_quote;
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
                                   
typedef long __fsword_t;
struct Active_dir {
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};
struct statfs {
  __fsword_t f_type;
                    
                        
                       
                        
                       
                       
                  
                       
                      
                     
                        
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
                                                                   
                                                                   
                                                                 
                                                          
                                   
                                                                         
                              
                                  
                      
                                        
                                                
                                                                          
                                        
                                                
                                                            
                              
__attribute__((__noreturn__)) void xalloc_die(void);
                                                                   
                                                                 
                                
                                       
extern __attribute__((__nothrow__)) char *(__attribute__((__leaf__))
                                           gettext)(char const *__msgid)
    __attribute__((__format_arg__(1)));
void *hash_lookup(Hash_table const *table___0, void const *entry);
void *(__attribute__((__warn_unused_result__))
       hash_insert)(Hash_table *table___0, void const *entry);
                         
                                                    
                                                              
                                
                           
      
                                                                              
                                                                          
                            
                 
          
               
               

   
                         
              
                                  
     
                                             
                                   
                    
                                  
     
                            
                     
   
 
                     
                      
        
          
        
               
               

   
                  
                    
                            
                
                                     
                     
                  
                                     
                     
               
       
     
                
   
 
                          
int volatile exit_failure = (int volatile)1;
                                                           
                                                                             
                                                                 
                                                                         
                                   
                                                               
                                                                  
                                                            
extern __attribute__((__nothrow__, __noreturn__)) void(__attribute__((__leaf__))
                                                       abort)(void);
     
                                                                      
                                                                 
                                                                                
                                                                         
                                                                    
                                                                            
                              
                                                                         
                                                                    
                                                                             
                              
                                               
                                   
                                                        
                                                         
                                                    
                                                                          
                                                                     
                                                                              
                                                          
                                      
                                                                      
                                                                          
                                                                           
                                                                 
                                                                       
                              
extern __attribute__((__nothrow__))
size_t(__attribute__((__leaf__))
       mbrtowc)(wchar_t *__restrict __pwc, char const *__restrict __s,
                size_t __n, mbstate_t *__restrict __p);
unsigned int const is_basic_table[8];
__inline static _Bool is_basic(char c) {

  {
    return ((_Bool)((is_basic_table[(int)((unsigned char)c) >> 5] >>
                     ((int)((unsigned char)c) & 31)) &
                    1U));
  }
}
                                                  
                                                                     
          
                 
                 
              
                

   
                          
             
     
                         
                      
     
                                               
                  
                                  
                                                 
                                    
            
                                                       
                 
                                               
                                                                     
                                                    
                                                  
       
                                
               
                                         
                                                 
                       
                                                                       
                                                    
                                    
                                      
              
                                                      
                                                  
                                        
                
                                       
                                        
                                                        
                                                        
                                                                           
                                                          
                                                        
             
                                       
                                                
                                                                           
                                                          
                                                        
             
           
                                        
                                                               
                        
                                      
           
         
       
     
                               
           
   
  
                                  
                                           
int dup_safer(int fd) {
  int tmp;

  {
    tmp = fcntl(fd, 0, 3);
                 
  }
}
extern __attribute__((__nothrow__)) void *(
    __attribute__((__nonnull__(1, 2), __leaf__))
    memcpy)(void *__restrict __dest, void const *__restrict __src, size_t __n);
                                       
                                                
                                                                        
                                                                
                                                                          
                                                                 
char const diacrit_base[256];
                            
                                
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                                     
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                     
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                                       
                                                                     
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                     
                                                                       
                                                                        
                                
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                                                                              
                   
                                                       
                                                                          
                                                            

                                               
  
void cycle_check_init(struct cycle_check_state *state) {

  {
    state->chdir_counter = (uintmax_t)0;
                          
           
  }
}
                                                                          
            

   
                                    
                                              
                                                                   
                                                      
                                        
     
                               
                                                               
                                                                 
                            
         
       
     
                             
                                                        
              
                                        
                          
       
                                                
                                                
     
                      
   
  
extern void error(int __status, int __errnum, char const *__format, ...);
                                    
void close_stdout(void);
                              
                               
                                                              
                               
                                      
                             
                          
                         
                          
                  
                
               
               
              
               
              

   
                                   
                       
                         
                                     
                                
                  
         
              
         
                                                   
                          
                        
                                              
                                       
                                                             
                
                                       
                                                
         
                                 
       
     
                                   
                       
                               
     
           
   
 
                                   
                                                         
                                
                     
             
                  
              
                    
              
               
               

   
                             
                                       
                                      
                                      
                             
                                        
                    
                  
            
                        
                           
                      
                
                                       
                              
                 
                               
                                           
                           
             
                        
           
         
       
     
               
   
 
                                            
                                             
            
          
               
              
              

   
                            
                
                     
                  
                            
              
                             
       
                         
                              
                   
              
                                           
                            
                     
         
       
     
                
   
  
extern __attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                        fchdir)(int __fd);
                                                                               
                                                                     
                                           
                                             
                                                                            
                                           
                                                
                                                          
                                        
                                                
                                                                         
                                                     
                                                           
                                        
                   
                
                  

   
                    
                         
               

                                        
                         
       
             
     
              
             
               

                
                             
       
                                  
                             
              
                        
                   
                               
         
       
          
     
                   
                          
   
 
                                 
                           
                                        
                                                
                                                           
                              
                                                                  
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
DIR *opendir_safer(char const *name);
char const *simple_backup_suffix = "~";
                                                                             
                        
                                                                     
char const *quote_n(int n, char const *name);
                                                    
      
                                                                              
                                                                 
                                                                             
                                                                               
                                                                               
                                                    
          
                

   
                                              
               
            
               
     
                              
                   
     
                             
                     
   
 
                                                                 
                                                                      
                                                                 
                                                                      
                                                                                
                                                                       

   
                                                                  
                                
                               
     
                                      
                             
   
 
                                                                      
                                                       
                   
                   
              

   
                          
               
                      
              
                     
                         
       
                                   
                                                                  
     
               
                 
   
  
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes) {
  char *t_ptr;
  char **p;
  unsigned long tmp;
  strtol_error err;
  char const *q;
  unsigned char ch;
                                
               
                
               
               
           
               
                        
                
                

  {
    err = (strtol_error)0;
    if (0 <= strtol_base) {
                                
                                                              
                                                                     
                                                    
                                       
        
    } else {
      __assert_fail("0 <= strtol_base && strtol_base <= 36",
                    "/home/khheo/project/program-reduce/benchmark/"
                    "coreutils-8.2/lib/xstrtol.c",
                    83U, "xstrtoul");
    }
             
              
            
                 
      
    q = s;
    ch = (unsigned char)*q;
              
                                
                                                         
                         
       
          
                             
      
              
                       
                               
     
                                 
                 
                                     
                                               
                           
                    
                                                       
                        
                      
                  
                                     
           
                
                                   
         
              
                                 
       
            
                                   
                          
                                     
                             
                                   
         
                              
       
     
                          
                 
                   
     
                          
                  
                   
                                                   
                     
                   
                                                        
       
                                            
                    
                                          
                        
         
                                         
                       
         
                                         
                       
         
                          
               
                                         
                        
         
                          
              
                    
                   
                          
                    
       
                             
                     
       
                             
                         
       
                             
                     
       
                             
                     
       
                             
                     
       
                              
                     
       
                              
                      
       
                             
                      
       
                             
                     
       
                              
                     
       
                             
                     
       
                             
                     
       
                              
                     
       
                              
                      
       
                             
                     
       
                             
                     
       
                          
            
                                          
                            
                
                                           
                            
            
                                 
                            
            
                                                       
                            
            
                                                       
                            
             
                                                       
                            
            
                                                       
                            
            
                                                       
                            
            
                                                       
                            
             
                                        
                            
            
                                                       
                            
            
                                                       
                            
                   
                 
                                                      
                     
                                                                       
                     
                  
                                                     
       
     
               
                 
  }
}
                                                                   
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
    if (!p) {
                      
        xalloc_die();
        
    }
    return (p);
  }
}
void *xrealloc(void *p, size_t n) {

  {
                     
             
                     
                     
       
     
               
  }
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
                        
                                                               
                     
  }
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
      tmp___0 = __errno_location();
                             
                                                     
                                                                     
                                                 
                                        
       
                   
    }
    return (fts);
  }
}
                                                                
          

   
                                
                                    
                
              
                
       
            
       
                                  
                                   
                                     
                    
                  
                    
           
                
                  
         
              
                
       
     
                        
   
  
__attribute__((__noreturn__)) void xalloc_die(void);
void xalloc_die(void) {
  char *tmp;

  {
    tmp = gettext("memory exhausted");
                                          
            
  }
}
extern int printf(char const *__restrict __format, ...);
                                                    
                                                     
                                    
                                                            
                                                              
                                                                   
                                                                                
                                                          
                                                                             
                                                                         
                                                            
                                                              
                                                                    
            
                
                
                
                
                
                
                
                
                
                
                 

   
                       
                                                                      
            
                                                   
     
                         
                                                      
             
                                                               
                                                                              
                                                                           
                                                                 
                                                  
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                           
                  
     
                        
         
            
         
                                          
                                                           
                      
         
                                                 
                                                                           
                      
         
                                                      
                                                                          
                            
                      
         
                                                           
                                                                          
                                            
                      
         
                                                               
                                                                          
                                                            
                      
         
                                                                   
                                                                          
                                                                            
                      
         
                                                                       
                                                                          
                                                                           
                            
                      
         
                                                                            
                                                                          
                                                                           
                                            
                      
         
                                                                                
                                                                          
                                                                           
                                                            
                      
                 
                       
                                                                          
                                                                           
                                                                           
                                                            
                      
                
           
   
 
                                                                                
                                                           
                   
                          
                  

   
                          
               

                             
                                                      
                                 
                                                                  
                           
         
              
                         
       
                  
     
              
                                                           
                                                               
           
   
  
void version_etc(FILE *stream, char const *command_name, char const *package,
                 char const *version, ...) __attribute__((__sentinel__));
                                                                            
                                            
                  

   
                                         
                                                                    
                              
           
   
 
                                        
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                                         
                                                          
                                                                     
                                                               
                           
extern struct passwd *getpwnam(char const *__name);
                          
                                             
extern struct group *getgrnam(char const *__name);
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i,
                                                          char *buf___1);
static char const *parse_with_separator(char const *spec, char const *separator,
                                        uid_t *uid, gid_t *gid, char **username,
                                        char **groupname);
                                                   
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
                       
              
                        
  strtol_error tmp___3;
  char buf___1[(((sizeof(uintmax_t) * 8UL) * 146UL) / 485UL + 1UL) + 1UL];
  char *tmp___4;
  char *tmp___5;
  struct group *tmp___6;
  unsigned long tmp___7;
  strtol_error tmp___8;
  char const *tmp___9;

  {
                                
    unum = *uid;
    gnum = *gid;
    error_msg = (char const *)((void *)0);
                             
                     
    *username = tmp;
    u = (char *)((void *)0);
    if ((unsigned long)separator == (unsigned long)((void *)0)) {
      if (*spec) {
        u = xstrdup(spec);
      }
    } else {
      ulen = (size_t)(separator - spec);
      if (ulen != 0UL) {
        u = (char *)xmemdup((void const *)spec, ulen + 1UL);
        *(u + ulen) = (char)'\000';
      }
    }
    if ((unsigned long)separator == (unsigned long)((void *)0)) {
      g = (char const *)((void *)0);
    } else {
      if ((int const) * (separator + 1) == 0) {
                                      
      } else {
        g = separator + 1;
      }
    }
    if ((unsigned long)u != (unsigned long)((void *)0)) {
      if ((int)*u == 43) {
        pwd = (struct passwd *)((void *)0);
      } else {
        tmp___0 = getpwnam((char const *)u);
                      
      }
                                                            
                                                                     
                                                               
                        
                  
                        
           
                
                      
         
                                         
                              
                                 
                
                   
                                                                                
                                            
                                          
                                                  
                                      
                      
                                           
               
                    
                                         
             
                  
                                       
           
         
              
                           
                                                             
                                                                       
                               
                                 
                      
                                     
                    
                                                            
                                
             
                                                   
                       
           
         
        
      endpwent();
    }
    if ((unsigned long)g != (unsigned long)((void *)0)) {
      if ((unsigned long)error_msg == (unsigned long)((void *)0)) {
                                     
          grp = (struct group *)((void *)0);
                 
          tmp___6 = getgrnam(g);
          grp = tmp___6;
          
        if ((unsigned long)grp == (unsigned long)((void *)0)) {
          tmp___8 = xstrtoul(g, (char **)((void *)0), 10, &tmp___7, "");
          if ((unsigned int)tmp___8 == 0U) {
            if (tmp___7 <= 4294967295UL) {
              if ((gid_t)tmp___7 != 4294967295U) {
                gnum = (gid_t)tmp___7;
              } else {
                error_msg = E_invalid_group;
              }
            } else {
              error_msg = E_invalid_group;
            }
          } else {
            error_msg = E_invalid_group;
          }
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
  char const *dot;
                     
                      

  {
    tmp = (char const *)strchr(spec, ':');
    colon = tmp;
    tmp___0 = parse_with_separator(spec, colon, uid, gid, username, groupname);
    error_msg = tmp___0;
                
                      
                                                  
                      
                  
                   
                                                                             
                         
                                                  
           
         
       
      
                       
  }
}
char *(__attribute__((__warn_unused_result__)) umaxtostr)(uintmax_t i,
                                                          char *buf___1) {
  char *p;

  {
    p = buf___1 + (((sizeof(uintmax_t) * 8UL) * 146UL) / 485UL + 1UL);
                 
    while (1) {
         
                                   
      i /= 10UL;
      if (!(i != 0UL)) {
        goto while_break;
      }
    }
  while_break:;
    return (p);
  }
}
#pragma weak pthread_key_create
#pragma weak pthread_getspecific
#pragma weak pthread_setspecific
#pragma weak pthread_key_delete
#pragma weak pthread_self
#pragma weak pthread_cancel
size_t strnlen1(char const *string, size_t maxlen) {
                 
                  

  {
                                                                    
              
                                                          
                                             
            
                      
      
  }
}
                                                
                                                           
struct dev_ino *get_root_dev_ino(struct dev_ino *root_d_i) {
  struct stat statbuf;
  int tmp;

  {
                              
              
                                             
     
                                      
                                      
                      
  }
}
reg_syntax_t rpl_re_syntax_options;
                                        
                                              
                                                               
                                              
                                                                  
                                                                       
                                                                       
                                            
            
                
                

   
                              
                       
                    
            
                                          
                        
     
                             
   
 
                                                                 
                                                               
                                           
                                                                   
                                           
                                                  
                                                             
                                                             
                                                             
                                                              
                                                      
                                                                
                   
                  
                              
            
        

   
                          
            
              
            
                                     
     
                                                                       
                                                           
                                  
                                                 
               
   
  
static struct quoting_options
quoting_options_from_style(enum quoting_style style) {
                          

   
                   
                
                                                                      
               
   
 
                                                                          
                          
                  

   
                                       
                      
                                                             
                                  
                           
       
     
                         
   
 
             
                                                                          
                                                                          
                                                                        
                                                                           
           
             
                           
                          
                          
                       
             
                           
                  
                    
                       
              
              
           
                  
                                 
                    
            
               
                 
           
              
              
              
              
                 

   
                    
                                   
                                 
                                 
                                   
                                         
                                                   
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                                            
                  
     
                        
         
                                          
                                  
         
                              
                 

                               
                                       
         
              
                         
       
                 
     
                                 
                        
                                 
                      
         
                                 
                                  
                      
         
                                            
                                                     
                                                       
     
                              
                                
                 

                             
                               
         
                   

                                 
                                                  
           
                
                               
         
                      
                       
       
                     
     
                                 
                               
                                            
                      
         
                                          
                                  
         
                              
                 

                               
                                       
         
              
                             
       
                     
     
                        
                                 
                      
         
                                  
                      
                 
            
               
                  
               

                                            
                                               
              
                               
       
                    
                             
       
                                
                              
                               
                                                
                                                     
                                                                           
                               
                                       
                                               
               
                                        
             
           
         
       
                                    
                        
                        
       
                         
                     
       
                        
                        
       
                        
                        
       
                         
                     
       
                         
                     
       
                         
                     
       
                        
                    
       
                         
                     
       
                         
                     
       
                          
                      
       
                          
                      
       
                         
                     
       
                          
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                          
                     
       
                         
                         
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                         
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                          
                     
       
                              
               
                              
                                 
                                         
         
                   

                                 
                                         
           
                
                               
         
                       
                                
                                              
                                                        
                         

                                       
                                              
                 
                      
                                     
               
                             
                         

                                       
                                              
                 
                      
                                     
               
                             
             
           
         
                               
              
                        
                      
         
       
                            
            
                                              
                        
       
                                              
                        
       
                              
               
                               
                                       
       
                            
               
                      
                                
                                                      
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                                        
                           
             
                                    
                  
                                     
                                             
             
                                                  
                     
                       

                                     
                                            
               
                    
                                   
             
                           
                       

                                     
                                             
               
                    
                                   
             
                           
                       

                                     
                                             
               
                    
                                   
             
                           
                       

                                     
                                            
               
                    
                                    
             
                            
                                  
                             
                                  
                            
           
         
       
                            
                       
                            
                      
                            
               
                               
                    
               
                               
                    
            
                               
                    
            
                               
                              
            
                               
                              
           
                               
                              
            
                               
                    
            
              
                              
                                 
                                 
                         
           
         
       
                       
                                              
                                 
                                         
         
       
             
                              
                
                          
       
                            
             
                                            
                                               
              
                                 
       
                     
                              
       
            
                     
                              
       
            
                                              
                                 
                                         
         
       
                            
                
                                              
                                 
                                         
         
                   

                                 
                                         
           
                
                                
         
                        
                   

                                 
                                         
           
                
                                
         
                        
                   

                                 
                                         
           
                
                                
         
                        
       
                            
            
                            
                       
                           
                      
                                  
                                                                              
              
                                                       
                      
                             
                                              
                                
         
                   
                                                                            
                          
                             
                                  
                  
                                                
                                   
                                    
                    
                                                  
                                     
                           

                                        
                                            
                                            
                     
                          
                                          
                   
                      
                 
                                
                                      
                      
                                         
                                                          
                                  
                               

                                         
                                              
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                      
                                         
                       
                                                                       
                                         
                       
                                              
                                
                                                     
                                       
                                            
                                     
                          
                     
                                    
                   
                 
                                              
                               
                                       
                 
                           
               
             
           
                                                           
                        
                                  
           
         
                        
       
                    
                    
              
                                
                           
                 
                         
                       

                                      
                                 
                                           
                                                   
                   
                             

                                           
                                                   
                     
                          
                                          
                   
                                  
                             

                                           
                                                                   
                     
                          
                                          
                   
                                  
                             

                                           
                                                                         
                     
                          
                                          
                   
                                 
                                                         
                        
                          
                 
                      
                 
                                     
                             

                                           
                                                   
                     
                          
                                          
                   
                                 
                                            
                 
               
                                    
                                      
               
                         

                                       
                                            
                 
                      
                                      
               
                             
                  
                                            
             
                            
                         
           
         
       
                      
                              
                    
              
                                 
               
                                
                                                                               
                                                              
                                                                        
                          
             
                  
                        
           
                
               
                                
                         
           
         
       
                 
                               
                                       
       
                 

                               
                                       
         
              
                              
       
                      
            
                 

                               
                                    
         
              
                              
       
                      
           
          
     
                   
                     
                                              
                                 
                                         
         
       
     
                       
                                
                   

                               
                                  
           
                     

                                   
                                                    
             
                  
                                  
           
                         
                         
         
                        
       
     
                           
                                     
     
                 
                            
                                       
                                                                    
                                                                    
                     
   
 
                       
                               
                                                        
                                           
                                                                       
                                                                        
        
           
                  
                     
            
                     
              
                          
              
            
            
               
                 
               

   
                             
             
                         
                 
                
              
     
                       
                             
                                                                              
                                                
                     
              
                     
       
                                               
                     
       
                         
                                                
              
                     
       
                                                                         
                   
                         
                       
       
                                                                            
                                
     
                          
                        
                                      
                                       
                                                                           
                                                         
                                                                               
                    
                        
                         
                            
                                                         
                          
       
                             
                          
                                                       
                                                                         
                                                                                
                                                                 
                                                                   
     
                                 
                 
                 
   
 
                                                                      
                           
                             
                

   
                                        
            
                                                    
                                                                       
                     
   
  
                                                                   
                                 
            

  {
                                     
                                      
                                            
                                                                         
                
   
 
                                               
            

   
                                                 
                 
  }
}
char *quotearg_colon(char const *arg) {
  char *tmp;

  {
                                        
    return (tmp);
  }
}
                                             
                  

   
                                                                         
                 
   
 
                                     
                  

   
                           
                 
   
 
                         
                                         
                                     
                                          
                                                                        
                                                     
                                          
                    
                   
          
              

   
                                                             
                                                                                
              
     
                                              
                                                             
                       
            
                   
     
                             
                                                        
                         
                     
                                              
                       
                           
                                                        
         
       
     
                         
                                            
           
   
 
                                           
                                                
                                                                   
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
     
                                                                              
                                                         
DIR *opendir_safer(char const *name) {
  DIR *dp;
  DIR *tmp;
  int fd;
  int tmp___0;
            
        
        
              
               
  int *tmp___3;

  {
    tmp = opendir(name);
    dp = tmp;
            
                          
                   
                    
                      
                                  
                      
                                   
                                       
                       
                       
                     
           
                       
                                       
                       
                     
         
       
      
    return (dp);
  }
}
int openat_safer(int fd, char const *file, int flags, ...);
                                                           
              
             
          
              

   
                     
                     
                                    
                                          
                           
     
                                        
                            
                     
   
 
                                                  
              
             
          
              

   
                     
                     
                                    
                                          
                           
     
                                  
                            
                     
   
  
int mbscasecmp(char const *s1, char const *s2) {
  mbui_iterator_t iter1;
  mbui_iterator_t iter2;
          
            
                 
              
              
              
              
              
             
              
               
               
               
               
  int tmp___14;
  int tmp___15;
  int tmp___16;
                         
                          
                   
                   
  int tmp___18;
                                 
               
                                  
  size_t tmp___25;

  {
    if ((unsigned long)s1 == (unsigned long)s2) {
      return (0);
    }
    tmp___25 = __ctype_get_mb_cur_max();
    if (tmp___25 > 1UL) {
      iter1.cur.ptr = s1;
                                
                                                                
      iter1.next_done = (_Bool)0;
                        
                                
                                                                
                                 
                 
                                   
                                 
                                  
                         
                  
                         
           
                
                       
         
                       
                                     
                                   
                                    
                           
                    
                           
             
                  
                         
           
                          
                             
           
                
                           
         
                                 
                                   
                                                 
                                                     
                                              
                  
                         
           
                             
                
                                   
                         
                  
                                                     
                                                           
                                                                             
                                 
                    
                                                      
                                                             
                                                                               
                                  
                              
                        
                               
                 
                                  
                      
                                                             
                                                                               
                                   
                              
                        
                               
                 
                                  
               
                                 
             
                                
           
                              
         
                       
                       
                       
         
                                         
                                   
                                         
                                   
       
                
                                 
      if (iter1.cur.wc_valid) {
        if (iter1.cur.wc == 0) {
                       
        } else {
          tmp___15 = 1;
        }
      } else {
        tmp___15 = 1;
      }
                    
                   
       
                                 
                               
                                
                       
                
                       
         
              
                     
       
                     
                    
       
                 
            
                                     
                                     
                 
                                   
                                                         
                                       
                                       
                
                                  
         
                                   
                                                         
                                       
                                       
                
                                  
         
                           
                               
         
             
             
                                    
                               
         
       
                     
                                 
    }
  }
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
                                    
                           
                                     
                                               
        

   
                            
                      
                     
          
               

                     
                         
       
                                   
          
     
              
                                     
           
   
  
_Bool i_ring_empty(I_ring const *ir) {

  { return ((_Bool)ir->ir_empty); }
}
int i_ring_push(I_ring *ir, int val) {
  unsigned int dest_idx;
              

  {
                                                                   
                                   
                                
                            
                                  
                                                                       
     
                            
                     
  }
}
int i_ring_pop(I_ring *ir) {
  int top_val;
            

  {
                                          
              
              
     
                                        
                                                   
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

  {
    return (((x >> n) | (x << (8UL * sizeof(x) - (unsigned long)n))) &
            0xffffffffffffffffUL);
  }
}
static struct hash_tuning const default_tuning = {
    (float)0.0, (float)1.0, (float)0.8, (float)1.414, (_Bool)0};
void *hash_lookup(Hash_table const *table___0, void const *entry) {
  struct hash_entry const *bucket;
  size_t tmp;
  struct hash_entry const *cursor;
  _Bool tmp___0;

  {
    tmp = (*(table___0->hasher))(entry, (size_t)table___0->n_buckets);
    bucket = (struct hash_entry const *)(table___0->bucket + tmp);
    if (!((unsigned long)bucket < (unsigned long)table___0->bucket_limit)) {
      abort();
    }
                                                                   
                         
     
                    
               

                    
                         
       
                                                                
                                      
              
                                                                                
                      
                                        
         
       
                                                       
     
               
                       
  }
}
                                                         
               
                   

   
                      
               
                                  
                
                         
       
                                                      
               
     
               
                   
   
 
                                         
                 
                
          

   
                        
                               
               

                               
                                     
                           
         
              
                         
       
                
                              
                
     
               
                              
              
            
              
     
                        
   
  
                                           
            

   
                           
                             
     
                     
               

                                              
                                  
                  
                           
         
              
                         
       
                       
     
               
                       
   
  
static size_t raw_hasher(void const *data, size_t n) {
  size_t val;
  size_t tmp;

  {
    tmp = rotr_sz((size_t)data, 3);
              
    return (val % n);
  }
}
                                                          

                                                             
 
                                                  
                            
                

   
                               
                                                                    
                        
     
                   
                                                    
                                                                         
                                                                
                                                           
                                                                 
                                        
                                                            
                                                                     
                                               
                                    
                 
               
             
           
         
       
     
                                        
                      
   
  
static size_t compute_bucket_size(size_t candidate, Hash_tuning const *tuning) {
  float new_candidate;
  int tmp;

  {
    if (!tuning->is_n_buckets) {
      new_candidate =
          (float)((float const)candidate / tuning->growth_threshold);
      if ((float)0xffffffffffffffffUL <= new_candidate) {
        return ((size_t)0);
      }
                                       
     
                                      
                                              
               
            
               
    }
    if ((size_t)tmp / sizeof(struct hash_entry *) < candidate) {
      return ((size_t)0);
    }
    return (candidate);
  }
}
Hash_table *(__attribute__((__warn_unused_result__))
             hash_initialize)(size_t candidate, Hash_tuning const *tuning,
                              size_t (*hasher)(void const *, size_t),
                              _Bool (*comparator)(void const *, void const *),
                              void (*data_freer)(void *)) {
  Hash_table *table___0;
  _Bool tmp;

  {
                                                               
      hasher = &raw_hasher;
      
                                                                 
                                   
      
    table___0 = (Hash_table *)malloc(sizeof(*table___0));
                                                                
                                         
     
                   
                               
      
                              
                                  
               
                
     
                                                                  
                                
                
     
                                                    
                                                            
                                                                        
                
     
                             
                                                                              
                                          
                                     
                               
                                       
                                       
                                                                  
                       
       
                            
                                       
  }
}
void hash_free(Hash_table *table___0) {
  struct hash_entry *bucket;
  struct hash_entry *cursor;
                          

  {
    if (table___0->data_freer) {
      if (table___0->n_entries) {
        bucket = table___0->bucket;
        while (1) {

          if (!((unsigned long)bucket <
                (unsigned long)table___0->bucket_limit)) {
            goto while_break;
          }
          if (bucket->data) {
            cursor = bucket;
                      

                            
                                     
               
                                                       
                                    
             
                          ;
          }
          bucket++;
        }
      while_break:;
      }
    }
                              
              

                                                                              
                             
       
                            
                 

                      
                               
         
                            
                             
                      
       
                    
               
     
                  
                                        
               

                    
                             
       
                          
                           
                    
     
                  
                                    
                            
           
   
 
                                                                 
                         

   
                                      
                                       
                                             
             
                                                      
      
                 
   
 
                                                                         

   
                           
                                             
                                       
           
  }
}
static void *hash_find_entry(Hash_table *table___0, void const *entry,
                             struct hash_entry **bucket_head, _Bool delete) {
  struct hash_entry *bucket;
  size_t tmp;
                            
            
                          
                
                 
                              
                

  {
    tmp = (*(table___0->hasher))(entry, table___0->n_buckets);
                                    
                                                                            
              
     
                          
                                                                    
                         
     
                                                              
              
            
                                                                              
                    
         
                            
                     
                             
                                
                            
                                        
                  
                                     
           
         
                      
       
     
                    
               

                          
                         
       
                                                                        
                    
              
                                             
                                                       
                      
               
                                          
                       
                                    
                                          
                                            
           
                            
         
       
                            
     
               
                       
  }
}
static _Bool transfer_entries(Hash_table *dst, Hash_table *src, _Bool safe) {
  struct hash_entry *bucket;
  struct hash_entry *cursor;
                          
  void *data;
  struct hash_entry *new_bucket;
             
  size_t tmp___0;
  struct hash_entry *new_entry;
  struct hash_entry *tmp___1;

  {
                         
    while (1) {

      if (!((unsigned long)bucket < (unsigned long)src->bucket_limit)) {
                        
       
                         
                              
                   

                       
                                 
           
                              
                                                                     
                                        
                                                                                
                    
           
                              
                                 
                                            
                                      
                  
                                    
                                    
                                    
            
                        
          
      while_break___0:
        data = bucket->data;
        bucket->next = (struct hash_entry *)((void *)0);
        if (safe) {
                      
        }
        tmp___0 = (*(dst->hasher))((void const *)data, dst->n_buckets);
                                          
                                                                              
                  
          
        if (new_bucket->data) {
                                        
          new_entry = tmp___1;
                                                                      
                              
            
          new_entry->data = data;
                                            
                                       
                
                                  
                                  
        }
        bucket->data = (void *)0;
        (src->n_buckets_used)--;
      }
    __Cont:
      bucket++;
    }
  while_break:;
    return ((_Bool)1);
  }
}
                                            
                                                             
                     
                        
                  
             
                
                
                

   
                                                            
                   
                    
                        
     
                                           
                        
     
                         
                       
                                                                            
                                                                         
                        
     
                                    
                             
                                                                  
                                          
                                     
                                          
                                          
                                                  
                                                  
                                                            
                                                               
                  
                                      
                                            
                                                        
                                                  
                                                            
                                                              
                        
     
                                                            
                                                               
                  
                                                                 
                     
                
       
            
              
     
                                    
                      
   
 
                                              
                                                               
             
                            
                            
                  
            
                
                
                               
                             

   
                 
              
     
                                                                
                                                            
                    
     
                                                
                                               
                                                
                              
                                                  
                                                 
                                                  
                                   
                                   
                                                           
                                               
                
                                                            
                                                 
                                                  
         
                        
                                                       
                             
         
                                                            
                       
                             
         
                                                                       
                                                                   
                  
         
       
     
                       
                                          
                          
                                                                   
                           
       
                                      
                                     
                               
                               
                             
     
                                 
                             
                                  
                           
   
  
void *hash_delete(Hash_table *table___0, void const *entry) {
  void *data;
  struct hash_entry *bucket;
                           
                   
            
                           
                          
                

  {
    data = hash_find_entry(table___0, entry, &bucket, (_Bool)1);
               
                         
     
                             
                       
                                    
                                                  
                                                 
                                                  
                                
                                                    
                                                   
                                                    
                                     
                                     
                                                             
                                                 
                  
                                                              
                                                   
                                                    
           
                                  
                                                      
                         
                                                
                       

                            
                                 
               
                                  
                                   
                            
             
                       
                                                                          
           
         
       
     
                  
  }
}
size_t hash_pjw(void const *x, size_t tablesize);
                                                     
                           
             
                 

   
                                   
                                                          
                  
                                                           
   
 
                                                            
                           
                           
              
              

   
                                   
                                   
                                 
                                   
                                                                       
                           
                      
                
                      
         
              
                    
       
            
                  
     
                            
   
 
                           
                     

   
                             
                          
                    
           
   
 
                                                  
                
           

   
                  
                        
               

                
                         
       
                                                                               
          
     
               
                           
   
 
                                                                    
                                                                     
                                                                            
                                        
                                                
                                                     
                                                        
                                                                       
                                                                               
                            
                                                                              
                                                          
                                                                              
                                                                
                                              
                                                               
                                                                
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen);
static FTSENT *fts_build(FTS *sp, int type);
static void fts_lfree(FTSENT *head);
                                         
                                               
static void fts_padjust(FTS *sp, FTSENT *head);
static _Bool fts_palloc(FTS *sp, size_t more);
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems);
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow);
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir);
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
                                     
                                             
  }
}
static _Bool setup_dir(FTS *fts) {

  {
    if (fts->fts_options & 258) {
      fts->fts_cycle.ht =
          hash_initialize((size_t)31, (Hash_tuning const *)((void *)0),
                          &AD_hash, &AD_compare, (void (*)(void *))(&free));
                                
                          
        
    } else {
      fts->fts_cycle.state =
          (struct cycle_check_state *)malloc(sizeof(*(fts->fts_cycle.state)));
      if (!fts->fts_cycle.state) {
                          
      }
      cycle_check_init(fts->fts_cycle.state);
    }
    return ((_Bool)1);
  }
}
static _Bool enter_dir(FTS *fts, FTSENT *ent) {
  struct stat const *st;
                       
                         
                                   
                

  {
    if (fts->fts_options & 258) {
      st = (struct stat const *)(ent->fts_statp);
                                                    
               
                
                          
       
                                  
                                  
                        
                     
                                                                                
                                                              
                         
                             
                            
         
                                                
                                          
       
            
                                                 
                                                                   
                    
                             
                                          
        
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
      obj.dev = (dev_t)st->st_dev;
      obj.ino = (ino_t)st->st_ino;
      found = hash_delete(fts->fts_cycle.ht, (void const *)(&obj));
                  
                
       
                  
            
                               
                                                                
                                      
                     

                                                               
                      
             
                                                                              
                                                                                
                                                        
                                                
                                                        
                                                
               
             
                             
           
                     
         
        
    }
    return;
  }
}
static void free_dir(FTS *sp) {

  {
    if (sp->fts_options & 258) {
      if (sp->fts_cycle.ht) {
        hash_free(sp->fts_cycle.ht);
      }
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
                   
                  
        
    }
  while_break:;
    return;
  }
}
static void fts_set_stat_required(FTSENT *p, _Bool required) {

  {
              

                                      
                
       
                       
      
  while_break:;
                  
                                           
            
                                           
      
    return;
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
                           
                  
          
      }
      goto while_break;
    }
  while_break:;
    if (chdir_down_one) {
                                              
                            
                                
                               
        
    } else {
                                    
                        
          close(old);
          
        
    }
    sp->fts_cwd_fd = fd;
           
  }
}
__inline static int diropen(FTS const *sp, char const *dir) {
  int open_flags;
  int tmp;
  int fd;
  int tmp___0;
  int tmp___1;
  int tmp___2;

  {
                             
                   
            
              
      
    open_flags = 67840 | tmp;
                               
                                                                   
                        
            
                                            
                        
      
    fd = tmp___2;
                 
                                     
     
                
  }
}
                           
                                                       
                                               
                                                                 
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
                               
                          
                                   
                    
                                  
     
                      
                          
                                     
                      
                                    
       
      
    if (!(options & 18)) {
                                   
      *tmp___2 = 22;
      return ((FTS *)((void *)0));
    }
    sp = (FTS *)malloc(sizeof(FTS));
    if ((unsigned long)sp == (unsigned long)((void *)0)) {
      return ((FTS *)((void *)0));
    }
    memset((void *)sp, 0, sizeof(FTS));
    sp->fts_compar = compar;
    sp->fts_options = options;
    if (sp->fts_options & 2) {
                           
      sp->fts_options &= -513;
    }
    sp->fts_cwd_fd = -100;
                                 
                        
                            
                          
            
                             
      
    tmp___6 = fts_palloc(sp, tmp___5);
    if (!tmp___6) {
                
    }
    if ((unsigned long)*argv != (unsigned long)((void *)0)) {
      parent = fts_alloc(sp, "", (size_t)0);
      if ((unsigned long)parent == (unsigned long)((void *)0)) {
        goto mem2;
      }
      parent->fts_level = (ptrdiff_t)-1;
    }
    if ((unsigned long)compar == (unsigned long)((void *)0)) {
                 
            
                                   
                    
              
                    
        
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
        goto mem3;
      }
      p->fts_level = (ptrdiff_t)0;
      p->fts_parent = parent;
      p->fts_accpath = p->fts_name;
      if (defer_stat) {
                                                                 
                                          
                                             
                 
                                                  
          
      } else {
        p->fts_info = fts_stat(sp, p, (_Bool)0);
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
  while_break:;
    if (compar) {
      if (nitems > 1UL) {
        root = fts_sort(sp, root, nitems);
      }
    }
    tmp___9 = fts_alloc(sp, "", (size_t)0);
    sp->fts_cur = tmp___9;
                                                              
                
      
    (sp->fts_cur)->fts_link = root;
    (sp->fts_cur)->fts_info = (unsigned short)9;
    tmp___10 = setup_dir(sp);
    if (!tmp___10) {
      goto mem3;
    }
                                
                                     
                                                 
                               
                           
                               
         
       
     
                                      
    return (sp);
  mem3:
    fts_lfree(root);
    free((void *)parent);
  mem2:
    free((void *)sp->fts_path);
  mem1:
    free((void *)sp);
    return ((FTS *)((void *)0));
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
                          

   
                                   
                                   
                                               
   
 
                                                      
          
  Hash_table *h;
                     
                      
  _Bool opt_ok;
  struct LCO_ent *t2;
  struct hash_table *tmp___0;

  {
                          
                                           
                                   
                        
      
    if ((unsigned long)h == (unsigned long)((void *)0)) {
      tmp___0 =
          hash_initialize((size_t)13, (Hash_tuning const *)((void *)0),
                          &LCO_hash, &LCO_compare, (void (*)(void *))(&free));
                                                  
                  
      if ((unsigned long)h == (unsigned long)((void *)0)) {
        return ((_Bool)0);
      }
    }
                                              
                                                              
                                                              
              
                           
     
                                               
                                                          
                        
     
                                                       
                        
                                               
                                                             
                                                           
                       
                        
     
               

                                                       
                
       
                       
     
              ;
                    
  }
}
                           
                                                                              
FTSENT *(__attribute__((__warn_unused_result__, __leaf__)) fts_read)(FTS *sp) {
  FTSENT *p;
  FTSENT *tmp;
  unsigned short instr;
  char *t;
  int *tmp___0;
  int tmp___1;
  int *tmp___2;
  int tmp___3;
  struct _ftsent *tmp___4;
  int tmp___5;
  int tmp___6;
  int tmp___7;
  int tmp___8;
             
                
               
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
      if ((int)instr == 4) {
                   
              
                                   
                                                       
                 
                                        
                                  
             
                               
                                       
                                                            
             
                                            
                       
                               
                               
             
                       
                       
            
         
       
                                                                       
                                    
                                   
                                   
                                                        
          
       
                                                                       
                                                                              
                     
                                       
                                  
                                                                 
                            
                     

                                                                    
                                   
             
                                                          
                            
           
                         
          
      } else {
        tmp___4 = fts_build(sp, 3);
        sp->fts_child = tmp___4;
        if ((unsigned long)tmp___4 == (unsigned long)((void *)0)) {
                                      
                                           
           
                             
                                        
                                              
             
            
                    
                             
                                 
            
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
    p = p->fts_link;
    if ((unsigned long)p != (unsigned long)((void *)0)) {
      sp->fts_cur = p;
      free((void *)tmp);
      if (p->fts_level == 0L) {
                                       
                                    
                                      
                                        
                             
                    
                                    
             
                                                  
                        
                  
                                        
                             
                    
                                    
             
                                      
                              
           
                        
                        
                  
                        
           
                
                      
         
                      
                                  
                                         
         
                     
                        
                      
                           
       
                                   
                  
      }
      if ((int)p->fts_instr == 2) {
                                               
                                    
                                       
                                                     
                                    
                               
                                            
                                       
                                              
                    
                                                                     
             
           
          
        p->fts_instr = (unsigned short)3;
      }
    name:
                                           
                                                                
        tmp___12 = (p->fts_parent)->fts_pathlen - 1UL;
               
        tmp___12 = (p->fts_parent)->fts_pathlen;
        
      t = sp->fts_path + tmp___12;
      tmp___13 = t;
      t++;
      *tmp___13 = (char)'/';
      memmove((void *)t, (void const *)(p->fts_name), p->fts_namelen + 1UL);
    check_for_dir:
      sp->fts_cur = p;
      if ((int)p->fts_info == 11) {
                                             
          parent = p->fts_parent;
          if (0L < p->fts_level) {
            if (parent->fts_n_dirs_remaining == 0UL) {
              if (sp->fts_options & 8) {
                                            
                                                                           
                                 
                                
                    
                         
                              
                  
              } else {
                goto _L___4;
              }
            } else {
              goto _L___4;
            }
          } else {
          _L___4:
            p->fts_info = fts_stat(sp, p, (_Bool)0);
            if ((p->fts_statp[0].st_mode & 61440U) == 16384U) {
                                      
                                                   
                                                   
                 
                
            }
          }
                 
                    

                                                   
                      
             
                                 
            
        while_break___2:;
          
      }
                                 
                                 
                                               
         
                                    
                        
                                        
                         
                                         
         
        
      return (p);
    }
    p = tmp->fts_parent;
    sp->fts_cur = p;
    free((void *)tmp);
    if (p->fts_level == -1L) {
      free((void *)p);
                                    
                    
      tmp___18 = (struct _ftsent *)((void *)0);
      sp->fts_cur = tmp___18;
      return (tmp___18);
    }
                

      if (!((int)p->fts_info != 11)) {
        abort();
      }
      goto while_break___3;
      
  while_break___3:
    *(sp->fts_path + p->fts_pathlen) = (char)'\000';
    if (p->fts_level == 0L) {
      fd_ring_clear(&sp->fts_fd_ring);
      if (!(sp->fts_options & 4)) {
        if (sp->fts_options & 512) {
          if (sp->fts_options & 512) {
            tmp___20 = -100;
          } else {
            tmp___20 = sp->fts_rfd;
          }
          cwd_advance_fd(sp, tmp___20, (_Bool)1);
          tmp___23 = 0;
        } else {
          if (sp->fts_options & 512) {
                           
                  
                                   
          }
          tmp___22 = fchdir(tmp___21);
          tmp___23 = tmp___22;
        }
        if (tmp___23) {
                      
                
                       
         
              
                     
       
                     
                                      
                                 
                                
       
            
                                  
                                     
                                       
                                                       
                        
                   
                                            
            tmp___29 = tmp___28;
            
          if (tmp___29) {
                                         
                                    
                               
                                          
                                    
                                          
                                     
                                    
           
         
                            
              
                                       
                                                                     
                         
                                          
                                     
                                    
          }
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
      tmp___32 = (FTSENT *)((void *)0);
    } else {
      tmp___32 = p;
    }
    return (tmp___32);
  }
}
__attribute__((__nothrow__)) int(__attribute__((__leaf__))
                                 fts_set)(FTS *sp __attribute__((__unused__)),
                                          FTSENT *p, int instr);
                                                                          
                                                              
           

   
                     
                       
                         
                           
                             
                                       
                        
                         
             
           
         
       
     
                                         
               
   
 
                                                                                
          
              

   
                                                                            
                   
            
                                                                              
                
              
                
       
                    
     
                     
   
 
                                                                
              

   
                      
                  
     
                      
                  
     
                      
                  
     
                      
                  
     
                       
                   
     
                      
                  
     
                       
                   
     
                        
         
                         
                      
         
                        
                      
         
                         
                      
         
                        
                      
          
                         
                      
         
                         
                      
          
                         
                      
                 
                     
               
                       
           
   
  
static FTSENT *fts_build(FTS *sp, int type) {
  struct dirent *dp;
  FTSENT *p;
  FTSENT *head;
  size_t nitems;
  FTSENT *cur;
  FTSENT *tail;
  DIR *dirp;
  void *oldaddr;
                  
                
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
              
  int dir_fd;
  int tmp___5;
  int *tmp___6;
  int tmp___7;
  char *tmp___8;
  _Bool is_dir;
  size_t tmp___9;
               
                
                  
                 
                  
                  
                
                 
               
               
               
               
               
               
               
               
               
               
                 

  {
    cur = sp->fts_cur;
                                  
                                  
                                                                            
                       
               
                                                               
                       
        
             
      tmp___1 = opendir_safer((char const *)cur->fts_accpath);
      dirp = tmp___1;
      
    if ((unsigned long)dirp == (unsigned long)((void *)0)) {
                     
                                          
                                 
                              
        
      return ((FTSENT *)((void *)0));
    }
                                  
                                                  
            
                                  
                   
                             
                           
         
                  
                                    
                                     
                       
                                       
                        
                                         
         
       
     
                    
                          
                        
            
                                
                                   
                                     
                        
                  
                        
           
                                                                   
                            
                
                               
                            
         
              
                             
                          
       
      
                  
      goto _L___0;
             
                       
      _L___0:
        tmp___5 = dirfd(dirp);
        dir_fd = tmp___5;
                                   
                            
                                       
                                               
           
          
                          
                  
                 
          tmp___7 =
              fts_safe_changedir(sp, cur, dir_fd, (char const *)((void *)0));
                        
             
                         
                             
                                             
                                          
                
             
                                                                      
                               
                           
                                        
                                
                              
               
             
                                      
                   
                               
            
          
               
                           
        
      
                                                                
                                   
            
                             
     
                              
                              
                   
           
                           
            
                               
      
    len++;
    maxlen = sp->fts_pathlen - len;
    level = cur->fts_level + 1L;
    doadjust = (_Bool)0;
    tail = (FTSENT *)((void *)0);
    head = tail;
    nitems = (size_t)0;
                

                  
        dp = readdir(dirp);
        if (!dp) {
          goto while_break___0;
        }
               
                             
        
                                     
        if ((int)dp->d_name[0] == 46) {
                                
            goto __Cont;
                   
                                            
                                    
                            
                
              
            
        }
        
                                                   
      p = fts_alloc(sp, (char const *)(dp->d_name), tmp___9);
                                                          
                  
       
                                                    
                               
                                       
                                                      
                                                          
                        
             
                                        
                                  
                          
                          
                         
                                            
                                  
                                        
                                  
                                         
         
                                                                    
                              
                                    
                                    
           
         
                                       
       
                                                    
                               
                          
                        
                        
                       
                                          
                                
                                      
                       
                                       
       
                           
      p->fts_parent = sp->fts_cur;
                              
                                         
                                 
                                    
                                                                               
               
        p->fts_accpath = p->fts_name;
        
                                                                       
                                   
                                   
                                    
                                       
                                            
                             
                      
                             
               
                    
                           
             
                  
                         
           
                
                       
         
                                    
                                         
                                                              
                                                      
                                   
                                     
                         
                  
                         
           
                
                       
         
                                 
              
                                                
                                    
                       
                
                                      
                         
                  
                                        
                           
                    
                           
             
           
         
                                 
        
                        
                     
                                    
         
        
      p->fts_link = (struct _ftsent *)((void *)0);
                                                               
        tail = p;
        head = tail;
               
                          
                 
        
      nitems++;
    __Cont:;
      
  while_break___0:;
              
                     
     
                   
                            
     
                              
                                   
             
              
                            
               
         
       
                         
     
                  
                                 
                                   
                                          
                                       
                                        
                                          
                                
                      
                                       
               
                                                     
                           
                    
                                          
                                
                      
                                       
               
                                          
                                  
             
                           
                           
                    
                           
             
                  
                         
           
                              
                
                                                                       
                              
         
                       
                                            
                                  
                          
                                         
         
       
     
                  
                      
                                          
       
                      
                                     
     
                           
                            
                                    
                                                                     
                         
                                              
                                              
                                                              
                                                                           
           
         
       
      
                        
                         
                                          
       
      
    return (head);
  }
}
static unsigned short fts_stat(FTS *sp, FTSENT *p, _Bool follow) {
  struct stat *sbp;
                 
           
              
               
              
  int tmp___3;
              
              
              
              

  {
    sbp = p->fts_statp;
                            
                                
                          
       
      
                               
      goto _L;
             
      if (follow) {
      _L:
        tmp___3 = stat((char const *)p->fts_accpath, sbp);
        if (tmp___3) {
                                  
                             
                                      
                              
                                                               
                               
                                           
                           
                                          
             
           
                                     
                   
        }
      } else {
                
                                                                            
                      
                                       
                                  
            
                                                      
                                      
          
      }
      
    if ((sbp->st_mode & 61440U) == 16384U) {
                                
                   
              
                    
       
                                                                   
                                     
                              
                      
                
                                          
                                  
                   
                                       
                            
                      
                            
               
                                               
             
           
         
        
      return ((unsigned short)1);
    }
    if ((sbp->st_mode & 61440U) == 40960U) {
                                  
    }
                                           
                                 
     
                               
  }
}
                                                    
                    
                   
          

   
                            
                           
                                                          
                 
   
  
static FTSENT *fts_sort(FTS *sp, FTSENT *head, size_t nitems) {
             
            
                    
                                             
                                         
             
                   

  {
                                         
                                                       
                                                                  
              
                          
       
            
                        
      
                  
                                   
                                     
                                                               
                                    
                                                      
                                   
                      
              
                                                     
                                                            
                 
                                      
                                                         
                                     
                        
          
       
                        
      
                       
            
               

               
                         
       
                   
           
                   
                      
     
              
                                                                    
                       
               
               
               
                    
                             
       
                                        
           
     
                  
                                                          
                  
  }
}
static FTSENT *fts_alloc(FTS *sp, char const *name, size_t namelen) {
  FTSENT *p;
  size_t len;

  {
    len = sizeof(FTSENT) + namelen;
    p = (FTSENT *)malloc(len);
    if ((unsigned long)p == (unsigned long)((void *)0)) {
                                     
    }
    memmove((void *)(p->fts_name), (void const *)name, namelen);
                                        
    p->fts_namelen = namelen;
                    
                               
                    
                                     
                                     
                       
                               
    return (p);
  }
}
static void fts_lfree(FTSENT *head) {
  FTSENT *p;

  {
    while (1) {
               
      if (!p) {
                         
      }
                           
                      
    }
  while_break:;
           
  }
}
static _Bool fts_palloc(FTS *sp, size_t more) {
  char *p;
                 
           

  {
                                              
                                     
                                
                                         
                               
                
                        
      
                              
    p = (char *)realloc((void *)sp->fts_path, sp->fts_pathlen);
    if ((unsigned long)p == (unsigned long)((void *)0)) {
                                
                                         
                        
    }
    sp->fts_path = p;
    return ((_Bool)1);
  }
}
                                               
           
             

   
                       
                      
               

                
                        
        
                

                                                                            
                                                                 
         
                           
                             
       
                    
                      
     
              
             
                

                                  
                             
       
                 

                                                                            
                                                                 
         
                           
                             
       
                     
                         
                       
               
                          
        
      
                   
           
   
  
static size_t fts_maxarglen(char *const *argv) {
             
  size_t max;

  {
                   
               

                   
                         
       
                                        
                     
                  
        
             
     
              ;
    return (max + 1UL);
  }
}
static int fts_safe_changedir(FTS *sp, FTSENT *p, int fd, char const *dir) {
          
  _Bool is_dotdot;
          
              
  int newfd;
               
                
                
              
               
              
            
               
               

  {
             
                              
                     
                    
              
                    
       
            
                  
     
                               
                              
                                  
                      
                    
         
       
                 
      
    if (fd < 0) {
                       
                                     
                                                                     
                          
                                                    
                                 
                                  
                             
                                              
              
            
          
        
    }
    newfd = fd;
                
                                            
                      
                    
       
     
                              
              
            
                
                                    
                           
           
                                      
                        
                     
                      
           
                                                    
                                         
                         
                     
                      
                  
                                                      
                                           
                           
                       
                        
             
           
         
       
      
                                 
      cwd_advance_fd(sp, newfd, (_Bool)(!is_dotdot));
                 
      
                        
       
    if (fd < 0) {
                                  
                        
                   
                                   
                        
    }
                 
  }
}
                              
                                
                                
                               
                         
                           
                               
                               
                                 
                                  
                                
                                  
                                  
                                  
                                   
                         
                              
                              
                                
                                   
                                 
                                   
                                      
                                      
                         
                           
                            
      
                                                                              
                                                                            
                                                                                
                                                           
__inline static int chownat(int fd, char const *file, uid_t owner,
                            gid_t group) {
  int tmp;

  {
    tmp = fchownat(fd, file, owner, group, 0);
                 
  }
}
__inline static int lchownat(int fd, char const *file, uid_t owner,
                             gid_t group) {
  int tmp;

  {
    tmp = fchownat(fd, file, owner, group, 256);
                 
  }
}
                                                  
                                                                               
                                    
                                    
                                                                           
                                                                
                                                           
                                          

             
 
                                                    

   
                                         
                                                        
                                              
                              
                                   
                                           
                                            
           
   
 
                                                                                

   
           
   
 
                                     
      
                                                                                
                   
                    
                    
                
                
                

   
                        
              
              
                             
            
                                                   
                        
     
                                             
                     
   
 
                                     
      
                                                                                
                   
                     
                     
                
                
                

   
                        
              
              
                             
            
                                                   
                        
     
                                             
                     
   
 
                                                                         
                                                                  
                  
                   
                       
                  
                
                 
                 
                
                
                
                
                
                
                
                 
                 
                 
                 
                 
                 
                 
                       

   
                                         
                                      
                        
               
                                                                              
                                         
             
     
               
                  
                               
                                
                                                                            
                                               
                                       
                               
                                            
              
                    
       
            
                   
     
                                      
                  
     
                                      
                  
     
                                      
                  
     
                        
         
               
                                                           
                                  
            
                  
                                                         
                          
              
                                                            
                          
       
                                  
     
                      
         
               
                                                                    
                                  
            
                  
                                                                   
                            
              
                                                                 
                            
       
                                   
     
                      
         
               
                                                             
                                   
            
                  
                                                           
                            
              
                                                         
                            
       
                                   
     
                      
                 
            
               
                           
                                
                                 
           
   
 
                                                                     
                                                                              
                                                                      
                                                             
                         
                 
                 
         
              
               
               
              
              
              
                  
               
               

   
                                
                      
                                      
                                        
                                    
       
     
                                                   
                                                  
                            
              
                                    
       
     
                                          
                     
                                   
                           
                                                    
                                                    
                           
                        
           
                
                      
         
              
             
                                     
                             
                      
                
                      
         
                                          
       
     
                             
                       
                                  
            
                                                        
                                                          
                                            
                        
                  
                                            
                   
                                                
                            
                      
                                                
                       
                                                 
                                     
                                        
                                       
                                                  
                            
                                                  
                     
                                    
                          
                                                
                   
                 
               
             
           
                
                                      
         
              
                                    
       
     
                                 
                           
              
                                 
                           
                    
   
  
static _Bool change_file_owner(FTS *fts, FTSENT *ent, uid_t uid, gid_t gid,
                               uid_t required_uid, gid_t required_gid,
                               struct Chown_option const *chopt) {
                             
  char const *file;
                               
                       
           
                 
                        
                  
                
                      
                      
                
             
                
                  
                      
                
                      
                 
                       
                 
                       
                 
                 
                      
                 
                
               
               
                       
                 
                       
                       
                 
               
                 
  int tmp___28;
               
                      
                           
  int tmp___31;
                      
                 
                 
                 
                
                
               
                               
               
               
               

  {
                                                 
    file = (char const *)ent->fts_accpath;
                 
                               
    if ((int)ent->fts_info == 1) {
      goto case_1;
    }
                                 
                  
     
                                   
                   
     
                                  
                  
     
                                  
                  
      
                                 
                  
      
    goto switch_default;
  case_1:
    if (chopt->recurse) {
                               
                                                                        
                                                                          
                       
                                                    
                                 
                                            
                         
                                                                            
                                                        
                      
                                          
                                                     
                                                                              
                                                     
                                                                     
               
                       
                                                                              
                                                 
                               
             
                      
                                 
                                    
                                        
                              
           
         
        
      return ((_Bool)1);
    }
    goto switch_break;
  case_6:
                         
                        
     
                      
         
                              
                                  
                             
                             
                          
       
     
                               
                                      
                                            
                                                               
     
                  
                      
         
                              
                                      
                               
                                                                
     
                  
                      
         
                              
                                       
                                                     
                                                                 
     
                  
                      
  case_2:
                                                                            
                   
                 
                                         
                           
                                                                            
                                                                               
                                                                               
                                                      
                             
       
                     
                        
     
                      
  switch_default:
                      
  switch_break:;
             
                          
                                                    
            
                                        
                                          
                                                           
                                       
                                                    
                                    
                                                                   
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
             
                                                           
                                             
                                                         
                                                                    
                                
                                         
                                                 
                                                            
                                              
                                                                      
               
                            
             
                                                          
           
         
                 
                                            
                    
                  
                                                            
               
                                                
                             
                      
                                                                
                               
                        
                               
                 
               
                    
                           
             
           
                
                       
         
                                   
       
     
             
                                    
                    
              
                                      
                      
                
                                        
                        
                  
                                          
                   
                                        
                                         
                                                                   
                                           
                                                                     
                               
                                                             
                                          
                                                         
                                           
                                                                            
                                                                      
                              
                                                   
                                                              
                                                                        
                                                                             
                                                                                
                       
                                         
                                                                              
                                                          
                                           
                     
                                   
                                      
                   
                 
               
             
           
         
       
      
                    
      if (!chopt->affect_symlink_referent) {
        tmp___28 = lchownat(fts->fts_cwd_fd, file, uid, gid);
                                    
                 
                                        
                                
                          
                                       
           
          
      } else {
                                                                               
                                                                
                       
                                      
                          
         
                                      
                      
         
                                      
                          
         
                                      
                          
         
                                      
                          
         
                                
                 
                              
             
        tmp___31 = chownat(fts->fts_cwd_fd, file, uid, gid);
                                   
                              
                
                     
                              
                 
                           
                      
                              
                         
                
                       ;
      }
                    
                  
                                     
                                             
                                     
                                                             
                                  
                    
                                                         
                                  
             
                                          
                                                                  
           
         
        
      
                                                    
                     
                 
                                
                                     
                          
                    
                                                     
                     
                                         
                               
                        
                                                         
                                 
                          
                                 
                   
                 
                      
                             
               
             
                  
                         
           
                
                       
         
              
                     
       
                                
                    
                    
              
                                                         
               
                    
                         
                  
                                   
                           
                    
                             
                             
                      
                             
               
                                  
             
                                
           
                                                   
                                                    
                                                         
                                                           
         
       
      
                           
      fts_set(fts, ent, 4);
      
                
  }
}
extern _Bool chown_files(char **files, int bit_flags, uid_t uid, gid_t gid,
                         uid_t required_uid, gid_t required_gid,
                         struct Chown_option const *chopt) {
           
  int stat_flags;
  int tmp;
  FTS *fts;
  FTS *tmp___0;
  FTSENT *ent;
               
               
               
  _Bool tmp___4;
               
               
  int tmp___7;

  {
                  
                                       
              
             
                                         
                
               
                                              
          tmp = 0;
                 
                                                            
                    
                   
                   
            
          
        
      
    stat_flags = tmp;
    tmp___0 = xfts_open((char *const *)files, bit_flags | stat_flags,
                        (int (*)(FTSENT const **, FTSENT const **))((void *)0));
    fts = tmp___0;
    while (1) {
      ent = fts_read(fts);
      if ((unsigned long)ent == (unsigned long)((void *)0)) {
                                     
                           
                                     
                                                 
                                         
                                                      
           
                        
          
        goto while_break;
      }
      tmp___4 = change_file_owner(fts, ent, uid, gid, required_uid,
                                  required_gid, chopt);
                                           
    }
  while_break:
    tmp___7 = fts_close(fts);
                      
                                            
                                   
                                                
                    
     
                
  }
}
                   
      
                                                                              
                                                                   
      
                                                                 
                                                                              
                                                          
                                                                                
                                                
            
                
                
                
                          
                      
                
                
              
                
                

   
                                       
                                                  
                                                                
                                                                           
                                                                
                      
                                                                            
                                                  
                                                                    
                          
                      
                                                       
                    
                                               
                                                          
                                                                     
                                               
       
     
                                           
                      
                                                                               
                                           
           
   
 
                                               

                         
 
                            
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
                                                    
                        
            
                
                
                
                
                
                
                
                
                
                
                 

   
                      
                                                                
                                                       
            
                                                                             
                                                                           
                                                                
                        
                                                                       
                                                                              
                                                                            
                                                                               
                                                                                
                                                                    
                                                    
                                                                             
                                                                              
                                                                                
                                                                          
                                                    
               
                                                                                
                                                                                
                                                                           
                                                                           
                                                                                
                                                                             
                                                    
                                                                                
                                                                          
                                                         
                                                    
                        
                                                                         
                                                                                
                                                                                
                                                                                
                                                                       
                                                    
                        
                                                                               
                                                                               
                                                                          
                                                                               
                                                                           
                                                                         
                                                                               
                                 
                                                    
                                                                         
                                                    
               
                                                                            
                                                    
                                                                               
                                                                                
                                                                              
                                                                 
                                                    
                
                                                                               
                                                                             
                                                                            
                                                             
                                                                               
                            
     
                 
   
  
static struct dev_ino dev_ino_buf;
int main(int argc, char **argv) {
                      
  uid_t uid;
  gid_t gid;
  uid_t required_uid;
  gid_t required_gid;
  int bit_flags;
  int dereference;
  struct Chown_option chopt;
  _Bool ok;
  int optc;
               
                
                
                  
                     
                
                
                      
                
              
                        
                      
                
               
              
                    
  char const *tmp___10;
                      
                       
                 
                
  int tmp___15;

  {
                            
                    
                    
                            
                             
    bit_flags = 16;
                    
                                               
                     
                                                           
                            
                          
                       
                
      optc = getopt_long(argc, (char *const *)argv, "HLPRcfhv",
                         long_options___1, (int *)((void *)0));
      if (!(optc != -1)) {
        goto while_break;
      }
                      
                     
       
                       
                     
       
                       
                     
        
                       
                      
        
                       
                      
       
                        
                      
       
                        
                      
       
                        
                      
       
                        
                      
       
                       
                     
       
                       
                     
       
                        
                      
       
                        
                      
       
                         
                          
       
                         
                          
       
                          
           
                    
                        
            
                   
                        
            
                    
                        
             
      dereference = 0;
                        
            
                     
                        
             
                              
                        
             
                              
                        
             
                             
                        
             
                                                                              
                                                
              
              
                                              
                                          
       
                        
            
      chopt.recurse = (_Bool)1;
                        
           
                                         
                        
             
                                   
                        
             
                                         
                        
                 
              
                        
                 
                                                                              
                                                       
              
                        
                   
               
                 ;
      
  while_break:;
                       
                            
                               
                                                                         
                                             
         
                        
       
            
                     
      
    chopt.affect_symlink_referent = (_Bool)(dereference != 0);
                        
                  
            
                  
     
                                  
                           
                                             
                                           
              
                                                            
                                                      
                                                    
       
               
      
                          
                                                              
                    
                                                      
                                                            
                                     
                                                           
       
                             
                             
                                                      
                                                       
             
      tmp___10 = parse_user_spec((char const *)*(argv + optind), &uid, &gid,
                                 &chopt.user_name, &chopt.group_name);
                      
                  
                                                         
                                               
       
                             
                               
                                         
         
       
               
      
                       
                          
                                                            
                                                                              
                                
                                                               
                                        
                                                                
         
       
     
                      
    ok = chown_files(argv + optind, bit_flags, uid, gid, required_uid,
                     required_gid, (struct Chown_option const *)(&chopt));
                       
            
                   
            
                   
      
    exit(tmp___15);
  }
}
