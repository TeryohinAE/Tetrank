#include "text.hpp"
#include <glm/gtc/type_ptr.hpp>









std::vector<glm::mat4> A = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> a = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> B = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> b = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> C = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> c = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> D = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> d = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> E = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> e = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> F = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0))
};
std::vector<glm::mat4> f = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> G = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> g = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -2.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -2.0, 0.0))
};
std::vector<glm::mat4> H = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> h = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> I = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> i = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> J = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> j = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -2.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -2.0, 0.0))
};
std::vector<glm::mat4> K = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> k = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> L = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> l = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> M = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> m = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> N = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> n = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> O = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> o = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> P = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0))
};
std::vector<glm::mat4> p = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -2.0, 0.0))
};
std::vector<glm::mat4> Q = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.6, 0.0))
};
std::vector<glm::mat4> q = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -2.0, 0.0))
};
std::vector<glm::mat4> R = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> r = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> S = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> s = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> T = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0))
};
std::vector<glm::mat4> t = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
};
std::vector<glm::mat4> U = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> u = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> V = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
};
std::vector<glm::mat4> v = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> W = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> w = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> X = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> x = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> Y = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0))
};
std::vector<glm::mat4> y = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -2.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -2.0, 0.0))
};
std::vector<glm::mat4> Z = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0))
};
std::vector<glm::mat4> z = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};

std::vector<glm::mat4> rus_A = A;
std::vector<glm::mat4> rus_a = a;
std::vector<glm::mat4> rus_B = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> rus_b = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> rus_V = B;
std::vector<glm::mat4> rus_v = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> rus_G = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_g = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_D = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_d = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_E = E;
std::vector<glm::mat4> rus_e = e;
std::vector<glm::mat4> rus_YO = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 2.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 2.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_yo = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_J = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_j = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_Z = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> rus_z = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> rus_I = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_i = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_I_krat = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 2.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 2.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_i_krat = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_K = K;
std::vector<glm::mat4> rus_k = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_L = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_l = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_M = M;
std::vector<glm::mat4> rus_m = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_N = H;
std::vector<glm::mat4> rus_n = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_O = O;
std::vector<glm::mat4> rus_o = o;
std::vector<glm::mat4> rus_P = { 
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_p = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_R = P;
std::vector<glm::mat4> rus_r = p;
std::vector<glm::mat4> rus_S = C;
std::vector<glm::mat4> rus_s = c;
std::vector<glm::mat4> rus_T = T;
std::vector<glm::mat4> rus_t = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0))
};
std::vector<glm::mat4> rus_Y = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> rus_y = y;
std::vector<glm::mat4> rus_F = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0))
};
std::vector<glm::mat4> rus_f = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.6, 0.0))
};
std::vector<glm::mat4> rus_X = X;
std::vector<glm::mat4> rus_x = x;
std::vector<glm::mat4> rus_C = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -1.6, 0.0))
};
std::vector<glm::mat4> rus_c = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -1.6, 0.0))
};
std::vector<glm::mat4> rus_CH = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_ch = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_SH = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_sh = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_SCH = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -1.6, 0.0))
};
std::vector<glm::mat4> rus_sch = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -1.6, 0.0))
};
std::vector<glm::mat4> rus_SOLID_ZNAK = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_solid_znak = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> rus_SOFT_ZNAK_I = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.675, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.675, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.675, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.675, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.675, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.675, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.675, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.675, -1.2, 0.0))
};
std::vector<glm::mat4> rus_soft_znak_I = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -1.2, 0.0))
};
std::vector<glm::mat4> rus_SOFT_ZNAK = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> rus_soft_znak = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> rus_AE = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> rus_ae = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0))
};
std::vector<glm::mat4> rus_U = { 
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_u = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.5625, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.5625, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};
std::vector<glm::mat4> rus_YA = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> rus_ya = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.1125, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.1125, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.3375, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.3375, -1.2, 0.0))
};

