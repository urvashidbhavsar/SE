DELIMITER //

CREATE PROCEDURE DisplayEmployeeDetails()
BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE employee_id_var INT;
    DECLARE employee_name_var VARCHAR(255);
    DECLARE department_id_var INT;
    DECLARE cur CURSOR FOR SELECT employee_id, employee_name, department_id FROM employees;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN cur;

    read_loop: LOOP
        FETCH cur INTO employee_id_var, employee_name_var, department_id_var;
        IF done THEN
            LEAVE read_loop;
        END IF;
        SELECT employee_id_var AS employee_id, employee_name_var AS employee_name, department_id_var AS department_id;
    END LOOP;

    CLOSE cur;
END //

DELIMITER ;

-- ------------------------------------------------------

DELIMITER //

CREATE PROCEDURE DisplayCourses()
BEGIN
    DECLARE done INT DEFAULT FALSE;
    DECLARE course_id_var INT;
    DECLARE course_name_var VARCHAR(255);
    DECLARE instructor_var VARCHAR(255); -- Assuming you have an instructor column
    DECLARE credits_var INT; -- Assuming you have a credits column
    DECLARE cur CURSOR FOR SELECT course_id, course_name, instructor, credits FROM courses;
    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = TRUE;

    OPEN cur;

    read_loop: LOOP
        FETCH cur INTO course_id_var, course_name_var, instructor_var, credits_var;
        IF done THEN
            LEAVE read_loop;
        END IF;
        SELECT course_id_var AS course_id, course_name_var AS course_name, instructor_var AS instructor, credits_var AS credits;
    END LOOP;

    CLOSE cur;
END //

DELIMITER ;
