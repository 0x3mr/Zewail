import unittest
import sys
import os

sys.path.append(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from app import add_task, get_tasks, tasks

class TestToDoList(unittest.TestCase):
    def setUp(self):
        tasks.clear()

    def test_add_task(self):
        add_task("Buy groceries")
        self.assertEqual(tasks, ["Buy groceries"])
        self.assertEqual(len(tasks), 1)

    def test_add_multiple_tasks(self):
        add_task("Buy groceries")
        add_task("Clean the house")
        self.assertEqual(tasks, ["Buy groceries", "Clean the house"])
        self.assertEqual(len(tasks), 2)

    def test_get_tasks(self):
        add_task("Buy groceries")
        add_task("Clean the house")
        retrieved_tasks = get_tasks()
        self.assertEqual(retrieved_tasks, ["Buy groceries", "Clean the house"])
        self.assertEqual(len(retrieved_tasks), 2)

    def test_empty_task_list(self):
        self.assertEqual(tasks, [])
        self.assertEqual(len(tasks), 0)

if __name__ == '__main__':
    unittest.main()