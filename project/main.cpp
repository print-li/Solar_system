// File: main.cpp
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "personD/AnimationPlayer.h"

// 其他模块的header...

int main() {
    // 初始化GLFW
    if (!glfwInit()) return -1;

    // 创建窗口
    GLFWwindow* window = glfwCreateWindow(800, 600, "Solar System", NULL, NULL);
    glfwMakeContextCurrent(window);
    glewInit();

    // 初始化各模块
    // A::InitPrimitives();
    // B::InitImporter();
    // C::InitLighting();
    
    // D部分初始化
    AnimationPlayer animPlayer;
    animPlayer.LoadAnimationSequence("resources/models/sun_animation/frame_", 60);
    animPlayer.SetSpeed(2.0f);
    animPlayer.Play();

    // 主循环
    while (!glfwWindowShouldClose(window)) {
        float deltaTime = /* 计算帧时间 */;
        
        // 清除缓冲区
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // 更新动画
        animPlayer.Update(deltaTime);
        
        // 获取当前帧并渲染
        const Mesh& currentFrame = animPlayer.GetCurrentFrame();
        RenderMesh(currentFrame); // 需实现的渲染函数

        // 其他渲染...
        // RenderPlanets();
        // RenderLighting();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}