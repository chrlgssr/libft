/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:28:00 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/08 13:12:38 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file output_utils.h
 * @brief Header file containing utility functions for output operations.
 *
 * This file includes functions for writing characters, strings, numbers, and
 * numbers in custom bases to a specified file descriptor.
 */

#ifndef OUTPUT_UTILS_H
# define OUTPUT_UTILS_H

/**
 * @brief Outputs a single character to the specified file descriptor.
 *
 * This function writes a single character to a file descriptor, typically
 * used to output a single character to the console or a file.
 *
 * @param c The character to be written.
 * @param fd The file descriptor where the character will be written.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs a string to the specified file descriptor.
 *
 * This function writes a null-terminated string to a file descriptor.
 *
 * @param s The string to be written.
 * @param fd The file descriptor where the string will be written.
 * @note If the string is NULL, the function does nothing.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs a string followed by a newline to
 * the specified file descriptor.
 *
 * This function writes a string to the file descriptor,
 * followed by a newline character.
 *
 * @param s The string to be written.
 * @param fd The file descriptor where the string will be written.
 * @note If the string is NULL, the function does nothing.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs an integer to the specified file descriptor.
 *
 * This function writes an integer value to a file descriptor, converting it
 * to a string representation.
 *
 * @param n The integer to be written.
 * @param fd The file descriptor where the integer will be written.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief Outputs a long long integer in a given base
 * to the specified file descriptor.
 *
 * This function writes a long long integer in the specified base
 * (e.g., binary, hexadecimal, etc.)
 * to the file descriptor. The base must be a valid string
 * of digits or characters.
 *
 * @param nb The long long integer to be written.
 * @param base The string containing the characters of the base.
 * @param fd The file descriptor where the number will be written.
 * @note If the base is invalid or contains duplicates,
 *			the behavior is undefined.
 */
void	ft_putnbr_base_fd(long long nb, char *base, int fd);

#endif