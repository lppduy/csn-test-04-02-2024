-- 1.
SELECT * FROM employees;
-- 2.
SELECT first_name FROM employees;
-- 3.
SELECT * FROM employees
WHERE  salary > 5000;
-- 4.
SELECT *
FROM employees
WHERE first_name LIKE 'A%';
-- 5.
SELECT employees.employee_name, department.department_name
FROM employees
JOIN department ON employees.department_id = department.department_id;
-- 6.
SELECT department_id, COUNT(employee_id) AS employee_count
FROM employees
GROUP BY department_id;
-- 7.
SELECT department_id, COUNT(employee_id) AS employee_count
FROM employees
GROUP BY department_id
HAVING COUNT(employee_id) > 10;
-- 8.
-- employee_id, first_name, last_name, email, phone_number, hire_data, job_id, salary, commission_pct, manager_id, department_id
INSERT INTO employees (employee_id, first_name, last_name, email, phone_number, hire_date, job_id, salary, commission_pct, manager_id, department_id)
VALUES (1001, 'John', 'Doe', 'john.doe@example.com', '123-456-7890', '2024-02-05', 'IT_PROG', 50000, NULL, 101, 20);
-- 9. 
UPDATE employees
SET salary = salary * 1.1;

-- 10.
DELETE FROM employees
WHERE employee_id = 10;
