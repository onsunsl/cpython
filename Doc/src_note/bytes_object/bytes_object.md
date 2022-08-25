### bytes 单字节缓存池

参考[bytesobject.c](../../../Objects/bytesobject.c) 中的 `static PyBytesObject *characters[UCHAR_MAX + 1];` 它在python启动的
时候时空， 可存256个单字节对象，用于参与高频的单字节运算。`PyBytes_FromStringAndSize` 函数是创建c char 到bytes 的入口， 内部会如果是字节会
直接返回缓存池子内地的单字节对象指针，其他长度的bytes 对象会创建一个新的对象

根据上面的说法，运算时候需要考虑效率问题：
在bytes 内部实现时候， 会把单个字符的bytes对象缓存在内存，在运算的时候优先取内存， 在作运算时候会创建新的内存对象，所以避免+=运算， 从而避免
内存频繁申请和释放

将给定数生成范围内的字符串

```python
from typing import List
def bad(x: int):
    s = ""
    for _ in range(0, x):
        # 这里每次都会new 一个新bytes 对象
        s += str(_)
    return s


def good(x: int):
    buf: List[str] = []
    for _ in range(0, x):
        # 这里每次会扩建l
        buf.append(str(_))
    return "".join(buf)


def better(x: int):
    return "".join(str(c) for c in range(0, x))


def best(x: int):
    return "".join(map(str, range(0, x)))
```