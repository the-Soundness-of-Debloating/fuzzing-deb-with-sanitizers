#include "argv-fuzz-inl.h"
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
              
  int mt_count;
};
                
struct _IO_FILE;
typedef struct _IO_FILE FILE;
typedef void _IO_lock_t;
                  
                           
                         
           
  
                
             
                     
                     
                      
                       
                      
                      
                     
                    
                      
                        
                     
                              
                          
              
              
                      
                             
                             
                    
                    
                    
               
               
               
               
                
            
                                                                              
  
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
                     
                       
                  
  
struct oldgnu_header {
  char unused_pad1[345];
                
                 
                 
                    
                   
                      
                  
                    
};
struct star_header {
  char name[100];
               
              
  char gid[8];
               
                 
                
                
                     
               
                  
                 
                 
                   
                   
                   
                 
                 
};
struct star_in_header {
  char fill[345];
                
             
               
                  
                      
                   
                  
                 
                 
                
                 
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
               
struct mode_change {
         
             
                  
               
  struct mode_change *next;
};
struct name {
  struct name *next;
  size_t length;
  uintmax_t found_count;
            
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
                        
                      
                         
                      
                     
};
typedef struct hash_tuning Hash_tuning;
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
                      
              
                              
                   
  
                
                  
                               
                    
                  
                    
            
                     
                                                   
                                                   
                  
                                 
                                      
                                
  
                     
                            
                
              
  
struct xhdr_tab {
                     
                                                                             
                            
                                                       
                
};
                                                                         
                  
                      
                     
                         
            
              
               
  
struct tm {
             
            
              
              
             
              
              
              
               
                 
                      
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
enum backup_type { none = 0, simple = 1, numbered_existing = 2, numbered = 3 };
struct saved_cwd {
  int desc;
  char *name;
};
          
                   
            
                             
  
struct passwd {
  char *pw_name;
  char *pw_passwd;
                
                 
                 
               
                 
};
struct group {
  char *gr_name;
                 
                 
  char **gr_mem;
};
struct exclude;
struct exclude;
typedef int __daddr_t;
typedef void (*__sighandler_t)(int);
struct mtget {
              
                
                
                
                
                      
                     
};
                      
                       
enum sparse_scan_state { scan_begin = 0, scan_block = 1, scan_end = 2 };
struct tar_sparse_optab {
  _Bool (*init)(struct tar_sparse_file *);
  _Bool (*done)(struct tar_sparse_file *);
                                                    
                                                 
                                                  
                                                   
                                                                                
                                                         
                                                            
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
           
