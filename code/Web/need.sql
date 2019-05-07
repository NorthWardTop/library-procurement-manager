/*
 Navicat Premium Data Transfer

 Source Server         : z
 Source Server Type    : MySQL
 Source Server Version : 50162
 Source Host           : localhost:3306
 Source Schema         : s

 Target Server Type    : MySQL
 Target Server Version : 50162
 File Encoding         : 65001

 Date: 04/05/2019 14:58:58
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for need
-- ----------------------------
DROP TABLE IF EXISTS `need`;
CREATE TABLE `need`  (
  `book_name` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL,
  `press` varchar(255) CHARACTER SET utf8 COLLATE utf8_general_ci NULL DEFAULT NULL
) ENGINE = InnoDB CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Compact;

-- ----------------------------
-- Records of need
-- ----------------------------
INSERT INTO `need` VALUES ('语文', '西安工业大学出版社');
INSERT INTO `need` VALUES ('数学', '西安科技出版社');
INSERT INTO `need` VALUES ('数学', '西安科技出版社');
INSERT INTO `need` VALUES (NULL, NULL);
INSERT INTO `need` VALUES (NULL, NULL);
INSERT INTO `need` VALUES ('数学', '西安科技出版社');
INSERT INTO `need` VALUES ('计算机组成原理', '清华大学出版社');
INSERT INTO `need` VALUES ('计算机体系结构', '清华大学出版社');

SET FOREIGN_KEY_CHECKS = 1;
