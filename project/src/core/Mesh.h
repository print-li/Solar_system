#pragma once
#include <vector>
#include <glm/glm.hpp>

struct Vertex {
    glm::vec3 Position;
    glm::vec3 Normal;
    glm::vec2 TexCoords;
};

class Mesh {
public:
    std::vector<Vertex> vertices;
    std::vector<unsigned int> indices;
    
    // 渲染相关数据
    unsigned int VAO, VBO, EBO;
    
    Mesh(const std::vector<Vertex>& vertices, 
         const std::vector<unsigned int>& indices);
    void Draw() const;
    
private:
    void setupMesh();
};