std::vector<glm::mat4> znak_0 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> znak_1 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> znak_2 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> znak_3 = rus_Z;
std::vector<glm::mat4> znak_4 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};
std::vector<glm::mat4> znak_5 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> znak_6 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> znak_7 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0))
};
std::vector<glm::mat4> znak_8 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> znak_9 = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0))
};
std::vector<glm::mat4> znak_equally = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -0.4, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -0.4, 0.0))
};
std::vector<glm::mat4> znak_short_dash = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0))
};
std::vector<glm::mat4> znak_long_dash = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, 0.0, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, 0.0, 0.0))
};
std::vector<glm::mat4> znak_dot = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0))
};
std::vector<glm::mat4> znak_comma = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -0.8, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.6, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -2.0, 0.0))
};
std::vector<glm::mat4> znak_underscore = {
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.45, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(-0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.0, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.225, -1.2, 0.0)),
	glm::translate(glm::mat4(1.0f), glm::vec3(0.45, -1.2, 0.0))
};


Text_to_matrix::Text_to_matrix(std::string rus_alphabet)
{
	alphabet.emplace('A', A);
	alphabet.emplace('a', a);
	alphabet.emplace('B', B);
	alphabet.emplace('b', b);
	alphabet.emplace('C', C);
	alphabet.emplace('c', c);
	alphabet.emplace('D', D);
	alphabet.emplace('d', d);
	alphabet.emplace('E', E);
	alphabet.emplace('e', e);
	alphabet.emplace('F', F);
	alphabet.emplace('f', f);
	alphabet.emplace('G', G);
	alphabet.emplace('g', g);
	alphabet.emplace('H', H);
	alphabet.emplace('h', h);
	alphabet.emplace('I', I);
	alphabet.emplace('i', i);
	alphabet.emplace('J', J);
	alphabet.emplace('j', j);
	alphabet.emplace('K', K);
	alphabet.emplace('k', k);
	alphabet.emplace('L', L);
	alphabet.emplace('l', l);
	alphabet.emplace('M', M);
	alphabet.emplace('m', m);
	alphabet.emplace('N', N);
	alphabet.emplace('n', n);
	alphabet.emplace('O', O);
	alphabet.emplace('o', o);
	alphabet.emplace('P', P);
	alphabet.emplace('p', p);
	alphabet.emplace('Q', Q);
	alphabet.emplace('q', q);
	alphabet.emplace('R', R);
	alphabet.emplace('r', r);
	alphabet.emplace('S', S);
	alphabet.emplace('s', s);
	alphabet.emplace('T', T);
	alphabet.emplace('t', t);
	alphabet.emplace('U', U);
	alphabet.emplace('u', u);
	alphabet.emplace('V', V);
	alphabet.emplace('v', v);
	alphabet.emplace('W', W);
	alphabet.emplace('w', w);
	alphabet.emplace('X', X);
	alphabet.emplace('x', x);
	alphabet.emplace('Y', Y);
	alphabet.emplace('y', y);
	alphabet.emplace('Z', Z);
	alphabet.emplace('z', z);

	int i = 0;
	alphabet.emplace(rus_alphabet[i++], rus_A);
	alphabet.emplace(rus_alphabet[i++], rus_a);
	alphabet.emplace(rus_alphabet[i++], rus_B);
	alphabet.emplace(rus_alphabet[i++], rus_b);
	alphabet.emplace(rus_alphabet[i++], rus_V);
	alphabet.emplace(rus_alphabet[i++], rus_v);
	alphabet.emplace(rus_alphabet[i++], rus_G);
	alphabet.emplace(rus_alphabet[i++], rus_g);
	alphabet.emplace(rus_alphabet[i++], rus_D);
	alphabet.emplace(rus_alphabet[i++], rus_d);
	alphabet.emplace(rus_alphabet[i++], rus_E);
	alphabet.emplace(rus_alphabet[i++], rus_e);
	alphabet.emplace(rus_alphabet[i++], rus_YO);
	alphabet.emplace(rus_alphabet[i++], rus_yo);
	alphabet.emplace(rus_alphabet[i++], rus_J);
	alphabet.emplace(rus_alphabet[i++], rus_j);
	alphabet.emplace(rus_alphabet[i++], rus_Z);
	alphabet.emplace(rus_alphabet[i++], rus_z);
	alphabet.emplace(rus_alphabet[i++], rus_I);
	alphabet.emplace(rus_alphabet[i++], rus_i);
	alphabet.emplace(rus_alphabet[i++], rus_I_krat);
	alphabet.emplace(rus_alphabet[i++], rus_i_krat);
	alphabet.emplace(rus_alphabet[i++], rus_K);
	alphabet.emplace(rus_alphabet[i++], rus_k);
	alphabet.emplace(rus_alphabet[i++], rus_L);
	alphabet.emplace(rus_alphabet[i++], rus_l);
	alphabet.emplace(rus_alphabet[i++], rus_M);
	alphabet.emplace(rus_alphabet[i++], rus_m);
	alphabet.emplace(rus_alphabet[i++], rus_N);
	alphabet.emplace(rus_alphabet[i++], rus_n);
	alphabet.emplace(rus_alphabet[i++], rus_O);
	alphabet.emplace(rus_alphabet[i++], rus_o);
	alphabet.emplace(rus_alphabet[i++], rus_P);
	alphabet.emplace(rus_alphabet[i++], rus_p);
	alphabet.emplace(rus_alphabet[i++], rus_R);
	alphabet.emplace(rus_alphabet[i++], rus_r);
	alphabet.emplace(rus_alphabet[i++], rus_S);
	alphabet.emplace(rus_alphabet[i++], rus_s);
	alphabet.emplace(rus_alphabet[i++], rus_T);
	alphabet.emplace(rus_alphabet[i++], rus_t);
	alphabet.emplace(rus_alphabet[i++], rus_Y);
	alphabet.emplace(rus_alphabet[i++], rus_y);
	alphabet.emplace(rus_alphabet[i++], rus_F);
	alphabet.emplace(rus_alphabet[i++], rus_f);
	alphabet.emplace(rus_alphabet[i++], rus_X);
	alphabet.emplace(rus_alphabet[i++], rus_x);
	alphabet.emplace(rus_alphabet[i++], rus_C);
	alphabet.emplace(rus_alphabet[i++], rus_c);
	alphabet.emplace(rus_alphabet[i++], rus_CH);
	alphabet.emplace(rus_alphabet[i++], rus_ch);
	alphabet.emplace(rus_alphabet[i++], rus_SH);
	alphabet.emplace(rus_alphabet[i++], rus_sh);
	alphabet.emplace(rus_alphabet[i++], rus_SCH);
	alphabet.emplace(rus_alphabet[i++], rus_sch);
	alphabet.emplace(rus_alphabet[i++], rus_SOLID_ZNAK);
	alphabet.emplace(rus_alphabet[i++], rus_solid_znak);
	alphabet.emplace(rus_alphabet[i++], rus_SOFT_ZNAK_I);
	alphabet.emplace(rus_alphabet[i++], rus_soft_znak_I);
	alphabet.emplace(rus_alphabet[i++], rus_SOFT_ZNAK);
	alphabet.emplace(rus_alphabet[i++], rus_soft_znak);
	alphabet.emplace(rus_alphabet[i++], rus_AE);
	alphabet.emplace(rus_alphabet[i++], rus_ae);
	alphabet.emplace(rus_alphabet[i++], rus_U);
	alphabet.emplace(rus_alphabet[i++], rus_u);
	alphabet.emplace(rus_alphabet[i++], rus_YA);
	alphabet.emplace(rus_alphabet[i++], rus_ya);

	alphabet.emplace('0', znak_0);
	alphabet.emplace('1', znak_1);
	alphabet.emplace('2', znak_2);
	alphabet.emplace('3', znak_3);
	alphabet.emplace('4', znak_4);
	alphabet.emplace('5', znak_5);
	alphabet.emplace('6', znak_6);
	alphabet.emplace('7', znak_7);
	alphabet.emplace('8', znak_8);
	alphabet.emplace('9', znak_9);
	alphabet.emplace('=', znak_equally);
	alphabet.emplace('-', znak_short_dash);
	alphabet.emplace(rus_alphabet[i++], znak_long_dash);
	alphabet.emplace('.', znak_dot);
	alphabet.emplace(',', znak_comma);
	alphabet.emplace('_', znak_underscore);
}

