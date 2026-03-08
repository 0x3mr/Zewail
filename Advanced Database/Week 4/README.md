CREATE TABLE Students (
    ID SERIAL PRIMARY KEY,
    Name VARCHAR(100),
    Email VARCHAR(100),
    Age INT,
    Department VARCHAR(100),
    CreatedAt TIMESTAMP DEFAULT NOW(),
    GPA NUMERIC(3,2)
);

INSERT INTO Students(Name, Age, Department, GPA)
VALUES('Amr', 20, 'SWD', 3),
      ('Ahmed', 21, 'AI', 3.6);

CREATE INDEX IDX_Students_Name
ON Students(Name);

CREATE INDEX IDX_Students_GPA
ON Students(GPA);
CLUSTER Students USING IDX_Students_GPA

-- Clustering:
-- Not Null
-- Unique

========================

-- Create database Company;
-- Create table Employees(
-- 	empID INT PRIMARY KEY,
-- 	name VARCHAR(100),
-- 	department VARCHAR(100),
-- 	salary FLOAT
-- )

CREATE INDEX idx_employees_department
ON Employees(department);

CREATE INDEX idx_employees_salary
ON Employees(salary);
CLUSTER Employees USING idx_employees_salary