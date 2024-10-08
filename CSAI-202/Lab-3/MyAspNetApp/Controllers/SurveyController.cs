using Microsoft.AspNetCore.Mvc;

namespace MyAspNetApp.Controllers
{
    public class SurveyController : Controller
    {
        public IActionResult Index()
        {
            ViewData["Title"] = "Survey";
            return View();
        }

        [HttpPost]
        public IActionResult Result(string name, string[] hobbies)
        {
            ViewData["Name"] = name;
            ViewData["Hobbies"] = hobbies;
            return View();
        }
    }
}
