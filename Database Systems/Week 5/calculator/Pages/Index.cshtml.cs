using System;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;

namespace calculator.Pages
{
    public class IndexModel : PageModel
    {
        private readonly ILogger<IndexModel> _logger;
        public string msg { get; set; }

        public IndexModel(ILogger<IndexModel> logger)
        {
            _logger = logger;
        }

        // Handle addition
        public void OnPostAdd(int X, int Y)
        {
            try
            {
                msg = Convert.ToString(X + Y);
            }
            catch (Exception ex)
            {
                msg = "Error during addition: " + ex.Message;
            }
        }

        // Handle subtraction
        public void OnPostDelete(int X, int Y)
        {
            try
            {
                msg = Convert.ToString(X - Y);
            }
            catch (Exception ex)
            {
                msg = "Error during subtraction: " + ex.Message;
            }
        }

        // Handle division with division by zero check
        public void OnPostDivide(int X, int Y)
        {
            try
            {
                if (Y == 0)
                {
                    msg = "Error: Division by zero is not allowed.";
                }
                else
                {
                    msg = Convert.ToString(X / Y);
                }
            }
            catch (Exception ex)
            {
                msg = "Error during division: " + ex.Message;
            }
        }

        // Handle multiplication
        public void OnPostMultiply(int X, int Y)
        {
            try
            {
                msg = Convert.ToString(X * Y);
            }
            catch (Exception ex)
            {
                msg = "Error during multiplication: " + ex.Message;
            }
        }

        public string result { get; set; }
    }
}
