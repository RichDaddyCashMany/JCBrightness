# JCBrightness
仿支付宝二维码页面，多线程逐步调整屏幕亮度。

![a.png](http://upload-images.jianshu.io/upload_images/2742645-ad395160956b1914.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

##使用方法

```objc
// 设置亮度
[JCBrightness graduallySetBrightness:0.9];
```
```objc
// 恢复亮度
[JCBrightness graduallyResumeBrightness];
```

实现原理：<http://www.jianshu.com/p/956299d94dfc>
