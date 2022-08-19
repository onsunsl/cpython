#ifndef Py_PYFPE_H
#define Py_PYFPE_H

/*
 * These macros used to do something when Python was built with --with-fpectl(Floating point exception control),
 * but support for that was dropped in 3.7. We continue to define them though,
 * to avoid breaking API users.
 * 这两个宏是为了处理浮点异常提示的信息，在3.7版本废弃了， 为兼容宏定义为空， 成对使用
 */

#define PyFPE_START_PROTECT(err_string, leave_stmt)
#define PyFPE_END_PROTECT(v)

#endif /* !Py_PYFPE_H */