  int __i;
};
union __anonunion_57 {
  int __in;
  int __i;
};
union __anonunion_58 {
  int __in;
          
};
union __anonunion_59 {
  int __in;
  int __i;
};
union __anonunion_60 {
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
                               
             
                
  
                                               
                              
                   
           
            
  
                                           
                                       
                    
                   
                 
                  
                 
               
               
             
           
            
               
                          
                
                 
               
                
                   
                   
              
                      
                    
                   
                          
                   
                    
                    
                                 
  
                                                             
                              
              
                     
                           
  
                                             
                           
                
                  
                        
  
                 
                     
                 
  
                                                     
                  
             
                          
  
                       
                   
                            
                                        
                   
                        
                   
                            
                                         
                                                  
                             
                                     
  
              
                      
                      
                 
                        
                        
                          
                          
                     
                      
                      
                       
                   
                     
                      
                     
                      
                   
                   
                         
                          
                         
                          
                       
                       
  
                    
                              
                     
                 
  
struct __anonstruct___mbstate_t_22 {
  int __count;
                                       
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
                            
typedef __mbstate_t mbstate_t;
struct quoting_options {
  enum quoting_style style;
  int quote_these_too[255UL / (sizeof(int) * 8UL) + 1UL];
};
               
              
            
  
                                             
                                           
                                                
                                                                               
      
                                                                      
                                                                 
                                                                                
                                           
                                             
                                                                            
                                           
                                                
                                                                   
                                           
                                                
                                                                   
                                        
                                                
                                                                          
                                                                         
                                                                    
                                                                            
                              
                                   
                                                                         
                              
extern __attribute__((__nothrow__)) int *(
    __attribute__((__leaf__)) __errno_location)(void)__attribute__((__const__));
                                                                   
                                                                   
                                                                     
                                                                 
                                   
                                                                    
                                                       
                           
                                                                 
                                                        
                                                                             
                                                                  
                                                            
extern __attribute__((__nothrow__)) void *(__attribute__((__leaf__))
                                           valloc)(size_t __size)
    __attribute__((__malloc__));
                                                                               
                                                                    
                                         
                              
                               
extern struct _IO_FILE *stderr;
                                 
                                           
                                                     
                                                   
extern int fprintf(FILE *__restrict __stream, char const *__restrict __format,
                   ...);
extern __attribute__((__nothrow__)) int
sprintf(char *__restrict __s, char const *__restrict __format, ...);
                                                                            
                       
                                                   
                                                          
                                                       
                                                                 
                                                                         
                                   
                                                        
                                                                 
                                                                            
                                                                              
                                       
                                                                         
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
                                                                           
char *human_readable(uintmax_t n, char *buf, int opts,
                     uintmax_t from_block_size, uintmax_t to_block_size);
char *quotearg_colon(char const *arg);
                                             
char const *quote(char const *name);
size_t safe_read(int fd, void *buf, size_t count);
enum subcommand subcommand_option;
int blocking_factor;
size_t record_size;
_Bool backup_option;
_Bool checkpoint_option;
char const *use_compress_program_option;
_Bool force_local_option;
                               
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
                                 
                         
void closeout_volume_number(void);
                                  
                      
                       
void flush_archive(void);
                             
                                                  
                               
                     
                                              
                                  
                    
__attribute__((__noreturn__)) void archive_write_error(ssize_t status);
void archive_read_error(void);
void finish_header(struct tar_stat_info *st, union block *header,
                   off_t block_ordinal);
                                              
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
                                                               
                                 
                                  
                                   
__attribute__((__noreturn__)) void
write_fatal_details(char const *name, ssize_t status, size_t size);
char *safer_name_suffix(char const *file_name, _Bool link_target);
void tar_stat_destroy(struct tar_stat_info *st);
char *output_start;
                                      
                                   
                                
                                             
                           
                                        
                                          
size_t sys_write_archive_buffer(void);
_Bool sys_get_archive_stat(void);
char *rmt_path__;
int rmt_open__(char const *path, int open_mode, int bias,
               char const *remote_shell);
int rmt_close__(int handle);
size_t rmt_read__(int handle, char *buffer___2, size_t length);
                                                        
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
  {
    read_error_count = 0;
    return;
  }
}
void print_total_written(void) {
  tarlong written;
  char bytes[sizeof(tarlong) * 8UL];
  char abbr[((((((2UL * sizeof(uintmax_t)) * 8UL) * 302UL) / 1000UL + 1UL) *
                  17UL -
              16UL) +
             3UL) +
            1UL];
  char rate[((((((2UL * sizeof(uintmax_t)) * 8UL) * 302UL) / 1000UL + 1UL) *
                  17UL -
              16UL) +
             3UL) +
            1UL];
  double seconds;
  int human_opts;
                     
             
              
                
  char const *tmp___2;
  char *tmp___3;
  char *tmp___4;
  void *__cil_tmp14;
                   
                    
                    
                    
                    
                    
  {
    {
      written = prev_written + bytes_written;
      human_opts = 240;
                                       
    }
                      
                                                              
                                                                     
            
       
                                
                                                        
       
      
    {
      sprintf((char * /* __restrict  */)(bytes),
              (char const * /* __restrict  */) "%.0f", written);
    }
    if ((double)0 < seconds) {
                                                               
        {
                                                                       
                                                                           
                                          
        }
               
        tmp___2 = "?";
        
    } else {
      tmp___2 = "?";
    }
    {
      tmp___3 = human_readable((uintmax_t)written, abbr, human_opts,
                               (uintmax_t)1, (uintmax_t)1);
      tmp___4 = gettext("Total bytes written: %s (%s, %s/s)\n");
      fprintf((FILE * /* __restrict  */) stderr,
              (char const * /* __restrict  */)tmp___4, bytes, tmp___3, tmp___2);
    }
    return;
  }
}
off_t current_block_ordinal(void) {
  { return (record_start_block + (current_block - record_start)); }
}
void reset_eof(void) {
  {
    if (hit_eof) {
                  
      current_block = record_start;
      record_end = record_start + blocking_factor;
      access_mode = (enum access_mode)1;
    }
    return;
  }
}
union block *find_next_block(void) {
  {
    if ((unsigned long)current_block == (unsigned long)record_end) {
                   
                                  
        
      { flush_archive(); }
                                                                     
                    
                                  
        
    }
    return (current_block);
  }
}
void set_next_block_after(union block *block) {
  {
    {
                  
      while_continue: /* CIL Label */;
        if (!((unsigned long)block >= (unsigned long)current_block)) {
          goto while_break;
        }
        current_block++;
        
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
           
              
                   
  {
    {                      }
                      
       
                                
                                       
       
      
           
  }
}
static _Bool check_label_pattern(union block *label) {
  char *string;
  _Bool result;
  void *tmp;
             
                 
                
              
                   
                    
  {
    {
      tmp = memchr((void const *)(label->header.name), '\000',
                   sizeof(label->header.name));
    }
              
                        
      
    {
              
                                                                              
     
                       
                        
     
                               
                        
     
     
                                            
                                                                    
                               
                                              
                                                                  
                                              
                                                                
               
                                                                               
                                    
                           
    }
    return (result);
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
                
  int tmp___7;
             
                
               
  int tmp___12;
  void *tmp___13;
  int tmp___15;
  int tmp___16;
  void *tmp___17;
              
               
  void *tmp___21;
  int tmp___22;
                 
                
  int *tmp___24;
  _Bool tmp___25;
  union block *label;
  union block *tmp___26;
  char const *tmp___27;
  char *tmp___28;
                       
  char const *tmp___30;
  char *tmp___31;
  _Bool tmp___32;
  unsigned int tmp___33;
                   
                    
                    
                    
                    
                    
                    
  {
    backed_up_flag = 0;
                         
       
                                                                       
                                                             
       
                    
         
                                      
         
       
            
                             
                        
              
                        
       
      
    if (record_size == 0UL) {
      {
        tmp = gettext("Invalid value for record_size");
        error(0, 0, (char const *)tmp);
                     
      }
    }
    if (archive_names == 0) {
      {
                                                   
                                           
        fatal_exit();
      }
    }
    {
      tar_stat_destroy(&current_stat_info);
                           
                              
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
                          
                          
          
      }
    } else {
      { tmp___22 = strcmp(*(archive_name_array + 0), "-"); }
      if (tmp___22 == 0) {
        read_full_records_option = (_Bool)1;
        if (verify_option) {
          {
                                                                   
                                               
            fatal_exit();
          }
        }
        {
                                                 
                            
           
                                                  
                            
           
                                                  
                            
           
                                
                                   
                      
                                
        case_1___0: /* CIL Label */
                     
                          
                                
        case_2___0: /* CIL Label */
                     
                          
                                             
                                
        switch_break___0: /* CIL Label */;
        }
      } else {
        if (verify_option) {
                                   
             
                                                                  
             
                             
                                             
                                                             
                 
                                   
                                                                   
                                                                                
                 
                              
                   
                             
                                                           
                                                                       
                                                                           
                                      
                   
                        
                   
                                                                                
                                                             
                                      
                   
                 
                      
                 
                                                               
                                                                           
                                                                               
                                    
                 
               
                    
               
                                                             
                                                                         
                                                                             
                                  
               
             
                  
             
                                                           
                                                                       
                                                                           
                                
             
            
        } else {
          {
            if ((unsigned int)wanted_access == 0U) {
              goto case_0___1;
            }
            if ((unsigned int)wanted_access == 1U) {
              goto case_1___1;
            }
                                                   
                              
              
            goto switch_break___1;
          case_0___1: /* CIL Label */
            if (!force_local_option) {
              {
                                                                    
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
                               
               
                                                                
                                   
               
              
            if (!force_local_option) {
              {
                rmt_path__ = strchr(*(archive_name_array + 0), ':');
              }
                                
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
                       
                {
                  tmp___16 =
                      creat(*(archive_name_array + 0),
                            (mode_t)(((128 | (128 >> 3)) | ((128 >> 3) >> 3)) |
                                     ((256 | (256 >> 3)) | ((256 >> 3) >> 3))));
                  archive = tmp___16;
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
                                       
                                  
         
                               
             
                                 
             
           
           
                                          
                                    
                                                  
          }
        }
      }
    }
    {
                                   
                                
     
     
                                              
                        
       
                                              
                        
        
      if ((unsigned int)wanted_access == 1U) {
        goto case_1___2;
      }
                            
                              
                                 
                 /* CIL Label */
    {
      records_read = (off_t)0;
      record_end = record_start;
                        
    }
      if (volume_label_option) {
        {
          tmp___26 = find_next_block();
                          
         
                      
           
                                                  
                                                                 
                                                          
                         
          }
          
        {                                        }
        if (!tmp___32) {
          {
                                                      
                                                                      
                                                              
                                                                    
                         
          }
        }
      }
                            
    case_1___2: /* CIL Label */
      records_written = (off_t)0;
      if (volume_label_option) {
        {
                                                      
         
                                   
           
                                                                          
                                                                   
                                         
           
                 
           
                                                                         
                                                                        
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
                
              
               
               
                
              
                 
               
                    
                    
  {
                           
                   
                               
         
                                               
                                                     
         
       
      
    if (tape_length_option) {
      if (tape_length_option <= bytes_written) {
        {
                                       
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
                                    
        }
      }
    }
    if ((size_t)status != record_size) {
                               
         
                                      
         
        
     
                     
                        
                                       
      
                                         
                               
                        
           
                                                                           
                                                               
                                          
                                            
           
                
           
                                                         
                                      
                                       
           
         
        
             
      
                      
       
                                     
       
                          
         
                                       
         
                            
           
                                         
           
                              
             
                                          
             
           
         
        
     
                                                 }
                  
             
     
                        
                                    
     
                               
                              
                        
                      
                          
              
                    
       
            
                           
                                
                      
                       
              
                          
                        
                         
                
                        
         
       
     
                              
       
                                                     
                                                                      
                                                                
                                            
                                                                        
                                                          
                                                  
                                                                   
       
      
    if (real_s_name) {
      if (volume_label_option) {
                      
       
       
                                                     
                                                                    
                                                            
                                                  
                                                                
                                                        
                                                      
                                                        
                                                                 
                                 
                           
                                                                   
                                 
      }
      if (volume_label_option) {
        record_start--;
      }
    }
    {
                                          
                                
    }
    if ((size_t)status != record_size) {
      {
                                    
      }
    }
                                     
    if (copy_back) {
      {
        record_start += copy_back;
                                                      
                                                
                                                                 
                                          
        current_block += copy_back;
      }
                                                         
                                                   
               
                                                                         
           
                                                        
           
                
           
                                                                           
                                                               
                                            
                                          
           
         
        
      copy_back = 0;
    }
    return;
  }
}
__attribute__((__noreturn__)) void archive_write_error(ssize_t status);
void archive_write_error(ssize_t status) {
  int e;
  int *tmp;
  int *tmp___0;
  {
    if (totals_option) {
      {
        tmp = __errno_location();
        e = *tmp;
                             
                                     
                     
      }
    }
    { write_fatal_details(*archive_name_cursor, status, record_size); }
  }
}
                              
            
                
              
                   
                   
   
                                         
                                   
       
                                                            
                                       
                     
       
     
                               
                       
                       
       
                                                       
                                           
                     
       
     
           
   
  
static void short_read(size_t status) {
  size_t left;
            
             
                 
                                                                       
                
                
                    
                
  unsigned long rsize;
  char *tmp___4;
                    
                    
  {
                                        
                                
    {
      while (1) {
                                     
                                     
                     
                         
                                              
                                 
               
                    
                               
             
                  
                             
           
         
                    
           
                       
                                                
                                      
                 
                                                                    
                               
                 
                      
                 
                                                                   
                                   
                 
                
                                                      
                                     
               
                                       
             
                                           
           
         
                           
           
                                                    
                                   
                                                                             
                             
                                                       
                                                                              
           
                           
         
                                        
           
                                     
                                                                       
                                                                               
                                                     
                         
           
         
                       
                       
      }
    while_break: /* CIL Label */;
    }
    if (!read_full_records_option) {
                                
        if (record_start_block == 0L) {
          if (status != 0UL) {
            {
              rsize = (record_size - left) / 512UL;
              tmp___4 = ngettext("Record size = %lu block",
                                 "Record size = %lu blocks", rsize);
                                                        
            }
          }
        }
        
    }
                                                            
                   
    return;
  }
}
void flush_read(void) {
  size_t status;
           
                
  size_t tmp___1;
  size_t tmp___2;
  union block *cursor;
                
  _Bool tmp___4;
                
                 
                      
                     
                
                 
                       
                 
                 
               
               
                       
                 
               
                                                                              
                                                                        
                                                                         
                 
                 
                 
                       
                 
                 
                 
               
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
                           
                   
                               
         
                                              
                                                     
         
       
     
                         
                                  
                                     
         
                      
                                              
                      
         
                                    
           
                                                 
           
         
       
     
                              
                      
         
                                                                         
                                                             
                                          
                                        
         
              
         
                                                       
                                    
                                     
         
       
      
  error_loop:
    if (archive >= 1 << 30) {
      {
        tmp___1 =
            rmt_read__(archive - (1 << 30), record_start->buffer, record_size);
                         
      }
    } else {
      {
        tmp___2 =
            safe_read(archive, (void *)(record_start->buffer), record_size);
        status = tmp___2;
      }
    }
                               
                     
             
     
                        
                  
            
                                           
         
                                        
         
                              
               
                                    
                        
                                                        
                          
             
                                                        
                          
             
                                                        
                          
             
                                
                                  
                                  
                                  
           
                                                      
           
                           
                     
             
                              
                                          
           
                                                      
           
                           
                     
             
                              
                                        
           
             
                         
                                              
                                         
                   
                                                             
                                                                            
                                     
                   
                        
                   
                                                                                
                                                     
                                     
                   
                 
                                                        
                                   
                 
                                         
               
                                         
             
                                        
               
                                   
               
             
                                  
                                                     
                                        
                 
                                                         
                 
                                
                   
                                                              
                                                                              
                                                                     
                                                                         
                            
                                   
                   
                                  
                 
               
                                   
                 
                                                                        
                                                     
                                                            
                                                                              
                 
               
                       
                    
                                        
                 
                                                                  
                                                      
                 
               
             
                              
                                                       
                        
                      
                 
                                                                        
                                                               
                 
                               
                      
                                                              
                                                                           
                                                                
                          
                                 
                 
                                  
                 
               
               
                                                                             
                                                                      
                                         
                                                                 
                                                          
               
                                                         
                            
                      
                                   
                                        
                 
                                                           
                         
                                                                              
                                      
                                     
                                                           
                         
                                                                              
                                      
                                     
                                                           
                                              
                                  
                                                                          
                                  
                                 
                                                                        
                                                                             
                                                                         
                                            
                          
                                 
                 
                                  
                 
               
               
                                           
                                                                 
                                                          
               
                                                                 
                 
                                                                       
                                                      
                          
                                 
                 
                                
               
                       
             
                                   
                           
                   
                  
                        
           
                
                      
         
              
             
                                             
           
                                 
           
                          
         
       
     
                           
           
  }
}
void flush_archive(void) {
  {
                                                    
                                 
    record_end = record_start + blocking_factor;
                                           
      if (time_to_start_writing) {
        {
          access_mode = (enum access_mode)1;
                                          
                             
        }
      }
      
    {
      if ((unsigned int)access_mode == 0U) {
        goto case_0;
      }
      if ((unsigned int)access_mode == 1U) {
        goto case_1;
      }
                                           
                    
       
                        
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
  struct mtop operation;
         
              
              
               
             
              
              
                 
                
                  
                
                
                 
                   
                 
                    
  {
                              
                           
                             
       
                          
                                
                                                                           
                                       
                                               
                                  
                      
       
            
       
                        
                    
                                                                           
                                            
                                  
                          
       
     
                       
             
     
                                     
                        
                               
         
                                
                                  
                                                                             
                                         
                                                 
                                    
                            
         
              
         
                          
                      
                                                                             
                                              
                                    
                            
         
       
                         
               
       
     
                             
       
                                                                
                          
       
            
       
                                              
                          
       
     
                       
                                                       
                        
                          
     
                             
       
                                                                 
                            
       
            
       
                                               
                            
       
     
                               
       
                          
                                                                              
                                           
       
                                                  
                                        
         
                                                   
                                                                
         
       
     
           
  }
}
void close_archive(void) {
         
              
              
  union block *tmp___2;
  {
    if (time_to_start_writing) {
      {
                        
      }
    } else {
      if ((unsigned int)access_mode == 1U) {
        {
          flush_archive();
        }
      }
    }
    {                         
                        
       
                        
       
     
                             
       
                                               
                      
       
            
       
                                 
                          
       
     
                       
       
                                         
       
     
     
                                    
                                          
     
                    
       
                                
       
     
                       
       
                                  
       
      
                              
                                 
            
                             
    }
    { free((void *)tmp___2); }
    return;
  }
}
                              
             
            
                
                
              
              
              
               
                   
                    
   
     
                                                                    
                                                        
                 
     
               
       
                                                         
                                                                               
       
                         
         
                                                      
                                                                  
                                                      
                       
         
              
                               
           
                                                        
                                                                    
                                                        
                         
           
         
       
                                          
                    
         
                                        
         
       
                                 
                         
         
                                         
         
       
            
                                       
                          
         
                                        
         
       
     
           
   
 
                                   
             
            
              
              
   
     
                                                                    
                                                        
                 
     
               
       
                                                
                                                                       
                                        
       
                    
         
                                         
         
       
                                 
                         
         
                                         
         
       
            
                                        
     
           
   
  
static FILE *read_file;
static int looped;
static _Bool new_volume(enum access_mode mode) {
  FILE *tmp;
             
              
              
                
                
             
                        
                      
                
                
                
                
                 
                 
                 
             
               
                 
  int tmp___16;
  int tmp___17;
                
               
               
                 
               
               
                 
  int tmp___28;
              
                 
  int tmp___31;
                   
                    
                    
                    
                    
                    
                    
                    
                    
  {
                    
                                
                           
           
                                                                    
                                                              
                            
           
                
                            
         
       
     
                        
                        
     
                        
       
                        
       
     
                             
       
                                                   
                          
       
            
       
                                 
                          
       
     
                       
       
                                         
       
     
                   
                           
       
                                                    
                                           
                     
       
     
            
                         
                                             
                                                              
                                               
                 
     
           
                 
                               
                                
           
                                     
           
         
                                                 
                           
           
                                                      
                                                                   
                         
           
         
              
         
                     
                                          
             
                                           
                                                    
                                                                              
                                                        
                                                                            
                               
                                      
                        
                                                                          
                                                           
                                                                       
             
                                                                        
               
                                                                       
                                                   
               
                                                          
                                                            
                                                              
                     
                                                                          
                                                         
                     
                   
                 
               
                               
             
                                             
                               
                    
                                                
                                 
                      
                                                 
                                   
                 
               
             
             
                                               
                             
               
                                                
                              
               
                                                
                              
               
                                               
                             
               
                                
                                     
             
                                 
                                                                       
                                                                              
                                                                     
                                                        
                                                                
             
                                
                                      
             
                                                              
                                                  
             
                                                          
                                                            
                                                              
                     
                                                                           
                                                          
                     
                   
                 
               
                               
                                     
                                      
                                      
               
                           
                                                    
                                            
                                             
                                           
                     
                   
                         
                 
                                               
               
                            
               
                           
                                                    
                                
                                                
                                           
                     
                          
                                         
                   
                           
                 
                                               
               
               
                                       
                                                       
                                                              
               
                                
                                     
             
                                
             
                                
                                          
             
           
                                     
         
       
      
    { tmp___31 = strcmp(*(archive_name_cursor + 0), "-"); }
                       
                                          
                  
            
                         
                                  
           
                                                           
           
                           
                                           
                                                      
               
                         
                                                                   
                                                                                
               
                             
                 
                                                          
                                                                            
                                                                                
                                    
                 
                      
                 
                                                                          
                                                            
                                    
                 
               
                    
               
                                                         
                                                                          
                                                                              
                                   
               
             
                  
             
                                                       
                                                                        
                                                                            
                                 
             
           
                
           
                                                     
                                                                      
                                                                          
                               
           
         
              
         
                                        
                        
            
                                         
                        
           
                                         
                        
           
                                
                               
                                    
             
                                                            
             
                             
                                            
                                                         
                 
                                    
                                                              
                                                                           
                 
                               
                   
                             
                                                     
                                                                       
                                                                           
                                       
                   
                        
                   
                                                                          
                                                              
                                       
                   
                 
                       
                 
                                                          
                                                                            
                                                                                
                                     
                 
                
                    
               
                                                        
                                                                          
                                                                              
                                   
               
             
                  
             
                                                      
                                                                        
                                                                            
                                 
             
           
                                
                               
                              
             
                                                         
             
            
                                    
             
                                                             
             
                             
                                            
                                                         
                 
                                    
                                                              
                                                                           
                 
                               
                   
                                     
                                             
                                                                           
                                                                            
                                       
                   
                        
                   
                                                                            
                                                              
                                       
                   
                 
                       
                 
                            
                                                 
                                                                               
                                                                                
                                     
                 
                
                    
               
                          
                                               
                                                                             
                                                                              
                                   
               
              
                  
             
                        
                                             
                                                                           
                                                                            
                                 
             
           
                                
                               
                                   
             
                                                             
             
                             
                                             
                                                        
                 
                                    
                                                              
                                                                           
                 
                               
                   
                              
                                                      
                                                                       
                                                                           
                                       
                   
                        
                   
                                                                            
                                                              
                                       
                   
                 
                      
                 
                                                           
                                                                            
                                                                                
                                     
                 
               
                    
               
                                                         
                                                                          
                                                                              
                                   
               
             
                  
             
                                                       
                                                                        
                                                                            
                                 
             
            
                                
                                          
         
        
     
                      
       
                                        
       
                          
                                       
                              
             
                                 
             
           
         
       
                    
     
                      
  }
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
                                  
                                                    
                                                                        
                                
                           
                                                                          
                                          
      
                                                                              
                                                               
                                                                                
__attribute__((__noreturn__)) void xalloc_die(void);
int exit_status;
_Bool atime_preserve_option;
_Bool dereference_option;
                       
                     
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
                                 
void stat_error(char const *name);
void stat_warn(char const *name);
                                                     
                                                      
                                                                        
                                                                            
                                             
_Bool sparse_diff_file(int fd, struct tar_stat_info *st);
static int diff_handle;
static char *diff_buffer;
                     
            
   
     
                               
                                
     
                       
       
                     
       
     
           
   
 
                                                                            
                                              
             
            
   
             
       
                                                                        
                                                  
                                                              
                                    
                                                   
                                                          
                             
                                                  
                                                       
       
     
                           
                      
     
           
   
  
                                                               
                                                                 
                 
  
static int process_rawdata(size_t bytes, char *buffer___2) {
  size_t status;
  size_t tmp;
  char *tmp___0;
                
  int tmp___2;
  char *__cil_tmp8;
  {
    {
      tmp = safe_read(diff_handle, (void *)diff_buffer, bytes);
                  
     
                          
                                           
         
                                                                
                                                                           
         
              
         
                                                               
                                                                        
                                                                              
                                   
         
        
      return (0);
    }
    {
      tmp___2 =
          memcmp((void const *)buffer___2, (void const *)diff_buffer, bytes);
    }
                 
       
                                             
                                                                     
       
                 
     
               
  }
}
static char *dumpdir_cursor;
                                                           
            
              
                   
   
     
               
                                                                                
     
                  
       
                                         
                                                                 
       
                 
     
                            
               
   
 
                                                                            
                          
                   
            
              
                   
   
                              
                           
     
     
                 
                                      
                    
                           
         
                                           
                          
           
                                                       
                                           
                            
           
                 
         
                                                          
                                       
                                   
         
                                                                  
                       
                                    
         
         
                               
                                                                     
                                                   
         
                                  
                                                                     
         
       
                                 
     
           
   
 
                                                                         
             
          
               
   
     
                                                                 
                   
     
                      
       
                                     
       
                          
         
                               
         
              
                                  
       
                                                                           
                 
     
               
   
 
                         
                        
             
                               
            
                
                
              
                
                
                
                
                
                
                
                 
                        
                        
               
               
                       
                 
                 
             
                  
                
                 
                   
                
                 
               
               
                 
                 
                 
                       
                 
               
                 
                 
               
               
                 
                 
                   
               
               
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
     
                                           
                                                                            
     
                         
                          
         
                                   
                                                    
                                                       
         
       
                                                      
     
     
                                                      
                    
       
                                                       
                    
       
                                                       
                    
       
                                                       
                    
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                     
       
                                                       
                        
       
                                                       
                     
       
                                                       
                     
       
                          
                                    
     
                                                                          
                                                                               
                                                 
                                                  
                      
     
                            
                            
                            
                            
                                                 
                        
       
       
                                                                          
                                            
       
                     
         
                        
         
                  
       
                                                      
         
                                                 
                                                                       
                        
         
                  
       
                                           
                                
                                                                  
                                                                      
                                                                           
                              
                                
                                                                  
                                                                      
                                                                           
         
                                            
                                                                       
         
       
                                                                         
                     
         
                                           
                                                                       
         
       
                                                                         
                     
         
                                           
                                                                       
         
       
                                                                              
         
                                                
                                                                       
         
       
                                                       
                                                                  
           
                                               
                                                                          
                          
           
                    
         
       
                                                                           
                            
         
                                                                
                        
                                                                           
         
                  
       
                                                      
                                                       
                                        
         
                                                            
         
              
                                  
           
                                     
                                                                     
                                                          
           
         
                                                                               
                                  
           
                                                       
           
         
       
                                      
                        
         
                                                                 
         
       
                                  
         
                                                          
                                                          
         
       
         
                        
                             
     
                
                                                                               
     
                      
                          
       
       
                                                                           
                                             
       
                      
                          
       
                                                               
                      
         
                                                                      
                                                 
                                                                       
                                      
         
       
                        
                             
     
                                                                   
                     
                                             
                                 
                
                                                                               
                                                                 
                             
     
                       
         
                                        
         
                             
           
                                                                     
           
                
                                                                        
         
                                                                             
              
                                    
           
                                                  
                                                                          
           
                
           
                                                                         
                                                           
           
                              
             
                                                    
                                                                            
             
           
         
       
                        
                             
                             
                             
     
                
                                                                               
     
                      
                          
       
                                                       
                                                            
              
                                                         
                                                               
                
                                                              
         
                            
       
                     
         
                                                  
                                                                        
         
                          
       
                                                       
                    
              
                                                         
                               
                                                                    
             
                                                          
                                                                            
             
                              
           
         
       
                                           
                                
                                                                  
                                                                      
                                                                           
                              
                                
                                                                  
                                                                      
                                                                           
         
                                             
                                                                        
         
                          
       
                        
                             
     
                                                                               
                                
     
                                
         
                                                                               
                                                        
         
       
                           
         
                                          
                                                                             
                                       
         
              
                                                                            
       
                                
         
                                                     
         
       
               
                             
     
                
                                                                               
     
                      
                          
       
                                                      
         
                                                  
                                                                        
         
                          
       
                                           
                                
                                                                  
                                                                      
                                                                           
                              
                                
                                                                  
                                                                      
                                                                           
         
                                             
                                                                        
         
                          
       
                        
                            
                        
                            
                                                 
                        
       
       
                                                                           
                                             
       
                      
                          
       
                                                      
         
                                                  
                                                                        
                        
         
                          
       
       
                                 
                                                                 
                                                          
       
                                                                         
         
                                             
                                                                        
                        
         
                          
       
                                                                           
                            
         
                                                                
                                                                           
                        
         
                          
       
                                                   
                          
         
                                                                                
                                                                           
         
                          
       
                                
         
                                                                               
                                           
         
       
                                                                             
                                
         
                                                     
         
       
                                      
                        
         
                                                                 
         
       
                        
                                  
     
           
   
  
void verify_volume(void) {
                       
             
            
                 
                
               
              
              
              
              
                              
                           
              
  char *tmp___8;
  {
    if (!diff_buffer) {
      {
                    
      }
    }
    {
                     
      ioctl(archive, (unsigned long)((unsigned int)(2 << 8) | 75U));
                                 
                            
     
                             
       
                              
                                
                                                                           
                                       
                                               
                                  
                         
       
            
       
                        
                    
                                                                           
                                            
                                  
                         
       
     
                     
       
                                     
       
                          
                
              
                                 
           
                                  
                                    
                                                                               
                                           
                                                   
                                      
                             
           
                
           
                            
                        
                                                                               
                                                
                                      
                             
           
         
                         
           
                                   
             
                                                                  
                            
             
                  
             
                                                    
                                
             
           
                              
             
                                                   
             
                   
           
         
       
     
     
                                        
                               
                   
     
     
                 
                                      
         
                                          
                               
         
                                             
                      
           
                       
                                                
               
                          
                                                   
               
                                                      
                                     
               
             
                                           
           
           
                                                                            
                                                                             
                                                       
                                                        
                            
           
         
                                             
                           
                
                                               
                             
           
         
                           
       
                 /* CIL Label */;
    }
                                     
                             
           
  }
}
/* #pragma merger("0","002.create.o.i","") */
extern __attribute__((__nothrow__)) unsigned int(
    __attribute__((__leaf__)) gnu_dev_major)(unsigned long long __dev)
    __attribute__((__const__));
extern __attribute__((__nothrow__)) unsigned int(
    __attribute__((__leaf__)) gnu_dev_minor)(unsigned long long __dev)
    __attribute__((__const__));
                                          
                                                
                                                                                
                                                                         
                                                                    
                                                                   
                                
      
                                                                              
                                                                          
                                   
                                                
                                   
                                                
      
                                                                              
                                                                 
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
                                              
                                                                 
                     
                       
                                              
                                              
                                              
                                                
                                                
void uid_to_chars(uid_t v, char *p, size_t s);
                                                     
                                                   
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
                                                 
void uid_to_uname(uid_t uid, char **uname);
                                                 
char *name_next(int change_dirs);
                                 
                           
void blank_name_list(void);
_Bool excluded_name(char const *name);
_Bool is_avoided_name(char const *name);
int confirm(char const *message_action, char const *message_name);
void tar_stat_init(struct tar_stat_info *st);
void xheader_store(char const *keyword, struct tar_stat_info const *st,
                   void *data);
                                                                
void xheader_write_global(void);
                                         
                                                  
                                                    
_Bool sys_file_is_archive(struct tar_stat_info *p);
_Bool sparse_file_p(struct tar_stat_info *st);
enum dump_status sparse_dump_file(int fd, struct tar_stat_info *st);
_Bool string_ascii_p(char const *str);
                                                                 
                                                  
                                                                    
                                                                        
                                                                   
                                                                            
                                                        
                                                            
static void to_octal(uintmax_t value, char *where, size_t size) {
  uintmax_t v;
  size_t i;
  {
    v = value;
    i = size;
    {
      while (1) {
      while_continue: /* CIL Label */;
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
                                                                 
                                     
              
                                 
           
   
              
                                                                             
             
     
                 
                                      
            
                                                                 
                                            
                 
                           
         
       
                                 
     
           
   
  
static int warned_once;
static void to_chars(int negative, uintmax_t value, size_t valsize,
                     uintmax_t (*substitute)(int *), char *where, size_t size,
                     char const *type) {
  int base256_allowed;
           
                   
                                                                            
                   
                                                                          
                                                                            
                   
                            
                            
                
                           
              
          
                
             
                
                
             
                
                    
              
                                                                            
                   
                   
                
                
                
  int tmp___8;
  int tmp___9;
                        
                         
                         
                         
                         
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
                                 
      }
      if (value <= tmp___15) {
        {
          *(where + (size - 1UL)) = (char)'\000';
          to_octal(value, where, size - 1UL);
        }
      } else {
                    
      }
    } else {
    _L___5: /* CIL Label */
      if (negative) {
                                               
              
                         
       
                                                         
                                                     
              
                                 
      }
                                
                              
                         
                         
                  
                             
           
           
                                         
                                                               
           
                
                      
         
              
                             
                       
                                                    
                               
               
                                
                                                                   
                                               
               
             
                                                   
                                                          
                                                      
                    
                                       
             
                                                              
                  
                        
           
                
                               
                                
                                                               
                                                           
                    
                                       
             
                              
                  
                                                               
                                                           
                    
                                       
             
                              
           
           
                                                    
                       
                                                                                
                                
                                                  
           
                                
                               
                               
                    
                                     
             
             
                                                      
                                   
                                                                                
                                
                          
                  
                             
                                              
             
                  
                                
           
                         
             
                                                      
                         
                                
                                                                             
                             
                              
                      
                                 
                                                 
             
                  
             
                                                      
                        
                          
                                                                             
                             
                                                   
             
           
                           
             
                                               
                                     
                                                           
             
                         
                       
                    
                      
             
             
                                                      
                                   
                                                                                
                                
                                   
             
                         
                           
                                      
             
             
                       
                                                                              
                                                                    
                                                              
                                                                               
                             
             
                  
             
                                                                   
                                                                    
                                                  
                              
             
           
         
        
    }
    return;
  }
}
static gid_t gid_nobody;
static uintmax_t gid_substitute(int *negative) {
          
  int tmp;
  char *__cil_tmp4;
  {
    if (!gid_nobody) {
      {
        tmp = gname_to_gid("nobody", &gid_nobody);
      }
               
                               
        
    }
                  
                       
                          
  }
}
void gid_to_chars(gid_t v, char *p, size_t s) {
  char *__cil_tmp4;
  {
    {
      to_chars(v < 0U, (uintmax_t)v, sizeof(v), &gid_substitute, p, s, "gid_t");
    }
    return;
  }
}
void major_to_chars(int v, char *p, size_t s) {
  char *__cil_tmp4;
  {
    {
      to_chars(v < 0, (uintmax_t)v, sizeof(v), (uintmax_t(*)(int *))0, p, s,
               "major_t");
    }
    return;
  }
}
void minor_to_chars(int v, char *p, size_t s) {
  char *__cil_tmp4;
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
  char *__cil_tmp18;
  {
    if (256 >> 3 == 32) {
      if (128 >> 3 == 16) {
        if (64 >> 3 == 8) {
          if ((256 >> 3) >> 3 == 4) {
                                      
                                        
                                                          
                                                            
                                                            
                                        
                                      
                            
                                   
                     
                           
                                 
                    
                         
                               
                  
                      
                             
               
                    
                           
              
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
                     
                   
              
                
        
      if (v & 1024U) {
                       
      } else {
                    
      }
                    
                      
              
                    
        
      if (v & 256U) {
        tmp___2 = 256;
      } else {
                    
      }
      if (v & 128U) {
                      
      } else {
                    
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
  char *__cil_tmp4;
  {
    { to_chars(0, v, sizeof(v), (uintmax_t(*)(int *))0, p, s, "size_t"); }
    return;
  }
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
  uid_t r;
  int tmp;
  char *__cil_tmp4;
  {
    if (!uid_nobody) {
      {
        tmp = uname_to_uid("nobody", &uid_nobody);
      }
      if (!tmp) {
        uid_nobody = (uid_t)-2;
      }
    }
                   
    *negative = r < 0U;
    return ((uintmax_t)r);
  }
}
void uid_to_chars(uid_t v, char *p, size_t s) {
  char *__cil_tmp4;
  {
    {
                                                                                
    }
           
  }
}
void uintmax_to_chars(uintmax_t v, char *p, size_t s) {
  char *__cil_tmp4;
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
  size_t size;
  size_t tmp;
                
                      
                   
  char *__cil_tmp9;
  {
    {
      tmp = strlen(p);
                       
                                                          
                                                              
                                                         
                                     
                                           
                                
                                              
     
     
                 
                                      
                                
                           
         
         
                                                            
                                                             
                       
                          
                                                                 
                                     
                                                  
         
       
                                 
     
     
                                                        
                                                      
                                                                 
                                                          
    }
    return;
  }
}
static size_t split_long_name(char const *name, size_t length) {
  size_t i;
  {
    if (length > 155UL) {
      length = (size_t)157;
    }
    i = length - 1UL;
    {
      while (1) {
                      /* CIL Label */;
        if (!(i > 0UL)) {
          goto while_break;
        }
                                            
                           
         
            
      }
    while_break: /* CIL Label */;
    }
    return (i);
  }
}
static union block *write_ustar_long_name(char const *name) {
  size_t length;
  size_t tmp;
           
  union block *header;
               
                
                
                
                    
  char *__cil_tmp11;
  char *__cil_tmp12;
  {
    {
      tmp = strlen(name);
                  
     
                         
       
                                       
                                                                            
                                                         
                        
       
                                          
     
                                          
                   
       
                                       
                 
                                                                               
                                                    
                        
       
                                          
            
                                       
         
                                         
                            
                                                                         
                                                      
                          
         
                                            
       
     
     
                                 
                                                                  
                                                               
                                                      
                                                             
                                                              
                                 
    }
    return (header);
  }
}
static void write_long_link(struct tar_stat_info *st) {
  char *tmp;
  char *tmp___0;
                  
                   
  {
    {
                                              
                    
       
                                               
                    
        
                                               
                    
        
                                                
                    
        
                                               
                    
       
                                              
                    
       
                          
                            
     
                                                                             
     
                        
    case_1:  /* CIL Label */
    case_3:  /* CIL Label */
             /* CIL Label */
    {
                                                       
                                                                 
                                              
      exit_status = 2;
    }
      goto switch_break;
    case_2:  /* CIL Label */
                           
     
                                                                      
     
                        
    switch_default : /* CIL Label */
    {
      abort();
    }
    switch_break: /* CIL Label */;
    }
    return;
  }
}
static union block *write_long_name(struct tar_stat_info *st) {
  char *tmp;
                
  size_t tmp___1;
  union block *tmp___2;
  union block *tmp___3;
                   
  char *__cil_tmp8;
  {
    {
                                              
                    
       
                                               
                    
       
                                               
                    
       
                                              
                    
       
                                               
                    
       
                                               
                    
       
                          
                            
     
                                                                         
     
                        
             /* CIL Label */
    {
      tmp___1 = strlen((char const *)st->file_name);
    }
      if (tmp___1 > 99UL) {
        {
                                                           
                                                                              
                                                      
          exit_status = 2;
        }
        return ((union block *)((void *)0));
      }
      goto switch_break;
    case_3:  /* CIL Label */
    case_5 : /* CIL Label */
    {
      tmp___2 = write_ustar_long_name((char const *)st->file_name);
    }
      return (tmp___2);
             /* CIL Label */
                           
     
                                                                      
     
                        
                     /* CIL Label */
    {
      abort();
    }
    switch_break: /* CIL Label */;
    }
    { tmp___3 = write_short_name(st); }
    return (tmp___3);
  }
}
static union block *write_extended(struct tar_stat_info *st,
                                   union block *old_header) {
                     
                 
          
                   
                   
                   
                  
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  void *__cil_tmp33;
                   
                    
                    
                    
                    
                   
                    
                    
                    
                    
                    
                  
                    
                   
                    
                    
                  
                    
                    
                    
                    
                    
                    
                 
                    
                    
                    
                    
                    
                    
                    
                    
                    
                  
                   
                    
  {
    if (extended_header.buffer) {
      return (old_header);
    } else {
      if ((unsigned long)extended_header.stk == (unsigned long)((void *)0)) {
        return (old_header);
      }
    }
    {
                                      
                                                   
                                                                     
                                
                                                   
                      
                                 
                                              
                                                                              
    }
                    
  }
}
static union block *write_header_name(struct tar_stat_info *st) {
  union block *tmp;
  union block *tmp___0;
  union block *tmp___1;
  size_t tmp___2;
  _Bool tmp___3;
  char *__cil_tmp7;
  {
    if ((unsigned int)archive_format == 4U) {
      {
        tmp___3 = string_ascii_p((char const *)st->file_name);
      }
      if (tmp___3) {
                
      } else {
        {
                                                                            
                                     
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
               
                 
  _Bool tmp___3;
  int tmp___4;
                   
                   
                    
  char *__cil_tmp12;
                    
                    
                    
                   
                    
                    
                    
                   
                    
                    
  {
    { header = write_header_name(st); }
                 
                                          
     
                                      
                                     
      
                                      
                                     
      
                      
       
                                           
                                                                   
                          
                               
                                    
                                                                      
                                                                          
                                                                               
                
       
     
                                             
       
                      
                              
                                     
                                                                       
                                                                           
                                                                             
                                                              
       
            
                                               
         
                       
                                
                                       
                                                                         
                                                                             
                                                                               
                                                                
         
              
         
                                                              
                                                     
         
       
      
    if (st->stat.st_uid > 2097151U) {
      if ((unsigned int)archive_format == 4U) {
        {
                                                                            
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
                                    
                                               
         
                                                                            
         
              
         
                                                           
                                                   
         
       
            
       
                                                         
                                                 
       
      
    if (st->stat.st_size > 2147483647L) {
      if ((unsigned int)archive_format == 4U) {
        {
          xheader_store("size", (struct tar_stat_info const *)st, (void *)0);
        }
      } else {
        {
                                                            
                                                    
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
                              
                                                 
           
                                                                               
                                                               
                                                                               
                                                               
           
                
                                                   
             
                                                    
                                                        
                                                                 
                                                    
                                                        
                                                                 
             
           
         
        
    }
    if ((unsigned int)archive_format == 1U) {
                       
    } else {
      tmp___4 = '0';
    }
    header->header.typeflag = (char)tmp___4;
    {
                                              
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                                               
                    
       
                          
            /* CIL Label */
      goto switch_break;
    case_2:  /* CIL Label */
    case_6 : /* CIL Label */
    {
      strcpy((char * /* __restrict  */)(header->header.magic),
             (char const * /* __restrict  */) "ustar  ");
    }
      goto switch_break;
    case_4:  /* CIL Label */
    case_3 : /* CIL Label */
    {
                                                              
                                                                   
                                                                 
                                                                
     
                        
                                    
     
              
    }
    switch_break: /* CIL Label */;
    }
                                                 
                                 
         
                                                    
                                                    
         
                                                
           
                                                      
           
                               
             
                                                                      
                                       
             
                  
                                                                  
                          
               
                                                                
                                                              
               
                    
               
                                                                        
                                         
               
             
           
                
           
                                                            
                                                          
           
          
                                                 
           
                                                     
           
                              
             
                                                                     
                                       
             
                  
                                                                  
                          
               
                                                                
                                                              
               
                    
               
                                                                       
                                         
               
              
            
                
           
                                                            
                                                          
           
         
        
      
    return (header);
  }
}
void simple_finish_header(union block *header) {
  size_t i;
  int sum;
  char *p;
            
  size_t tmp___0;
  char *__cil_tmp7;
  {
    {
                                                              
                                                         
                                            
             
                         
      i = sizeof(*header);
    }
    {
      while (1) {
      while_continue: /* CIL Label */;
        tmp___0 = i;
        i--;
        if (!(tmp___0 != 0UL)) {
          goto while_break;
        }
               
            
                               
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
                          
                                                
        if ((int)header->header.typeflag != 76) {
          if ((int)header->header.typeflag != 120) {
            if ((int)header->header.typeflag != 103) {
              {
                                        
                current_format = archive_format;
                print_header(st, block_ordinal);
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
  union block *blk;
  {
    {
      while (1) {
                      /* CIL Label */;
        if (!(size_left > 0L)) {
          goto while_break;
        }
        {
                                   
                                  
                                                        
          set_next_block_after(blk);
                            
        }
      }
    while_break: /* CIL Label */;
    }
    return;
  }
}
static enum dump_status dump_regular_file(int fd, struct tar_stat_info *st) {
  off_t size_left;
  off_t block_ordinal;
  union block *blk;
  size_t bufsize;
  size_t count;
  size_t tmp;
                                                                      
                
                
                
  void *__cil_tmp13;
  {
    {
      size_left = st->stat.st_size;
                                              
      blk = start_header(st);
    }
    if (!blk) {
      return ((enum dump_status)2);
    }
    if ((unsigned int)archive_format != 1U) {
    }
    { finish_header(st, blk, block_ordinal); }
    {
      while (1) {
                      /* CIL Label */;
        if (!(size_left > 0L)) {
          goto while_break;
        }
                                   
          {
                                                                  
                                      
                                            
          }
          
        {
          blk = find_next_block();
          bufsize = available_space_after(blk);
        }
        if ((size_t)size_left < bufsize) {
          bufsize = (size_t)size_left;
          count = bufsize % 512UL;
                       
            {
                                                                          
            }
            
        }
        if (fd < 0) {
          count = bufsize;
        } else {
          {
            tmp = safe_read(fd, (void *)(blk->buffer), bufsize);
                        
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
              
  int tmp___3;
                    
                    
  {
    if (fd >= 0) {
      {
                                         
      }
      if (tmp___1 != 0) {
        {
                                                      
        }
      } else {
        if (final_stat.st_ctim.tv_sec != original_ctime) {
          {
            tmp = quotearg_colon((char const *)st->orig_file_name);
            tmp___0 = gettext("%s: file changed as we read it");
                                                    
          }
        }
      }
      {                      }
                          
        {
          close_diag((char const *)st->orig_file_name);
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
  char *__cil_tmp29;
  {
    {
      our_device = st->stat.st_dev;
      tmp___1 = is_avoided_name((char const *)st->orig_file_name);
    }
    if (!tmp___1) {
      {
                                        
                                      
                            
                                      
        blk = start_header(st);
      }
      if (!blk) {
        return;
      }
      if (incremental_option) {
        blk->header.typeflag = (char)'D';
      } else {
                                         
      }
      if (!incremental_option) {
        {
          finish_header(st, blk, block_ordinal);
        }
      } else {
        if (gnu_list_name->dir_contents) {
          {
            block_ordinal = current_block_ordinal();
                                                     
            totsize = (off_t)0;
          }
          if (buffer___2) {
            p_buffer = buffer___2;
            {
              while (1) {
              while_continue: /* CIL Label */;
                if (!*p_buffer) {
                                  
                 
                 
                                            
                                       
                                                            
                                   
                }
              }
            while_break: /* CIL Label */;
            }
          }
          {
                     
                                                                              
                                                  
                                  
                                
           
           
                       
                                                
                                      
                                     
               
                                        
                 
                                                                              
                                            
                                         
                 
               
               
                                        
                                                     
               
                                                
                                            
                                                   
                            
                   
                                                                
                                                   
                   
                 
               
               
                                                               
                                                                          
                                                                 
                                    
                                                                    
               
             
                           /* CIL Label */;
          }
          if (multi_volume_option) {
            {
              assign_string(&save_name, (char const *)0);
            }
          }
                 
        }
      }
    }
    if (!recursion_option) {
      return;
    }
    if (one_file_system_option) {
      if (!top_level) {
        if (parent_device != st->stat.st_dev) {
                              
             
                                                                         
                       
                                                                               
                                                          
             
           
                 
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
      while_continue___1: /* CIL Label */;
        { entry_len = strlen(entry); }
        if (!(entry_len != 0UL)) {
          goto while_break___1;
        }
                                              
           
                                             
                                                                  
                                       
           
          
        {
          strcpy((char * /* __restrict  */)(name_buf + name_len),
                 (char const * /* __restrict  */)entry);
                                                          
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
                
  size_t tmp___1;
  {
    {
      tmp = strlen((char const *)*pstr);
      len = tmp;
    }
    {
                
                                      
                         
                                                     
                             
           
                
                           
         
              
        
    while_break: /* CIL Label */;
    }
    if (!((int)*(*pstr + len) == 47)) {
      {
                                                    
                                
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
           
                
                
             
                 
                
                 
              
                 
                
                
  _Bool tmp___7;
  {
    {
      open_archive((enum access_mode)1);
      xheader_write_global();
    }
    if (incremental_option) {
      {
                                  
                                   
                                 
                                
       
       
                   
                                        
                                   
                                                                  
                             
           
                                                       
                         
             
                                         
             
           
         
                                   
       
                            
       
                   
                                            
                                   
                                                                  
                                 
           
                                                       
                         
             
                                                
                             
             
                                      
               
                           
                                                    
                                     
                                               
                                         
                   
                                          
                 
                                               
               
               
                                                                    
                                             
               
             
             
                                                          
                                                              
             
                                                             
                             
                     
                                                  
             
                                            
                    
               
                           
                                                    
                            
                                         
                   
                   
                                        
                                   
                   
                                              
                                                    
                       
                                   
                                                            
                                             
                                                             
                                                 
                           
                                                  
                         
                                                       
                       
                       
                                                                            
                                                     
                       
                     
                     
                                                                           
                                                                      
                                                          
                     
                   
                                  
                 
                                               
               
             
           
         
                                       
       
                                  }
    } else {
      {
        while (1) {
        while_continue___4: /* CIL Label */;
          { p = name_next(1); }
          if (!((unsigned long)p != (unsigned long)((void *)0))) {
            goto while_break___4;
          }
          {                                           }
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
                                   
       
                               
       
     
           
  }
}
                                                                         
                       
                
   
                                   
                                      
                                                            
   
 
                                                                    
                           
                           
   
                                        
                                        
                                                                              
                          
   
  
static void unknown_file_error(char *p) {
  char *tmp;
  char *tmp___0;
  char *__cil_tmp4;
  {
    {
      tmp = quotearg_colon((char const *)p);
      tmp___0 = gettext("%s: Unknown file type; file ignored");
                                              
    }
    if (!ignore_failed_read_option) {
                      
    }
    return;
  }
}
static Hash_table *link_table;
static _Bool dump_hard_link(struct tar_stat_info *st) {
                 
  struct link *duplicate;
                     
                   
                        
            
  size_t tmp___0;
  int tmp___1;
               
                    
  {
                      
                                   
         
                                  
                                   
                   
                                                                               
                                            
         
                        
           
                                                                               
                                          
                                 
                                                    
                                                     
                                       
           
                                
             
                                  
             
           
           
                                          
                                   
           
                     
                              
           
           
                                                                       
                                             
                                                  
           
                                    
             
                                                                 
             
                               
               
                                                               
               
             
           
                            
          
       
      
                      
  }
}
static void file_count_links(struct tar_stat_info *st) {
                        
                  
             
                
                
  {
                                 
       
                                                       
                 
                                                                              
                                    
                                  
                                  
                                      
                                                    
                                                                   
       
                       
                
              
         
                      
                                                                
                                                                            
                                                                   
         
                         
              
                                                              
                                             
         
                           
             
                           
             
           
                
                           
         
       
                                                          
         
                  
         
       
                    
     
           
  }
}
void check_links(void) {
                 
            
                
                
                   
  {
                     
             
     
     
                                                           
                              
     
     
                 
                                      
                  
                           
         
                        
           
                                                            
                                                         
           
         
         
                   
                                                                              
                                      
         
       
                                 
     
           
  }
}
static void dump_file0(struct tar_stat_info *st, char *p, int top_level,
                       dev_t parent_device) {
                     
            
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
                  
           
                 
                 
                   
               
                 
                 
  _Bool tmp___20;
  unsigned int tmp___21;
                        
  int tmp___23;
                   
                    
                    
                    
                    
  {
    block_ordinal = (off_t)-1;
    if (interactive_option) {
      {
        tmp = confirm("add", (char const *)p);
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
                              
                                               
                                                     
                                                      
    }
    if (!((st->stat.st_mode & 61440U) == 16384U)) {
                                                               
                    
              
                                                                   
                                                                      
                                 
                                     
                          
                    
                                                                        
                            
                      
                                                                           
                                                                              
                                         
                                        
                       
                                                                  
                                                                               
                                                                    
                       
                     
                           
                   
                 
               
             
           
         
        
    }
    {                                    
                  
       
                                                  
                                                                 
                                                    
       
             
    }
    if ((st->stat.st_mode & 61440U) == 16384U) {
      {
        dump_dir(st, top_level, parent_device);
      }
                                 
         
                                                                           
         
       
             
    } else {
      { tmp___20 = is_avoided_name((char const *)p); }
      if (tmp___20) {
               
      } else {
        { tmp___7 = dump_hard_link(st); }
                     
                 
          
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
                                                                              
                      error(0, 0, (char const *)tmp___9, tmp___8);
                    }
                  } else {
                    {                                              }
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
                                              
                            
               
                                               
                            
               
                                               
                            
               
                                               
                            
               
                                
                    /* CIL Label */
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
                                   
             
                        
             
                     
            case_3 : /* CIL Label */
            {
              abort();
            }
            switch_break: /* CIL Label */;
            }
            if (atime_preserve_option) {
              {
                                                      
                                                                
              }
            }
            { file_count_links(st); }
                   
          } else {
                                                       
                                                 
                                                        
                 
                               
                 
                      
                                           
                   
                                 
                   
                 
               
               
                                                           
                                              
                                                                      
                                                                         
                                                   
                                     
               
                             
                 
                                                 
                 
                       
               
               
                                                    
                                                                        
               
                               
                 
                                      
                 
               
               
                                                        
                                              
                                          
               
                            
                       
               
               
                                                                               
                                          
                                                    
                                                         
               
                                        
                 
                                                     
                 
                                     
                   
                                                  
                   
                 
               
                                       
                     
                    
                                                         
                                 
                      
                                                            
                                   
                        
                                                             
                                     
                          
                                                                
                       
                                                                   
                                                                 
                                                                      
                       
                             
                            
                                                
                             
                     
                   
                 
               
              
          }
        }
      }
    }
                                            
       
                              
       
             
      
    {
                                             
                                    
                                
     
                  
             
     
                                   
                          
       
                                                                       
                                                              
                                                        
                                                                       
                                                              
                                                        
       
     
                                                }
    if (remove_files_option) {
      {
        tmp___23 = unlink((char const *)p);
      }
                            
        {
          unlink_error((char const *)p);
        }
        
    }
    return;
  }
}
void dump_file(char *p, int top_level, dev_t parent_device) {
  struct tar_stat_info st;
  void *__cil_tmp5;
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
  struct mtop operation;
         
              
              
               
              
              
              
  int tmp___6;
  off_t position0;
  off_t tmp___7;
  __off_t tmp___8;
  off_t tmp___9;
  off_t increment;
  off_t position;
  off_t tmp___10;
  __off_t tmp___11;
  off_t tmp___12;
  {
                     
             
     
                      
                                 
                                         
                                                    
             
                                 
                                      
      tmp___6 = (off_t)operation.mt_count == count;
      
                 
                               
         
                            
                                  
                                                                             
                                         
                                                 
                                    
                        
         
              
         
                          
                      
                                                                             
                                              
                                    
                            
         
       
                         
               
       
                                       
                          
                                 
           
                                  
                                    
                                                                               
                                           
                                                   
                                      
                              
           
                
           
                            
                        
                                                                               
                                                
                                      
                              
           
         
                           
                 
         
       
     
                             
       
                                                                
                          
       
            
       
                                              
                          
       
      
    position0 = tmp___9;
    increment = (off_t)(record_size * (size_t)count);
    position = position0 + increment;
    if ((size_t)(increment / count) != record_size) {
      {
                                                                
      }
    } else {
      if ((position < position0) != (increment < 0L)) {
        {
          seek_error_details(*(archive_name_array + 0), position);
        }
      } else {
                           
                              
                
                              
          
        if (archive >= 1 << 30) {
          {
                                                                     
                               
           
                
           
                                                   
                                
          }
        }
        if (tmp___12 != position) {
          {
            seek_error_details(*(archive_name_array + 0), position);
          }
        }
      }
    }
    return;
  }
}
static void write_record(int move_back_flag) {
  union block *save_record;
  {
    save_record = record_start;
                              
                          
       
                    
                      
                    
       
            
       
                                                                         
                      
       
      
    record_start = save_record;
    if (move_back_flag) {
                               
        {
          move_archive(records_read - (records_written + records_skipped));
        }
        
    }
                  
           
   
 
                                                                
           
          
   
                  
    {
      while (1) {
      while_continue: /* CIL Label */;
                           
                           
         
                         
                     
                                       
        if (new_blocks == blocking_factor) {
          {
            write_record(1);
          }
        }
            
      }
    while_break: /* CIL Label */;
    }
    return;
  }
}
static void write_recent_bytes(char *data, size_t bytes) {
  size_t blocks;
  size_t rest;
  {
    {
      blocks = bytes / 512UL;
                                   
                                                       
      memcpy((void * /* __restrict  */)((new_record + new_blocks)->buffer),
             (void const * /* __restrict  */)(data + blocks * 512UL), rest);
    }
                        
      {
        memset((void *)((new_record + new_blocks)->buffer + rest), 0,
               512UL - rest);
      }
      
    new_blocks++;
    if (new_blocks == blocking_factor) {
      {
        write_record(1);
      }
    }
           
  }
}
                                  
                                  
                                   
                    
                       
                       
                            
          
                          
                           
                
                
                
                              
                
            
                        
                  
              
                    
                    
                    
                    
                    
   
     
                                           
                                            
                                
                                
                    
                                        
                                                   
                                           
     
     
                 
                                      
         
                                          
                           
         
         
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                            
                                
         
                  
         
                                
         
                                                                      
         
                                                                  
             
                            
             
                              
           
                                
                                         
                                        
                  
                                                                          
           
                         
             
                            
             
                              
           
                               
                                  
                            
                               
                                    
             
                                                   
             
                              
           
                               
                                               
                            
                                
         
                                               
         
           
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                  
                                      
           
                                                                       
                                               
           
                                      
                                      
                                      
           
                                                         
                                               
                            
           
                                     
                                  
                                      
           
                    
           
                                            
           
                            
                                      
         
                                 
                                                    
                           
         
       
                                 
     
     
                                          
                                     
                                          
     
                                             
                  
            
                                               
                             
                                           
                                                         
                         
           
                                                        
                                                                
                                               
           
         
                                                 
                                               
                          
         
         
                     
                                              
                                                                            
               
                                
               
             
             
                                                 
                                                 
             
                                                 
                                        
                 
                                                       
                 
                                        
               
             
                                                 
                                                   
                                   
                    
                                                   
                                                     
                                     
               
             
                                                 
               
                                                                      
                                                   
                                
                                                     
               
                                      
             
                                                                            
                                                                    
                                    
                                             
                                            
                      
                                                                              
               
                            
                            
                                                     
                                
                                                                          
               
                 
                             
                                                      
                                                                          
                                           
                     
                     
                                                                   
                                      
                     
                   
                                                 
                 
                                                
                                          
                                        
               
             
                                       
               
                                                          
                                                         
               
                    
               
                                                                               
                                                                               
               
             
             
                                                           
                           
                              
                                                                        
                                                   
             
                                                
               
                                
               
             
                                                                      
                                                                
                                                          
             
             
                         
                                                  
                                      
                                       
                 
                                                                                
                   
                                 
                                                 
                                                            
                   
                                                                      
                                                                
                   
                 
                                              
                                                           
                                                       
                 
                             
                   
                            
                   
                 
                 
                                                                             
                                                                       
                                                
                                      
                                         
                                                 
                                                 
                 
                                                    
                   
                                    
                   
                 
               
                                             
             
           
                                         
         
       
     
                                             
                            
       
                   
                                            
           
                                                       
                                                        
                                                
                                             
                                                
           
                                         
                                 
           
         
                                       
       
     
                                 
                            
                                  
         
                                          
         
                      
           
                                                     
           
         
       
     
     
                      
                       
     
           
   
 
                                              
                                        
                                                
                                                                        
                                        
                                                
                                                                         
      
                                                                              
                                                               
                                                             
                                   
                                                           
      
                                                                              
                                                               
                                                             
      
                                                                              
                                                                                
                                                           
      
                                                                              
                                                                
                                                              
      
                                                                              
                                                                             
      
                                                                              
                                                                                
                                                             
     
                                                                              
                                                                
                                                                               
                                  
                                                 
                                                       
                                                                              
                                        
                                                
                                                   
                                  
                               
size_t full_write(int fd, void const *buf, size_t count);
_Bool absolute_names_option;
enum old_files old_files_option;
_Bool recursive_unlink_option;
int same_owner_option;
int same_permissions_option;
size_t strip_path_elements;
                   
_Bool we_are_root;
                     
void extract_archive(void);
                         
                                             
                              
                                                              
void skip_file(off_t size);
                         
                                                                 
                                                        
void chown_error_details(char const *name, uid_t uid, gid_t gid);
void link_error(char const *target, char const *source);
void mkdir_error(char const *name);
void mkfifo_error(char const *name);
                                   
                                                          
                                   
                                                                       
                                                              
_Bool contains_dot_dot(char const *name);
_Bool sparse_member_p(struct tar_stat_info *st);
enum dump_status sparse_extract_file(int fd, struct tar_stat_info *st,
                                     off_t *size);
                           
static mode_t current_umask;
static struct delayed_set_stat *delayed_set_stat_head;
static struct delayed_symlink *delayed_symlink_head;
void extr_init(void) {
  __uid_t tmp;
  {
    {
                     
                                       
                                                  
                                            
                                         
                                        
    }
    if (0 < same_permissions_option) {
      current_umask = (mode_t)0;
    } else {
      {
                           
                                     
      }
    }
    return;
  }
}
static void set_mode(char const *file_name, struct stat const *stat_info,
                     struct stat const *cur_info, mode_t invert_permissions,
                     enum permstatus permstatus, char typeflag) {
              
                
          
  int tmp___0;
  void *__cil_tmp11;
  {
    if (0 < same_permissions_option) {
      if ((unsigned int)permstatus != 2U) {
                                         
                                             
                                        
                                                                  
                                                                      
                                                                           
                                      
                                       
                       
                
             
           
         
              
                    
      }
    } else {
    _L___3: /* CIL Label */
      if (!invert_permissions) {
              
              
                       
           
                                                                 
                                                               
           
                         
             
                                    
             
                   
           
                                                
         
                                           
                                                                
       
     
                                         
                       
       
                                             
      }
    }
    return;
  }
}
static void check_time(char const *file_name, time_t t) {
             
                  
               
                     
                
                   
                   
  {
                 
       
                         
                                                               
                                                           
       
            
                                      
         
                                  
         
                      
           
                                 
                                                                          
                                                                  
                                            
           
         
       
      
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
                             
                          
                                             
                                   
                                                                 
                  
                                                   
           
           
                                                                  
                                                                       
           
                        
             
                                     
             
                  
             
                                                    
                                                     
             
           
         
       
       
                                                                                
                           
       
      
    if (0 < same_owner_option) {
      if ((unsigned int)permstatus != 2U) {
        if ((int)typeflag == 50) {
          {
            tmp___0 = lchown(file_name, (__uid_t)stat_info->st_uid,
                             (__gid_t)stat_info->st_gid);
          }
                             
            {
              chown_error_details(file_name, (uid_t)stat_info->st_uid,
                                  (gid_t)stat_info->st_gid);
            }
            
        } else {
          {
            tmp___1 = chown(file_name, (__uid_t)stat_info->st_uid,
                            (__gid_t)stat_info->st_gid);
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
                             
                          
               
                                                                                
                                   
                       
                                                
                                         
                                                         
                                                        
                                                    
                                    
                                      
                                                  
                                         
      delayed_set_stat_head = data;
    }
    return;
  }
}
static void repair_delayed_set_stat(char const *dir,
                                    struct stat const *dir_stat_info) {
  struct delayed_set_stat *data;
  struct stat st;
  int tmp;
  char *tmp___0;
  char *tmp___1;
  void *__cil_tmp8;
                   
  {
                                 
    {
      while (1) {
                      /* CIL Label */;
        if (!data) {
          goto while_break;
        }
        {
                                                                      
                                                             
         
                       
           
                                                        
           
                 
         
                                                          
                                                             
                                                     
                                     
                                                                      
                                                                          
                                                                            
                                                              
                                                  
                   
            
        }
        data = data->next;
      }
    while_break: /* CIL Label */;
    }
    {
                                   
                                                                              
                                                  
      exit_status = 2;
    }
    return;
  }
}
static int make_directories(char *file_name) {
                
  char *cursor;
  int did_something;
  int mode;
  int invert_permissions;
  int status;
  int *tmp;
  int tmp___0;
  int *tmp___1;
  {
                           
                      
                     
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!*cursor) {
                           
        }
                                   
                      
         
                                                              
                      
                
                                          
                        
           
         
                                        
                                                                      
                        
                  
                                            
                          
                    
                                              
                                                                            
                              
                        
                                                  
                                
                   
                 
               
             
           
         
                               
              
                                                                        
                                                                            
                                                                              
                                 
                          
                                 
                
                                           
          
        {
          status = mkdir((char const *)file_name,
                         (__mode_t)(mode ^ invert_permissions));
        }
        if (status == 0) {
          {
                                                  
                                                                          
                                                                           
                                                                                
                              
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
                        
          } else {
            if (0) {
            _L___3 : /* CIL Label */
            {
              tmp___0 = access((char const *)file_name, 2);
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
  struct stat st;
  int tmp;
  void *__cil_tmp5;
  {
    {
                                                          
                                                         
    }
    if (tmp) {
      {
        stat_warn(file_name);
      }
      return ((_Bool)1);
    }
    if (!((st.st_mode & 61440U) == 16384U)) {
      if (st.st_mtim.tv_sec >= tar_stat->stat.st_mtim.tv_sec) {
        return ((_Bool)1);
      }
    }
    return ((_Bool)0);
  }
}
static int prepare_to_extract(char const *file_name) {
  int tmp;
  int *tmp___0;
  int *tmp___1;
  char *tmp___2;
  _Bool tmp___3;
  char *__cil_tmp7;
  {
    if (to_stdout_option) {
                 
    }
    {
      if ((unsigned int)old_files_option == 3U) {
        goto case_3;
      }
      if ((unsigned int)old_files_option == 5U) {
        goto case_5;
      }
                          
    case_3 : /* CIL Label */
    {
      tmp = remove_any_file(file_name,
                            (enum remove_option)recursive_unlink_option);
    }
      if (!tmp) {
        {
          tmp___0 = __errno_location();
        }
                      
           
                                         
           
                              
             
                                      
             
                       
           
          
      }
      goto switch_break;
    case_5 : /* CIL Label */
    {
      tmp___3 = file_newer_p(file_name, &current_stat_info);
    }
      if (tmp___3) {
        {
                                                     
                                                        
        }
        return (0);
      }
                        
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
              
              
  {
    {
                              
               
     
                         
                 
    }
    { tmp___0 = __errno_location(); }
    {
                          
                     
       
                          
                        
       
                          
              /* CIL Label */
    {
                                                
                    
       
                                                 
                    
       
                                                 
                    
       
                                                 
                    
       
                                                 
                    
       
                                                 
                    
       
                            
                           
                 
    case_5 : /* CIL Label */
    {
      tmp___2 = file_newer_p((char const *)file_name, &current_stat_info);
    }
      if (tmp___2) {
        {
          tmp___1 = __errno_location();
          *tmp___1 = e;
        }
                   
      }
    case_0:  /* CIL Label */
                           
             /* CIL Label */
    {
      tmp___3 = remove_any_file((char const *)file_name, (enum remove_option)0);
      r = tmp___3;
      tmp___4 = __errno_location();
                    
    }
      return (r);
                          
                            
                                      
     
                                
     
                                            
    }
                    
         
                                       
                       
         
                   
       
                         
                
                    /* CIL Label */
                
                  /* CIL Label */;
    }
  }
}
static void apply_nonancestor_delayed_set_stat(char const *file_name,
                                               _Bool after_symlinks) {
  size_t file_name_len;
            
                                      
                                
                     
                 
                              
              
                
                
              
                    
                    
  char *__cil_tmp16;
  {
    {
                             
                          
                                              
     
     
                 
                                      
                                     
                           
         
                                     
                                 
                                          
                                                
                                                                            
                                                              
                           
                
                                                    
                                                     
                                                                          
                            
                      
                                                                              
                         
                                        
                 
                                                           
                                                                   
                                                        
                 
                                     
                                     
                   
                 
               
             
           
         
                                            
           
                                                  
                                                                             
                                                                   
           
                             
             
                                                          
                                       
             
                  
                                                      
                                                           
                 
                                                                            
                                                                              
                                                          
                                                              
                                  
                                           
                 
               
                    
               
                                                                          
                                                                            
                                                        
                                                            
                                
                                         
               
             
           
         
                             
           
                                                     
                                                                       
                                                                            
           
         
         
                                             
                             
         
       
                 /* CIL Label */;
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
                   
                 
        
               
                
                
                
  _Bool tmp___5;
  int tmp___6;
  char *tmp___7;
  int tmp___8;
  char *tmp___9;
               
               
  int tmp___12;
                
              
                             
                            
                  
                 
                  
                 
               
               
                 
               
               
                 
               
  char const *link_name;
                 
  struct stat st1;
  struct stat st2;
  int e___0;
  struct delayed_symlink *ds;
  struct string_list *p___0;
  size_t tmp___26;
                 
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
                    
               
               
                
               
                
                       
                 
                 
                 
                 
                 
  char *tmp___49;
  int tmp___50;
  int tmp___51;
  int tmp___52;
  int tmp___53;
              
                    
                    
                    
                   
                    
                    
                    
                    
                    
                    
                    
                    
  {
    {
      interdir_made = 0;
      set_next_block_after(current_header);
      decode_header(current_header, &current_stat_info, &current_format, 1);
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
                             
       
                 
                                                                              
                             
       
                                               
         
                        
         
               
       
                              
      
    {                                                                        
                        
                             
         
                                                                  
         
                       
           
                                         
                         
                                                              
                                                                    
                                                        
                            
                          
           
                 
         
        
     
                                                     }
    if (tmp___5) {
                     
    } else {
      tmp___50 = (int)current_header->header.typeflag;
    }
    typeflag = (char)tmp___50;
    {
                               
                     
        
      if ((int)typeflag == 0) {
        goto case_83;
      }
      if ((int)typeflag == 48) {
        goto case_83;
      }
                               
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
       
                                
                     
        
      if ((int)typeflag == 53) {
        goto really_dir;
      }
                               
                        
        
      if ((int)typeflag == 86) {
        goto case_86;
      }
                               
                     
       
                                
                     
        
                                 
                     
        
      if ((int)typeflag == 75) {
        goto case_76;
      }
      goto switch_default;
    case_83: /* CIL Label */
             /* CIL Label */
    case_48: /* CIL Label */
    case_55: /* CIL Label */
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
                          /* CIL Label */;
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
                                                   
                exit_status = 2;
              }
                              
             
                                                           }
            if (written > (size_t)size) {
              written = (size_t)size;
            }
            {
                                           
                            
              count =
                  full_write(fd, (void const *)(data_block->buffer), written);
              size = (off_t)((size_t)size - count);
              set_next_block_after(
                  (union block *)((data_block->buffer + written) - 1));
            }
                                  
               
                                                                             
               
                               
              
          }
        while_break: /* CIL Label */;
        }
      }
      { skip_file(size); }
                               
         
                                                     
         
        
      if (to_stdout_option) {
                          
      }
      { status = close(fd); }
                      
         
                                               
         
                            
           
                               
           
         
        
      if ((unsigned int)old_files_option == 2U) {
                    
              
                     
       
       
                                         
                                                                
                                                                              
                           
       
                        
                             
     
                                                             
     
                     
                          
        
                                 
                
              
                                                            
                      
                
           
                      
                                                                            
           
                         
                    
                       
                                                
                                                             
                              
                                     
               
                                                                          
                              
                                     
               
             
                                           
           
                        
                         
               
                                                    
               
                    
                                            
                                  
                 
                                                      
                            
                 
                      
                                         
                                    
                   
                                                         
                   
                        
                   
                              
                                                                          
                              
                                                                               
                                                                 
                                            
                                     
                                                           
                                                   
                                             
                                       
                                       
                                                 
                                                           
                                                           
                                                               
                                       
                                                                              
                                    
                             
                                                                
                                                                 
                                                                            
                                                                      
                                                                 
                                                           
                                                            
                                              
                   
                          
                                             
                       
                                                                   
                                                                        
                                                             
                       
                                          
                                                                         
                           
                                                                          
                           
                                                        
                                                                              
                                                   
                             
                                         
                                                                  
                                 
                                                               
                                                  
                                                                       
                                                        
                                                                              
                                 
                                                    
                                   
                                                                             
                                   
                                        
                                                                  
                                                                  
                                 
                                            
                                        
                                                              
                                                         
                                   
                                        
                                                       
                                 
                               
                                                             
                             
                           
                         
                       
                     
                   
                             
                 
               
             
                  
                
                       
                                                
               
                                                                           
                                                          
               
                                   
                                     
               
                                                                          
                              
                                     
               
             
                                           
           
                              
               
                                                 
                                                                        
                                                                               
                                    
               
                    
               
                                                                        
                                                       
               
             
           
         
        
                        
                           
           
                               
           
          
      }
                       
                             
     
                                                             
     
                       
                          
        
    again_link : {
                                                                            
                                             
                                         
                                                        
    }
      if (status == 0) {
        ds = delayed_symlink_head;
        if (ds) {
          {
            tmp___28 = stat((char const * /* __restrict  */)link_name,
                            (struct stat * /* __restrict  */)(&st1));
          }
                             
             
                        
                                                  
                          
                                       
                 
                                            
                                              
                                                          
                       
                                                                   
                                  
                                                                               
                                                                     
                                                
                                         
                                                               
                                                                         
                                                                          
                                                  
                                            
                       
                                           
                     
                   
                 
                              
               
                                             
             
            
        }
        goto switch_break;
      }
      { tmp___29 = maybe_recoverable(file_name, &interdir_made); }
                    
                        
        
      if (incremental_option) {
        {
          tmp___30 = __errno_location();
        }
                             
                            
         
       
       
                                      
                          
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
                        
    case_51: /* CIL Label */
                                             
                     
                            
                                               
                                                                           
                      
                          
       
       
                                                                              
                                                       
       
                        
         
                                                                  
         
                       
                         
         
                                                 
                            
           
                               
           
         
                          
       
       
                                         
                                                                
                                                                       
                           
       
                        
              /* CIL Label */
    {
      tmp___36 = prepare_to_extract((char const *)file_name);
    }
      if (!tmp___36) {
        goto switch_break;
      }
      {
        while (1) {
        while_continue___4: /* CIL Label */;
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
                         
        {
          set_stat((char const *)file_name,
                   (struct stat const *)(&current_stat_info.stat),
                   (struct stat const *)((void *)0), (mode_t)0,
                   (enum permstatus)1, typeflag);
        }
               
        { mkfifo_error((char const *)file_name); }
        if (backup_option) {
          {
            undo_last_backup();
          }
        }
        
      goto switch_break;
    really_dir:
    case_53: /* CIL Label */
    case_68: /* CIL Label */
                              
         
                                               
         
              
                                  
           
                          
           
         
       
                        
                     
              
                       
       
       
                                                                          
                                                                     
                                                                         
                                                                          
                                                             
       
                        
                          
        
      if (status < 0) {
        goto directory_exists;
      }
    again_dir : { status = mkdir((char const *)file_name, mode); }
                       
         
                                        
         
                              
                              
                        
                  
                                                       
                          
                    
                                                         
                                      
               
                                                                          
                                                                            
               
                                    
                                      
                     
                                                                      
                                                                              
                     
                                      
                   
                                                            
                                                           
                                          
                   
                 
                 
                                                
                                 
                 
               
             
           
         
                                                                    
                       
                         
         
                                          
                              
           
                                                 
           
                              
             
                                 
             
           
                            
         
        
    directory_exists:
      if (status == 0) {
                   
              
                                                   
                      
                
                                                     
                                 
                              
                           
                    
                           
             
             
                             
                                          
                                                                 
                                                                        
                                                                            
                                                                              
                                                              
                                             
             
           
          
      }
      goto switch_break;
    case_86: /* CIL Label */
      if (verbose_option) {
        {
                                                                     
                                             
                                                    
                                                                      
        }
      }
                        
              /* CIL Label */
    {
                       
    }
      goto switch_break;
    case_77 : /* CIL Label */
    {
                                                                           
                        
                                                                         
                                                    
                      
                    
    }
                         
         
                             
         
       
                        
    case_76:  /* CIL Label */
    case_75 : /* CIL Label */
    {
                                                   
                                          
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
                     
                
          
              
              
              
                           
                                   
                    
  {
                              
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!ds) {
          goto while_break;
        }
                             
                                       
                              
        {
                    
                                              
                           
                                   
             
             
                                                       
                                                                     
                                                                      
             
                               
                                         
                                           
                                                       
                     
                                               
                     
                                       
                       
                                             
                       
                            
                                         
                         
                                                               
                         
                                              
                                  
                         
                              
                            
                                                                          
                       
                                       
                           
                                                                              
                           
                                
                           
                                                  
                                                
                                                
                                                                        
                                                                       
                                                                    
                           
                         
                       
                     
                   
                 
               
             
                                    
           
                                         
         
                              
         
                     
                                              
                           
                                   
             
             
                                   
                                    
                             
             
           
                                         
         
         
                              
                           
                        
        }
      }
    while_break: /* CIL Label */;
    }
    delayed_symlink_head = (struct delayed_symlink *)0;
           
  }
}
void extract_finish(void) {
  char *__cil_tmp1;
                   
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
  char *tmp;
  char *__cil_tmp2;
  {
    {
                       
      tmp = gettext("Error is not recoverable: exiting now");
                                    
              
    }
  }
}
/* #pragma merger("0","005.xheader.o.i","") */
                                                           
                                                                             
extern __attribute__((__nothrow__)) char *(
    __attribute__((__nonnull__(2), __leaf__))
    strtok)(char *__restrict __s, char const *__restrict __delim);
                                          
                                                
                                                                   
                                   
                                                
                                                                 
                                                                      
                                                                                
      
                                                                 
                                                                              
                                    
                                                                         
                                                                    
                                                                       
char *dir_name(char const *path);
strtol_error xstrtoumax(char const *s, char **ptr, int strtol_base,
                        uintmax_t *val, char const *valid_suffixes);
__attribute__((__noreturn__)) void usage(int status);
                                
                                               
                                           
char *xheader_ghdr_name(void);
                                     
                                                                   
                                                     
                                                                      
                                            
                                                               
                                                              
                                                              
                                                                               
                                                                
                                              
                                       
                                  
                                                 
static struct keyword_list *keyword_global_override_list;
static struct keyword_list *keyword_override_list;
static struct keyword_list *global_header_override_list;
static char *exthdr_name;
                            
                                                        
                          
          
   
                              
     
                 
                                      
                  
                           
         
                                                            
                       
                            
         
                      
       
                                 
     
                      
   
 
                                                              
                          
          
   
                               
     
                 
                                      
                  
                           
         
                                                             
                       
                            
         
                      
       
                                 
     
                      
   
  
static void xheader_list_append(struct keyword_list **root, char const *kw,
                                char const *value) {
  struct keyword_list *kp;
           
                
   
     
                                
                                      
                                
     
                
       
                                 
                            
       
            
                                      
     
                     
               
           
   
 
                                                             
                          
                            
   
               
                 
       
                   
                                        
                    
                             
           
           
                            
                                      
                                    
                             
                      
           
         
                                   
       
                                                 
     
           
   
 
                                                                               
                                                  
            
                   
  {
    {
                                                                  
                                         
               
    }
  }
}
                                                          
               
          
                             
                                 
                
                
                
                
              
              
              
                    
                    
   
                      
           
                                
          
                        
     
     
                 
                                      
                                                   
           
                                  
           
                                                         
                             
           
                
                           
         
            
       
                                 
     
                 
               
     
                 
                                          
                 
           
                                      
           
                                                             
                                 
           
                
                               
         
            
       
                                     
     
                                                     
                       
       
                                                               
       
                    
         
                                                         
                                                
                   
         
       
       
                                                                   
                                                       
       
            
                                                            
                         
         
                                                       
         
              
                                                                  
                           
           
                                                             
           
                
                                                                      
                        
             
                                                                   
                                                     
                       
             
           
                       
             
                                                                
                                                                     
             
                  
             
                                                                           
                                                   
             
           
         
       
     
           
   
 
                                       
              
          
            
   
     
                                                      
                                                           
     
     
                 
                                      
                     
                           
         
         
                                                 
                  
         
                 
           
                                              
           
                
                                                  
         
         
                                                               
                                                               
         
       
                                 
     
           
   
 
                                                                   
           
           
             
                 
         
   
                  
            
        
                             
     
                 
                                      
                    
            
                                                         
                      
                       
                       
                             
           
                
                           
         
       
                                 
     
                  
        
     
                 
                                          
                       
                               
         
                         
                                    
                         
            
            
       
                                     
     
           
   
 
                                                                           
                                                 
            
             
             
          
                
            
             
                  
                
                
                 
                 
                  
                 
                 
                
                
                
                      
                 
                       
                 
                       
                 
                       
                    
                    
   
     
                        
                
                                
                                 
              
     
     
                 
                                      
                 
           
                                     
                                      
           
                   
                             
           
                
                           
         
         
                                            
                         
           
                                             
                          
           
                                             
                          
           
                                             
                          
           
                                             
                          
           
                            
                                
                
                            
                                 
                   
             
                                                                   
                                                                       
                                                  
                                   
             
           
                            
                                 
                   
             
                                                                 
                                                   
                                   
             
           
                            
                                  
         
                             
                                                                 
                                                   
                               
         
                            
                                 
                        
             
                                                                            
                                                     
                                   
             
           
                            
                                      
         
            
       
                                 
     
     
                                   
                            
              
              
     
     
                 
                                          
                  
                               
         
                                    
           
                                              
                               
             
                                               
                                
             
                                               
                                
             
                                               
                                
             
                                               
                                
             
                                
                                      
                        
                
                        
                
                                      
                
                                  
                                       
                      
               
                                                       
                                                                
               
             
                   
                                  
                                       
                       
               
                                                       
                                                                 
               
             
                   
                                  
                                        
           
                                                   
                                                                 
                   
           
                                  
                                       
                          
               
                                                       
                                                                   
                       
               
             
                                         
                         
                
                         
                
                                        
                     
                           
                  
                           
                  
                                          
             
                                            
           
                
                       
              
                       
              
                                      
         
       
                                     
     
     
                 
                                          
                                                    
                                        
                                 
           
                
                               
         
            
       
                                     
     
                 
                 
   
  
char *xheader_xhdr_name(struct tar_stat_info *st) {
  char *tmp;
  char *__cil_tmp3;
  {
    if (!exthdr_name) {
      {
        assign_string(&exthdr_name, "%d/PaxHeaders.%p/%f");
      }
    }
    {                                                                     }
    return (tmp);
  }
}
                              
             
                  
                
                 
                
                
                   
                   
                   
                    
   
                           
       
                                   
                                    
       
                 
                     
       
       
                              
                                                    
                               
                                          
                                                         
                                                    
                                                         
                                                                     
       
     
     
                                                                        
                                                                             
     
                     
   
  
void xheader_write(char type, char *name, struct xheader *xhdr) {
  union block *header;
  size_t size;
         
             
  {
    {
                       
                                                              
                                     
                                   
                       
     
     
                 
                                      
         
                                     
                            
         
                         
                     
         
         
                                                            
                                                         
         
                          
           
                                                                   
           
         
         
                   
                      
                                       
         
                            
                           
         
       
                                 
     
                             }
           
  }
}
void xheader_write_global(void) {
  char *name;
                          
  {
                                       
             
     
     
                             
                                        
     
     
                 
                                      
                  
                           
         
         
                                                                         
                                        
                        
         
       
                                 
     
     
                                       
                                 
                                                       
                         
                            
     
           
  }
}
struct xhdr_tab const xhdr_tab[17];
                                                                  
                           
          
   
                 
     
                 
                                      
                          
                           
         
                                                            
                       
                     
         
            
       
                                 
     
                                                  
   
  
static _Bool xheader_protected_pattern_p(char const *pattern) {
  struct xhdr_tab const *p;
  int tmp;
  {
                
     
                
                                      
                          
                           
         
                         
           
                                                                
           
                         
                              
           
         
            
       
                                 
     
                      
  }
}
static _Bool xheader_protected_keyword_p(char const *keyword) {
                           
          
  {
                
     
                 
                                      
                          
                           
         
                         
           
                                                            
           
                         
                              
           
         
            
       
                                 
     
                      
  }
}
                                   
                                                                               
                                        
             
                      
              
            
            
                
                    
                    
   
               
                          
                        
     
     
                                                         
                                                      
     
                           
       
                      
                                                                              
                                       
                        
       
                        
     
           
                               
     
                 
                                      
                                                                  
                           
         
                               
                           
         
               
       
                                 
     
                           
       
                                                                           
                                           
                        
       
                        
     
     
                      
                                    
                                       
                                                        
                                    
                        
                       
     
                      
   
  
                                                     
                                                         
                           
                             
   
     
                 
                                      
                  
                           
         
         
                                                          
                  
         
                
           
                                                         
           
         
                      
       
                                 
     
           
   
  
                                                                     
                           
                           
            
                
   
     
                                        
                                               
     
              
             
            
                                                        
                    
               
       
     
                                    
            
       
                                   
       
     
           
   
  
void xheader_decode(struct tar_stat_info *st) {
  char *p;
             
  _Bool tmp;
  {
    {
                                                          
                                                        
     
                               
                                       
                                                                   
       
                   
                                        
                                                          
                             
           
                                                         
                     
                             
           
         
                                   
       
     
                                                    }
           
  }
}
                                                                     
                            
   
     
                                         
                                               
     
           
   
 
                                  
          
             
            
   
                               
       
                                         
                                                                     
                                                           
       
       
                   
                                        
                                                          
                             
           
           
                                          
                                                                        
           
                     
                             
           
         
                                   
       
     
           
   
  
                                       
            
   
                              
       
                                                      
                                                    
                                                                              
                                                  
       
      
           
   
  
void xheader_store(char const *keyword, struct tar_stat_info const *st,
                   void *data) {
                          
            
                
  {
                                  
      return;
      
    {                              }
            
             
     
                                                 
              
             
            
                                                        
                    
               
       
     
     
                             
                                                         
     
           
  }
}
void xheader_read(union block *p, size_t size) {
          
                 
            
             
  {
    {
                   
                                           
                    
                                  
                                               
                                
                                           
     
     
                 
                                      
                   
                          
                            
         
         
                                                                        
                                                                   
                                  
                                
                   
                      
         
                            
                           
         
       
                 /* CIL Label */;
    }
    return;
  }
}
                                                                 
          
            
                
   
               
                    
       
                   
                                        
              
                      
                              
                             
           
         
                                   
       
            
                        
       
                   
                                            
                  
              
                                           
                      
                              
                                 
           
         
                                       
       
       
                   
                                            
                                                          
                                 
           
                      
              
                               
         
                                       
       
     
               
   
 
                                                                    
                                              
             
             
                 
           
           
                 
                      
            
                          
                
                          
                
                 
                          
                
                          
                
                 
                          
                
                    
   
     
                            
                              
                                  
                    
     
     
                 
                                      
         
                
                                                                      
         
                        
                           
         
       
                                 
     
     
                                       
                      
                     
     
                                                 
                                          
       
                                      
       
     
     
                                                      
                                                                    
                              
                          
     
                                                 
                                              
       
                                      
       
     
     
                                   
                             
                           
                          
                                
                               
     
                                                         
                                              
       
                                              
       
     
     
                                                          
                                                                         
                                      
                          
     
                                                 
                                              
       
                                      
       
     
     
                                   
                             
                           
                          
                              
                               
     
                                                         
                                              
       
                                              
       
     
     
                                                          
                                                                       
                                      
                          
     
                                                 
                                              
       
                                      
       
     
                                 
                           
                          
           
   
  
void xheader_finish(struct xheader *xhdr) {
  struct keyword_list *kp;
                     
            
                       
              
  {
    kp = keyword_override_list;
    {
                
                                      
                  
                           
         
         
                                                                                
                        
         
       
                 /* CIL Label */;
    }
                    
                                                                               
       
                                  
       
     
                         
                       
                   
                    
                                      
                                                                 
                                    
     
                     
                   
                                                                       
                                        
                                               
                                                  
                                          
     
     
                                          
                                   
                                                      
     
           
  }
}
void xheader_destroy(struct xheader *xhdr) {
                      
             
            
  {
                     
                     
                        
                                                                       
                                                                               
                              
                                 
                               
                
                                       
         
              
                                     
        
      {
        free((void *)xhdr->stk);
        xhdr->stk = (struct obstack *)((void *)0);
      }
             
      { free((void *)xhdr->buffer); }
      
    xhdr->buffer = (char *)0;
    xhdr->size = (size_t)0;
    return;
  }
}
static void code_string(char const *string, char const *keyword,
                        struct xheader *xhdr) {
  char *outstr;
            
  {
    {                                                }
                
      {
        outstr = xstrdup(string);
      }
      
    {
                                                        
                           
    }
           
  }
}
                                                          
            
   
                  
       
                              
                                      
       
     
                                                  
               
       
                                   
       
     
           
   
 
                                                                        
                                             
                 
           
             
                 
                 
                    
   
     
                                                                         
              
     
                                   
             
     
     
                                            
                  
          
                                
                                                          
                   
                        
                                                         
     
           
   
 
                                                                              
              
          
                   
                       
                   
                   
   
                                                  
                                      
                        
                          
         
                                                                               
                               
         
                                      
                     
         
       
     
           
   
 
                                                          
                                            
                 
           
             
                   
   
     
                                                                  
              
                                     
                        
                                                         
     
           
   
 
                                                      
                                                    
                                                                        
                                                                         
                                                                 
             
 
                                                                               
                                                                        
             
 
                                                                            
                                             
                                                                 
   
     
                                                                               
                               
     
           
   
 
                                                                      
   
                                                                    
           
   
 
                                                                          
                                           
                                                               
   
                                                            
           
   
 
                                                                    
              
                   
                   
   
                                                                
                                  
                                   
     
           
   
  
                                                                           
                                             
                                                                 
   
                                                            
           
   
  
                                                                     
   
                                       
           
   
 
                                                                               
                                                
                                                                    
   
                                                                
           
   
 
                                                                         
   
                                           
           
   
 
                                                                            
                                             
                                                                 
   
     
                                                                               
                               
     
           
   
 
                                                                      
   
                                                                    
           
   
 
                                                                            
                                             
                                                                 
   
     
                                                                               
                               
     
           
   
 
                                                                      
   
                                                                    
           
   
 
                                                                           
                                            
                                                                
   
                                                                
           
   
 
                                                                     
   
     
                                              
                                         
                                                                     
     
           
   
 
                                                                           
                                            
                                                                
   
                                                             
           
   
 
                                                                     
              
              
                       
                   
   
                                                                    
                                      
                       
                             
                                  
     
           
   
 
                                                                          
                                           
                                                               
   
                                                            
           
   
  
static void uid_decoder(struct tar_stat_info *st, char const *arg) {
             
                   
                   
  {
    {                                                          }
                                 
                                   
      
           
  }
}
                                                                           
                                             
                                                                 
   
                                                            
           
   
 
                                                                      
   
                                       
           
   
 
                                                             
                                                                        
                                           
   
                                            
           
   
 
                                                                            
              
                   
                   
   
                                                                
                                  
                                    
     
           
   
 
                                                                  
                                                                             
                                                                            
   
                                                                 
           
   
 
                                                              
                                                       
              
            
                       
                   
   
                                                                    
                                      
       
                                
                                                                         
                                                
                                         
       
     
           
   
 
                                                               
                                                                          
                                             
           
   
     
                            
                                                                       
     
           
   
 
                                                                              
              
                   
                   
   
                                                                
                                  
                                                                 
     
           
   
 
                                                                 
                                                                            
                                               
           
   
     
                            
                                                              
     
           
   
 
                                                                                
              
            
                 
                       
                   
   
                                                                    
                                      
                                                        
         
                                     
                                                
                                                                              
                                                  
         
       
                                     
                               
                                               
     
           
   
 
                                      
                                                      
                                                        
                                                        
                                                      
                                                
                                                      
                                                               
                                                      
                                                   
                                                   
                                                
                                                      
                                                                            
                                                                                
               
                                                                       
               
                                                                             
               
                               
                                                                            
                                       
                                                                             
/* #pragma merger("0","006.incremen.o.i","") */
                                             
                                                               
                                                                
                                   
                                                                        
                                                                             
                                                    
                                                           
                                                                 
                                                                
                                                    
                                                           
                                              
                                                         
                         
                               
                                            
int unquote_string(char *string);
                                    
                                  
                                      
                                                   
                                   
                                                                               
                                    
             
   
     
                                                  
                                                                            
     
                               
   
 
                                                                          
                                     
                                     
          
   
     
                                                    
                                                    
                                                    
                                                     
     
                               
   
 
                                                                               
                                                                 
              
             
                              
                
                
   
     
                         
                                                                           
                              
                                              
                                     
                                    
                                             
                           
                               
                                                         
                                                   
     
                          
              
            
       
                         
                                                              
                                                                               
                                                                       
       
                            
                                                                               
                       
           
                         
           
         
              
                         
       
     
                       
   
 
                                                     
              
             
                        
                
                
   
                           
                                     
            
       
                                         
                                                                             
                                         
                                          
                                                     
                                                     
                 
                                                                                
       
                                           
     
   
 
                                                                   
          
   
     
                                                               
                                                                 
     
                 
   
 
                                                                      
             
            
                    
                  
                        
                          
                     
                              
                         
               
                 
                
                 
                
                      
                
                        
              
            
                
                
                
                 
                          
                 
                          
                 
                          
                 
                          
                 
                 
                          
            
                          
                
                        
               
                    
                    
                    
                    
                    
   
     
                                        
                 
     
                
       
                                          
       
     
     
                                   
                   
                                           
                                         
                                                
                                        
                                                       
                                                   
                                           
     
                                                  
       
                                                         
                                                     
       
     
     
                                                          
                                       
     
                    
                                                   
            
                    
     
                                       
               
                                         
                                   
         
                     
                                          
                                         
                                     
                               
             
                                                             
               
                           
                                                    
                                            
                                                                      
                                         
                   
                 
                                               
               
               
                         
                                                                              
                                                  
               
             
             
                                                                               
                                                            
                                                                      
             
                           
                        
                                                       
                                                    
                 
                                            
                 
               
                                       
                                 
                                   
                    
               
                                                        
                                                                                
               
                            
                 
                                                           
                 
                            
               
                                                           
                 
                                                   
                                                      
                                                                                
                                     
                                                              
                 
                                                                             
                                                       
                                
                          
                                                                       
                                           
                                                                           
                                    
                       
                            
                                           
                                           
                         
                                   
                                                                            
                                                                              
                                                                      
                         
                       
                                                             
                                           
                                                                  
                                                                 
                     
                   
                                              
                        
                                       
                     
                                                                              
                                                                 
                                                                   
                     
                   
                   
                                                                             
                                                                
                                                                                
                   
                                                  
                                 
                          
                                                                               
                                   
                            
                                                     
                                                      
                                                       
                                                         
                                       
                                
                                      
                         
                              
                                             
                                                
                                                        
                                                          
                                         
                                  
                                                           
                                                            
                                                             
                                                               
                                             
                                      
                                             
                               
                                    
                                           
                             
                           
                                
                                       
                         
                       
                     
                   
                                                                
                 
                                             
                                                   
                                                           
                          
                                
                   
                        
                                       
                                                     
                                                           
                   
                 
                              
                                                             
                                                          
                   
                                                  
                   
                 
                                              
                                       
                                      
                      
                                             
                                                   
                                  
                                                                 
                                                              
                       
                                                      
                       
                     
                                                  
                                           
                                          
                          
                                 
                   
                        
                                        
                                                     
                                                                               
                                   
                            
                                                     
                                                      
                                                       
                                                         
                                                
                                                   
                                        
                                  
                                                          
                                                            
                                          
                                    
                                                             
                                                              
                                                               
                                                                 
                                                       
                                                
                                                                               
                                                                            
                                     
                                                                    
                                     
                                   
                                                                
                                                         
                                                        
                                        
                                               
                                 
                                      
                                             
                               
                             
                           
                                
                                       
                         
                              
                                     
                       
                     
                          
                                          
                                  
                                                                 
                                                              
                       
                                                      
                       
                     
                                                  
                                           
                                          
                   
                 
               
             
                          
                                          
                                                             
                                                      
               
                                                  
               
             
             
                                                                  
                                                                           
                                          
             
                 
                                    
           
                                     
         
       
     
                  
                  
                                                         
                                              
       
                                              
       
     
     
                                                          
                                                                             
                                      
                                    
     
               
       
                           
       
     
           
   
 
                                                
                
                       
              
                 
               
                   
               
                      
             
                      
                      
            
                           
                  
                 
                 
                
               
                
               
                
   
               
                                      
                                                                 
                                    
     
                     
                   
                                                                       
                                        
                                               
                                                  
                                          
     
                                        
                            
                        
                     
     
                 
                                      
                       
                           
         
         
                    
                                             
                              
         
       
                                 
     
                   
                                   
     
              
              
                                                    
                                                          
       
                                      
       
     
                            
                   
                                              
                                                                         
                                        
     
                         
                   
                                                                               
                                            
                                                       
                                                          
                                                  
     
                                                
                               
                         
                     
     
                 
                                          
                       
                               
         
         
                                 
                         
                            
                                                 
                                  
         
       
                                     
     
     
                                
                                                                      
                                                           
                                   
                          
                           
     
     
                 
                                          
                             
                               
         
                               
         
                     
                                              
                             
                     
                             
                     
                               
                               
                           
                                   
             
                                    
           
                                         
         
                       
       
                                     
     
                           
                        
   
  
char *get_directory_contents(char *path, dev_t device) {
                     
  char *buffer___2;
                     
              
            
  {
    {
                                                            
                                                
                                   
                                      
                 
                        
    }
                                                                    
                                                                             
                            
                               
                             
              
                                     
       
            
                                   
      
    return (buffer___2);
  }
}
static FILE *listed_incremental_stream;
                               
         
           
            
                 
             
        
              
                  
           
                        
           
                
                
                
                
               
               
            
            
            
             
               
                
                
                 
                 
                
                
                
                 
                 
                 
                 
                
                
                     
                     
               
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
   
     
                      
                                              
                                                          
                                                              
     
                 
       
                                              
       
             
     
                              
              
       
                                              
                  
       
             
     
     
                                     
                                                           
                                                                
                                                        
     
                        
       
                    
                                 
                 
                                                              
                                                                  
                    
                      
       
                                                      
         
                                                  
                                                              
                                                    
                          
         
              
                       
           
                                         
           
                               
             
                                                      
                                                                  
                                                        
                              
             
                  
                    
           
                
           
                                      
             
                                                           
                                                                  
                                                        
                              
             
                  
                                            
               
                                             
               
                                   
                 
                                                               
                                                                      
                                                            
                                  
                 
                      
                                              
                                                                  
               
                    
                                            
                                                                
             
           
         
       
       
                   
                                        
           
                                                                 
                                                                      
                                                              
                              
           
                         
                             
           
                                               
                                
                   
                                            
                                            
           
           
                                         
                         
                                                             
                                                                
                    
           
                                                           
             
                                                         
                                                                  
                                                                  
                              
             
                  
                           
               
                                              
               
                                    
                 
                                                             
                                                                      
                                                                      
                                  
                 
                      
                            
               
                    
                   
                             
                 
                                                                   
                                                                       
                                                                        
                                  
                 
                      
                                                
                   
                                                  
                   
                                        
                     
                                                                       
                                                                           
                                                                            
                                      
                     
                   
                 
               
             
           
           
                        
                                          
                          
                                                             
                                                                
                    
           
                                                           
             
                                                         
                                                                   
                                                                    
                              
             
                  
                           
               
                                              
               
                                    
                 
                                                             
                                                                       
                                                                        
                                  
                 
                      
                            
               
                    
                   
                             
                 
                                                                  
                                                                       
                                                                        
                                  
                 
                      
                                                
                   
                                                  
                   
                                        
                     
                                                                      
                                                                           
                                                                            
                                      
                     
                   
                 
               
             
           
           
                        
                   
                                 
                                                                        
           
         
                                   
       
     
                                       
                   
       
                                              
       
     
              
       
                          
       
     
           
   
 
                                                                  
                                    
           
        
            
            
               
               
              
              
                
   
                                                
                      
                           
       
                                                                 
                  
       
                
                                           
              
                                  
       
       
                
                                          
                                                                                
                                                    
                                                             
                                     
                     
       
                
         
                            
         
       
       
                                     
                     
       
     
                                      
                  
                  
            
                  
     
                            
   
  
void write_directory_file(void) {
  FILE *fp;
         
              
              
              
              
              
  {
    fp = listed_incremental_stream;
             
             
      
    {                         
                   
       
                                              
       
     
     
                           
                                      
     
                       
       
                                                  
       
     
     
                                            
                                                       
                                                    
                                    
    }
                  
                            
         
                                                               
                                                                    
         
       
     
                                      
                  
       
                                               
       
     
                             
                       
       
                                               
       
     
           
  }
}
void gnu_restore(char const *directory_name) {
                   
                    
            
            
              
               
                          
           
            
                
                 
                 
              
          
                
                      
               
        
               
                
                
               
               
                    
                    
                    
                    
  {
    {                                        
                       
       
                      
       
             
     
                                                  
                                                         
       
                     
       
     
     
                          
                                
                       
     
     
                 
                                      
                            
                           
         
                                           
                          
           
                                                           
                                               
                            
           
                           
         
                                                       
                            
                        
         
         
                                              
                                                                               
                       
                               
                                                                  
                         
         
       
                 /* CIL Label */;
    }
                     
     
                 
                                          
                    
                               
         
                          
         
                     
                                              
                        
                                   
             
             
                    
                                                                     
             
                           
                                   
             
             
                                                  
                                   
             
           
                                         
         
                             
           
                                                                  
                        
           
                                    
                    
                  
                                                              
                           
               
                                   
                 
                                                   
                                                         
                                                            
                                                                                
                                   
                 
               
               
                          
                                                                            
               
                              
                 
                                               
                               
                                                            
                                                         
                                                              
                                  
                 
               
             
           
                              
         
         
                                              
                               
         
       
                                     
     
     
                                
                                
     
           
  }
}
/* #pragma merger("0","007.list.o.i","") */
                                                                               
                                                                        
                                                                           
                                                 
                                                                          
                                                                     
                                                                         
                                                                               
      
                                                                      
                                                                               
                                                                             
                                                                            
size_t quotearg_buffer(char *buffer___2, size_t buffersize, char const *arg,
                       size_t argsize, struct quoting_options const *o___0);
char *quotearg(char const *arg);
_Bool utc_option;
_Bool block_number_option;
                              
                                               
                                               
                                               
mode_t mode_from_header(char const *p, size_t s);
                                                 
time_t time_from_header(char const *p, size_t s);
                                              
                        
                                          
                                           
                                 
                                               
                                                    
                                                            
                                                                               
                                                                       
                                        
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                        
                            
                               
        
   
     
                                                           
            
     
     
                 
                                      
                        
                           
         
                                                     
            
       
                                 
     
           
   
  
void read_and(void (*do_something)(void)) {
  enum read_header status;
                              
            
  char *tmp___0;
  int tmp___1;
  _Bool tmp___2;
  char buf[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) + 1UL];
  off_t tmp___3;
               
                
                                                                           
                
                
               
                                                                           
                
                 
                 
                 
                                                                           
                      
                 
                 
                 
                 
                
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
    {
                                   
                    
      name_gather();
      open_archive((enum access_mode)0);
    }
    {
      while (1) {
                      /* CIL Label */;
        {
                              
                                               
                                            
          status = read_header((_Bool)0);
        }
        {
                                          
                        
           
                                           
                        
            
          if ((unsigned int)status == 1U) {
            goto case_1;
          }
                                            
            goto case_3;
            
                                         
                        
            
          if ((unsigned int)status == 5U) {
                        
          }
                            
        case_0:  /* CIL Label */
        case_2 : /* CIL Label */
        {
                  
        }
        case_1 : /* CIL Label */
        {
          tmp___1 = name_match((char const *)current_stat_info.file_name);
        }
          if (tmp___1) {
            if (0L <= newer_mtime_option.tv_nsec) {
              {
                                                                        
                                                                 
                                                          
                current_stat_info.stat.st_mtim.tv_nsec = (__syscall_slong_t)0;
              }
                                                        
                                              
                        
                      
                                                            
                                                
                                                              
                                                   
                            
                          
                                
                   
                        
                              
                 
                
            } else {
            _L___0 : {
              tmp___2 =
                  excluded_name((char const *)current_stat_info.file_name);
            }
              if (tmp___2) {
              _L : {
                                                                
                               
                 
                                                                 
                               
                 
                                                                 
                               
                 
                                                                 
                               
                 
                                    
                                      
                                      
                                      
                                      
                                      
                                               
                   
                                         
                                                                   
                                                      
                                                            
                   
                 
                               /* CIL Label */
              {
                skip_member();
              }
                goto __Cont;
                                /* CIL Label */;
              }
              }
            }
          } else {
            goto _L;
          }
          { (*do_something)(); }
          goto __Cont;
        case_3: /* CIL Label */
                                   
             
                                                
                                                      
                                     
                                                                               
                               
                                                                   
                                                        
                                                                        
             
            
          {                                       }
                                      
            {
                                            
             
                                             
                                
             
             
                                                
                                                     
                                     
                           
                                                                             
                             
                                                           
                                                          
            }
            goto switch_break;
            
                              
                      
        case_4: /* CIL Label */
                                   
             
                                                
                                                       
                                     
                           
                                                                             
                             
                                                                  
                                                        
                                                                          
             
            
                            
        case_5 : /* CIL Label */
        {
                                              
         
           
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                                  
                              
             
                                  
                       /* CIL Label */
          {
                                                                       
                                                
                            
          }
          case_3___0: /* CIL Label */
                                    
                                      
               
                                                   
                                         
                               
                                                                             
                               
                                                                             
                                                         
                                             
                             
                                                                               
                               
                                                 
                                                          
                                                                            
               
             
             
                                                            
                                                  
                              
             
                                  
                                    
                                     
                                  
                       /* CIL Label */
          {
            abort();
          }
          switch_break___1: /* CIL Label */;
          }
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
    return;
  }
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
                
                   
                
                
               
                
  char const *name;
  struct posix_header const *h;
  char namebuf[((sizeof(h->prefix) + 1UL) + 100UL) + 1UL];
  char *np;
                 
               
              
                    
                    
  {
    next_long_name = (union block *)0;
    next_long_link = (union block *)0;
    {
                  
                      /* CIL Label */;
        {
          header = find_next_block();
          current_header = header;
        }
                     
                                       
          
        unsigned_sum = 0;
                       
        p = header->buffer;
        i = sizeof(*header);
        {
                      
          while_continue___0: /* CIL Label */;
            tmp___0 = i;
            i--;
            if (!(tmp___0 != 0UL)) {
              goto while_break___0;
            }
            unsigned_sum += (int)((unsigned char)*p);
                   
                
                                                   
            
        while_break___0: /* CIL Label */;
        }
        if (unsigned_sum == 0) {
          return ((enum read_header)3);
        }
                                         
         
                     
                                              
                        
                
                                    
                                   
             
                                                                           
                                                                       
           
                                         
         
         
                                                            
                                                                     
                                                        
                                                                   
                                   
                                                    
                                                                           
                                                                   
         
                                                 
                                       
         
                                       
                                           
                                           
                                         
           
          
        if ((int)header->header.typeflag == 49) {
                                                      
        } else {
          {
            current_stat_info.stat.st_size =
                off_from_header((char const *)(header->header.size),
                                sizeof(header->header.size));
          }
        }
        if ((int)header->header.typeflag == 76) {
                      
        } else {
          if ((int)header->header.typeflag == 75) {
                        
          } else {
            if ((int)header->header.typeflag == 120) {
              goto _L___4;
            } else {
              if ((int)header->header.typeflag == 103) {
              _L___4: /* CIL Label */
                if (raw_extended_headers) {
                                              
                        
                                                            
                               
                           
                                                             
                                           
                                                                         
                                                                      
                                                                                
                         
                                       
                         
                              
                                               
                           
                                         
                           
                         
                       
                       
                                                      
                                                             
                       
                                                               
                                             
                           
                                                         
                           
                         
                                                     
                                                             
                              
                                             
                           
                                                         
                           
                         
                                                     
                                                             
                       
                       
                                                     
                                               
                                                       
                                      
                       
                       
                                   
                                                            
                                              
                                                 
                           
                                                             
                                            
                             
                                                                             
                                                                 
                                              
                             
                                                 
                           
                                                                          
                                               
                                           
                           
                           
                                                                
                                                                    
                                                           
                                            
                                          
                                                 
                                                                                
                                                    
                                            
                           
                         
                                                       
                       
                                         
                            
                                                                
                         
                                                    
                                                                  
                                                           
                                                                
                         
                              
                                                                  
                           
                                                      
                                                                    
                                                             
                                                                  
                                                    
                           
                         
                       
                      
                    
                }
              } else {
                h = (struct posix_header const *)(&current_header->header);
                if (recent_long_name) {
                  {
                    free((void *)recent_long_name);
                  }
                }
                                      
                                                                     
                                                    
                                                                  
                         
                  np = namebuf;
                                    
                     
                                                                          
                     
                                       
                       
                                                            
                                                                           
                                                  
                                                                 
                                                           
                                      
                                     
                             
                                             
                                                                           
                       
                     
                    
                  {
                    memcpy((void * /* __restrict  */)np,
                           (void const * /* __restrict  */)(h->name),
                           sizeof(h->name));
                    *(np + sizeof(h->name)) = (char)'\000';
                    name = (char const *)(namebuf);
                                                       
                                                        
                  }
                  
                {
                                                                         
                  assign_string(&current_stat_info.file_name, name);
                  current_stat_info.had_trailing_slash =
                      strip_trailing_slashes(current_stat_info.file_name);
                }
                                      
                   
                                                   
                   
                  
                                      
                                                                     
                                                    
                  recent_long_link_blocks = next_long_link_blocks;
                         
                  {
                                                              
                                                                         
                                                
                                                                
                                                   
                                                        
                                                        
                  }
                  
                { assign_string(&current_stat_info.link_name, name); }
                return ((enum read_header)1);
              }
            }
          }
        }
        
    while_break: /* CIL Label */;
    }
  }
}
void decode_header(union block *header, struct tar_stat_info *stat_info,
                   enum archive_format *format_pointer, int do_user_group) {
  enum archive_format format;
          
  int tmp___0;
  int tmp___1;
  int tmp___2;
  int tmp___3;
             
                             
                
  {
    { tmp___0 = strcmp((char const *)(header->header.magic), "ustar"); }
                      
                                                      
                                                      
                                                        
                                                           
                                                            
                                                              
                                                                 
                                                    
                          
                                
                   
                        
                              
                 
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
                             
                                   
                                          
                
                                          
         
       
            
                                                                        
                     
                                        
              
                                        
       
      
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
                                    
                               
         
                                          
                                                                           
                                                                    
                                          
                                                                           
                                                                    
         
       
     
                                     
       
                                                 
                                                                            
                                                 
                                                                            
                                             
       
            
                                       
         
                                          
                                                                         
                                                                  
                                          
                                                                         
                                                                  
         
       
                          
                                   
           
                                                     
                                                                                
           
                
                                         
             
                                      
                                                                     
                                                              
             
                  
             
                                                                          
                                                              
             
                           
               
                                        
                                                                       
                                                                
               
             
           
         
                                   
           
                                                     
                                                                                
           
                
                                         
             
                                      
                                                                     
                                                              
             
                  
             
                                                                          
                                                              
             
                           
               
                                        
                                                                       
                                                                
               
             
           
         
       
       
                                                 
                       
         
                                                 
                       
         
                            
                               
                               
       
                                                                            
                                                   
       
                          
                                     
                                             
                                    
       
     
     
                                                             
                                
                                           
     
                  
       
                                       
                                        
       
     
           
  }
}
                          
                                 
static uintmax_t from_header(char const *where0, size_t digs, char const *type,
                             uintmax_t minus_minval, uintmax_t maxval) {
  uintmax_t value;
  char const *where;
                  
  int negative;
  char *tmp;
                                
                     
                     
  char const *tmp___1;
           
                
                
          
                
                     
               
                
                     
                
             
                    
                      
                       
                 
                 
                 
                                  
                                                                                
                       
                                                                             
                                                                               
                      
                      
                 
                     
                 
                 
                 
  uintmax_t tmp___18;
  uintmax_t tmp___19;
                    
                   
                    
                    
                   
                    
                    
                    
                    
                    
                    
                    
  {
    where = where0;
                       
                
                     
    {
                
                                      
                                                         
                     
             
                                                                                
                                                   
                              
             
           
                                 
         
                                      
                                                                                
                           
         
                
       
                 /* CIL Label */;
    }
    value = (uintmax_t)0;
    if ((unsigned int)*where - 48U <= 7U) {
                    
                              
      {
        while (1) {
                            /* CIL Label */;
          tmp___1 = where;
          where++;
          value += (uintmax_t)((int const) * tmp___1 - 48);
                                                            
                                 
                   
            if (!((unsigned int)*where - 48U <= 7U)) {
              goto while_break___0;
            }
            
                                                  
          value <<= 3;
        }
      while_break___0: /* CIL Label */;
      }
                    
                    
              
                             
                               
                                   
                       
                                                             
                                      
                                   
                             
               
                           
                                                    
                                                  
                          
                                                                   
                                         
                          
                                                              
                                           
                     
                   
                                                          
                                                          
                              
                 
                                               
               
                      
                                                  
                              
                                            
                   
                                                                              
                                                                           
                                                                             
                                        
                                 
                   
                 
               
             
           
         
       
                     
                   
           
                                                                             
                                                                             
                        
                            
           
         
                               
       
            
                                      
                    
              
                                        
                               
                                 
             
                                  
                                                                                
                                                 
             
           
                          
                  
                                                 
           
                       
                                                
                                                               
                                                             
                                  
                                       
                 
                      
                                     
               
                                               
                 
                                                         
                                           
                                                          
                                                                       
                                                  
                 
                           
                   
                                                          
                                      
                                                                               
                                                                      
                                    
                   
                 
                                       
               
                                                        
                      
             
                                           
           
                
                                            
                        
                  
                                            
                                   
                                                                         
                                             
                                                                   
                              
                      
                                  
                                                                       
                                      
               
                           
                                                    
                                   
                          
                                                                               
                                                                   
                                         
                   
                                                                 
                               
                       
                                           
                                                                         
                                                                  
                                        
                       
                     
                                           
                   
                 
                                               
               
                                 
                             
                               
               
             
           
         
        
    }
                                                    
                   
         
                                     
         
                                                                        
                      
                     
                     
               
                                                                       
                                                            
               
             
             
                         
                                                  
                                                                  
                                        
                                         
                   
                        
                                       
                 
                      
               
                                             
             
             
                                                                              
                                                                 
                                 
                                                                           
                                                                               
                              
             
           
                                 
         
       
      
    if (negative) {
                              
    } else {
      tmp___19 = maxval;
    }
    if (value <= tmp___19) {
                      
        tmp___18 = -value;
               
        tmp___18 = value;
        
      return (tmp___18);
    }
    if (type) {
      {
                                                
                         
                              
                                                                              
                                 
                                                 
                  
                             
                                                                              
                               
       
                     
                       
                                  
       
                         
                        
                                   
       
       
                                                 
                   
                        
                                                                              
                                                                        
                                                                              
                        
                        
      }
    }
                           
  }
}
gid_t gid_from_header(char const *p, size_t s) {
  uintmax_t tmp;
  char *__cil_tmp4;
  {
    {
                                                               
                                                
    }
                        
  }
}
int major_from_header(char const *p, size_t s) {
                
                   
  {
    {
                                       
                                                                        
                                                                             
    }
                      
  }
}
int minor_from_header(char const *p, size_t s) {
               
                   
  {
    {
                                       
                                                                        
                                                                             
    }
                      
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
                                                                 
                                              
                            
    }
                   
                     
            
                  
      
                   
                     
            
                  
     
                   
                    
            
                  
     
                   
                    
            
                  
     
                   
                    
            
                  
     
                  
                   
            
                  
     
                  
                         
            
                  
     
                  
                         
            
                  
     
                 
                        
            
                  
     
                 
                                
            
                  
     
                 
                                 
            
                   
      
    if (u & 1U) {
                               
            
                   
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
                                                 
                
                   
   
                                                                              
                 
   
  
time_t time_from_header(char const *p, size_t s) {
               
                   
   
     
                        
                                                                              
                                                                    
     
                         
   
 
                                                
                
                   
  {
    {
                                                               
                                                
    }
                        
  }
}
uintmax_t uintmax_from_header(char const *p, size_t s) {
  uintmax_t tmp;
                   
  {
    {
                                                                               
    }
                 
  }
}
char *stringify_uintmax_t_backwards(uintmax_t o___0, char *buf) {
  {
    buf--;
                       
     
                 
                                      
              
                                                
                      
                              
                           
         
       
                                 
     
                 
  }
}
static char buffer[27UL];
char const *tartime(time_t t) {
          
               
                 
                     
                     
                    
                   
  {
                    
       
                                           
                      
       
            
       
                                                  
                          
       
     
                 
             
       
                
                                               
                                                                              
                                                                                
                                    
       
                                      
     
                 
                                
            
                             
     
                                                                            
                 
          
                     
     
     
                 
                                      
                                                                     
                                  
                           
         
            
                       
       
                                 
     
                             
  }
}
                         
void print_header(struct tar_stat_info *st, off_t block_ordinal) {
                
                         
                  
                                                                         
                                                                         
             
              
                                                                                
                                                                           
          
                                                                       
            
               
                
                
                 
              
                    
                
              
                    
                
                       
                
                       
                 
                 
                  
                  
                  
                 
                 
                 
                 
                     
                       
                 
                 
                 
                 
                     
                 
                 
                 
                    
                    
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                   
                    
                    
                    
                    
                    
                    
  {
                            
                                     
            
                                
      
                            
                               
         
                                                  
         
       
       
                       
                                                                     
                       
                                                                     
                                            
                                     
                                                                                
                                        
                                                  
                                                              
       
      
                             
       
                                                    
                                                  
                                                                  
       
            
                           
       
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                        
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                                                         
                       
         
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                               
                               
       
                             
                                                    
                                           
                        
       
                          
                              
                              
                              
       
                             
                                                  
       
                                                        
                               
         
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                              
                             
                          
                                    
       
       
                                                 
                                                      
       
                      
                                                 
                                      
                             
                  
                        
           
                
                      
         
              
                              
       
                 
                                                                   
                                                                            
                                                            
                    
       
                                        
           
                                                 
                  
                                                                               
                               
           
                
           
                     
                                                                           
                                                                    
                                                      
                                                                           
                         
           
         
       
                      
                                                 
                                      
                              
                  
                        
           
                
                      
         
              
                              
       
                 
                                                                   
                                                                            
                                                            
                    
       
                                        
           
                                                  
                  
                                                                               
                               
           
                
           
                     
                                                                           
                                                                    
                                                      
                                                                           
                          
           
         
       
       
                                                         
                           
         
                                                         
                           
         
                            
                                   
                                   
       
                                                                      
                                                
                               
                     
                                                                              
                                                
                                                        
                                                
                                                     
                                                                       
                                                 
                                
                     
                                                                              
                                                
                                                         
       
                              
                                      
       
                                                 
                                        
                     
                                                                              
                                                
                                                         
       
                              
                                        
       
       
                                              
                                               
                                                
                                                              
       
                           
                       
       
       
                                                  
                                                                            
                                                                   
                                                     
                                                  
                                                                  
       
       
                                                         
                           
         
                                                         
                           
         
                                                        
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                          
         
                                                         
                           
         
                                                         
                           
         
                                                         
                           
         
                                                         
                           
         
                                                         
                           
         
                                
                                   
       
                                                         
                                                  
                                                                       
       
                              
                                   
       
                                                         
                                            
                                                  
                                                                    
       
                              
                                          
       
                                                         
                                      
                                                      
                                                      
                                                  
                                                                    
       
                              
                                   
                                   
                                   
                                   
                                   
                                   
                                   
                                   
                                   
       
                                    
       
                              
                                   
       
                                              
                                                  
                                                          
       
                              
                                   
       
                                              
                                                  
                                                          
       
                              
                                   
       
                                                  
                                                  
                                                          
       
                              
                                   
       
                                       
                                                                 
                                                          
                                                 
                     
                     
                                                                              
                                                
                                                         
                                                         
                                                  
                                                                
       
                              
                                   
       
                                                       
                                                  
                                                          
       
                              
                                        
       
      
                                
           
  }
}
void print_for_mkdir(char *pathname, int length, mode_t mode) {
  char modes[11];
                                                                      
            
                
                
                
                
                    
                    
                    
                    
  {
                            
       
                             
                                     
       
                                
         
                                        
                                                  
                             
                   
                                                                                
                                          
                                                    
                                                                    
         
       
       
                                                   
                                                 
                                                  
                                                                        
                                                         
       
      
           
  }
}
void skip_file(off_t size) {
                 
            
                   
  {
                            
                          
                           
      
    {
                  
                      /* CIL Label */;
        if (!(size > 0L)) {
                          
         
                                  
                 
           
                                                       
                                          
                         
           
         
         
                                  
          size -= 512L;
        }
                                 
                                
          
        
    while_break: /* CIL Label */;
    }
           
  }
}
void skip_member(void) {
                     
  _Bool tmp;
  {
    {
                                                      
      set_next_block_after(current_header);
      assign_string(&save_name, (char const *)current_stat_info.file_name);
                                                
    }
               
      {
                                             
      }
             
                                    
         
                                                    
         
        
      
           
  }
}
/* #pragma merger("0","008.mangle.o.i","") */
                                                                
                                                                  
                                                                   
void extract_mangle(void) {
  off_t size;
                   
           
             
  char *cursor;
                    
                       
                   
                
                    
             
                 
                
              
                      
                
               
               
                
              
               
                       
                 
                 
                
                 
              
               
               
                 
               
               
                    
                    
                    
                    
                    
                    
  {
    {
                                           
                                         
                               
                       
                          
    }
    if ((size_t)size != (size_t)size) {
      {
        xalloc_die();
      }
    } else {
                                                
         
                       
         
        
    }
                                       
     
                 
                                      
                           
                           
         
         
                                      
                          
         
                     
           
                                                                 
                                               
                            
           
                 
         
                                                     
                                       
                                   
         
         
                                                
                                                                             
                            
                                                   
                               
                                                                
         
       
                                 
     
     
                 
                                          
                       
                               
         
         
                                                           
                                
                        
                                  
                                                                         
         
                       
           
                                                                            
           
                         
             
                                                                  
                                                          
                              
             
                  
             
                                
                                                         
             
             
                         
                                                  
                 
                                                                                
                 
                                
                                       
                 
                 
                             
                                                                 
                 
               
                                             
             
             
                                       
                                   
                                           
                        
                                                                            
             
                           
               
                                                                
               
                             
                            
                      
                 
                            
                                                                                
                 
                               
                          
                                                                      
                                                                
                                                                 
                                                
                                                                       
                                  
                                  
                 
                        
                          
                 
               
                    
               
                                   
                 
                                                           
                                                                          
                 
               
             
           
                
           
                              
                                                       
           
           
                       
                                                
                                                                               
                             
                                     
               
               
                           
                                                               
               
             
                                           
           
                                   
                                               
                                               
           
           
                                         
                                                                               
           
                        
             
                                                                 
                                                           
                                                           
                                           
                                                                          
                              
             
                  
                                 
               
                                                      
                                                                       
               
             
           
         
                             
       
                                     
     
           
  }
}
/* #pragma merger("0","009.misc.o.i","") */
                                                                
                                                              
      
                                                                              
                                                                
                                                       
      
                                                                              
                                                                
                                                                                
                             
                               
                     
                                                                 
                                                               
                                                                     
                                                                
                                  
                                                                
                                                                    
                                    
                                                       
                                                       
                                     
                  
                    
char *quotearg_n_style(int n, enum quoting_style s, char const *arg);
                                    
                                            
                                                                          
                                                                           
void assign_string(char **string, char const *value) {
  char *tmp;
  {
                 
       
                              
       
      
    if (value) {
      {
        tmp = xstrdup(value);
        *string = tmp;
      }
    } else {
                          
    }
    return;
  }
}
char *quote_copy_string(char const *string) {
                     
                   
                   
              
                
                  
                
                 
                
                
                
                
              
  {
                   
                            
                           
                
     
                 
                                      
                       
                           
         
                     
                 
                              
         
                                
                         
           
                                
                         
           
                              
                                
                                
                         
             
                                                        
                          
                                       
                                                                        
                                           
                                                          
                                                                     
                                                
             
           
                                
                        
                                
                                
                        
                                
                           
                  
                          
           
                                   
                            
                                       
                        
                                  
                          
                                       
           
                            
                                      
         
       
                                 
     
                  
                                  
                          
     
                       
  }
}
int unquote_string(char *string) {
            
               
                   
            
                
                
                
                
                
                
           
                
                
                
                
                 
                 
                 
                 
                 
                 
                 
  {
              
                    
                         
     
                 
                                      
                       
                           
         
                                 
                   
           
                                     
                           
             
                                      
                            
             
                                      
                            
             
                                      
                            
             
                                     
                           
             
                                      
                            
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                     
                           
             
                                
                                  
                              
                          
                              
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                  
                                  
                          
                                  
                     
                              
                                   
                                  
                          
                                  
                     
                              
                                  
                                  
                          
                                 
                     
                              
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                                  
                             
                     
                                       
                                    
                                    
                            
                                     
                                
                    
                                      
                                      
                              
                                       
                                  
               
             
                             
                     
                                                     
                                    
                                    
                            
                                     
                                
                    
                                      
                                      
                              
                                       
                                  
               
             
                              
                     
                                                      
                                   
                          
                                    
                              
                                         
                       
                                   
                          
                                   
                          
                                     
                            
                                
                       
                                    
             
                              
                                        
           
                
                                                                    
                                   
                          
                              
                     
                                  
                  
                     
                          
           
         
       
                                 
     
                                                              
                                  
     
                    
  }
}
                               
                               
                                                     
          
   
              
                                         
       
                   
                                        
                                               
                   
                  
                                                 
                               
                                                                        
                       
                                                             
                      
                                               
               
                    
                                             
             
           
         
                                   
       
            
       
                   
                                            
                                               
                                                    
                                   
             
                  
                                 
           
                    
           
                       
                                                
                                                
                                     
               
                     
             
                                           
           
         
                                       
       
                         
                
              
                                             
                             
                    
                  
                    
           
                
                  
         
       
                          
     
   
 
                                          
           
                
              
   
                                             
                  
       
                                 
                 
       
                  
     
                              
                     
   
  
int remove_any_file(char const *path, enum remove_option option) {
          
  int *tmp___0;
               
  int tmp___2;
  int *tmp___3;
  int tmp___4;
  int tmp___5;
  char *directory;
               
                    
                 
                    
                
        
              
        
               
                
  int tmp___11;
  {
                        
      {
                           
      }
                    
                   
       
                                       
                          
         
                                       
         
                             
                     
         
        
      
    {                              }
    if (tmp___2 == 0) {
                 
    }
    {                               
     
                           
                     
       
                          
                    
       
                           
                    
       
                           
                    
       
                        
             /* CIL Label */
      if (we_are_root) {
        {
          tmp___4 = unlink(path);
        }
                          
                      
                
                      
         
              
                    
       
                       
                             
                             
                             
     
                                      
                        
       
                                       
                    
        
                                       
                    
       
                            
                               
                            
                           
                  
             /* CIL Label */
    {
                             
                          
     
                       
                   
       
                                      
       
                   
                                        
                                       
                                   
                             
           
           
                                            
                                  
                                                                
                                                             
                        
                                         
                         
                                      
           
                   
             
                                      
                                            
                            
             
                       
           
                                  
         
                                   
       
       
                                
                                     
      }
      return (tmp___11 == 0);
    switch_break___0: /* CIL Label */;
    }
      goto switch_break;
    switch_break: /* CIL Label */;
    }
               
  }
}
_Bool maybe_backup_file(char const *path, int this_is_the_archive) {
                        
           
               
              
                     
                      
                
        
               
                      
                
                
              
                    
                    
                    
  {
                             
                                
         
                                         
         
                         
                                                                
             
                                                   
                                                                
             
                       
                                
             
           
         
       
      
    {
                                                         
                                                                    
     
                  
       
                                     
       
                          
                          
       
                           
                        
     
                                                 
                        
     
                              
                                                   
                          
              
                                                    
                            
         
       
     
     
                                               
                                                         
                                                                   
     
                             
       
                     
       
     
     
                                                        
                                                        
    }
                      
                           
         
                                                                
                                                                 
                                                   
                                                    
                                                                             
         
       
                        
            
       
                                     
                     
                                                              
                                                                   
                                                     
                                                             
                        
                                                           
       
                        
      
  }
}
void undo_last_backup(void) {
       
           
                      
                
                
              
                      
                      
                
                    
                    
  {
                           
       
                                                         
                                                           
       
                         
         
                                   
                   
                                                                 
                                                                    
                                                       
                                                               
                          
         
       
                           
         
                                                                 
                                                                
                                                        
                                                    
                                                                             
         
       
                                                             
     
           
  }
}
int deref_stat(_Bool deref, char const *name, struct stat *buf) {
  int tmp;
  int tmp___0;
  int tmp___1;
  {
    if (deref) {
      {
                                                       
                                                          
                      
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
           
                 
                   
  {
                         
       
                                          
                                                           
                              
       
                 
                               
                              
              
       
      
                    
       
                   
                                        
                                              
                                                   
                               
             
                  
                             
           
                   
           
                       
                                                
                                               
                                     
               
                          
                   
                    
             
                                           
           
         
                                   
       
                                                      
                                  
       
      
                          
                          
                 
          
                          
  }
}
static int previous;
void chdir_do(int i) {
                 
                  
            
              
                
              
              
                   
                    
  {
                       
                           
                    
                         
         
                          
                                               
         
                           
           
                                                           
                                           
                         
           
         
       
                        
         
                                                                              
         
                      
           
                                                                 
                                               
                         
           
         
              
                
                                                        
             
                              
             
           
         
                                        
                           
           
                                    
           
         
       
                   
     
           
  }
}
void decode_mode(mode_t mode, char *string) {
           
                
                
                
                
               
                
  char *tmp___6;
  char *tmp___7;
             
              
               
               
               
               
               
               
               
               
               
  int tmp___19;
  int tmp___20;
  int tmp___21;
  int tmp___22;
  {
                
             
                     
                    
            
                    
     
                         
                     
             
                      
                    
            
                    
     
                             
                     
             
                       
                       
                       
              
                       
       
                          
            
                       
                       
              
                       
       
                          
     
                              
                     
             
                                          
                     
            
                     
     
                              
                     
             
                                          
                     
            
                     
     
                              
                     
             
                       
                                           
                       
              
                       
       
                          
            
                                           
                       
              
                       
       
                          
     
                              
                     
             
                                                 
                     
            
                     
     
                              
                     
             
                                                 
                     
            
                     
      
    *tmp___6 = (char)tmp___19;
    tmp___7 = string;
    string++;
    if (mode & 512U) {
                                                 
                       
              
                       
        
      tmp___22 = tmp___20;
    } else {
      if (mode & (unsigned int)((64 >> 3) >> 3)) {
                       
      } else {
                       
      }
      tmp___22 = tmp___21;
    }
    *tmp___7 = (char)tmp___22;
    *string = (char)'\000';
    return;
  }
}
static void call_arg_error(char const *call, char const *name) {
       
           
                
                
                   
  {
    {
                              
               
                                     
                                         
                                                        
                      
    }
           
  }
}
                                                                         
                                                                           
static void call_arg_fatal(char const *call, char const *name) {
        
          
                
                
                   
  {
    {
                              
               
                                     
                                        
                                                        
                   
    }
  }
}
static void call_arg_warn(char const *call, char const *name) {
       
           
                
               
                   
  {
    {
                               
              
                                     
                                                  
                                                        
    }
           
  }
}
                                                                
                                   
                   
   
                                      
   
  
void chmod_error_details(char const *name, mode_t mode) {
       
           
               
                
                
                   
                   
  {
    {
                              
               
                             
                                     
                                                        
                                                       
                      
    }
           
  }
}
void chown_error_details(char const *name, uid_t uid, gid_t gid) {
  int e;
  int *tmp;
                
               
                   
  {
    {
      tmp = __errno_location();
              
                                     
                                                                           
                                                                     
                                
                      
    }
           
  }
}
void close_error(char const *name) {
                   
  {
    {                                }
           
  }
}
void close_warn(char const *name) {
                   
  {
    {                               }
    return;
  }
}
void close_diag(char const *name) {
  {
                                   
       
                         
       
            
                            
      
    return;
  }
}
                                                                
                                  
                   
   
                                     
   
  
void link_error(char const *target, char const *source) {
  int e;
          
                      
                
                
                   
  {
    {
                              
               
                                   
                                       
                                                      
                                                           
                      
    }
    return;
  }
}
void mkdir_error(char const *name) {
  char *__cil_tmp2;
  {
    {                                }
    return;
  }
}
void mkfifo_error(char const *name) {
  char *__cil_tmp2;
  {
    {                                 }
           
  }
}
void mknod_error(char const *name) {
                   
  {
    {                                }
           
  }
}
void open_error(char const *name) {
  char *__cil_tmp2;
  {
    { call_arg_error("open", name); }
           
  }
}
__attribute__((__noreturn__)) void open_fatal(char const *name);
void open_fatal(char const *name) {
                   
  {
    {                               }
  }
}
void open_warn(char const *name) {
                   
  {
    {                              }
    return;
  }
}
void open_diag(char const *name) {
  {
                                   
       
                        
       
            
                           
      
    return;
  }
}
void read_error(char const *name) {
  char *__cil_tmp2;
  {
    { call_arg_error("read", name); }
           
  }
}
void read_error_details(char const *name, off_t offset, size_t size) {
                                                                       
       
           
                
                
                
                    
  {
    {
                               
              
                                              
                            
                                                                              
                                     
                                                                       
                                                                               
                                                                 
                      
    }
           
  }
}
                                                                    
                                                                       
        
           
                
                
                
                    
   
     
                               
               
                                              
                            
                                                                              
                                     
                         
                                                                 
                                                                         
                                                                 
     
           
   
  
void read_diag_details(char const *name, off_t offset, size_t size) {
  {
                                   
       
                                              
       
            
                                                 
      
    return;
  }
}
__attribute__((__noreturn__)) void read_fatal(char const *name);
                                  
                   
   
                                     
   
 
                                  
                                                                
                                                                      
                                                                       
        
           
                
                
                
                    
   
     
                               
               
                                              
                            
                                                                              
                                     
                                                                       
                                                                               
                                                                 
                   
     
   
  
void readlink_error(char const *name) {
  char *__cil_tmp2;
  {
    { call_arg_error("readlink", name); }
           
  }
}
void readlink_warn(char const *name) {
                   
  {
    { call_arg_warn("readlink", name); }
    return;
  }
}
void readlink_diag(char const *name) {
  {
    if (ignore_failed_read_option) {
      {
                           
       
            
                              }
    }
    return;
  }
}
void savedir_error(char const *name) {
                   
  {
    {                                  }
           
  }
}
                                    
                   
   
                                       
           
   
  
void savedir_diag(char const *name) {
  {
    if (ignore_failed_read_option) {
      {
                          
       
            
                             }
    }
    return;
  }
}
void seek_error(char const *name) {
  char *__cil_tmp2;
  {
    {                               }
           
  }
}
void seek_error_details(char const *name, off_t offset) {
                                                                       
        
  int *tmp;
               
                
                
                   
                    
  {
    {
                               
              
                                              
                            
                                                                              
                                     
                                                
                                                           
                      
    }
           
  }
}
void seek_warn(char const *name) {
                   
  {
    { call_arg_warn("seek", name); }
           
  }
}
void seek_warn_details(char const *name, off_t offset) {
                                                                      
        
           
                
                
                
                   
                    
  {
    {
                              
               
                                              
                            
                                                                              
                                     
                                                          
                                                           
    }
           
  }
}
                                                       
   
                                    
       
                                        
       
            
                                           
     
           
   
  
void symlink_error(char const *contents, char const *name) {
  int e;
           
                     
                
                
                   
  {
    {
                               
              
                                     
                                     
                                                           
                                                           
                      
    }
    return;
  }
}
void stat_error(char const *name) {
                   
  {
    {                               }
    return;
  }
}
void stat_warn(char const *name) {
                   
  {
    {                              }
           
  }
}
void stat_diag(char const *name) {
  {
                                     
      {
                        
      }
             
      {                   }
      
    return;
  }
}
void truncate_error(char const *name) {
                   
  {
    { call_arg_error("truncate", name); }
           
  }
}
void truncate_warn(char const *name) {
  char *__cil_tmp2;
  {
    {                                  }
    return;
  }
}
void unlink_error(char const *name) {
                   
  {
    {                                 }
           
  }
}
void utime_error(char const *name) {
  char *__cil_tmp2;
  {
    {                                }
           
  }
}
                                    
                   
   
                                        
           
   
  
void write_error(char const *name) {
                   
  {
    {                                }
           
  }
}
void write_error_details(char const *name, size_t status, size_t size) {
  char *tmp;
  {
                         
      {
                         
       
             
       
                                                        
                                                                
                                                           
                        
      }
      
    return;
  }
}
                                 
                                                                   
void write_fatal_details(char const *name, ssize_t status, size_t size) {
  {
    {
                                                      
      fatal_exit();
    }
  }
}
pid_t xfork(void) {
  pid_t p;
  __pid_t tmp;
               
                   
                   
  {
    {
                   
      p = tmp;
    }
                 
       
                                           
                                                      
       
      
    return (p);
  }
}
void xpipe(int *fd) {
  char *tmp;
              
                  
                   
  {
    {                     }
                       
      {
                                              
                                                  
      }
      
           
  }
}
char const *quote_n(int n, char const *name) {
            
  {
    {                                                         }
                               
  }
}
char const *quote(char const *name) {
                  
  {
    {                         }
                 
  }
}
/* #pragma merger("0","00a.names.o.i","") */
                                         
extern struct passwd *getpwuid(__uid_t __uid);
extern struct passwd *getpwnam(char const *__name);
                                            
                                                  
_Bool excluded_filename(struct exclude const *ex, char const *f);
char filename_terminator;
struct exclude *excluded;
char const *files_from_option;
_Bool same_order_option;
_Bool starting_file_option;
void init_names(void);
                               
                     
                     
                      
struct name *addname(char const *string, int change_dir___0);
                                        
void request_stdin(char const *option);
static char *cached_uname;
static char *cached_gname;
static uid_t cached_uid;
static gid_t cached_gid;
                                  
                                 
                                
static gid_t cached_no_such_gid;
void uid_to_uname(uid_t uid, char **uname) {
  struct passwd *passwd;
                  
                   
  {
                  
                                      
         
                              
         
               
       
      
                         
                  
             
                               
      _L___3 : /* CIL Label */
      {
        passwd = getpwuid(uid);
      }
                      
          {
                             
            assign_string(&cached_uname, (char const *)passwd->pw_name);
          }
                 
          {
                                     
            *uname = strdup("");
          }
                 
          
        
      
    { *uname = strdup((char const *)cached_uname); }
    return;
  }
}
void gid_to_gname(gid_t gid, char **gname) {
  struct group *group;
                  
                   
  {
                   
                                      
         
                              
         
               
       
      
    if (!cached_gname) {
      goto _L___3;
    } else {
      if (gid != cached_gid) {
      _L___3 : /* CIL Label */
      {
                              
      }
        if (group) {
          {
                             
            assign_string(&cached_gname, (char const *)group->gr_name);
          }
        } else {
          {
            cached_no_such_gid = gid;
                                
          }
                 
        }
      }
    }
    { *gname = strdup((char const *)cached_gname); }
    return;
  }
}
int uname_to_uid(char const *uname, uid_t *uidp) {
                       
          
              
  {
                              
       
                                                                
       
                     
                   
       
      
                         
             
             
                                                                          
                
              
                                                                
                           
                                          
                       
             
                                          
                                                                          
             
                  
                                                            
                       
           
         
        
      
    *uidp = cached_uid;
    return (1);
  }
}
int gname_to_gid(char const *gname, gid_t *gidp) {
                      
         
              
  {
                              
       
                                                                
       
                     
                   
       
      
                         
             
             
                                                                          
                
              
                                                                
                           
                                         
                      
             
                                         
                                                  
             
                  
                                                            
                       
           
         
        
      
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
                                 
__inline static int is_pattern(char const *string) {
            
                
                
  int tmp___2;
  {
    {                            }
             
                  
            
                                        
                    
                    
              
                                          
                      
                      
                
                      
         
       
      
    return (tmp___2);
  }
}
void name_init(void) {
  void *tmp;
             
                   
  {
    {
      tmp = xmalloc((size_t)102);
      name_buffer = (char *)tmp;
                                       
    }
                           
       
                                                 
       
                    
         
                                                                              
                                                                  
         
                         
           
                                          
           
         
              
         
                              
                            
         
       
      
    return;
  }
}
                     
   
     
                                
                               
     
           
   
 
                                      
                
                 
            
                 
                
   
                        
     
                 
                                      
                                                 
                              
                                                         
                             
           
                
                           
         
                                            
                                                              
             
                           
             
           
           
                                      
                                                                          
                                      
           
         
                          
                  
                                                   
       
                                 
     
                         
                            
                   
       
     
                                        
                                                          
         
                       
         
       
       
                                  
                                                                          
                                      
       
     
                                            
               
   
  
char *name_next(int change_dirs) {
  char const *source;
               
  int chdir_flag;
          
  size_t source_len;
  int tmp___0;
                
                
                
  int tmp___4;
  int tmp___5;
               
                    
  {
    chdir_flag = 0;
                                      
                      
      
    {
      while (1) {
                      /* CIL Label */;
        if (name_index == names) {
          if (!name_file) {
            goto while_break;
          }
          {                              }
                    
                             
            
        } else {
          {
            tmp___0 = name_index;
            name_index++;
            source = *(name_array + tmp___0);
            source_len = strlen(source);
          }
                                                 
            {
                        
                                                  
                                          
                                          
                   
                                 
                   
                 
                                                         
                                       
                 
               
                                             
             
             
                                        
                                                          
                                            
            }
            
          {
            strcpy((char * /* __restrict  */)name_buffer,
                   (char const * /* __restrict  */)source);
          }
        }
        {
                                                     
                                               
         
         
                     
                                              
                                                                     
                                          
                                     
               
                    
                                   
             
                             
                     
                                    
            
        while_break___1: /* CIL Label */;
        }
        if (chdir_flag) {
          {
            tmp___4 = chdir((char const *)name_buffer);
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
              {                              }
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
                     
         
                                                          
                                             
                       
         
        
    }
    return ((char *)0);
  }
}
                      
          
   
                    
                                                             
         
                                  
         
                       
           
                                                   
           
         
       
     
           
   
 
                               
static size_t allocated_size;
                      
void name_gather(void) {
  char const *name;
           
                  
                
                
                
                
             
                     
                
  int change_dir___0;
  int change_dir0;
  char const *dir___0;
  char *tmp___6;
                
                
  char *tmp___9;
  int tmp___10;
                   
                    
  {
    if (same_order_option) {
      if (allocated_size == 0UL) {
        {
                         
                                                                         
                                        
                                          
                                                        
        }
      }
      {
                    
                        /* CIL Label */;
          {
                                  
                                         
          }
                   
             
                                           
             
                                  
                               
             
                  
                             
            
           
                                   
                                        
           
                      
             
                                                             
                                                 
                           
             
            
           
                                  
                                                          
           
          
                   /* CIL Label */;
      }
                
         
                                            
                                                                     
                                              
                            
         
                                           
           
                       
                                                
                                    
                                    
                 
                               
                 
               
                                                    
                                     
               
             
                                           
           
           
                                                                   
                                                
           
         
         
                                              
                                                              
                                                       
                                              
                                                 
                                
                                     
         
              
                         
           
                                                 
           
         
        
    } else {
      change_dir___0 = 0;
      {
        while (1) {
                            /* CIL Label */;
          change_dir0 = change_dir___0;
          {
                        
            while_continue___2: /* CIL Label */;
              {
                tmp___9 = name_next(0);
                name = (char const *)tmp___9;
              }
              if (name) {
                {
                                                
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
                            
                 
                                                                  
                                                     
                               
                 
                
              {
                                          
                                                                  
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
                             
        tmp___0 = tmp;
      }
    } else {
                          
    }
    {
      length = tmp___0;
      tmp___1 =
          xmalloc(((unsigned long)(&((struct name *)0)->name) + length) + 1UL);
      name = (struct name *)tmp___1;
    }
    if (string) {
      {
                             
        strcpy((char * /* __restrict  */)(name->name),
               (char const * /* __restrict  */)string);
      }
    } else {
                          
                              
    }
    name->next = (struct name *)0;
    name->length = length;
    name->found_count = (uintmax_t)0;
    name->regexp = (char)0;
    name->firstch = (char)1;
    name->change_dir = change_dir___0;
    name->dir_contents = (char const *)0;
                  
      {
        tmp___2 = is_pattern(string);
      }
                  
                               
                                               
                                  
                
                                                 
                                    
                  
                                                   
                                      
             
           
         
        
      
    *nametail = name;
                           
                  
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
                      /* CIL Label */;
        if (!p) {
          goto while_break;
        }
                        
                                                    
                        
           
          
        if (p->regexp) {
          {
                                                                           
                               
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
             
        p = p->next;
      }
    while_break: /* CIL Label */;
    }
    return ((struct name *)0);
  }
}
int name_match(char const *path) {
  size_t length;
             
  struct name *cursor;
  uintmax_t tmp___0;
  {
    {
                         
                  
     
     
                  
                      /* CIL Label */;
        cursor = namelist;
        if (!cursor) {
          return (!files_from_option);
        }
                          
           
                                         
                                        
                                 
           
                                      
          
        { cursor = namelist_match(path, length); }
        if (cursor) {
                                                             
                                  
                                                
                                       
                
                    
                                      
              
                   
            (cursor->found_count)++;
            
          if (starting_file_option) {
            {
                                    
                                          
                                   
            }
          }
          { chdir_do(cursor->change_dir); }
                                        
                                         
                  
                                                                            
            
          return ((int)tmp___0);
        }
        if (same_order_option) {
                                     
             
                            
             
                                        
                         
             
                  
                       
            
        } else {
          return (0);
        }
        
    while_break: /* CIL Label */;
    }
  }
}
_Bool all_names_found(struct tar_stat_info *p) {
  struct name const *cursor;
            
                
  {
                         
      return ((_Bool)0);
             
      if (occurrence_option == 0UL) {
        return ((_Bool)0);
      } else {
                                    
                            
          
      }
      
    {
                                               
                                             
    }
    {
      while (1) {
                      /* CIL Label */;
                     
                           
         
                             
                            
                
                                         
                                      
                  
                                                          
                                                                        
           
                    
                                 
                                                
                                                                
                                  
               
             
                  
                                
                                
                    
                          
             
           
          
        cursor = (struct name const *)cursor->next;
      }
    while_break: /* CIL Label */;
    }
    return ((_Bool)1);
  }
}
void names_notfound(void) {
  struct name const *cursor;
            
               
                
               
             
                
                
  uintmax_t tmp___5;
                   
                    
                    
  {
    cursor = (struct name const *)namelist;
    {
      while (1) {
      while_continue: /* CIL Label */;
        if (!cursor) {
          goto while_break;
        }
        if (occurrence_option == 0UL) {
                                        
        } else {
          tmp___5 = (uintmax_t const)(cursor->found_count >=
                                      (uintmax_t const)occurrence_option);
        }
                        
          if (!cursor->fake) {
            if (cursor->found_count == 0UL) {
              {
                                                                  
                                                              
                                                        
                exit_status = 2;
              }
            } else {
              {
                                                                       
                        
                                                                            
                                                           
                                
              }
            }
          }
          
        cursor = (struct name const *)cursor->next;
      }
    while_break: /* CIL Label */;
    }
    namelist = (struct name *)0;
    nametail = &namelist;
                           
       
                   
                                            
                                  
                                                                     
                                 
           
           
                                                         
                                                          
                                                        
                            
           
         
                                       
       
      
           
  }
}
static struct name *merge_sort(struct name *list, int length,
                               int (*compare)(struct name const *,
                                              struct name const *)) {
  struct name *first_list;
  struct name *second_list;
                   
                    
  struct name *result;
                           
                      
             
          
              
  {
                     
                    
      
                       
      {
                                                  
                                                          
      }
                   
                            
                            
                                      
                        
        
      return (list);
      
                     
                                    
                               
                  
                               
    {
                
                                      
                       
                           
         
                    
             
                              
                  
        
                 /* CIL Label */;
    }
    {
                                
                                      
                                                                 
                                                                    
                            
     
     
                 
                                          
                         
                             
                                 
           
                
                               
         
         
                                                               
                                                                 
         
                          
                                    
                                    
                                          
                              
                
                                     
                                     
                                           
                               
         
        
    while_break___0: /* CIL Label */;
    }
    if (first_list) {
                               
            
                                 
    }
    return (result);
  }
}
                                                                       
                 
          
              
                    
                    
   
                                   
                                
            
                                                    
                                                                      
     
                                   
                                
            
                                                    
                                                                      
     
                                          
                     
                           
            
       
                                                                         
                      
       
     
                     
   
  
                                                                       
             
                  
            
                    
                          
                
                
              
                       
                     
                
                
                       
                    
   
     
                        
                                                
                       
     
                      
                                             
            
                                 
                                
                                               
              
                                       
       
       
                                                  
                                  
                                          
                                                      
                                                 
                                                     
       
                                                           
                              
                      
                                         
                                                
       
                          
       
                  
                                        
                         
                             
           
                                                           
                                   
                                                                  
               
                           
                                                    
                                          
                                          
                     
                                   
                     
                   
                                                                           
                                         
                   
                 
                                               
               
               
                                                                            
                                          
               
             
             
                                                                       
                                                                   
                                                                       
                                                         
             
           
                                        
         
                                   
       
                                
     
           
   
  
void collect_and_sort_names(void) {
  struct name *name;
                         
                
                      
         
                   
                   
  {
    {                }
                                  
       
                              
       
      
                    
       
                        
       
     
                    
     
                
                                      
                    
                           
         
                               
                                
                      
                
                                   
                        
           
         
                           
                      
         
                                       
                         
                      
         
         
                                                                          
                                     
         
                       
           
                                                  
           
                      
         
                                                   
           
                                  
                                                            
           
         
             
                         
       
                                 
     
                  
                    
     
                 
                                          
                    
                               
         
                    
                          
       
                                     
     
     
                                                                
                      
     
     
                 
                                          
                    
                               
         
                                         
                          
       
                                     
     
           
  }
}
struct name *name_scan(char const *path) {
               
             
                     
                       
  {
    {
                        
                   
    }
    {
                
                                      
         
                                                 
                           
         
                     
                          
         
                                
                         
                                        
               
                              
               
                                          
                                          
               
                    
                                        
             
                  
                                      
           
                
                                    
         
        
    while_break: /* CIL Label */;
    }
  }
}
char *name_from_list(void) {
  {
                        
                               
      
    {
                
                                      
                            
                                            
                                       
                               
             
           
                
                           
         
                                            
        
    while_break: /* CIL Label */;
    }
                         
      {
                                      
                                            
      }
                                  
      
                       
  }
}
void blank_name_list(void) {
  struct name *name;
  {
                                    
                    
     
                 
                                      
                    
                           
         
                                         
                          
       
                                 
     
           
  }
}
char *new_name(char const *path, char const *name) {
  size_t pathlen;
             
  size_t namesize;
                 
  int slash;
  char *buffer___2;
  void *tmp___1;
  int tmp___2;
  {
    {
                        
                   
                             
                               
    }
    if (pathlen) {
                                                           
                    
              
                    
        
    } else {
      tmp___2 = 0;
    }
    {
      slash = tmp___2;
      tmp___1 = xmalloc((pathlen + (size_t)slash) + namesize);
      buffer___2 = (char *)tmp___1;
      memcpy((void * /* __restrict  */)buffer___2,
             (void const * /* __restrict  */)path, pathlen);
      *(buffer___2 + pathlen) = (char)'/';
      memcpy((void * /* __restrict  */)((buffer___2 + pathlen) + slash),
             (void const * /* __restrict  */)name, namesize);
    }
    return (buffer___2);
  }
}
_Bool excluded_name(char const *name) {
  _Bool tmp;
  {
    { tmp = excluded_filename((struct exclude const *)excluded, name + 0); }
    return (tmp);
  }
}
                                                       
                                                                
             
   
                                                                 
                               
   
 
                                                                        
          
   
                                                               
                               
   
  
                                                                           
                
          
            
          
                      
                
   
     
                     
                            
              
     
            
              
            
       
                            
                                              
                                                                   
                                                       
                    
                             
       
                    
            
                                                  
                            
       
                 
           
                         
           
         
              
                         
       
     
                                               
                        
            
                          
                        
     
   
  
static _Bool hash_string_lookup(Hash_table const *table___0,
                                char const *string) {
  void *tmp;
  int tmp___0;
  {
    if (table___0) {
      {
                                                          
       
                
                    
              
                    
      }
    } else {
      tmp___0 = 0;
    }
    return ((_Bool)tmp___0);
  }
}
static Hash_table *avoided_name_table;
                                       
   
                                                      
           
   
  
_Bool is_avoided_name(char const *name) {
  _Bool tmp;
  {
    { tmp = hash_string_lookup((Hash_table const *)avoided_name_table, name); }
    return (tmp);
  }
}
                                  
                                          
                                                                           
               
                                                                          
                                              
                                                                          
                                                                                
char *safer_name_suffix(char const *file_name, _Bool link_target) {
  char const *p;
  size_t prefix_len;
        
                  
               
                
                
                
                
                    
  {
                                 
                    
             
      prefix_len = (size_t)0;
                                 
      {
                  
                                        
                    
                             
           
                                            
                                              
                                                
                                                           
                      
                                
                                                             
                 
               
             
           
           
                       
                                                
                      
                  
                             
                                 
                                     
               
                        
                                     
               
             
                                           
           
         
                   /* CIL Label */;
      }
      p = file_name + prefix_len;
      {
                  
                                            
                                         
                                 
           
                      
               
              
         
                       /* CIL Label */;
      }
                                          
                       
         
                                                       
                                   
                                                  
                                                                        
                                                
                                                                  
                                                             
         
                      
           
                                                                     
                                                       
           
         
        
      
    if (!*p) {
                                                        
         
                                                                       
                                             
         
        
      p = ".";
    }
    return ((char *)p);
  }
}
size_t stripped_prefix_len(char const *file_name, size_t num) {
                
              
  {
                     
     
                 
                                      
                                       
                           
         
            
       
                                 
     
     
                 
                                          
                  
                               
         
                                               
            
                    
                
                           
                                             
           
           
                       
                                                
                                             
                                     
               
                  
             
                                           
           
         
       
                                     
     
                        
  }
}
_Bool contains_dot_dot(char const *name) {
                
                  
  {
                 
    {
                
                                      
                                          
                                            
                                              
                                
                    
                              
                                  
               
             
           
         
         
                     
                                              
                    
                
                        
                                
             
                                              
                                   
             
           
                                         
         
            
       
                 /* CIL Label */;
    }
  }
}
/* #pragma merger("0","00b.rtapelib.o.i","") */
     
                                                                              
                                        
                                                
                                                       
                                   
                                                           
                                                                         
      
                                                                              
                                                              
                                  
      
                                                                               
                                                               
                                  
                               
                             
                                                                
                                                                        
                                                                      
                                                        
           
   
     
                                    
                                  
                                  
                                
                               
                         
     
           
   
  
static int do_command(int handle, char const *buffer___2) {
                
            
                         
                      
                  
                 
   
     
                               
                  
                                             
                                         
               
                                                                             
                                 
                                              
     
                                   
                 
     
                                 
                
   
 
                                                                  
              
              
            
                 
                 
               
               
  {
               
                            
     
                 
                                      
                              
                           
         
                                                                               
                         
           
                                     
           
                             
         
                                 
                                 
                           
         
                  
                 
       
                                 
     
                        
       
                                 
       
                         
     
                            
     
                 
                                          
                       
                               
         
                                 
                               
         
                 
       
                                     
     
                             
                  
            
                               
                              
       
                   
                                            
           
                                                                             
                                           
           
                                  
                                 
           
                                     
                                 
           
         
                                       
       
         
                                       
                                                      
         
                                 
           
                                         
                                            
           
         
                           
       
     
                             
       
                                 
       
                         
     
                        
  }
}
                                   
                          
                     
            
              
               
               
                   
   
     
                                                      
                                 
     
                 
       
                               
                         
       
                         
                        
       
       
                                     
                     
       
     
                 
   
 
                                         
                          
                     
            
              
               
            
                      
            
           
              
              
                    
   
     
                                                      
                                 
     
                  
                         
            
                       
       
                   
                                        
                                              
                                               
                               
             
           
                      
               
                   
         
                                   
       
                                            
                     
                    
              
                                         
                      
                
                      
         
       
                        
       
                   
                                            
                           
                   
                                                    
                                         
                                 
                  
                              
                           
                                      
                    
                                      
             
                                     
                                 
                    
                             
                                   
                      
                                   
               
                            
                                   
               
             
                       
           
         
                                       
       
                     
     
   
 
                                                
                   
                   
                   
                   
                   
                   
                   
                    
                    
                    
                    
                    
                    
   
     
                                            
                                                             
     
     
                             
                    
       
                             
                    
       
                             
                    
       
                          
                            
     
                                           
                                                          
     
                        
                            
     
                                           
                                                        
     
                        
                            
     
                                           
                                                          
     
                        
                                    
     
              
     
                                  
     
                       
       
                                             
                                                             
       
     
                     
       
                                             
                                                            
       
     
                       
       
                                             
                                                            
       
     
                      
       
                                             
                                                           
       
     
                      
       
                                             
                                                             
       
     
                       
       
                                             
                                                               
       
     
                          
       
                                             
                                                            
       
     
                          
       
                                             
                                                           
       
     
                      
       
                                             
                                                            
       
     
           
   
  
int rmt_open__(char const *path, int open_mode, int bias,
               char const *remote_shell) {
  int remote_pipe_number;
                 
                    
                    
                    
           
               
               
                                    
  pid_t status;
  char *tmp___1;
  int e;
              
               
              
              
            
              
               
                
              
                         
                  
                       
                 
            
                
               
                
                       
                      
                    
                    
                    
                    
                    
                    
  {
                          
     
                 
                                      
                                        
                           
         
                                                       
                                                       
                             
           
         
                             
       
                                 
     
                                  
       
                                 
                  
       
                  
     
     
                                
                              
                              
                              
                         
     
     
                 
                                          
                       
                               
         
         
                                   
                         
           
                                   
                         
           
                                   
                         
           
                              
                                       
                            
                                 
         
                                  
                                       
                       
         
                      
                                
                             
                                      
                                   
                                     
           
                            
                                
                             
                                   
                                     
           
                            
                                      
         
                 
       
                                     
     
                      
                                   
                                
       
      
                       
                                    
      
    {
                                       
                                                    
                                                    
     
                        
              
            
                                                          
                          
            
                                     
                     
                                
                                     
                     
       
                    
       
     
                       }
    if (status == -1) {
      {
                                    
                         
                                
                                     
                         
      }
      return (-1);
    }
                     
       
                 
                                              
                                                
                                                
                 
                                                
                                                  
                                                  
                            
       
                        
                                 
                                        
                
                                
         
         
                                                                       
                                                  
         
              
                                 
                                        
                
                                
         
         
                                                                           
                           
         
       
       
                                                         
                                     
                                                    
       
     
     
                                                
                                              
                                                   
                                 
                                                   
                                        
                                                       
                                                                     
                                                                      
                                                      
                                                    
                                                                              
     
                         
                  
            
                                                    
                            
                
                                      
                          
                                     
                                
                                                 
       
                    
       
     
     
                                   
                              
     
                                       
  }
}
int rmt_close__(int handle) {
             
          
               
                   
  {
    {                                  }
                   
                  
     
     
                                  
                                   
                                      
     
                         
  }
}
size_t rmt_read__(int handle, char *buffer___2, size_t length) {
                         
                
             
                 
          
               
                   
                    
  {
    {
                                                        
                                                                 
                                                              
     
                    
                          
            
       
                                     
                                 
       
                                           
                            
       
     
                        
     
                 
                                      
                                  
                           
         
         
                                                                      
                                             
         
                                           
           
                                     
           
                              
                
                            
             
                                       
             
                                
           
         
                        
                           
       
                 /* CIL Label */;
    }
                    
  }
}
                                                                
                          
                         
                 
          
                       
         
               
                    
                    
   
     
                                                         
                                                                 
                                                               
     
                    
                         
     
     
                                             
                                         
               
                                                                             
                                              
     
                            
       
                                     
                    
       
                   
                           
       
                                
                        
       
                          
     
                                 
                     
   
  
off_t rmt_lseek__(int handle, off_t offset, int whence) {
  char command_buffer[64];
  char operand_buffer[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                      1UL];
  uintmax_t u;
  char *p;
          
  off_t tmp___0;
                   
                    
                    
  {
    if (offset < 0L) {
      u = -((uintmax_t)offset);
    } else {
                            
    }
    p = operand_buffer + sizeof(operand_buffer);
    p--;
    *p = (char)0;
    {
                
                                      
            
                                          
                  
                          
                           
         
        
                 /* CIL Label */;
    }
                     
          
                     
      
    {
                       
                    
       
                        
                    
       
                        
                    
       
                          
                           
                 
                        
                          
                 
                        
                           
                 
                        
                                    
     
              
     
                                  
     
     
                                                        
                                                                       
                                                               
     
                    
                         
    }
    {                                   }
                     
  }
}
int rmt_ioctl__(int handle, int operation, char *argument) {
           
  char command_buffer[64];
  char operand_buffer[(((sizeof(uintmax_t) * 8UL) * 302UL) / 1000UL + 1UL) +
                      1UL];
  uintmax_t u;
  char *p;
  int tmp___0;
  long tmp___1;
  ssize_t status;
                 
  int tmp___2;
           
                    
                   
                    
                    
  {
    {
                     
                                                                               
                                               
                      
       
                      
                                                                               
                                                
                          
       
                          
                                    
     
                               
                
     
                  
    case_exp: /* CIL Label */
      if (((struct mtop *)argument)->mt_count < 0) {
        u = -((uintmax_t)((struct mtop *)argument)->mt_count);
      } else {
        u = (uintmax_t)((struct mtop *)argument)->mt_count;
      }
      p = operand_buffer + sizeof(operand_buffer);
      p--;
      *p = (char)0;
      {
                  
                                        
              
                                            
                    
                            
                             
           
         
                   /* CIL Label */;
      }
      if (((struct mtop *)argument)->mt_count < 0) {
           
                       
      }
      {
                                                          
                                                             
                                                          
                                                                     
      }
                           
                   
        
                                       
                            
                   /* CIL Label */
    {
      tmp___2 = do_command(handle, "S");
    }
                         
                    
              
                                        
                            
                      
         
       
       
                   
                                            
                               
                                 
           
           
                                                                         
                                                
           
                                                
             
                                       
             
                        
                  
                                 
               
                                         
               
                          
             
           
                                                       
                              
         
                                       
       
                                                       
                   
       
                          
       
                   
                                            
                                            
                                 
           
                                       
                                                                
                                               
                         
         
                                       
       
                 
                  /* CIL Label */;
    }
  }
}
/* #pragma merger("0","00c.sparse.o.i","") */
                                                               
           
   
                                         
       
                                                        
       
                   
     
                      
   
  
                                                           
           
   
                                  
                             
       
                                             
       
                   
     
                      
   
  
static _Bool tar_sparse_done(struct tar_sparse_file *file) {
  _Bool tmp;
  {
                               
      {
        tmp = (*((file->optab)->done))(file);
      }
                   
      
    return ((_Bool)1);
  }
}
                                                         
                                                                         
            
   
                                    
       
                                                                 
       
                   
     
                      
   
  
static _Bool tar_sparse_dump_region(struct tar_sparse_file *file, size_t i) {
            
  {
                                    
       
                                                       
       
                   
      
                      
  }
}
                                                                               
            
   
                                        
       
                                                          
       
                   
     
                      
   
 
                                                                   
            
   
                                     
       
                                                    
       
                   
     
                      
   
  
static _Bool tar_sparse_decode_header(struct tar_sparse_file *file) {
            
  {
                                      
       
                                                      
       
                   
     
                      
  }
}
                                                                   
            
   
                                       
       
                                                    
       
                   
      
                      
   
 
                                                                      
                                         
              
   
                                              
                   
       
                                                                          
                                  
       
                        
     
                      
   
 
                                                          
            
                 
   
     
                
                                      
                       
               
                       
                           
         
                         
                     
                   
                            
         
       
                                 
     
                      
   
 
                                                                              
            
                
                 
   
                                                       
                                     
       
                                                                           
                                                               
                                                        
       
            
                                                
                                               
         
                                                    
                                                                   
                                                                 
                                                                               
                                                                     
         
       
     
                                                  
                                            
                                                     
           
   
 
                            
                                                             
               
                
                     
            
                
                
                
                
                
   
     
                         
                           
                              
                                              
     
               
                        
     
     
                                                   
                                                     
                                                      
                                                                            
     
                   
                        
     
     
                 
                                      
         
                                                                                
         
                           
                                                 
                             
           
                
                           
         
                                                      
                      
                            
             
                                        
                                      
                       
                                                                              
             
                           
                                
             
           
                
                                   
                                      
           
           
                                 
                                                  
                                                                              
                                                                      
                                                            
           
                         
                              
           
         
         
                          
                                                       
         
       
                                 
     
                             
                                
     
     
                                
                                            
                                                                        
                                                                            
     
                     
   
 
                                            
                                          
                                         
static _Bool sparse_select_optab(struct tar_sparse_file *file) {
  unsigned int tmp;
  {
                                            
                                         
            
                                         
      
    {
                       
                   
        
                     
                    
       
                      
                    
       
                      
                    
       
                      
                    
       
                      
                    
       
                          
                           
                          
                        
                           
                          
                                  
                        
                           
                               
                        
                           
                               
                        
                                   
                        
    switch_break: /* CIL Label */;
    }
    return ((_Bool)1);
  }
}
                                                                        
                   
                  
           
                 
                    
                
   
     
                                                                       
          
                                                                               
     
               
                        
     
     
                 
                                      
                                 
                           
         
                                
                               
                
                               
         
         
                                    
                                  
                                                        
                                                                           
         
                                                 
           
                              
                                                                
                                                                              
                                                                         
                                            
                         
           
                            
         
         
                                                                
                                          
                                    
         
       
                                 
     
                      
   
 
                                                                            
                   
            
              
               
                
                   
                      
                
                    
   
     
          
                                                                               
     
              
                        
     
                                                               
                           
       
                                         
       
                    
         
                                                                         
         
       
            
       
                   
                                        
                                    
                             
           
                                   
                                  
                  
                                 
           
           
                                        
                          
           
                     
             
                                                             
                                                 
                              
             
                              
           
           
                                      
                                                                               
                                
                                       
           
                                 
             
                                  
                                                                         
                           
             
                              
           
         
                                   
       
     
                      
   
  
enum dump_status sparse_dump_file(int fd, struct tar_stat_info *st) {
               
  struct tar_sparse_file file;
            
  _Bool tmp___0;
  size_t i;
  _Bool tmp___1;
  int tmp___2;
  {
    {
      file.stat_info = st;
                   
                                       
    }
               
      {
                                         
      }
      if (!tmp___0) {
        return ((enum dump_status)3);
      }
             
                                  
      
                                         
                
                                       
         
                                        
         
                     
                        
           
                       
                                            
                           
                                                                
                                   
                 
                      
                                 
               
               
                                                          
                    
               
             
                                       
           
          
        
      
    {
      pad_archive((off_t)((size_t)(file.stat_info)->archive_file_size -
                          file.dumped_size));
      tmp___1 = tar_sparse_done(&file);
    }
    if (tmp___1) {
                  
                    
              
                    
        
    } else {
      tmp___2 = 1;
    }
    return ((enum dump_status)tmp___2);
  }
}
_Bool sparse_file_p(struct tar_stat_info *st) {
  {
    return ((_Bool)(st->stat.st_blocks <
                    st->stat.st_size / 512L +
                        (__off_t)(st->stat.st_size % 512L != 0L)));
  }
}
_Bool sparse_member_p(struct tar_stat_info *st) {
  struct tar_sparse_file file;
  _Bool tmp;
  _Bool tmp___0;
  {
    { tmp = sparse_select_optab(&file); }
              
                        
      
    {
                          
                                           
    }
    return (tmp___0);
  }
}
_Bool sparse_fixup_header(struct tar_stat_info *st) {
  struct tar_sparse_file file;
  _Bool tmp;
  _Bool tmp___0;
  {
    {                                   }
    if (!tmp) {
      return ((_Bool)0);
    }
    {
                         
                                               
    }
    return (tmp___0);
  }
}
enum dump_status sparse_extract_file(int fd, struct tar_stat_info *st,
                                     off_t *size) {
  _Bool rc___1;
  struct tar_sparse_file file;
           
  _Bool tmp;
  _Bool tmp___0;
  _Bool tmp___1;
  int tmp___2;
  {
    {
      rc___1 = (_Bool)1;
                         
                   
                                       
     
              
       
                                         
       
                     
                                     
       
            
                                   
     
     
                                               
                    
     
     
                 
                                      
                     
                                                          
                             
           
                
                           
         
         
                                                       
              
         
        
    while_break: /* CIL Label */;
    }
    {
      *size = (off_t)((size_t)(file.stat_info)->archive_file_size -
                      file.dumped_size);
      tmp___1 = tar_sparse_done(&file);
    }
    if (tmp___1) {
      if (rc___1) {
        tmp___2 = 0;
      } else {
                    
      }
    } else {
      tmp___2 = 1;
    }
    return ((enum dump_status)tmp___2);
  }
}
enum dump_status sparse_skip_file(struct tar_stat_info *st) {
  _Bool rc___1;
  struct tar_sparse_file file;
  _Bool tmp;
  _Bool tmp___0;
  _Bool tmp___1;
  int tmp___2;
  {
    {
                       
                          
                   
      tmp = sparse_select_optab(&file);
    }
    if (tmp) {
      {
                                         
      }
                    
                                     
       
            
                                   
    }
    {
      rc___1 = tar_sparse_decode_header(&file);
      skip_file((file.stat_info)->archive_file_size);
      tmp___1 = tar_sparse_done(&file);
    }
    if (tmp___1) {
                  
                    
              
                    
        
    } else {
      tmp___2 = 1;
    }
    return ((enum dump_status)tmp___2);
  }
}
static char diff_buffer___0[512];
static _Bool check_sparse_region(struct tar_sparse_file *file, off_t beg,
                                 off_t end) {
  _Bool tmp;
                   
                
                
                
                   
  {
    { tmp = lseek_or_error(file, beg, 0); }
              
                        
     
     
                 
                                      
                           
                           
         
                                     
                             
                               
         
         
                                                            
                                                                              
         
                                                 
           
                                                                              
                                           
           
                            
         
                                                                
                       
           
                                                                    
                                                                           
           
                            
         
                                                
       
                                 
     
                      
  }
}
                                                                       
                   
            
                    
                
                   
                       
                
                
              
                    
                    
   
     
           
                                                                               
     
               
                        
     
                                                              
     
                 
                                      
                                 
                           
         
                                
                               
                
                             
         
         
                                      
                        
         
                   
           
                                                           
                                               
                            
           
                            
         
         
                                    
                                                                              
         
                                                 
           
                              
                                                                
                                                                              
                                                                         
                                   
                        
           
                            
         
         
                                          
                                  
                                                       
                                                                    
         
                      
           
                                                 
                                                                      
           
                            
         
       
                                 
     
                      
   
  
_Bool sparse_diff_file(int fd, struct tar_stat_info *st) {
              
                             
           
               
            
                
                
                
              
   
     
                        
                       
                          
                   
                                       
     
             
       
                                         
       
                     
                          
       
            
                        
     
     
                                               
                    
     
     
                 
                                      
                     
                                                          
                             
           
                
                           
         
         
                                        
                                                                         
         
                      
           
                                                  
           
                        
                        
                  
                        
           
                
                      
         
                                
                                                                             
                                                                       
            
       
                                 
     
                  
       
                                                                       
                                             
       
     
                               
                    
   
 
                                                                
                                                                  
                                                                   
 
                                                                             
                                                                   
                     
   
                                  
                                         
     
     
                                                                                
                   
                                                                             
     
                         
                                         
            
                                                   
                                            
                                           
              
                                                        
                                             
         
       
     
                                  
                                       
   
 
                                                               
   
     
                                                                             
                                                        
                                                                 
                                                          
     
                      
   
 
                                 
                                                                   
           
                
            
            
                
                   
                   
  {
                      
                                                   
                 
     
                 
                                      
                         
                           
         
                                                                  
                                     
                           
         
            
       
                                 
     
                                             
     
                 
                                          
                                     
                       
                                 
           
                
                               
         
                                  
                 
           
                                                       
                                           
                            
           
                            
         
         
                                  
                        
         
         
                     
                                              
                           
                                              
                                     
               
                    
                                   
             
             
                                                                    
                  
             
           
                                         
         
                                                 
       
                                     
     
                                 
       
                                                               
                                                                              
                        
       
                        
     
                      
  }
}
static void oldgnu_store_sparse_info(struct tar_sparse_file *file,
                                     size_t *pindex, struct sparse *sp,
                                     size_t sparse_size) {
  {
    {
      while (1) {
                      /* CIL Label */;
                                                             
          if (!(sparse_size > 0UL)) {
                             
          }
                 
          goto while_break;
          
        {
          off_to_chars(((file->stat_info)->sparse_map + *pindex)->offset,
                       sp->offset, sizeof(sp->offset));
          size_to_chars(((file->stat_info)->sparse_map + *pindex)->numbytes,
                        sp->numbytes, sizeof(sp->numbytes));
          sparse_size--;
          sp++;
          (*pindex)++;
        }
      }
    while_break: /* CIL Label */;
    }
    return;
  }
}
                                                              
                      
            
                   
           
   
     
                                    
                          
                                          
                                       
     
                                                    
                                              
     
     
                                                                                
                                                        
                                                                          
                                             
                    
                                                                           
                                     
                                                          
                                                         
     
     
                 
                                      
                                                         
                           
         
         
                                  
                                                        
                                                                                
                                    
         
                                                      
                                                  
                
                           
         
       
                                 
     
                      
   
 
                                               
                                                    
                                                    
                            
                        
                         
                            
                                                                         
                   
                        
                            
                                                              
                                                                
                                                                   
  
                                                             
   
     
                                                                             
                                                        
                                                                  
                                                           
     
                      
   
  
                                    
                                                                 
           
                 
            
            
                
                   
                   
   
                       
                                                   
                                                
                                                         
                      
         
                     
                                          
                             
                               
             
                                                                           
                                             
                               
             
                
           
                                     
         
                                                  
              
                  
       
            
                
     
     
                 
                                          
                                         
                       
                                 
           
                
                               
         
                                  
                 
           
                                                       
                                           
                            
           
                            
         
         
                                  
                        
         
         
                     
                                              
                           
                                                  
                                     
               
                    
                                   
             
             
                                                                          
                  
             
           
                                         
         
                                                   
       
                                     
     
                                     
       
                                                               
                                                                              
                        
       
                        
     
                      
   
 
                                             
                                                    
                                                    
                          
                                                    
                       
                          
                                                                         
                   
                                                            
                            
                                                                
   
                                                           
                                                      
   
 
                                                            
                      
            
                   
           
                   
                   
                   
                   
   
     
                                    
                          
                                      
                                                                              
                                           
                                                                              
                    
     
     
                 
                                      
                                                         
                           
         
         
                                            
                                                                      
                                      
                                              
                                                                      
                                      
              
         
       
                                 
     
     
                                          
                                                                          
                                             
                                                         
     
                      
   
 
                                            
                                                    
                                                    
                         
                     
                                                    
                                                    
                                                                         
                   
                        
                            
                                             
                                        
                                                
                                                        
                                                                 
                                                               
                                                                 
                                                               
                                                                 
                                                                               
                                                                 
                                                                        
                                                                      
                                                                               
                                                                           
dev_t ar_dev;
ino_t ar_ino;
void sys_stat_nanoseconds(struct tar_stat_info *st) {
  {
                                                            
                                                             
                                                            
           
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
                                    
                                       
                  
                
                  
         
              
                
        
    } else {
      tmp = 0;
    }
    return ((_Bool)tmp);
  }
}
void sys_save_archive_dev_ino(void) {
  {
    if (!(archive >= 1 << 30)) {
                                                     
                                     
                                     
              
                          
        
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
  void *__cil_tmp5;
  {
    { tmp = strcmp(*(archive_name_array + 0), dev_null); }
                  
                  
            
                                  
                                                       
           
                                                                      
                                                                              
           
                             
                                                              
                                                                
                            
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
                    
       
      
    dev_null_output = (_Bool)tmp___1;
    return;
  }
}
void sys_drain_input_pipe(void) {
           
             
                 
  {
    if ((unsigned int)access_mode == 0U) {
      if (!(archive >= 1 << 30)) {
        if ((archive_stat.st_mode & 61440U) == 4096U) {
                     
                
                                                          
                                  
           
                       
                                            
                                       
                 
                                                                             
                                                
                          
                 
                      
                 
                                                                              
                                                   
                              
                 
               
                             
                                                   
                                   
                 
                      
                                 
               
                                  
             
                                       
           
            
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
               
                                       
  union __anonunion_59 __constr_expr_3;
                    
  char *__cil_tmp12;
  {
    if (child_pid___0) {
      {
                    
                                       
                                                                
                                 
                             
           
                                       
                          
             
                                                         
             
                             
            
          
                   /* CIL Label */;
      }
      __constr_expr_3.__in = wait_status;
                                                                            
        {
                                            
                                                         
          error(0, 0, (char const *)tmp___1, __constr_expr_0.__i & 127);
                          
        }
               
                                          
                                                      
           
                                               
                                                         
                                              
                                                      
                            
           
         
        
    }
           
  }
}
void sys_spawn_shell(void) {
  pid_t child;
                   
            
                  
               
                 
                   
                   
  {
    {
                           
                                
     
                 
                        
    }
    {                  }
    if (child == 0) {
      {
                                             
                          
       
            
       
                  
                                        
                                                        
                                 
                             
           
                                           
                              
             
                                   
             
                             
           
          
                   /* CIL Label */;
      }
    }
           
  }
}
_Bool sys_compare_uid(struct stat *a, struct stat *b) {
  { return ((_Bool)(a->st_uid == b->st_uid)); }
}
_Bool sys_compare_gid(struct stat *a, struct stat *b) {
  { return ((_Bool)(a->st_gid == b->st_gid)); }
}
_Bool sys_compare_links(struct stat *link_data, struct stat *stat_data) {
  int tmp;
  {
                                                  
                                                  
                
              
                
        
             
      tmp = 0;
      
    return ((_Bool)tmp);
  }
}
int sys_truncate(int fd) {
  off_t pos;
  __off_t tmp;
  int tmp___0;
  int tmp___1;
  {
    {
                                   
      pos = tmp;
    }
    if (pos < 0L) {
                   
    } else {
      {
        tmp___0 = ftruncate(fd, pos);
        tmp___1 = tmp___0;
      }
    }
    return (tmp___1);
  }
}
void sys_reset_uid_gid(void) {
  __uid_t tmp;
  __gid_t tmp___0;
  {
    {
                     
                 
                         
                      
    }
           
  }
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
                                                  
    } else {
      {                           }
      return (*tmp == 2);
    }
  }
}
size_t sys_write_archive_buffer(void) {
  size_t tmp;
  size_t tmp___0;
  size_t tmp___1;
  {
                              
      {
            
                                                                                
                      
      }
             
      {
        tmp___0 = full_write(archive, (void const *)(record_start->buffer),
                             record_size);
        tmp___1 = tmp___0;
      }
      
    return (tmp___1);
  }
}
                                      
             
          
        
               
                
               
            
               
                
                    
                    
   
                       
       
                          
                     
       
                        
         
                                       
         
                            
           
                                         
                         
                                              
                                               
                         
           
         
       
                             
                           
                         
           
                                         
                             
                                            
                                                   
                         
           
         
                    
       
                       
     
           
   
  
pid_t sys_child_open_for_compress(void) {
  int parent_pipe[2];
                   
                       
                      
                  
            
                  
               
              
              
                
              
                
              
              
                
               
                
              
                
             
                
                   
                                       
                                       
                                       
                                       
                    
                    
                    
                    
  {
    {
      xpipe(parent_pipe);
                             
     
                            
       
                                 
                               
       
                             
     
     
                                   
                                      
                               
                            
                                                       
     
                       
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
                          
             
                  
                        
           
                
                      
         
              
                                                                        
                      
                              
             
                                                              
             
           
           
                                                      
                                                                               
                                                                                
           
                            
             
                                           
                                     
             
                                
               
                                   
               
             
             
                                           
                                     
                                                    
             
           
           
                              
                                                                            
                              
                                                    
           
         
       
     
     
                        
                               
     
                              
       
                                              
                                             
                                
                              
                                                                        
                          
                                                
       
     
     
                              
                            
                                                        
     
                        
                  
            
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
               
                         
                                                    
                                                                             
                                                                              
                                  
               
                    
               
                                                                            
                                                         
                                  
               
             
                  
             
                       
                                                  
                                                                           
                                                                            
                                
             
           
                
           
                                                      
                                                                               
                                                                                
                              
           
         
              
         
                                                    
                                                                             
                                                                              
                            
         
       
                        
         
                                                
         
       
     
     
                 
                                      
                           
                           
                                      
         
                     
                                              
                                          
                                   
             
             
                                          
                                                          
             
                                                 
               
                                                        
               
             
                                
                                   
             
                             
                             
           
                                         
         
                            
                             
             
                                                                
                                           
                                                  
             
                                        
               
                                                     
               
             
           
                           
         
                                                
                                    
           
                                                 
           
         
       
                 /* CIL Label */;
    }
    {
                
                                          
                                                                
                                
                               
         
                                          
                             
           
                                                       
           
                               
         
       
                                     
     
                                       
                                                                         
       
                                           
                                                       
                        
       
            
                                         
                                                    
                                           
                                                         
       
     
                         }
  }
}
pid_t sys_child_open_for_uncompress(void) {
                     
                   
                       
                     
                  
           
              
                
              
                
             
              
                
              
               
                 
               
                
                 
                 
                  
                
                   
                                       
                                       
                                        
                                        
                    
                    
                    
                    
  {
    {
                         
                             
     
                            
       
                                            
                                 
                               
       
                             
     
     
                                   
                                       
                               
                            
                                                       
     
                       
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
                          
             
                  
                        
           
                
                      
         
              
                                                                        
                      
           
                                                        
                                                                     
                                                                         
           
                            
             
                                                    
             
           
           
                              
                                                                            
                                    
                                                    
           
         
       
     
     
                        
                               
     
                              
       
                                              
                                             
                                
                              
                                                                              
                          
                                                
       
     
     
                              
                           
                                                       
     
                       
                  
            
                                
         
                                                              
         
                         
                                         
                                                         
             
                               
                                                               
                                                                            
             
                          
               
                                                            
                                                                         
                                                                             
                                  
               
                    
               
                                                                           
                                                         
                                  
               
             
                  
             
                                                          
                                                                       
                                                                           
                                
             
           
                
           
                                                        
                                                                     
                                                                         
                              
           
         
              
         
                                                      
                                                                   
                                                                       
                            
         
       
     
                      
       
                                              
       
     
     
                 
                                      
                                     
                 
                                 
           
                                                                           
                                              
                             
           
                
           
                      
                                                                                
                              
           
         
                                             
           
                                 
           
                          
         
                            
                           
         
                                      
                         
         
                     
                                              
                           
                                   
             
                                  
                              
                    
                                  
             
                                                                      
                                    
               
                                                         
               
             
                            
                             
           
                                         
         
       
                                 
     
                  
     
                 
                                          
                                                                
                                
                               
         
                                          
                             
           
                                                       
           
                               
         
       
                                     
     
                                        
                                                                          
       
                                           
                                                       
                        
       
            
                                          
                                                     
                                           
                                                         
       
     
                         }
  }
}
/* #pragma merger("0","00e.tar.o.i","") */
extern char *optarg;
extern int optind;
                                                       
                                 
                                                     
                                                     
                                                                    
                                                                     
                                                                            
      
                                                                 
                                                                              
                                                          
                                                                                
                                                                               
                                                               
                                                     
                                 
                                                                        
struct exclude *new_exclude(void);
void add_exclude(struct exclude *ex, char const *pattern, int options);
int add_exclude_file(void (*add_func)(struct exclude *, char const *, int),
                     struct exclude *ex, char const *filename, int options,
                     char line_end);
struct mode_change *mode_compile(char const *mode_string,
                                 unsigned int masked_ops);
int check_links_option;
                           
                          
_Bool get_date(struct timespec *result, char const *p,
               struct timespec const *now);
                                                                             
static char const *stdin_used_by;
void request_stdin(char const *option) {
  char *tmp;
  char *__cil_tmp3;
  {
    if (stdin_used_by) {
      {
                                                                            
        error(0, 0, (char const *)tmp, stdin_used_by, option);
        usage(2);
      }
    }
                           
           
  }
}
                          
static int confirm_file_EOF;
int confirm(char const *message_action, char const *message_name) {
  char const *tmp;
  int reply;
  int tmp___0;
  int tmp___1;
  int character;
  int tmp___2;
                  
                    
  {
                       
                         
                    
              
                            
                                
         
                                                                           
                                                                     
         
                              
             
                                     
             
           
                
           
                                
                                 
           
         
       
     
     
                                
                                                
                                                                              
                              
     
                           
                   
            
       
                                              
                          
       
      
    reply = tmp___1;
    character = reply;
    {
                  
                                     
                                 
                           
          
                               
          {
            confirm_file_EOF = 1;
                                         
                                    
          }
                          
          
                                                    
        
                 /* CIL Label */;
    }
    if (reply == 121) {
                 
            
                        
                    
              
                    
        
    }
    return (tmp___2);
  }
}
static struct fmttab const fmttab[6] = {
    {"v7", (enum archive_format)1},
    {"oldgnu", (enum archive_format)2},
    {"ustar", (enum archive_format)3},
    {"posix", (enum archive_format)4},
    {"gnu", (enum archive_format)6},
    {(char const *)((void *)0), (enum archive_format)0}};
static void set_archive_format(char const *name) {
                        
            
                
              
                   
   
               
     
                
                                      
                                                          
                              
                           
         
            
                       
           
                                       
                                                            
                                                    
                     
           
         
       
                                 
     
                                                 
           
   
 
                                                                   
                         
                   
  {
              
     
                 
                                      
                      
                           
         
                                                                    
                                         
         
            
       
                                 
     
                        
   
 
                                                  
            
                   
   
                                                                                
       
                                                                           
                                       
                 
       
      
           
  }
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
                                                     
void usage(int status) {
            
  char *tmp___0;
                
               
                
                
                
                
               
                
                
                 
                 
                 
                 
                 
                      
                 
                 
                    
                    
                    
                   
                    
                    
                   
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
  {
                     
       
                                                                  
                                                  
                                                                   
       
            
       
                          
                                                                              
                                                                              
                                                               
                                                          
                 
                                                                               
                                                                               
                                                                               
                                                                               
                                                               
                                                                     
                                                         
                                                                               
                                                                           
                                                                               
                                                               
                                                          
                          
                                                                         
                                                                              
                                                                                
                                                                            
                                                                                
                                                                            
                                                                               
                                                                         
                                                                      
                         
                                                               
                                                          
                          
                                                                              
                                                                                
                                                                   
                                                                        
                                                                               
                                                                            
                                                                              
                                                                           
                                                                             
                                                                  
                                                                           
                                                                          
                                                                         
                                                                       
                                                                                
                                                                           
                                                                               
                                                                              
                                                                             
                                                                                
                                                                                
                                                                              
                                                                            
                                                                                
                                                             
                                                               
                                                          
                          
                                                                             
                                                                                
                                                                                
                                                                       
                                                                            
                                                                        
                                                                           
                                                                            
                                                                               
                                                                               
                                                                              
                                                            
                                                                                
                                                                                
                                                                                
                        
                                                               
                                                          
                          
                                                                                
                                                                                
                                                                    
                                                                          
                                                                            
                                                                             
                                                                                
                                                                            
                                                                                
                                                                     
                                                                
                                                                         
                      
                                                               
                                                          
                          
                                                                                
                                                                                
                                                                               
                                                                                
                                                            
                                                               
                                                          
                          
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                             
                                                                           
                                                                             
                                                                                
                                             
                                                                                
                                                                                
                                                                            
                                                                                
                                                                             
                                                                             
                                                                            
                                                                             
                                                      
                                                               
                                                          
                          
                                                                                
                                                                         
                                                                               
                                                                
                                                                                
                                                                              
                                                                              
                                                                               
                                                                            
                                                                               
                                                                             
                                                                          
                                                                         
                                                                     
                                                                                
                                                                               
                                                                               
                                                                            
                                                                                
                                                                           
                                                                                
                                                                              
                                                                         
                                                               
                                                          
                                                                             
                                                                                
                                                                          
                                                                                
                                                                
                                                          
                  
                                                                            
                                                                             
                                                                      
                                                                
                                                          
                           
                                                                              
                                                                           
                                                                              
                                                                             
                                                                              
                                                                            
                                                                            
                                                                              
                                                                            
                                                                               
                                                                             
                            
                                                                
                                                          
                           
                                                                             
                                                                                
                                                                   
                                                                
                                                          
                  
                                                                               
                                                                            
                                                                            
                                                                            
                                                                              
                                                                    
                                                                
                                                          
                                                                 
                  
                                                                               
                                                                               
                                                                               
                                                                      
                                                                            
                                                       
                                                                            
       
      
    { exit(status); }
  }
}
static void set_subcommand_option(enum subcommand subcommand) {
  char *tmp;
  char *__cil_tmp3;
  {
    if ((unsigned int)subcommand_option != 0U) {
      if ((unsigned int)subcommand_option != (unsigned int)subcommand) {
        {
          tmp = gettext("You may not specify more than one `-Acdtrux\' option");
                                         
          usage(2);
        }
      }
    }
    subcommand_option = subcommand;
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
                       
  char *const *tmp___4;
  char **tmp___5;
  char *tmp___6;
                
                       
                
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
                
                 
                       
                 
                 
                 
               
                       
                       
                 
                 
        
                
                 
  int tmp___31;
                
              
                 
                 
                        
                  
              
                 
                  
                 
                 
                        
                  
                 
                 
                        
  size_t tmp___45;
  int tmp___46;
  uintmax_t u___3;
  char *tmp___47;
                 
  strtol_error tmp___49;
                
                       
  uintmax_t u___4;
  char *tmp___52;
                 
                        
  char *tmp___55;
  char *tmp___56;
                
                 
                 
                 
                 
                 
                              
                 
                
                  
                 
                 
                 
                 
                 
                 
               
                 
               
                 
                        
                       
                 
               
                         
                     
                     
                     
                     
                     
                     
                     
                    
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                    
                     
                     
                     
                     
                     
                     
                     
                    
                     
                     
                     
                     
                     
                    
                     
                     
                     
                     
                     
                     
                     
                     
                    
                     
                     
                     
                     
                     
                     
                     
                     
                     
                     
                    
                     
                     
                     
                     
                     
                     
                     
                     
                     
  {
    {
                                           
                                               
                                
                          
                     
                                             
                                              
      blocking_factor = 20;
      record_size = (size_t)10240;
      excluded = new_exclude();
      newer_mtime_option.tv_sec = -1L << (sizeof(time_t) * 8UL - 1UL);
      newer_mtime_option.tv_nsec = (__syscall_slong_t)-1;
      recursion_option = 1 << 3;
                              
                               
                                          
                                               
    }
                    
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
          while_continue: /* CIL Label */;
            if (!*letter) {
              goto while_break;
            }
            {
              buffer___2[1] = (char)*letter;
              tmp___5 = out;
              out++;
              *tmp___5 = xstrdup((char const *)(buffer___2));
                                                                             
                                                   
                                             
                                             
            }
                        
                                                     
                                                                       
                                
                        
                               
                       
                                              
                        
                   
                                                                                
                                                                             
                             
                   
                 
               
              
            letter++;
          }
        while_break: /* CIL Label */;
        }
        {
          while (1) {
                              /* CIL Label */;
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
      
    {
      input_files = 0;
                                       
                                                                    
    }
    {
      while (1) {
      while_continue___1: /* CIL Label */;
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
          if (optchar == 70) {
            goto case_70;
          }
                              
                          
           
                              
                         
           
                               
                          
            
                              
                          
            
                             
                         
           
                               
                          
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
                              
                         
           
                               
                          
           
                               
                          
            
          if (optchar == 79) {
            goto case_79;
          }
                              
                          
           
                              
                         
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
            
          if (optchar == 116) {
            goto case_116;
          }
                             
                         
            
          if (optchar == 117) {
            goto case_117;
          }
                             
                         
           
                               
                          
           
                               
                          
           
                              
                         
           
                               
                          
           
                              
                         
            
          if (optchar == 120) {
            goto case_120;
          }
          if (optchar == 88) {
            goto case_88;
          }
          if (optchar == 121) {
                         
           
                               
                          
          }
                             
                         
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
            
                                
            goto case_140;
            
                              
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
            
                                
            goto case_153;
            
                              
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
           
                               
                          
            
                                
            goto case_166;
            
                              
                          
           
                               
                          
           
                               
                          
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                              
                         
           
                            
        case_63 : /* CIL Label */
        {
                   
        }
                              
                            
        case_1 : /* CIL Label */
        {
          name_add((char const *)optarg);
                        
        }
          goto switch_break;
        case_65 : /* CIL Label */
        {
          set_subcommand_option((enum subcommand)2);
        }
                            
        case_98 : /* CIL Label */
        {
          tmp___15 = xstrtoumax((char const *)optarg, (char **)0, 10, &u, "");
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
                                                        
             
                                           
                                                             
                                                        
                                                                              
                                                           
             
            
                                   
          archive_names++;
          *(archive_name_array + tmp___17) = (char const *)optarg;
          goto switch_break;
        case_70: /* CIL Label */
                                                    
                                        
                            
                                 
                                                          
                                
                                
                                       
                            
                  /* CIL Label */
          dereference_option = (_Bool)1;
                            
                  /* CIL Label */
          ignore_zeros_option = (_Bool)1;
                            
                                
         
                                                                               
                                                    
                                              
                   
         
                            
                                  
         
                                                   
         
                            
                                 
                                               
                            
                  /* CIL Label */
        {
                                          
                                           
        }
                           
                                 
                                            
                            
                                 
         
                   
                                                                           
         
                                            
             
                                                        
                                                              
                                                        
                       
             
           
                                                              
                                         
                            
                                 
                                 
                            
                                
                                        
                            
                                
                                
                  /* CIL Label */
                                                
             
                                                                 
                                                  
                       
             
            
                                  
                        
                  
                                     
                                    
             
                        
                                                                            
             
                                  
                 
                                                   
                                                            
                                                      
                           
                 
               
                                                            
                                                              
                    
               
                                                                              
                                                                          
               
                             
                                                           
                      
                 
                                                         
                                                                
                            
                                                                            
                                                                          
                                                                    
                 
               
             
            
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
                             
             
                                            
                            
                                                              
                                          
                           
             
           
                            
        case_121 : /* CIL Label */
        {
                            
                                                                                
                                              
                   
        }
                            
        case_122 : /* CIL Label */
        {
                                                  
        }
                            
        case_90 : /* CIL Label */
        {
                                                      
        }
                            
                                
                                    
                            
                  /* CIL Label */
                                          
                            
                                
                                      
                            
                                 
                                  
                       
                                                          
           
                            
                                  
         
                                                    
         
                            
                                  
         
                                                    
                                                          
         
                            
                                 
                                       
                            
                                  
         
                                                   
         
                            
                                 
                                                
                            
                                 
                                   
                            
                  /* CIL Label */
                                              
                            
        case_140: /* CIL Label */
                                              
                            
                                 
         
                                                  
         
                               
             
                                                                           
             
                            
                      
             
                  
                
                                                                                
           
                                               
                                               
                                        
                      
                 
                                                          
                                                                  
                                                            
                               
                 
               
                    
               
                                                        
                                                                
                                                          
                             
               
             
            
                            
                                  
         
                                                               
         
                                          
                                                         
             
                                                                 
                                                  
                           
             
           
                                           
                                                         
             
                           
             
           
                            
                                 
                                       
                            
                  /* CIL Label */
                                      
                            
                  /* CIL Label */
                                              
                            
                                
                                       
                            
                                 
                              
                            
                                 
                                            
                            
                                 
                                         
                            
                  /* CIL Label */
                       
                                             
                  
             
                        
                                                                               
             
                                               
                                        
                    
               
                                                     
                                                                
                                                          
                             
               
             
            
          goto switch_break;
        case_151: /* CIL Label */
          old_files_option = (enum old_files)2;
          goto switch_break;
        case_152 : /* CIL Label */
        {
          tmp___45 = strlen((char const *)optarg);
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
                                            
                                    
               
                                                          
                                                                
                                                          
                         
               
             
                  
             
                                                        
                                                              
                                                        
                       
             
           
                              
                                           
             
                                                                          
                                                       
                       
             
           
                                                       
                            
                                
                                            
                            
                  /* CIL Label */
                                        
                            
                                
                                                   
                            
                                 
                                                   
                            
                   /* CIL Label */
        {
                                                                  
                                                                            
                                    
                  
        }
        case_163 : /* CIL Label */
        {
                   
                                                                           
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
        case_49:  /* CIL Label */
        case_50:  /* CIL Label */
        case_51:  /* CIL Label */
        case_52:  /* CIL Label */
        case_53:  /* CIL Label */
        case_54:  /* CIL Label */
        case_55 : /* CIL Label */
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
                  
                                                  
         
                                   
         
              
                              
       
     
     
                 
                                          
                               
                               
         
         
                                                   
                        
                   
         
       
                                     
     
                       
       
                                                                               
                                                                            
                           
                                                                              
                                                                               
                                                                        
                                     
                                                                        
                                     
                
       
     
                    
       
                 
       
      
                                              
                        
                                                
               
        archive_format = (enum archive_format)6;
        
      
                             
                                                  
         
                                                             
         
       
     
                             
       
                                                           
       
            
                                
         
                                                             
         
       
     
                        
       
                                                                        
       
     
                            
                         
                                 
           
                      
                                                                           
                                                
                     
           
         
       
                                                  
                                                    
                                                      
                                                        
               
                                                                        
                                                               
                                                    
                         
               
             
           
         
       
      
    if (archive_names == 0) {
      {
        archive_names = 1;
                                 
                                                           
      }
                                        
        *(archive_name_array + 0) = "-";
        
    }
                           
                                 
         
                                                                            
                                              
                   
         
       
     
                                    
                                             
         
                    
                                                                          
                                              
                   
         
       
     
                              
                                
                  
                                         
                                                                            
                
              
                       
       
       
                              
                                                                   
                                               
       
                                            
         
                                                         
                    
                                                                          
                                                                           
                                             
                                                                              
                   
         
       
     
                        
                                
         
                                                                    
                                              
                   
         
       
                                        
         
                                                                  
                                              
                   
         
       
     
                                      
                                
         
                                                                            
                                              
                   
         
       
                                                  
         
                                                                  
                                              
                   
         
       
     
                     
                                               
                                                    
           
                      
                                                                           
                                                
                     
           
                
                                                      
             
                        
                                                                             
                                                  
                       
             
                  
                                                        
               
                          
                                                                               
                                                    
                         
               
             
           
         
       
     
                                  
                                           
     
                     
                         
      
                             
                                                    
      
    {
                                                 
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
       
                          
                           
                             
                                 
           
                                                                               
                                                
                     
           
         
       
                            
            /* CIL Label */
                          
                           
                                               
       
                   
                                            
                                                    
                                                                       
                                 
           
                                                           
                          
             
                                  
             
           
                                
         
                                       
       
                            
                              
                              
                               
                                               
       
                  
                                            
                                                    
                                                                       
                                 
           
                                                           
                          
             
                        
                                                                           
                                                  
                       
             
           
                                
         
                                       
       
                                   
                            
                      /* CIL Label */;
    }
                                            
                               
       
                                                 
                                                      
       
     
                        
       
                                                                       
       
     
                         
                                
         
                                                        
                                
                                                             
         
                            
           
                                                                              
                                                                                
                                              
           
         
       
     
           
  }
}
int main(int argc, char **argv) {
    AFL_INIT_SET0("tar");
  int tmp;
  void *tmp___0;
  char *tmp___1;
               
              
              
                
              
              
                    
                    
                    
                    
  {
    {                                          
                   
       
                                                  
       
     
     
                                               
                       
                                                       
                        
                      
      filename_terminator = (char)'\n';
                                                                            
                                   
                                             
                                                                
      archive_name_array = (char const **)tmp___0;
                       
                                   
                   
      decode_options(argc, argv);
      name_init();
    }
                           
       
                             
       
      
    {
      if ((unsigned int)subcommand_option == 0U) {
        goto case_0;
      }
                                                 
                    
       
                                                  
                    
       
                                                  
                    
       
                                                  
                    
        
      if ((unsigned int)subcommand_option == 3U) {
        goto case_3;
      }
                                                   
        goto case_6;
        
                                                 
                    
       
                                                  
                    
       
                        
    case_0 : /* CIL Label */
    {
                                                                          
                                         
      usage(2);
    }
    case_2:  /* CIL Label */
                           
                            
     
                       
     
                        
    case_4 : /* CIL Label */
    {
                               
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
                        
             /* CIL Label */
    {
                              
    }
                        
    case_5 : /* CIL Label */
    {
                 
                              
    }
                        
    switch_break: /* CIL Label */;
    }
                            
       
                      
       
      
                           
       
                                 
       
      
    {
                                      
                  
     
                                                         
       
                                          
       
                    
         
                                                                   
                                             
                       
         
              
                                     
                           
           
                                                                     
                                               
                         
           
         
       
     
                           
       
                                                                     
                                           
       
     
                                         }
                 
                      
            
                                   
                         
                        
       
      
    return (exit_status);
  }
}
void tar_stat_init(struct tar_stat_info *st) {
  {
    { memset((void *)st, 0, sizeof(*st)); }
           
  }
}
void tar_stat_destroy(struct tar_stat_info *st) {
  {
    {
                                      
                                  
                                  
                              
                              
                                   
                                         
    }
           
  }
}
/* #pragma merger("0","00f.update.o.i","") */
                                    
             
          
                        
                   
                     
                       
                     
                 
                
                                                                       
                
                
                
              
              
                    
                    
   
     
                                        
                   
     
                     
       
                                       
       
             
     
                                            
                       
       
                                       
       
            
                                     
       
                   
                                        
                                   
                             
           
           
                                        
                            
                                                   
                                  
           
                                                 
                                             
                                         
                         
               
                                                                                
               
             
           
                                                                               
                                               
             
                                                    
                                                                              
             
           
                              
             
                                                      
                                        
                                                                               
                               
                                                           
                                                              
                                                               
                                                            
                                                                   
                           
             
           
           
                                                              
                                                                 
           
         
                                   
       
     
                                
                       
       
                                        
       
     
           
   
  
void update_archive(void) {
                                  
                
                          
                       
                    
               
                             
              
                
                
             
                
              
                    
                    
                    
                    
  {
    {
                                           
                    
                    
                                        
                             
     
     
                 
                                      
                            
                           
         
         
                                      
                       
         
         
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                                           
                        
           
                            
                                
                                
         
                  
         
                               
                                                      
             
                                                                          
             
                                                                    
               
                                                                              
                                           
                         
                                                  
                                                                              
               
                                 
                                                                                
                   
                                                                                
                   
                 
               
             
           
                            
                            
                               
                                         
                        
                            
                               
                        
                            
                                
         
                                               
         
           
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                                      
                              
             
                                  
                                      
           
                                                                       
                                               
           
                                      
                                      
           
                                                         
                                               
                            
           
                                     
                                  
                                      
                                      
           
                    
           
                                            
           
                            
                                      
         
                                 
       
                                 
     
     
                  
                                       
                                           
    }
    {
                
                                          
                                    
                                                                   
                               
         
                                                        
                      
                                  
         
                                 
           
                                                         
           
                         
                                    
           
         
                                                    
           
                              
           
                
                                           
         
        
    while_break___0: /* CIL Label */;
    }
    {
      write_eot();
      close_archive();
      names_notfound();
    }
    return;
  }
}
/* #pragma merger("0","010.utf8.o.i","") */
static iconv_t conv_desc[2] = {(iconv_t)-1, (iconv_t)-1};
                                       
   
                                                                                
                   
                                             
              
                                             
       
     
                                    
   
  
_Bool utf8_convert(_Bool to_utf, char const *input, char **output) {
          
           
               
                
                
             
              
                 
                
                
  {
    {
                             
               
    }
                                                          
       
                                 
       
                        
            
                                                              
                          
       
     
     
                              
                            
                                  
                                
                                
                        
                   
                         
                         
                    
     
                                                     
  }
}
_Bool string_ascii_p(char const *str) {
                         
  {
                                  
     
                 
                                      
                  
                           
         
                                    
                            
         
            
       
                                 
     
                      
  }
}
/* #pragma merger("0","011.addext.o.i","") */
     
                                                                               
                                                                                
                                                    
                                  
                                                    
          
            
              
                 
                
                 
                  
                
               
         
            
               
   
     
                                              
              
                                          
                     
                            
                       
                             
     
                               
                  
            
              
                              
       
                                     
                     
       
                                                          
           
                                        
           
                
                 
                                
                         
           
           
                                                           
                   
           
         
                             
                  
                
                                           
                              
             
                                        
                                  
                                   
                                    
             
           
         
       
     
                                    
       
                                                    
                                                    
       
            
                             
                              
       
                            
                                    
     
           
   
  
/* #pragma merger("0","012.argmatch.o.i","") */
                                                                             
                             
                           
                                                                           
                                                                    
                                    
                                                              
                                                                         
                                                                
                          
                                  
   
                                
   
 
                                             
                                                                              
                              
        
                
               
                
          
                 
              
   
     
                    
                    
                           
            
     
     
                 
                                      
                              
                           
         
                                                                         
                       
           
                                                           
           
                                  
                       
                  
                                 
                           
                    
                                                                         
                              
                      
                 
                               
                                                                           
                                                                              
                 
                          
                                
                 
               
             
           
         
            
       
                                 
     
                    
                  
            
                        
     
   
 
                                                                            
                     
            
                
                
                      
                
                    
                    
   
                        
       
                                                    
                      
       
            
       
                                                          
                          
       
     
     
                                     
                                    
                                                                  
                                            
     
           
   
 
                                                                    
                                     
        
                       
            
              
                   
   
     
                                           
                                            
                                                
                                                   
            
     
     
                 
                                      
                              
                           
         
                     
           
                                                      
                                                                   
                                    
                                                     
           
                
           
                     
                                              
                                                                               
           
                        
             
                                                        
                                                                     
                                      
                                                       
             
                  
             
                                                        
                                                                 
                                      
             
           
         
            
       
                                 
     
                                    
           
   
 
                                                              
                                                                         
                                                                 
          
          
   
     
                                                     
                
     
                   
                   
     
     
                                          
                                                
                   
     
                
   
  
/* #pragma merger("0","013.backupfile.o.i","") */
extern DIR *(__attribute__((__nonnull__(1))) opendir)(char const *__name);
                                                                  
extern struct dirent *(__attribute__((__nonnull__(1))) readdir)(DIR *__dirp);
                                                                   
                                                                 
                                
                                                                       
                                 
                                       
                                                                 
                                                               
                                              
char *find_backup_file_name(char const *file,
                            enum backup_type backup_type___0) {
                               
                  
             
                                  
  char *s;
                    
                 
                
                     
                
                 
                 
                
                        
                    
                    
  {
    {
                        
                     
                                
                                                                     
                                    
                                             
                                             
     
                                                            
                                                        
     
     
                                                                    
                                                 
                          
    }
           
                                                
         
                                  
                           
                                             
                                                               
         
                            
                           
                   
                                     
         
         
                                       
                                    
                          
                                                                         
         
                                                  
                                       
             
                                                                        
                                                                
                                                               
                                          
                                                     
             
           
                
           
                                                                      
                                                              
                                                             
                                        
                                                   
           
         
       
       
                                           
                                                     
                               
       
      
    return (s);
  }
}
                                                                 
           
                    
                      
                   
                          
             
              
   
                            
               
                 
     
     
                          
                                        
     
     
                 
                                      
                               
                                                                          
                           
         
                                  
                              
                
                                                       
                                             
                                
           
         
         
                                                                         
                                                          
         
                                             
                                         
         
       
                                 
     
                                 
                  
                 
     
                             
   
 
                                                               
                                               
             
                
          
   
     
                 
                                               
     
                  
                                                       
                                                                  
                                           
           
                       
                                            
                                                    
                                 
               
                                                      
                  
             
                                       
           
                                             
                        
                  
                           
                          
             
           
         
       
     
                     
   
 
                                          
                                       
                                      
                                         
                                        
                                           
                                      
                                           
                                    
                                  
                                                 
                                                         
                                                         
                                                         
                                                          
                                                                        
          
   
                                                                     
                                   
            
                                       
                                     
              
         
                                                                   
                                                                  
                                                                            
         
                                                     
       
     
   
  
                                                                         
                      
                
                           
                   
                   
                   
                   
   
                 
                     
         
                                              
         
                     
              
         
                                              
                                                                           
         
                         
       
            
       
                                            
                                                                         
       
                       
      
   
  
/* #pragma merger("0","014.basename.o.i","") */
char *base_name(char const *name) {
                  
                
  {
                   
             
     
                 
                                      
                  
                           
         
                                    
           
                       
                                                
                  
                                             
                                     
               
             
                                           
           
                    
                                           
                           
             
                             
           
                   
         
            
       
                                 
     
                          
  }
}
size_t base_len(char const *name) {
  size_t len;
  {
    { len = strlen(name); }
    {
                
                                      
                        
                                                            
                             
           
                
                           
         
                    
             
              
        
    while_break: /* CIL Label */;
    }
    return (len);
  }
}
/* #pragma merger("0","015.dirname.o.i","") */
size_t dir_len(char const *path) {
                      
                
            
  {
    {
                               
                            
                                            
     
     
                 
                                      
                                        
                           
         
                                                             
                          
         
                 
       
                 /* CIL Label */;
    }
                          
                                                                  
  }
}
char *dir_name(char const *path) {
               
             
                 
                
                
                 
  {
    {
                         
                   
                                 
                                                             
                                
                                               
                                                           
    }
                    
                       
               
                                       
     
                                  
                     
  }
}
/* #pragma merger("0","016.exclude.o.i","") */
                                       
                                                
                                                                              
                                        
                                                
                                                                
                              
void *xzalloc(size_t s);
void *x2realloc(void *p, size_t *pn);
void *x2nrealloc(void *p, size_t *pn, size_t s);
                                                
                             
   
                              
                                                                  
   
  
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
          
  int tmp___0;
  int tmp___1;
  size_t patlen;
  size_t tmp___2;
  int r;
             
              
              
  {
                                 
      if (options & (1 << 4)) {
        {
                                      
                        
        }
      } else {
        {
          tmp___0 = strcmp(pattern, f);
          tmp___1 = tmp___0;
        }
      }
      return (tmp___1);
             
      {
        tmp___2 = strlen(pattern);
        patlen = tmp___2;
      }
                              
         
                                                    
                            
         
              
         
                                                
                            
         
       
                  
              
                               
                      
                
         
        
                 
      
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
               
              
  {
    exclude_count = (size_t)ex->exclude_count;
                                
                        
             
      exclude = (struct patopts const *)ex->exclude;
                   
                                                                       
      i = (size_t)0;
      {
        while (1) {
                        /* CIL Label */;
          if (!(i < exclude_count)) {
            goto while_break;
          }
          pattern = (char const *)(exclude + i)->pattern;
                                                
                                                                
                                       
                                 
                     
              matcher = &fnmatch_no_wildcards;
              
            {
              tmp = (*matcher)(pattern, f, options);
              matched = (_Bool)(tmp == 0);
            }
                                        
                    
               
                           
                                                    
                           
                                      
                                           
                     
                          
                                         
                   
                                              
                                                      
                       
                                                                      
                                                        
                       
                     
                   
                      
                 
                                               
               
              
            excluded___0 = (_Bool)((int)excluded___0 ^ (int)matched);
            
          i++;
        }
      while_break: /* CIL Label */;
      }
      return (excluded___0);
      
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
              
              
               
              
                
  char *pattern_end;
               
                
               
  int tmp___9;
  int tmp___10;
  int tmp___11;
  {
                                            
                             
                    
              
                    
       
            
                  
      
    use_stdin = (_Bool)tmp___9;
    buf = (char *)((void *)0);
    buf_alloc = (size_t)0;
    buf_count = (size_t)0;
    e = 0;
                     
                 
             
      {
        in = fopen((char const * /* __restrict  */)filename,
                   (char const * /* __restrict  */) "r");
      }
               
                    
        
      
    {
      while (1) {
                      /* CIL Label */;
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
    {                                
                  
       
                                     
                     
       
     
                     
       
                             
       
                         
         
                                       
                       
         
       
     
     
                                                       
                            
                                    
    }
                            
                   
             
                                                              
        tmp___10 = 0;
               
                     
        
      
    lim = (char const *)((buf + buf_count) + tmp___10);
    pattern = (char const *)buf;
    p = buf;
    {
      while (1) {
                          /* CIL Label */;
        if (!((unsigned long)p < (unsigned long)lim)) {
          goto while_break___0;
        }
        if ((int)*p == (int)line_end) {
          {
            pattern_end = p;
                                                        
          }
                       
             
                         
                                                  
                                                                           
                                    
                        
                                                                             
                                 
                                         
                   
                 
                              
               
                                             
             
            
          {
            *pattern_end = (char)'\000';
            (*add_func)(ex, pattern, options);
          }
                    
                                          
        }
        p++;
      }
    while_break___0: /* CIL Label */;
    }
    {
                                  
                   
    }
             
                    
             
      tmp___11 = 0;
      
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
               
  {
    total = (size_t)0;
    ptr = (char const *)buf;
    {
                  
                      /* CIL Label */;
        if (!(count > 0UL)) {
                           
        }
        {
          tmp = safe_write(fd, (void const *)ptr, count);
          n_rw = tmp;
        }
                                          
                           
          
                         
           
                                         
                          
           
                           
          
        total += n_rw;
                    
                      
        
    while_break: /* CIL Label */;
    }
    return (total);
  }
}
/* #pragma merger("0","019.getdate.o.i","") */
                           
                                                            
                                 
                                                                
                                                          
                                                        
                                                     
                                      
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                   
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                  
                                                                   
                                                                   
                                                    
                               
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                      
                               
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                                                   
                                    
                                   
                                                                      
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                                      
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                                       
                                                                       
                                                                       
                                                                      
                                                                       
                                                                      
                    
                                    
                                                                       
                                                                       
                                                                      
                                                                        
                                 
                                                                        
                                                                        
                                                                        
                                                                    
                                                                        
                                                                    
                                                                        
                                                                    
                                                                        
                                                                        
                                                                        
                                                                        
                                                                  
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                                                                  
                                                                        
                                                                  
                                                                        
                                                                        
                                                                  
                                                                 
                                                                        
                                                                         
                                  
                                                                        
                                                                        
                                                                        
                                                                        
                                                                        
                        
                                  
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                                       
                                                                      
                                                                       
                                                                       
                                                                       
                                                                       
                                                                      
                                                       
                                  
                                                                            
                                                                             
                                                                             
                                                                             
                                                                             
                                                                            
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                             
                                                                               
                                                           
                        
                        
                       
                   
                        
                          
                  
              
                   
                     
              
                
                  
                    
             
                 
              
                
            
                 
               
           
            
                
              
               
                    
                    
                  
                    
                    
   
                
                 
                 
                      
                      
                
                    
                
                
                     
                 
             
            
                            
                                                                            
                   
                   
                                        
                                 
         
                                                   
         
                            
           
                               
                               
           
         
                   
       
                       
                                
                            
       
       
                                                                            
                            
                         
                                                                  
                                                                                
                                                                                
                                  
                         
                                                                  
                                                                                
                                  
                                  
       
                                                                              
                        
       
     
                  
           
                               
                        
                     
     
                       
       
                                                        
       
     
                      
                  
                 
            
                                         
                                                 
              
                                
       
                             
     
                   
                  
                     
            
                     
                       
              
                                                            
                         
         
       
     
                            
                  
                          
                      
       
                 
                    
            
                     
                      
       
     
                    
                       
     
                      
                  
     
            
                    
                      
                    
     
                  
                    
            
                                 
                   
                    
     
           
                           
                    
                                     
     
     
                     
                    
       
                     
                    
       
                     
                    
       
                     
                    
       
                     
                    
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                      
                     
       
                        
                           
                                                                
                                                         
                        
                           
                                               
                        
                           
                                                     
                        
                           
                                               
                        
                           
                                               
                        
                            
                                              
                        
                            
                                              
                        
                            
                                                                      
                                             
                                                             
                                                                       
                                                                    
                        
                            
                                                                      
                                                                         
                                                             
                                                                       
                                                                    
                        
                            
                                                                      
                                                                         
                                                             
                                                                       
                                             
                                               
                                           
                                                
                                                       
                        
                            
                                                                      
                                                                         
                                                                 
                                                                    
                        
                            
                                                                      
                                                                         
                                                                 
                                             
                                               
                                           
                                                
                                                       
                        
                            
                                                                       
                        
                            
                                      
                     
              
                                            
       
                                                           
                        
                            
                                                                
                        
                            
                                                                      
                        
                            
                                                                       
                        
                            
                                                 
                                                                      
                        
                            
                                                 
                                                                       
                        
                            
                                                                             
                                                                      
                        
                            
                                                                       
                                                                    
                        
                            
                                                   
                                                                  
                                                                         
                                                                      
              
                                                                         
                                                                       
                                                                 
       
                        
                            
                                                                
                                                                        
                                                                     
                        
                            
                                                                     
                                                             
                                                                            
                                                                             
                        
                            
                                                             
                                                                      
                                                                            
                                                                             
                        
                            
                                                             
                                                                    
                        
                            
                                                             
                                                                     
                                                               
                        
                            
                                                                     
                                                            
                        
                            
                                                                     
                                                             
                                                               
                        
                            
                                                                           
                                             
                                                 
                                             
                                                 
                                                                               
                                                                             
                                           
                                               
                                                                               
                        
                            
                                           
                                                               
                        
                            
                                           
                                                               
                        
                            
                                                                
                        
                            
                                            
                                                               
                        
                            
                                            
                                                               
                        
                            
                                                                 
                        
                            
                                          
                                                               
                        
                            
                                          
                                                               
                        
                            
                                                               
                        
                            
                                           
                                                               
                        
                            
                                           
                                                               
                        
                            
                                                                
                        
                            
                                              
                                                               
                        
                            
                                              
                                                               
                        
                            
                                                                   
                        
                            
                                              
                                                               
                        
                            
                                              
                                                               
                        
                            
                                              
                                                              
                                         
                                                               
                        
                            
                                              
                                                              
                                         
                                                               
                        
                            
                                                                   
                        
                            
                                                            
                                                    
                        
                            
                                                            
                                                    
                        
                            
                                                 
                                                   
                                                     
                                                                     
                  
                                                       
                                                                       
                    
                          
             
           
                
                      
         
              
                             
                                                   
                                                   
                                                                               
                                           
                                                            
                                                
                                                     
                                                 
                                                   
                
                                                   
                                                      
                                                                           
                                                   
                  
                                            
                                                     
                                               
                                                     
           
                                                                 
                                                                           
                                                 
         
       
                        
                            
                        
                        
                            
                                         
                        
                                  
     
                   
                   
            
                   
                         
                                                                        
                       
                          
                                                                 
                                          
                
                                             
         
              
                                           
       
            
                                         
     
                    
           
                       
       
                  
                                       
       
     
                   
            
                           
                        
                        
       
                  
     
                    
                     
               
                                                      
                      
     
            
            
                          
              
                               
                        
                        
     
          
                  
                        
            
                     
                          
              
                                           
                            
         
       
     
                            
                  
                          
                          
       
                 
                    
            
                     
                          
       
     
                    
                       
     
            
                    
                  
                    
              
                        
       
                           
                           
       
     
               
             
                        
       
                           
                           
       
     
               
   
 
                                                       
                                                         
                                                       
                                                         
                                                                 
                                                    
                                              
                                                                    
                                                                   
                                                                        
                                                                        
                                                                     
                                                                        
                                                                   
                                                                       
                             
                                           
                                                                       
                                                                 
                                                                   
                                                 
                                              
                                                                    
                                                                   
                                                                    
                                                                    
                                                                    
                                                                       
                                                   
                                          
                                                             
                                                             
                                                                 
                                                                
                                                                 
                                                                
                                                                
                                                                 
                                                                 
                                                              
                                                              
                                                               
                                                               
                                                               
                                                               
                                                               
                                                                      
                                         
                                                               
                                                               
                                                               
                                                               
                                                              
                                                              
                                                              
                                                              
                                               
                                              
           
              
               
              
               
   
     
                          
                    
       
                          
                    
       
                          
                    
       
                          
                           
                        
                          
                      
                
                    
         
              
                  
       
                        
                           
                       
                          
                          
                
                      
         
              
                             
                           
                      
                
                       
         
                                
       
                            
                           
                       
                          
                                
                
                      
         
              
                             
                           
                       
                
                       
         
                                
       
                            
                                    
     
              
     
                                  
     
   
 
                                       
            
          
   
                          
                    
                   
            
                                   
                         
                     
                
                     
         
                          
       
     
                  
   
 
                                                                             
                  
          
              
   
                                                    
     
                 
                                      
                        
                           
         
                                                       
                       
                      
         
             
       
                                 
     
                         
     
                 
                                          
                        
                               
         
                                                           
                           
                      
         
             
       
                                     
     
                              
   
 
                                                                       
          
          
                 
                  
                     
               
          
                                 
              
              
              
              
              
              
              
              
               
               
   
             
     
                 
                                      
                  
                           
         
                                      
                                                                        
           
                                                    
                           
           
         
            
       
                                 
     
                        
     
                 
                                          
                        
                               
         
                                                                         
                           
                      
         
             
       
                                     
     
                                             
                         
                   
            
                           
                                     
                       
                
                       
         
              
                     
       
     
                             
                             
     
                 
                                          
                        
                               
         
                     
           
                     
                                                                               
                              
           
                
           
                                                                         
                              
           
         
                           
                      
         
             
       
                                     
     
                                                 
             
                  
     
                                                                              
                       
                         
     
                          
     
                 
                                          
                        
                               
         
                                                                         
                           
                      
         
             
       
                                     
     
                                               
                                               
                            
       
                   
                                            
                          
                                 
           
                                                                           
                             
                        
           
               
         
                                       
       
                                            
     
                             
     
                 
                                          
                        
                               
         
                                                                         
                           
                      
         
             
       
                                     
     
                         
                          
       
                   
                                            
                          
                                 
           
                                                         
                        
           
               
         
                                       
       
     
                            
             
          
     
                 
                                          
                     
                     
                       
                               
         
                            
                                  
                
              
         
            
       
                                     
     
                       
       
                                                 
       
               
                    
       
     
                              
   
  
                                                     
                 
               
                             
                
           
                      
                       
           
         
             
                           
                      
                     
                
              
                  
                
                                 
                                 
                      
                      
              
              
                    
   
     
                
                                      
         
                     
                                              
             
                                              
                                    
             
                                                                 
                                   
             
                          
           
                                         
         
                                          
                      
                
                             
                        
                  
                               
                                   
                                 
                            
                      
                                   
                                       
                                     
                              
                          
                             
                   
                                
                                                  
                                                       
                                
                   
                        
                           
                 
               
                            
                          
               
                           
                                                    
                                                                
                                       
                                 
                   
                                 
                      
                                        
                                                       
                                         
                   
                                                      
                                 
                   
                                
                 
                                               
               
                                 
                            
                      
                                   
                                       
                                                           
                                   
                                           
                                   
                                     
                       
                                                       
                            
                                        
                                   
                                     
                       
                                                    
                     
                                              
                                   
                     
                        
                                
                        
                                                           
                               
                     
                                 
                                                          
                                             
                                               
                         
                                 
                                                           
                                      
                              
                                                                  
                         
                                 
                       
                                                     
                     
                                   
                       
                                   
                                                            
                                                                
                                                 
                           
                                                      
                                 
                                                 
                           
                              
                         
                                                       
                       
                     
                     
                                 
                                                          
                                                              
                                               
                         
                            
                       
                                                     
                     
                                   
                               
                            
                                        
                                       
                         
                                             
                       
                     
                                               
                                                                    
                                  
                               
                                    
                            
                                    
                     
                                     
                          
                                
                   
                        
                                       
                                 
                                                             
                                                       
                                   
                     
                          
                                                          
                                                       
                                   
                     
                   
                                                                     
                                
                             
                                  
                          
                                  
                   
                                   
                 
               
             
           
         
                                      
                                                       
                       
           
                       
                                                
                                        
                                                               
                                
                        
                                   
               
               
                              
                                                
                                          
               
                                                                
                                      
                                       
                 
               
             
                                           
           
           
                                  
                                                               
           
                    
                         
           
                                          
                                 
         
                           
                              
                        
                                 
         
                          
         
                     
                                              
                                
                          
                                        
                              
                              
             
                               
                      
                    
                                 
                        
               
             
                                  
                                   
             
           
                                         
         
              
       
                                 
     
   
 
                                                         
                 
  
_Bool get_date(struct timespec *result, char const *p,
               struct timespec const *now) {
              
                
                       
               
                
                    
                                 
             
                     
              
               
                            
                     
              
              
               
             
            
              
                    
            
          
                
          
            
          
            
          
            
                    
                  
  {
              
       
                                           
       
                         
                          
       
                                                       
      
    {
                                 
                                    
                                        
                                       
    }
              
                        
     
                 
                                       
                           
                               
                                       
                                
                                 
                                  
                                              
                                  
                                     
                    
                   
                        
                        
                     
                    
                      
                     
                               
                              
                             
                             
                              
                                    
                              
                                                                  
                                           
                                                           
                                                       
                
    {
                
                                      
                              
                           
         
         
                                                      
                                                        
                                                
         
                       
                                  
                                     
                                                               
                                                
                                                  
                                                     
                                                                          
                                                                 
                               
             
           
         
                  
       
                                 
     
                                           
                                             
         
                                                            
                                                             
         
                       
                                                 
                                                             
         
       
     
                                         
                       
                        
     
                           
                           
                        
     
                              
                        
            
                                
                          
              
                                 
                            
                
                                                          
                              
                  
                                      
                                       
                                  
               
             
           
         
       
     
     
                                 
                                                          
                                                        
                                              
    }
                       
                  
            
                         
                             
                              
                                  
           
                                                       
           
                                 
                                
             
                                        
                                               
                  
                          
                                  
                                   
                                                      
           
                
                        
                                
                                 
                                                    
         
              
                      
                              
                               
                                                  
       
     
                                                            
                                      
                                       
                                     
                       
     
                              
                                   
     
     
               
                              
     
                       
                          
                 
                               
                         
                                
                
                         
                                
         
                                    
       
                         
                          
       
     
                       
                           
         
                      
                                      
                                                                     
                                                                           
                           
                                  
         
                           
                            
         
       
     
                        
                                 
                            
                         
                                         
                          
       
                 
     
                                            
                                                                       
               
                            
                     
                              
                     
                        
                 
                                                
                 
                                                                       
                                               
                                              
                                         
                                        
                        
     
                        
                                    
                      
  }
}
/* #pragma merger("0","01a.getopt1.o.i","") */
/* #pragma merger("0","01b.getopt.o.i","") */
/* #pragma merger("0","01c.gettime.o.i","") */
                                       
                                             
                                                                          
int gettime(struct timespec *ts) {
         
                    
        
              
  {
    {                             }
                  
                 
     
     
                                                                       
                                                  
                  
     
                 
                             
                                       
     
               
  }
}
/* #pragma merger("0","01d.hash.o.i","") */
                                                          
                                                  
                                                                
void *hash_lookup(Hash_table const *table___0, void const *entry) {
                                 
             
                                  
                
  {
    {
                                                                       
                                                                    
    }
                                                                           
       
                
       
     
                                                                    
                         
     
                    
     
                 
                                      
                      
                           
         
         
                   
                                                                            
         
                      
                                        
         
                                                         
       
                                 
     
                       
  }
}
void *hash_get_first(Hash_table const *table___0) {
                                  
  {
                                     
                         
     
                                                          
    {
                
                                      
                                                                                
           
                    
           
                
                             
                                          
           
         
                 
       
                 /* CIL Label */;
    }
  }
}
void *hash_get_next(Hash_table const *table___0, void const *entry) {
                                 
             
                                  
  {
    {
                                                                       
                                                                    
    }
                                                                           
       
                
       
     
                    
     
                 
                                      
                      
                           
         
                                                                  
                             
                                          
           
         
                                                         
       
                                 
     
     
                 
                                          
                 
                                                                                
                               
         
                           
                                        
         
       
                                     
     
                       
  }
}
size_t hash_do_for_each(Hash_table const *table___0,
                        _Bool (*processor)(void *, void *),
                        void *processor_data) {
                
                                  
                                  
            
  {
                       
                                                          
     
                 
                                      
                                                                                
                           
         
                           
                          
           
                       
                                                
                            
                                     
               
                                                                           
                         
                                 
               
                        
                                                               
             
                                           
           
         
                 
       
                                 
     
                     
  }
}
size_t hash_string(char const *string, size_t n_buckets) {
              
                  
  {
                     
     
                 
                                      
                       
                           
         
                     
                 
                                                                           
       
                                 
     
                   
  }
}
                                        
                 
                
          
   
                        
                               
     
                 
                                      
                                 
                                       
                             
           
                
                           
         
                  
                                
                  
       
                                 
     
                              
              
            
              
     
                        
   
 
                                            
            
   
                           
                             
     
                     
     
                 
                                      
                                      
                  
                           
         
                         
       
                                 
     
                       
   
 
                                                  
                            
                
   
                               
                   
                                                    
                                                                         
                                                                
                                                           
                                                                 
                                        
                                                            
                                                                     
                                               
                                    
                 
               
             
           
         
       
     
                                        
                      
   
  
Hash_table *hash_initialize(size_t candidate, Hash_tuning const *tuning,
                            size_t (*hasher)(void const *, size_t),
                            _Bool (*comparator)(void const *, void const *),
                            void (*data_freer)(void *)) {
                       
            
                
                      
                
              
              
  {
                                                             
                                         
            
                                                                    
                                           
       
      
    {
                                      
                                    
     
                                                                 
                                         
     
                  
                               
     
     
                                 
                                        
     
                   
                
     
                                
                     
                                                                     
                                                         
                  
       
                                        
     
                                              
                   
            
                   
     
                                                                     
                
     
                                                    }
                                             
                   
            
                   
     
                                                                                
                
     
     
                                                                           
                                                       
                               
                                                                                
                                            
                                       
                                 
                                         
                                         
                                                                    
     
                       
         {                          }
                                       
  }
}
                                                                
                         
            
   
                                     
                                       
                                             
            
       
                                   
                                       
       
     
                 
   
 
                                                                         
   
                            
                                             
                                       
           
   
 
                                                                      
                                                                             
                            
             
                            
             
                          
                
                 
                              
                
   
     
                                                                
                                       
     
                                                                            
       
                
       
     
                          
                                                                    
                         
     
                                                                                
                  
                          
                   
                           
           
                                
                            
                                        
           
                
                                   
         
       
                    
     
                    
     
                 
                                      
                            
                           
         
         
                                               
                                                         
         
                      
                                          
                       
             
                                      
                                            
                                              
             
           
                            
         
                              
       
                                 
     
                       
   
 
                                                            
                        
                            
                            
                          
             
                                
             
                               
                             
   
     
                 
                                                                          
                                                                        
     
                                                                 
                        
     
                                                            
                               
     
                 
                                      
                                                                                
                           
         
                           
                          
           
                       
                                                
                            
                                     
               
               
                                    
                                                                
                                                                   
                                                     
               
                                               
                                                              
                 
                          
                 
               
                                  
                                     
                                                                     
                   
                                                        
                                        
                   
                                                                               
                                      
                   
                                         
                                                     
                                               
                        
                                                  
                                            
                 
                      
                                        
                                              
                                                                     
                   
                                                  
                   
                 
               
                            
             
                                           
           
         
                 
       
                                 
     
     
                                      
                                            
                                                        
                                                  
                                                            
                                                              
                              
     
                      
   
  
void *hash_insert(Hash_table *table___0, void const *entry) {
            
                            
                               
                         
                            
                  
                
                
  {
                
       
                
       
     
                                                                    
                                                            
                    
     
                       
       
                                        
                        
       
                                                                   
                           
       
                                      
                                     
                               
                               
                             
     
                                 
                             
                                  
                                                
                                               
                                                
       
                                
       
                                                  
                                                 
                                                  
                                   
                                   
                                                                              
                
                   
                                                                           
                                       
         
                                   
                                                       
                             
         
                                                                
                       
                                            
         
       
     
                           
  }
}
/* #pragma merger("0","01e.human.o.i","") */
                                                                           
                                                                     
                                           
                                                
                                                          
                                     
                                                      
                                                      
                                                       
                                                                       
              
          
   
                             
                                                      
                             
                                 
                                        
                    
                  
                    
           
                
                  
         
                                                  
       
     
                   
   
  
                                                                              
                                                      
                  
                  
                          
             
           
                                                                       
                  
                    
   
     
                                     
                                  
                             
                    
                                             
                                                                
                             
     
     
                 
                                      
                                     
                
                             
                                 
                  
                         
           
                     
         
                           
                       
         
         
                        
                        
                                             
                                                                      
         
                       
                     
         
         
                                
                                             
                                                               
                                   
         
       
                                 
     
   
  
char *human_readable(uintmax_t n, char *buf, int opts,
                     uintmax_t from_block_size, uintmax_t to_block_size) {
                   
                    
                
             
               
                   
         
                
                         
              
                            
                          
                       
                            
                        
                   
                  
                 
                 
                       
                    
                
               
                             
                   
                
                       
                     
                
                      
                      
                       
                      
            
                  
                
                
                
              
             
               
               
               
               
                    
                    
                    
                    
                    
                    
                    
  {
                            
                    
                     
            
                     
     
     
                                   
                    
                                                       
                          
                                   
                    
                         
                         
                                    
                                                       
                         
     
                         
                             
                                                       
                                    
       
     
     
                                           
                                                       
     
                          
                                                     
     
             
              
                                                                                
                  
                 
          
               
                                           
                                                   
                                                     
                             
                                    
                     
                       
                                      
         
       
            
                                   
                                                     
                                                    
                                     
                                     
                            
                                        
                             
                                
                  
                                          
           
                                      
         
       
     
                                                
                                                                            
                       
       
                                                    
                                              
                                                                   
                                           
                                  
       
            
                         
                   
       
                   
                                        
                                 
                     
                                              
                                             
                               
             
                  
                             
           
         
                                   
       
       
                  
                                                    
                                              
                                                                   
                                           
                                               
       
                                                                    
         
                                                                        
                                                
                                                           
                                             
                                             
                                    
         
              
                       
                                                   
             
                                                                            
                                                    
                                                               
                                                 
                                                 
                                        
             
           
         
       
     
     
                           
                                                    
                                                                
     
                     
                         
                    
                   
                                   
         
                     
                                              
                                                                         
                                                            
                                                                           
                                   
                                           
                                
                                                               
                    
                                                                      
             
                       
                                         
                                               
                                     
               
                    
                                   
             
           
                                         
         
                         
                                   
                                                   
                  
                                     
                                 
                            
                      
                            
               
                    
                          
             
                               
           
                         
                     
                         
                               
                    
                         
             
           
                           
                         
                          
                    
                                
                                      
               
                    
                                         
                                      
                                                   
                                                                     
                                         
                             
                                  
               
               
             
           
         
       
     
                             
                                                                            
            
                               
                                    
                       
                
                       
         
              
                     
       
                          
     
                   
            
                      
                                     
                                        
                       
                              
               
                    
                               
                                      
                                                   
                                                                     
                                         
               
             
                               
           
         
       
     
                                 
    {
                
                                          
                                  
            
                                
                    
                            
                               
         
       
                     /* CIL Label */;
    }
              
                    
      {
                                                                            
                                        
      }
      
                   
                         
                     
                             
         
                     
                                              
                                           
                                   
             
                       
                                           
                                   
             
                                     
           
                                         
         
       
                     
                          
                  
                           
                              
                           
                  
                                                   
           
                
                                                 
         
                                  
       
                       
                        
                         
                              
                      
                                 
           
         
                          
                  
                             
       
     
                            
               
  }
}
                                              
                                                 
                                                                    
                                                                      
                                             
                                                
                             
                                                                               
                                        
          
   
                          
                            
                
              
                                    
                  
                
                  
         
       
            
              
     
                 
   
 
                                                 
                                                       
                                                        
                                                          
                                                          
                                                          
                                                          
                                
                                                       
                                                        
                                                          
                                                          
                                                          
                                                          
                                 
                                                                              
                                                                            
                                                       
         
         
           
           
           
           
                            
                
               
              
               
                 
                 
   
                                                                           
                                                     
                                   
                                   
                     
                     
                                                                        
                   
                                   
                                                     
                                         
                                                         
                                                          
                                                            
                     
   
 
                                                                             
                                                                   
           
             
            
               
   
             
       
                                                                      
                                                                             
                                          
                
                                            
       
                                          
                    
       
     
                                                                     
                                                                               
                                 
                                  
               
                                                 
                                                                              
            
               
                                                         
                        
                                                                                
     
                     
   
 
                                                                      
                                                                    
                                                            
               
             
            
               
             
             
              
   
                                              
             
               
                 
                       
         
                     
                                          
                           
                           
                    
                          
             
                                                 
                               
             
                           
                                            
                    
                                           
             
             
                       
                        
                                                    
             
                    
                      
                       
                    
                        
             
           
                                     
         
                 
                   
                    
                     
                   
           
         
       
     
               
   
 
                                     
                                                                          
                                        
           
            
            
            
            
               
                       
          
          
           
           
          
                     
            
           
                    
                             
                
                       
            
               
          
             
            
                        
                    
                                 
                                 
                               
                              
                              
                               
                     
           
               
                    
                    
                            
                     
                     
             
                   
                  
            
                
            
                
                     
                     
              
              
              
   
     
                           
                       
                       
                         
                         
                       
                                   
                           
                               
                                                 
                                                    
                                             
                                               
                                
                                                                 
                                                                                
                          
                         
                                    
                               
                          
     
                  
              
     
                   
               
     
     
                                                              
                                              
     
                                                                          
                  
                
               
                 
             
                                      
                                      
                                    
                                   
                                  
                                
                                                          
                                               
                                                
                                                
                                              
                                                               
                                                       
                     
                         
              
                        
       
                                                               
                                                       
                          
                                                                            
                                                  
                               
                                                                          
                                                         
                       
                           
                
                          
         
                                                    
                              
         
                                           
                         
       
     
            
            
           
             
     
                 
                                      
         
                                                     
                                                                              
                                                         
         
                         
                           
         
                      
                        
                                  
                                
                    
                              
                                                     
                      
                                                             
               
                            
                                  
                      
                            
               
             
                  
                        
           
                
                               
                             
                                      
                                
           
         
                
               
               
                                
       
                                 
     
                               
                       
                               
                          
                                   
                                                  
                         
           
                       
                                                
                                           
                                     
               
                             
               
                           
                                                    
                                          
                                         
                   
                                                       
                                                    
                     
                                                         
                     
                                                
                       
                                                                     
                                                                
                                                                     
                                                         
                       
                                        
                     
                   
                                 
                 
                                               
               
                              
             
                                           
           
         
       
     
               
                                        
                                     
                     
                              
                      
                
                      
         
              
                    
       
       
                                       
                                       
                                         
                                                        
       
                    
                    
              
                    
       
                                              
                                                 
                    
                            
       
     
             
               
   
 
                               
                            
                                                            
time_t(__attribute__((__leaf__)) rpl_mktime)(struct tm *tp) {
             
  {
    {
                           
                                                                           
                             
    }
                 
  }
}
/* #pragma merger("0","020.modechange.o.i","") */
                                           
                                                                 
                                                                      
                                                                 
                        
            
   
     
                                               
                                    
     
                                                         
                 
     
                                                
                      
                       
                        
                                                                    
               
   
 
                                                        
                                                        
                                                      
                          
   
                                                             
              
                  
                  
            
                        
                
     
           
   
  
struct mode_change *mode_compile(char const *mode_string,
                                 unsigned int masked_ops) {
                          
                           
                            
                     
                        
              
                   
                       
                        
                           
                      
                             
                
                            
                              
              
              
              
              
              
             
              
              
               
               
               
               
                         
               
               
               
                    
  {
    {
                                              
                                                                             
    }
                                 
                                                  
                                         
       
                           
                             
                             
                                       
                                         
                                          
                                         
                        
                              
                 
                      
                            
               
                    
                          
             
                  
                        
           
                
                      
         
              
                             
                                   
                         
                
                      
         
                                   
                         
                
                      
         
                                  
                        
                
                      
         
                                  
                        
                
                      
         
                                  
                        
                
                      
         
                                 
                       
                
                      
         
                                 
                             
                
                      
         
                                 
                             
                
                      
         
                                
                             
                
                       
         
                                
                                     
                
                       
         
                                
                                     
                
                       
         
                                
                                    
                
                       
         
                                            
                                                                           
                            
                           
                          
                          
                         
                        
                       
       
       
                                
                                      
       
                                                           
                                         
       
                                             
                    
     
     
                                       
                         
                    
     
     
                 
                                      
                                  
                         
                                  
                         
                      
         
                     
                                              
             
                                                     
                              
               
                                                     
                              
               
                                                     
                              
               
                                                    
                             
               
                                  
                                     
                                     
                                
                                     
                                                                 
                                
                                     
                                                                       
                                
                                    
                              
                                                                          
                                
                                           
                                    
                                          
             
                          
           
                                         
         
                       
                            
                              
                
                              
                                                                            
                                   
         
         
                     
                                              
                                                     
                                                       
                                                         
                                       
                 
               
             
             
                                                           
                                                     
             
                                                                      
               
                                
               
                                               
             
                                                             
                                            
                                            
                                   
                                                    
                             
                      
                             
               
                                                         
                 
                                                           
                                  
                 
                                                                         
                                                   
                 
                                                           
               
             
                                                  
                           
                    
                                                    
                             
                      
                             
               
                                  
             
                                                       
                                              
             
             
                                                 
                                        
                                      
                                                      
                            
             
             
                         
                                                  
                 
                                                         
                                  
                   
                                                         
                                  
                   
                                                        
                                 
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                  
                   
                                                         
                                      
                   
                                                         
                                      
                   
                                                         
                                      
                   
                                          
                                         
                                  
                                                                              
                                      
                                        
                                         
                                  
                                                                              
                                      
                                        
                                        
                                                                 
                                         
                                  
                                                                           
                                      
                                        
                                         
                                                           
                                        
                                         
                                                          
                                        
                                             
                                      
                                 
                   
                                              
                                                                 
                                        
                                             
                                      
                                 
                   
                                                     
                                                                 
                                        
                                             
                                      
                                 
                   
                                                            
                                                                 
                                        
                                                   
                                      
                                                  
                 
                              
               
                                             
             
                          
           
                                         
         
                                                 
                           
         
       
                                 
     
                                         
                    
     
                                
                                     
  }
}
mode_t mode_adjust(mode_t oldmode, struct mode_change const *changes) {
                
               
          
              
              
              
              
              
              
              
              
  {
                                                                               
     
                 
                                      
                       
                           
         
                                            
                                                         
                                      
                               
                                                   
                    
                      
             
                               
                                                       
                    
                          
             
                              
                                                     
                    
                          
             
                                                               
                  
                                                                  
                                                     
                                                  
                      
                            
               
                                                     
                                                  
                      
                            
               
                                                    
                                                
                      
                            
               
                                                                     
                    
                                                            
                                           
                      
                            
               
                                                            
                                           
                      
                            
               
                                                           
                                         
                      
                            
               
                                                                     
             
           
                                                   
                
                                         
                                              
                                                  
                            
                                                                                
                                                                                
               
             
           
         
         
                                             
                         
           
                                             
                         
           
                                             
                         
           
                            
                                
                                                                           
                            
                                
                           
                            
                                
                            
                            
                                      
         
                                                            
       
                                 
     
                     
  }
}
void mode_free(struct mode_change *changes) {
                                    
  {
    {
                
                                      
                       
                           
         
         
                               
                                
                         
         
       
                 /* CIL Label */;
    }
           
  }
}
/* #pragma merger("0","021.prepargs.o.i","") */
                                                                     
                    
          
        
                             
                      
                
               
                      
                                 
                
   
                    
            
          
     
                 
                                      
         
                     
                                              
                                      
                                                                                
                                   
             
                    
           
                                         
         
                      
                     
         
                   
                          
         
            
         
                     
                                              
                        
                
                            
                    
                                     
                               
                                     
                           
                                
                        
                                           
               
             
                         
               
                                          
               
                                                                           
                         
                                     
               
                    
                                   
             
           
                                         
         
                    
            
                                
       
                                 
     
   
  
void prepend_default_options(char const *options, int *pargc, char ***pargv) {
           
             
                
               
              
           
                    
            
                
                 
                       
              
                 
                
                       
  {
                 
       
                              
                                     
                              
                                                         
                            
                      
                                     
                 
                                                                           
                              
                                  
                    
                     
             
                       
               
                                    
                                                 
                      
       
       
                   
                                        
                       
               
                         
                 
                                     
                             
                         
                             
           
                              
         
                                   
       
     
           
  }
}
/* #pragma merger("0","022.quotearg.o.i","") */
char const *const quoting_style_args[8];
                                              
                                                                   
                                         
                                              
                                   
                                                               
                                                                 
                                                                       
                              
                                   
                                
                                                                      
                                                       
                                                                 
                                                               
                                           
                                          
                                        
                                               
                                    
                                         
                                         
                                          
                                  
                                                  
                                                             
                                                             
                                                             
                                 
                                                      
struct quoting_options *clone_quoting_options(struct quoting_options *o___0) {
  int e;
           
  struct quoting_options *p;
                
  int *tmp___1;
  struct quoting_options *tmp___2;
  {
    {
                              
               
                                    
                                            
    }
               
                      
            
                                         
      
    {
      *p = *tmp___2;
      tmp___1 = __errno_location();
      *tmp___1 = e;
    }
    return (p);
  }
}
void set_quoting_style(struct quoting_options *o___0, enum quoting_style s) {
  struct quoting_options *tmp;
  {
               
                  
            
                                     
      
    tmp->style = s;
    return;
  }
}
                                                                   
                   
         
            
        
                              
   
                          
                
                  
            
                                     
     
                                                                       
                                                           
                          
                                 
               
   
 
                                                                           
                          
            
                   
   
     
                           
                                      
     
                                                             
                                  
                           
       
     
                         
   
  
static size_t quotearg_buffer_restyled(char *buffer___2, size_t buffersize,
                                       char const *arg, size_t argsize,
                                       enum quoting_style quoting_style,
                                       struct quoting_options const *o___0) {
          
             
                           
                          
                        
                     
             
                   
                      
                   
                      
                  
                    
              
           
                
                                 
                    
            
               
                 
          
              
              
              
                 
              
              
                    
                    
                    
                    
                    
  {
    {
                      
                                    
                                   
                            
                                     
                                  
     
     
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                                              
                    
       
                          
             /* CIL Label */
    {
                
                                      
                               
                                           
         
              
                         
       
                 /* CIL Label */;
    }
                           
                          
                                   
                        
                          
                           
                        
                            
                           
     
                                                  
                     
                                                   
                      
                          
     
       
                   
                                            
                               
                                 
           
           
                       
                                                
                                     
                                                          
               
                    
                                   
             
                                           
           
                         
         
                                       
       
       
                              
                             
                                                
       
                        
                            
     
                
                                          
                               
                                           
         
              
                             
       
                                     
     
                         
                                   
                        
                                   
                        
                  /* CIL Label */;
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
                                                                      
                                                                       
                                
                                                        
                                           
                                                                       
                                                                        
        
           
                  
                  
                
                
              
            
               
                 
                
               
              
   
     
                               
               
                           
     
                
       
                
       
     
                       
                   
                                                
                     
              
                     
       
                                                            
         
                       
         
       
                                                                 
         
                                              
                                              
                              
         
       
       
                 
                                                                            
                                            
                                             
                                                                
                    
       
     
     
                                 
                               
                                                                  
                      
     
                        
                         
                                 
                                                         
         
                            
         
       
       
                                
                              
                                 
                                                          
       
     
     
                                   
                   
     
                 
   
 
                                          
            
   
     
                               
                             
                                                                      
     
                 
   
  
char *quotearg(char const *arg) {
            
  {
    {                           }
                 
  }
}
                            
                                                      
                               
                   
   
     
                          
                                                                                
     
                   
   
  
char *quotearg_n_style(int n, enum quoting_style s, char const *arg) {
                              
                             
                
                   
                   
  {
    {
                                         
                  
                                                      
                                                                             
    }
                     
  }
}
                                              
                                 
            
                   
   
     
                                        
                                        
                                                  
                                                                           
     
                 
   
  
char *quotearg_colon(char const *arg) {
            
  {
    {                                      }
                 
  }
}
/* #pragma merger("0","023.quote.o.i","") */
/* #pragma merger("0","024.safe-read.o.i","") */
                                                            
size_t safe_read(int fd, void *buf, size_t count) {
  ssize_t result;
           
  {
                              
                                 
      
    {
                  
                      /* CIL Label */;
        { result = read(fd, buf, count); }
                           
          {
                                     
          }
                            
                             
            
                 
                          
          
        
    while_break: /* CIL Label */;
    }
    return ((size_t)result);
  }
}
/* #pragma merger("0","025.safe-write.o.i","") */
                                                              
size_t safe_write(int fd, void const *buf, size_t count) {
  ssize_t result;
           
  {
                              
                                 
      
    {
                  
                      /* CIL Label */;
        { result = write(fd, buf, count); }
                           
          {
                                     
          }
                            
                             
            
                 
                          
          
        
    while_break: /* CIL Label */;
    }
    return ((size_t)result);
  }
}
/* #pragma merger("0","026.save-cwd.o.i","") */
                                                                
                                                          
                    
                                   
int save_cwd(struct saved_cwd *cwd) {
  {
                  
                                    
                              
       
                                     
       
                          
                   
       
      
                              
       
                              
       
                                                                   
                   
       
      
    return (0);
  }
}
int restore_cwd(struct saved_cwd const *cwd) {
         
              
  {
                             
       
                                     
       
                       
            
                                                   
                           
      
  }
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
               
               
               
              
               
  int tmp___7;
  int tmp___8;
  {
    {
                              
      used = (size_t)0;
      dirp = opendir(dir);
    }
    if ((unsigned long)dirp == (unsigned long)((void *)0)) {
      return ((char *)((void *)0));
    }
    {
      tmp = xmalloc(allocated);
      name_space = (char *)tmp;
                                  
                   
    }
    {
      while (1) {
                      /* CIL Label */;
        { dp = readdir(dirp); }
        if (!((unsigned long)dp != (unsigned long)((void *)0))) {
          goto while_break;
        }
        entry = (char const *)(dp->d_name);
        if ((int const) * (entry + 0) != 46) {
          tmp___8 = 0;
        } else {
                                               
                        
                  
                        
            
          tmp___8 = tmp___7;
        }
        if ((int const) * (entry + tmp___8) != 0) {
          {
            tmp___1 = strlen(entry);
            entry_size = tmp___1 + 1UL;
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
                                  
                            
                               
    }
                      
       
                                     
                              
       
      
                         
       
                                 
                                     
                              
       
                                   
      
    return (name_space);
  }
}
/* #pragma merger("0","028.stripslash.o.i","") */
int strip_trailing_slashes(char *path) {
  char *base;
            
  char *base_lim;
  size_t tmp___0;
  int had_slash;
  {
    {
                                         
                 
      tmp___0 = base_len((char const *)base);
      base_lim = base + tmp___0;
      had_slash = (int)*base_lim;
                               
    }
    return (had_slash);
  }
}
/* #pragma merger("0","029.xgetcwd.o.i","") */
                                                                   
                                                                               
char *xgetcwd(void) {
           
            
               
  {
    {
                                                  
                
    }
              
       
                                     
       
                           
         
                       
         
       
     
                 
  }
}
/* #pragma merger("0","02a.xmalloc.o.i","") */
                                          
                                      
      
                                                                              
                                                                 
                                                                             
                                                   
                                              
                                                                         
                                                                         
                                                                         
                                                                         
                        
                                                    
void xalloc_die(void) {
            
  {
                          
       
                              
       
      
    {
                                                
                                             
              
    }
  }
}
__inline static void *xnmalloc_inline(size_t n, size_t s) {
  void *p;
          
  {
                                             
               
            
               
      
                               
      {
                     
      }
             
      { p = malloc(n * s); }
              
         
                       
         
        
      
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
          
  {
                                             
               
            
               
      
                               
      {
                     
      }
             
      { p = realloc(p, n * s); }
              
         
                       
         
        
      
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
                                                                     
                                                                          
                                                                           
      
                                                                               
                                                                            
                                                                         
                                                          
                                               
                                                                       
   
                                                                  
                                
                               
     
                                      
                             
   
 
                                                                      
                                                       
                   
                   
              
   
                          
     
                 
                                      
                        
                
                       
                           
         
         
                                       
                                                                      
         
       
                                 
     
                 
   
  
strtol_error xstrtoul(char const *s, char **ptr, int strtol_base,
                      unsigned long *val, char const *valid_suffixes) {
             
           
                    
                  
                
                                 
               
                
               
               
           
               
                        
                
                
  {
                          
                          
                                 
         
                        
                                                      
                                                                             
                          
         
       
            
       
                                                              
                                                                               
                                        
       
      
             
              
            
                 
     
          
     
                 
                                      
                                      
                                                                            
                           
         
            
       
                                 
     
                                
                               
     
     
                                   
                   
                                                      
                                                               
     
                                                
                           
                    
           
                                                         
           
                        
                      
                  
                                     
           
                
                                   
         
              
                                 
       
            
                                       
                          
         
                                       
         
                             
                                   
         
                              
       
     
                          
                 
                   
     
                          
       
                    
                     
                                                     
       
                     
                   
                                                        
       
                                                
                    
         
                                            
                          
           
                                           
                         
           
                                           
                         
           
                            
                                 
                                           
                          
           
                            
                                
                                
                      
                     
                            
                                      
         
       
       
                               
                       
         
                               
                           
         
                               
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                        
         
                               
                       
         
                                
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                       
         
                               
                       
         
                            
                               
       
                                            
       
                              
                                   
       
                                             
       
                              
                              
                                   
                              
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                               
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                                
       
                                          
       
                              
                               
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                     
                   
                                                        
                                        
       
                                                                       
                     
                  
                                                     
       
     
               
                 
  }
}
/* #pragma merger("0","02e.xstrtoumax.o.i","") */
                                  
                                                                             
                                                                          
                                                           
                                                                   
   
                                                                  
                                
                               
     
                                  
                             
   
 
                                                                               
                   
                   
              
   
                          
     
                 
                                      
                        
                
                       
                           
         
         
                                       
                                                                      
         
       
                                 
     
                 
   
  
strtol_error xstrtoumax(char const *s, char **ptr, int strtol_base,
                        uintmax_t *val, char const *valid_suffixes) {
             
           
                
                  
                
                                 
               
                
               
               
           
               
                        
                
                
  {
                          
                          
                                 
         
                        
                                                      
                                                                             
                            
         
       
            
       
                                                              
                                                                               
                                          
       
      
             
              
            
                 
     
          
     
                 
                                      
                                      
                                                                            
                           
         
            
       
                                 
     
                                
                               
     
     
                                   
                   
                                                        
                                                                 
     
                                                
                           
                    
           
                                                         
           
                        
                               
                  
                                     
           
                
                                   
         
              
                                 
       
            
                                       
                          
         
                                       
         
                             
                                   
         
                              
       
     
                          
                 
                   
     
                          
       
                    
                     
                                                     
       
                     
                   
                                                        
       
                                                
                    
         
                                            
                          
           
                                           
                         
           
                                           
                         
           
                            
                                 
                                           
                          
           
                            
                                
                                
                      
                     
                            
                                      
         
       
       
                               
                       
         
                               
                           
         
                               
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                        
         
                               
                       
         
                                
                       
         
                               
                       
         
                               
                       
         
                                
                       
         
                                
                        
         
                               
                       
         
                               
                       
         
                            
                               
       
                                            
       
                              
                                   
       
                                             
       
                              
                              
                                   
                              
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                               
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                
                                
       
                                                         
       
                              
                                
       
                                          
       
                              
                               
       
                                                         
       
                              
                               
       
                                                         
       
                              
                                     
                   
                                                        
                                        
       
                                                                       
                     
                  
                                                     
       
     
               
                 
  }
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
