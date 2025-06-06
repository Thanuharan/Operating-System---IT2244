:: Turn off command echoing
@echo off
:: Show the current system date.
echo %date%

:: Get the Year from the system date
set current_year=%date:~10,4%
echo Current year is %current_year%

:: Get the Month from the system date
set current_month=%date:~4,2%
echo Current month is %current_month%

:: Get the Date from the system date
set current_date=%date:~7,2%
echo Current date is %current_date%

:: Get the Day Name
set day_name=%date:~0,3%
echo Today is %day_name%

:: List month names and get the month name
for /f "tokens=%current_month% delims= " %%A in ("January February March April May June July August September October November December") do set month_name=%%A
echo Current month name is %month_name%

:: Calculate the day number of the year
set /a current_day_of_year = ((%current_month%-1)*30) + %current_date%
echo Current day of year is %current_day_of_year%

:: Calculate the week number of the year
set /a week_of_year = (%current_day_of_year% + 6) / 7
echo Week of Year is %week_of_year%

:: Calculate the week number of the month
set /a week_of_month = (%current_date% + 6) / 7
echo Week of Month is %week_of_month%

pause