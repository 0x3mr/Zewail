
using System.Collections.Generic;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.Data.SqlClient;

namespace LabPractice.Pages;

public class IndexModel : PageModel
{
    private readonly ILogger<IndexModel> _logger;
    private readonly DatabaseService _databaseService;

    public List<Worker> Workers { get; private set; } = new();

    public IndexModel(ILogger<IndexModel> logger, DatabaseService databaseService)
    {
        _logger = logger;
        _databaseService = databaseService;
    }

    public void OnGet()
    {
        Workers = _databaseService.GetWorkers();
    }
}

public class Worker
{
    public int Id { get; set; }
    public string Nmae { get; set; }
}
public class DatabaseService
{
    private readonly ILogger<DatabaseService> _logger;

    public DatabaseService(ILogger<DatabaseService> logger)
    {
        _logger = logger;
    }

    public List<Worker> GetWorkers()
    {
        string connectionString = "Data Source=ServerName; Initial Catalog=TestDB; Integrated Security = True";
        var workers = new List<Worker>();

        SqlConnection connection = new SqlConnection(connectionString);
        string queryString = "SELECT Id, Name FROM worker";

        try
        {
            connection.Open();
            _logger.LogInformation("Database connected successfully!");
            SqlCommand cmd = new SqlCommand(queryString, connection);
            SqlDataReader reader = cmd.ExecuteReader();
            while (reader.Read())
            {
                Console.WriteLine(reader[0].ToString() + " " + reader[1].ToString());
            }
        }
        catch (SqlException e)
        {
            Console.WriteLine(e.ToString());
        }
        finally
        {
            connection.Close();
            Console.ReadKey();
        }

        return workers;
    }
}
