using System;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

namespace calculator.Pages;

public class IndexModel : PageModel
{
    private readonly ILogger<IndexModel> _logger;
    public string msg { get; set; }

    public IndexModel(ILogger<IndexModel> logger)
    {
        _logger = logger;
    }

    public void OnPostAdd(int X, int Y)
    {
        msg = Convert.ToString(X + Y);
    }
    public void OnPostDelete(int X, int Y)
    {
        msg = Convert.ToString(X - Y);
    }
    public void OnPostDivide(int X, int Y)
    {
        msg = Convert.ToString(X / Y);
    }
    public void OnPostMultiply(int X, int Y)
    {
        msg = Convert.ToString(X * Y);
    }

    public string result { get; set; }
}
