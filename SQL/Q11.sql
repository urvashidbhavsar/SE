-- Create the 'departments' table
CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(255)
);

-- Insert sample data into 'departments'
INSERT INTO departments (department_id, department_name) VALUES
(1, 'Sales'),
(2, 'Marketing'),
(3, 'Engineering'),
(4, 'HR');

-- Create the 'employees' table
CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    employee_name VARCHAR(255),
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(department_id)
);

-- Insert sample data into 'employees'
INSERT INTO employees (employee_id, employee_name, department_id) VALUES
(101, 'Alice Smith', 1),
(102, 'Bob Johnson', 2),
(103, 'Charlie Brown', 3),
(104, 'David Wilson', 1),
(105, 'Eve Davis', 3),
(106, 'Frank Miller', 4),
(107, 'Grace Rodriguez', NULL); 

SELECT employees.employee_name, departments.department_name
FROM employees
INNER JOIN departments ON employees.department_id = departments.department_id;

-- -------------------------------------------------------
SELECT departments.department_name, employees.employee_name
FROM departments
LEFT JOIN employees ON departments.department_id = employees.department_id;