std::vector<glm::mat4> Text_to_matrix::convert(std::string text)
{
	std::vector<glm::mat4> text_matrix;
	text_matrix.clear();
	float big_x_step = 1.4;
	float small_x_step = 0.725;
	float y_step = 4.0;
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] == ' ') {
			continue;
		}
		if (!alphabet.contains(text[i])) {
			text_matrix.clear();
			return text_matrix;
		}
		std::vector<glm::mat4> temp_model_matrix = alphabet[text[i]];
		for (int j = 0; j < temp_model_matrix.size(); j++) {
			if ((text.size() % 2) == 0) {
				if (i < (text.size() / 2)) {
					text_matrix.push_back(glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3((-big_x_step / 2) + (-big_x_step * ((text.size() / 2) - i - 1)), 0.0, 0.0)))
						* temp_model_matrix[j]);
				}
				else if (i >= (text.size() / 2)) {
					text_matrix.push_back(glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3((big_x_step / 2) + (big_x_step * (i - (text.size() / 2))), 0.0, 0.0)))
						* temp_model_matrix[j]);
				}
			}
			else {
				if (i < (text.size() / 2)) {
					text_matrix.push_back(glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3(-big_x_step * ((text.size() / 2) - i), 0.0, 0.0)))
						* temp_model_matrix[j]);
				}
				else if (i == (text.size() / 2)) {
					text_matrix.push_back(temp_model_matrix[j]);
				}
				else if (i > (text.size() / 2)) {
					text_matrix.push_back(glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3((big_x_step * (i - (text.size() / 2))), 0.0, 0.0)))
						* temp_model_matrix[j]);
				}
			}
		}
	}

	return text_matrix;
}







