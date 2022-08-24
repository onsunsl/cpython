
### 小整形对象池

高频常用的小整数对象池子，在Py初始化后已经创建并存入small_ints， 可以
避免高频内存申请和释放，默认是-5 ~ 256, 全局唯一，内存id一致

#### 运算&id
小型的整型运算时候`不会new`新的PyLongObject 对象, 相同值对象`id内存地址`是一致的：

```
In [27]: a, b, c = 1, 2, 3
In [28]: d = a + b

In [29]: id(d)
Out[29]: 2082125840

In [30]: id(c)
Out[30]: 2082125840

In [31]: d is c
Out[31]: True
```

非小型的整型运算时候`会new` 新的PyLongObject 对象, 分两种： 
> 1.同值int在同一个编译单元或函数里的int id一致, 
> 2.同值int在不同编译单元或者函数里的int id不一致

```
In [32]: a, b, c = 100, 200, 300

In [33]: id(a)
Out[33]: 2082127392

In [34]: id(b)
Out[34]: 2082128992

In [35]: id(c)
Out[35]: 93477392

In [36]: d = a + b

In [37]: d is c
Out[37]: False

In [38]: d == c
Out[38]: True

In [39]: id(d)
Out[39]: 95117552
```

