-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 14, 2024 at 12:49 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `tops`
--

-- --------------------------------------------------------

--
-- Table structure for table `win`
--

CREATE TABLE `win` (
  `YEA` year(4) DEFAULT NULL,
  `SUBJECT` char(30) DEFAULT NULL,
  `WINNER` char(30) DEFAULT NULL,
  `COUNTRY` char(30) DEFAULT NULL,
  `CATGORY` char(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `win`
--

INSERT INTO `win` (`YEA`, `SUBJECT`, `WINNER`, `COUNTRY`, `CATGORY`) VALUES
('1970', 'Physics', 'HannesAlfven', 'Sweden', 'Scientist'),
('1970', 'Physics', 'Louis Neel', 'France', 'Scientist'),
('1970', 'Chemistry', 'Luis Federico Leloir', 'France', 'Scientist'),
('1970', 'Physics', 'Ulf Federico Leloir', 'Sweden', 'Scientist'),
('1970', 'Physics', 'Bernard Katz', 'Germany', 'Scientist'),
('1970', 'Literature', 'Aleksandr Solzhenitsyn', 'Russia', 'Linguist'),
('1970', 'Economics', 'Paul Samuelson', 'USA', 'Economist'),
('1970', 'physiology', 'Julius Axelrod', 'USA', 'Scientist'),
('1971', 'Physics', 'Dennis Gabor', 'Hungary', 'Scientist'),
('1971', 'Chemistry', 'Gerhard Herzberg', 'Germany', 'Scientist'),
('1971', 'Peace', 'Willy Brandt', 'Germany', 'Chancellor'),
('1971', 'Literature', 'Pablo Neruda', 'Chile', 'Linguist'),
('1971', 'Economics', 'Simon Kuznets', 'Ruddia', 'Economist'),
('1978', 'Peace', 'Anwar al-Sadat', 'Egypt', 'President'),
('1978', 'Peace', 'Menachem Begin', 'Israel', 'President Minsiter'),
('1987', 'Chemistry', 'Donald J. Cram', 'USA', 'Scientist'),
('1987', 'Chemistry', 'Jean-Marie Lehn', 'France', 'Scientist'),
('1987', 'Physiology', 'Susumu TOnegawa', 'Japan', 'Scientist'),
('1994', 'Economics', 'Reinhard Selten', 'Germany', 'Economist'),
('1994', 'Peace', 'Yitzhak Rabin', 'Israel', 'President Minsiter'),
('1987', 'Physics', 'Johannes Georg Bednorz', 'Germany', 'Scientist'),
('1987', 'Literature', 'Joheph Brodsky', 'Russia', 'Linguist'),
('1987', 'Economics', 'Robert Solow', 'USA', 'Economist'),
('1994', 'Literature', 'Kenzaburooe', 'Japan', 'Linguist');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