Text::Text(	std::string text, GLfloat red_color, GLfloat green_color, GLfloat blue_color, GLuint& vao, 
			std::shared_ptr<Render::Shader_Program> p_shader, std::shared_ptr<Text_to_matrix> text_to_matrix, glm::mat4 position)
	: p_shader(p_shader), position(position)
{
	std::shared_ptr<Model> temp_model = std::make_shared<Model>(vao, quantity_points_primitiv, model_matrix, this->p_shader);
	model_text = temp_model;



	color[0] = red_color;
	color[1] = green_color;
	color[2] = blue_color;

	set_new_text(text, text_to_matrix);

	vertexColorLocation = glGetUniformLocation(p_shader->get_shader_program_ID(), "Color");
	scale_matrix_location = glGetUniformLocation(p_shader->get_shader_program_ID(), "scale_matrix");
	position_matrix_location = glGetUniformLocation(p_shader->get_shader_program_ID(), "position_matrix");
}

void Text::set_new_text(std::string new_text, std::shared_ptr <Text_to_matrix> text_to_matrix)
{
	model_matrix = text_to_matrix->convert(new_text);
	model_text->set_new_model(model_matrix);
}

void Text::draw(GLuint& vao)
{
	p_shader->use();
	glUniform3f(vertexColorLocation, color[0], color[1], color[2]);
	glUniformMatrix4fv(scale_matrix_location, 1, GL_FALSE, glm::value_ptr(scale_text_model));
	glUniformMatrix4fv(position_matrix_location, 1, GL_FALSE, glm::value_ptr(position));
	model_text->draw(vao);
}

