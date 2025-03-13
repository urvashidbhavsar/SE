CREATE DATABASE IF NOT EXISTS school_db;
USE school_db;

CREATE TABLE students (
    student_id INT AUTO_INCREMENT PRIMARY KEY,
    student_name VARCHAR(255) NOT NULL,
    age INT NOT NULL,
    class VARCHAR(50) NOT NULL,
    address TEXT
);

INSERT INTO students (student_name, age, class, address) VALUES
('John Doe', 14, '8th Grade', '123 Main St, Springfield'),
('Jane Smith', 15, '9th Grade', '456 Oak St, Riverside'),
('Michael Johnson', 13, '7th Grade', '789 Pine St, Brookfield'),
('Emily Davis', 16, '10th Grade', '321 Maple St, Hilltop'),
('Daniel Brown', 14, '8th Grade', '654 Cedar St, Lakeside');