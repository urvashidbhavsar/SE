DELIMITER //

CREATE TRIGGER LogNewEmployee
AFTER INSERT ON employees
FOR EACH ROW
BEGIN
    INSERT INTO employee_log (employee_id, employee_name, department_id, action, timestamp)
    VALUES (NEW.employee_id, NEW.employee_name, NEW.department_id, 'INSERT', NOW());
END //

DELIMITER ;

-- ---------------------------------------------------
DELIMITER //

CREATE TRIGGER UpdateEmployeeLastModified
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
    SET NEW.last_modified = NOW();
END //

DELIMITER ;