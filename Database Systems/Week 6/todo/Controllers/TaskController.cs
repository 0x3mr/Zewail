using Microsoft.AspNetCore.Mvc;

public class TaskController : Controller
{
    private static List<TodoTask> _tasks = new List<TodoTask>();
    private static int _nextId = 1;

    public IActionResult Index()
    {
        var viewModel = new TaskViewModel
        {
            Tasks = _tasks
        };
        return View(viewModel);
    }

    public IActionResult Create()
    {
        return View();
    }

    [HttpPost]
    public IActionResult Create(TodoTask task)
    {
        if (ModelState.IsValid)
        {
            task.Id = _nextId++;
            task.CreatedDate = DateTime.Now;
            task.IsCompleted = false;
            _tasks.Add(task);
            return RedirectToAction("Index");
        }
        return View(task);
    }
}