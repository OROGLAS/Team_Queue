#include <iostream>
#include <queue>

void showQueueInfo(std::queue<int>& q) {
    if (q.empty()) {
        std::cout << "Очередь пуста." << std::endl;// Проверка на пуст
        return;
    }

    // Вывод количества элементов в очереди
    std::cout << "Количество элементов в очереди: " << q.size() << std::endl;

    // Вывод первого элемента очереди (головы)
    std::cout << "Первый элемент очереди (голова): " << q.front() << std::endl;

    // Вывод последнего элемента очереди (хвоста)
    std::queue<int> tempQueue = q;
    int lastElement;
    while (!tempQueue.empty()) {
        lastElement = tempQueue.front();
        tempQueue.pop();
    }
    std::cout << "Последний элемент очереди (хвост): " << lastElement << std::endl;
