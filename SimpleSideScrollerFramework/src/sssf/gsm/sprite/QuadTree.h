#pragma once

#include "sssf_VS\stdafx.h"
#include <array>
#include "sssf/gsm/sprite/TreeNode.h"

using std::list;

class QuadTree {
private:
	std::array<TreeNode*, 21> botHeap;

public:
	QuadTree();

	int size() {
		return botHeap.size();
	}

	int sizeOfNode(int i) {
		return botHeap[i]->getSize();
	}

	void initTree(int index, int width, int height, int x, int y);
	void clearTree();
	void generateTree(std::list<Bot*> botList);
	void addToTree(int index, Bot* bot);
	std::list<Bot*> getBotsInViewport(Viewport* viewport);
};