CREATE VIEW EmployeeDepartmentView AS
SELECT
    e.employee_id,
    e.employee_name,
    d.department_name
FROM
    employees e
LEFT JOIN
    departments d ON e.department_id = d.department_id;

-- --------------------------------------------------
CREATE OR REPLACE VIEW EmployeeDepartmentView AS
SELECT
    e.employee_id,
    e.employee_name,
    d.department_name
FROM
    employees e
LEFT JOIN
    departments d ON e.department_id = d.department_id
WHERE e.salary >= 50000; 