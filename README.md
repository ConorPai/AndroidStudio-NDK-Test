# AndroidStudio NDK开发、调试测试工程

## 验证内容：
1.支持NDK调试

2.支持native方法快速创建jni封装（但是没有加入extern "C"声明，会导致native方法找不到jni，进而报错。需要手动在JNI上加入extern "C"）

3.支持通过修改CMakeLists.txt文件创建多个so库

4.jni支持调用其它so库，并且可以调试

## 演示视频：
[演示视频](http://v.youku.com/v_show/id_XMjc5OTM0NTA3Mg==.html?spm=a2h3j.8428770.3416059.1)
