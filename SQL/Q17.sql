-- MySQL Stored Procedure (equivalent of PL/SQL block)

DELIMITER //

CREATE PROCEDURE CheckEmployeeDepartment(IN employee_id_input INT)
BEGIN
    DECLARE department_name_var VARCHAR(255);

    SELECT d.department_name
    INTO department_name_var
    FROM employees e
    LEFT JOIN departments d ON e.department_id = d.department_id
    WHERE e.employee_id = employee_id_input;

    IF department_name_var IS NOT NULL THEN
        IF department_name_var = 'Sales' THEN
            SELECT CONCAT('Employee is in the Sales department.') AS result;
        ELSEIF department_name_var = 'Marketing' THEN
            SELECT CONCAT('Employee is in the Marketing department.') AS result;
        ELSE
            SELECT CONCAT('Employee is in the ', department_name_var, ' department.') AS result;
        END IF;
    ELSE
        SELECT 'Employee not found or has no department assigned.' AS result;
    END IF;

END //

DELIMITER ;

-- -------------------------------------------------------------

DELIMITER //

CREATE PROCEDURE DisplayEmployeeNames()
BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE employee_name_var VARCHAR(255);
    DECLARE cur CURSOR FOR SELECT employee_name FROM employees;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN cur;

    read_loop: LOOP
        FETCH cur INTO employee_name_var;
        IF done THEN
            LEAVE read_loop;
        END IF;
        SELECT employee_name_var AS employee_name; -- Display the name
    END LOOP;

    CLOSE cur;
END //

DELIMITER ;