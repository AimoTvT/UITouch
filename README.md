# UETouchPlugin
> - 名字: UI触控
> - 描述: 触控设备用的UI部件,有轮盘,高级轮盘,按钮,触控,如安卓,苹果,触控手机用的游戏操控,电脑需要打开鼠标用于触控

## Engine version (>= 5.3.0)

> - Copyright: Aimo\_皑墨
> - Open source protocol: MIT License
> - Open Source Date: October 2, 2022
> - QQ: 2422489737
> - wechat: Aimo_TvT
> - Email: 2422489737@qq.com
> - BiLiBiLi (哔哩哔哩) address: https://space.bilibili.com/146962867
> - Tutorial Video (Bilibili): https://www.bilibili.com/video/BV1dg411e7SZ
> - We welcome the contributions of powerful movers and movers to join this plugin
> - Build powerful plugins together!!


## 引擎版本( >= 5.3.0 )

> - 版权所有权: Aimo\_皑墨
> - 开源协议: MIT License
> - 开源时间: 2022 年 10 月 2 号
> - QQ: 2422489737
> - 微信: Aimo_TvT
> - 邮箱: 2422489737@qq.com
> - BiLiBiLi(哔哩哔哩)地址: https://space.bilibili.com/146962867
> - 教程视频(哔哩哔哩)地址: https://www.bilibili.com/video/BV1dg411e7SZ
> - 欢迎有实力的大佬/萌新加入本插件的贡献
> - 一起打造强大的插件!!!



> - # 爱心开发不易, 请开发者们喝茶吧 ------- 0.0


> ## 触摸组件(UTouchComponent)
>
> - 描述: 用于接收所有触控的组件,只能绑定在控制器里面,并控制器里添加增强输入(EnhancedInputMappingContextTouchs)
>
>> - [x] 接收所有触控控件的控制权
>> - [x] 按照优先权,分配给优先度大的控件

> ## 输入修饰符添加标量(UInputModifierAddScalar)
>
> - 描述: 增强输入添加的修饰,用来判断输入的触控索引
>
>> - [x] 输入的添加值修改

> ## 触摸控件父类(UTouchWidget)
>
> - 描述: 基本上触控控件的父类 
>
>> - [x] 绑定触摸组件
>> - [x] 接收触控组件的委托
> ## 触摸轮盘控件(UTouchJoystickWidget),继承触摸控件父类(UTouchWidget)
>
> - 描述: 一般用于玩家移动,或MMO的技能释放 
>
>> - [x] XY的值输出 最小:-1 ~ 最大:1,Z是触控索引,0是释放索引
>> - [x] 实时移动委托
> ## 触摸高级轮盘控件(UTouchAdvancedJoystickWidget),继承触摸控件父类(UTouchWidget)
>
> - 描述: 一般用于玩家移动,带加速的输出
>
>> - [x] 最小:-1 ~ 最大:2 //2是加速后的输出,Z是触控索引,0是释放索引
>> - [x] 加速的图片显示
> ## 触摸按钮控件(UTouchButtonWidget),继承触摸控件父类(UTouchWidget)
>
> - 描述: 按钮,用于开火,可搭配控制控件,完成开火视角移动,压枪等操作
>
>> - [x] 按下后输出,XY是按下2D位置,Z是触控索引,0是释放索引
>> - [x] 可以设置切换模式,按一下开/关
> ## 触摸控制控件(UTouchControlWidget),继承触摸控件父类(UTouchWidget)
>
> - 描述: 一般用于玩家视角移动
>
>> - [x] XY是触摸后前后移动的差值
>> - [x] 支持多触控
> ## 触摸检测控件(UTouchDetectionWidget),继承触摸控件父类(UTouchWidget)
>
> - 描述: 一般用于mmo的技能取消 
>
>> - [x] 支持触控检测
>> - [x] 触控触发显示