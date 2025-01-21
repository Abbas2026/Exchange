#NoEnv
SendMode Input  ; استفاده از حالت ورودی سریع
SetWorkingDir %A_ScriptDir%  ; تنظیم دایرکتوری کاری به محلی که اسکریپت قرار دارد

; ورودی‌های اسکریپت
emailTo := %1%  ; ایمیل مقصد
randomCode := %2%  ; کد رندوم برای ارسال
emailFrom := "your_email@gmail.com"  ; ایمیل مبدا
password := "your_email_password"  ; رمز عبور ایمیل (در اینجا باید از رمز عبور استفاده کنید)
smtpServer := "smtp.gmail.com"  ; سرور SMTP (در اینجا Gmail)
smtpPort := "587"  ; پورت SMTP

; ارسال ایمیل با استفاده از برنامه ایمیل (برای مثال Outlook)
; از این قسمت برای استفاده از نرم‌افزارهای مختلف می‌توانید تغییرات بدهید
run, outlook.exe /c ipm.note /m "%emailTo%" /subject "Verification Code" /body "Your verification code is: %randomCode%"

MsgBox, Email sent to %emailTo% with code %randomCode%
