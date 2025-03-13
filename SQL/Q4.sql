-- Create Courses Table
CREATE TABLE courses (
    course_id INT AUTO_INCREMENT PRIMARY KEY,
    course_name VARCHAR(255) NOT NULL,
    course_credits INT NOT NULL
);


-- create database
CREATE DATABASE IF NOT EXISTS university_db;