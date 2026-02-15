using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

public class myNewPage : PageModel
{
    [BindProperty]
    public string FirstName { get; set; }
    
    [BindProperty]
    public string LastName { get; set; }

    public IActionResult OnPost()
    {
        return RedirectToPage("results", new { FirstName, LastName });
    }
}
