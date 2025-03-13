DELIMITER //

CREATE PROCEDURE GetEmployeeCount()
BEGIN
    DECLARE total_employees INT;

    SELECT COUNT(*) INTO total_employees FROM employees;

    SELECT CONCAT('Total number of employees: ', total_employees) AS result;
END //


-- ------------------------------------------------------------
CREATE PROCEDURE total_sales NUMBER;
BEGIN
  SELECT SUM(order_total)
  INTO total_sales
  FROM orders;

  DBMS_OUTPUT.PUT_LINE('Total sales: ' || total_sales);

EXCEPTION
    WHEN NO_DATA_FOUND THEN
        DBMS_OUTPUT.PUT_LINE('No orders found.');
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('An error occurred: ' || SQLERRM);

END;