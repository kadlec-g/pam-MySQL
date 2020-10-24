#include "context.h"

extern pam_mysql_err_t pam_mysql_read_config_file(pam_mysql_ctx_t *ctx,
        const char *path);

extern pam_mysql_err_t pam_mysql_get_option(pam_mysql_ctx_t *ctx, const char **pretval, int *to_release, const char *name, size_t name_len);

extern pam_mysql_err_t pam_mysql_format_string(pam_mysql_ctx_t *ctx,
        pam_mysql_str_t *pretval, const char *template, int mangle, ...);