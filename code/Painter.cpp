#include "Tetromino.hpp"
#include "Painter.hpp"

Painter::Painter()
{
	glGenVertexArrays(1, &VAO);
}

void Painter::paint(const Tetromino& t)
{
	const auto& VBO = t.getVBO();

	glBindVertexArray(VAO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glDrawArrays(GL_TRIANGLES, 0, 6);
	//glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
}