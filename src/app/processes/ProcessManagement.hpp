#ifndef PROCESS_MANAGEMENT
#define PROCESS_MANAGEMENT
#include "Task.hpp"
#include <queue>
#include <memory>

class ProcessManagement{

    public:
        ProcessManagement();
        bool submitToQueue(unique_ptr<Task> task);
        void executeTasks();

    private:
        queue<unique_ptr<Task>> taskQueue;
};

#endif