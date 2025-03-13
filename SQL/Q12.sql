SELECT  d.department_name, COUNT(e.employee_id) AS number_of_employees
FROM departments d LEFT JOIN  employees e ON d.department_id = e.department_id GROUP BY d.department_name;

-- ----------------------------------------

SELECT  d.department_name, AVG(e.salary) AS average_salary FROM departments d
LEFT JOIN employees e ON d.department_id = e.department_id GROUP BY d.department_name;