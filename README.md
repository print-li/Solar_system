# Solar_system
learning

## A：
1.具有基本体素(立方体、球、圆柱、圆锥、多面棱柱、多面棱台)的建模表达能力

## B：
1.具有基本三维网格导入导出功能(建议OBJ格式）

2.具有基本几何变换功能(旋转、平移、缩放等）

## C：
1.有基本材质、纹理的显示和编辑能力

2.具有基本的光源照明要求，并实现基本的光源编辑如调整光源的位置，光强等参数);

## D：
1.地多帧连续绘制指读取连续的OBJ文件(或式的模型文件)，对其网格进行多次的绘制;

2.简单的平移、旋转、缩放等不能视为动画播放。

```
SolarSystem/
├── src/
│   ├── core/                  # 公共模块
│   │   ├── Mesh.h             # 网格数据结构定义
│   │   ├── Mesh.cpp           # 网格操作方法实现
│   │   ├── Shader.h           # 着色器管理类
│   │   ├── Shader.cpp         # 着色器加载和编译
│   │   ├── Camera.h           # 相机控制类
│   │   ├── Camera.cpp         # 相机变换实现
│   │   ├── Texture.h          # 纹理加载类
│   │   ├── Texture.cpp        # 纹理加载实现
│   │   ├── Common.h           # 公共常量和工具函数
│   │   └── Common.cpp         # 工具函数实现
│   │
│   ├── personA/               # A的代码 - 基本体素建模
│   │   ├── Primitives.h       # 基本体素类声明
│   │   ├── Primitives.cpp     # 体素生成实现
│   │   └── A_Module_Test.cpp  # A的测试代码
│   │
│   ├── personB/               # B的代码 - 导入导出和变换
│   │   ├── GeometryIO.h       # 模型导入导出接口
│   │   ├── GeometryIO.cpp     # OBJ格式导入导出实现
│   │   ├── Transform.h        # 几何变换类
│   │   ├── Transform.cpp      # 变换矩阵计算
│   │   └── B_Module_Test.cpp  # B的测试代码
│   │
│   ├── personC/               # C的代码 - 材质和光照
│   │   ├── Material.h         # 材质属性定义
│   │   ├── Material.cpp       # 材质管理
│   │   ├── Lighting.h         # 光源类定义
│   │   ├── Lighting.cpp       # 光源管理
│   │   └── C_Module_Test.cpp  # C的测试代码
│   │
│   └── personD/               # D的代码 - 动画播放
│       ├── AnimationPlayer.h  # 动画播放器类声明
│       ├── AnimationPlayer.cpp# 动画播放器实现
│       └── D_Module_Test.cpp  # D的测试代码
│
├── resources/                 # 资源文件
│   ├── models/
│   │   ├── planets/           # 行星模型
│   │   │   ├── sun.obj
│   │   │   ├── earth.obj
│   │   │   └── ...
│   │   └── animations/        # 动画序列
│   │       ├── sun_eruption/
│   │       │   ├── frame_000.obj
│   │       │   ├── frame_001.obj
│   │       │   └── ...
│   │       └── orbit_path/
│   │           ├── frame_000.obj
│   │           └── ...
│   └── textures/
│       ├── sun.jpg
│       ├── earth.jpg
│       ├── moon.jpg
│       └── ...
│
├── CMakeLists.txt             # 项目构建配置
├── main.cpp                   # 主程序入口
└── README.md                  # 项目说明文档
```
