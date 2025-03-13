-- Start a transaction
START TRANSACTION;

-- Create a savepoint
SAVEPOINT my_savepoint;

-- Insert some records (e.g., into a 'test_table')
-- Assuming you have a table named 'test_table' with columns 'id' and 'name'
INSERT INTO test_table (id, name) VALUES (1, 'Record 1');
INSERT INTO test_table (id, name) VALUES (2, 'Record 2');

-- Insert more records (these will be rolled back)
INSERT INTO test_table (id, name) VALUES (3, 'Record 3');
INSERT INTO test_table (id, name) VALUES (4, 'Record 4');

-- Rollback to the savepoint
ROLLBACK TO my_savepoint;

-- ---------------------------------------------------
-- Start a transaction
START TRANSACTION;

-- Create a savepoint
SAVEPOINT savepoint1;

-- Insert some records (part 1 - to be committed)
INSERT INTO test_table (id, name) VALUES (1, 'Record 1');
INSERT INTO test_table (id, name) VALUES (2, 'Record 2');

-- Commit part of the transaction up to the savepoint
RELEASE SAVEPOINT savepoint1;
COMMIT;

-- Start a new transaction.
START TRANSACTION;

-- Create another savepoint
SAVEPOINT savepoint2;

-- Insert more records (part 2 - to be rolled back)
INSERT INTO test_table (id, name) VALUES (3, 'Record 3');
INSERT INTO test_table (id, name) VALUES (4, 'Record 4');

-- Rollback the remaining changes
ROLLBACK TO savepoint2;
