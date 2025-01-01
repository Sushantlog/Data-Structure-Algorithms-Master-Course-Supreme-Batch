Employee management system. 
In Employee Management System, there are two Models. First one is admin model. And second one is an employee model 
What is admin model? 
First open login page. Important thing is that in login page, both can see login page, like a common login page of employee and admin. 
In a simple way for admin model, as well as employee model that log in page should be a common. 
For example 
Assume 10 Record In my database. 
Out of 10 record. Occur 8 Record or employee data. And two records are admin data. 
8 Records are employed at Deepika Sheila Mala. Kamala Vimala. An admin side. Two records. Like Ashok And Dinesh. 

So, in now, the Deepika is now trying to log in. And Deepika will have same idea and password. 
Example  id:Deepika@gmail.com
        password: Deepika123

And once she is clicked on the submit button So automatically, Deepika is employee, so that automatically opens the employee dashboard 

In employee dashboard is open. 
In the implore dashboard, we can able to see only her details, like, what is her name? What is the bank account? What is account number? What are the address What is her salary? Which city belongs to And, which current particular project working. (In simple way all are details She can able to see only her details. )

And Sheila is log in the That time, Sheila Only see her details only 

In admin side. 
In case of Ashok Dinesh is Try to login 
Example    id:ashok@gmail.com
            password: ashok123

Note:
    So it belonged to admin Department and role is admin 
    This time it should display admin dashboard because Ashok belongs to admin dashboard. 

(what is difference between employee and admin dashboard? )
What is employed dashboard :
Assume Sheila is trying to log in, and Sheila is an employee. 
So that time, employee dashboard is a display 
In employee dashboard, Sheila can able to see only her details. And Sheila is unable to see Deepika details and mala details. Kamala details. Vimala details not possible. 

This is Came to employed as board 

What is admin dashboard :
But when come to admin dashboard either Ashok or Dinesh is trying to login
That time, what happened display admin dashboard. 
So admonishes superior so he was All the authority. 
What kind of authority does admin? 
1.Admin have authority to add the employee 
2.To update an employee 
3.they deleted an employee

(Updating existing data in a database. Everything can be done by admin )

Note:
Admin Is super? He has all the power. 
Whenever? The Ashok and Dinesh is trying to login
That time, whoever the person Whoever Employs that are present in a Database. Complete list as to see 
In his dashboard.In add Windows phone, he asked to all the employees. 
Assume There are 8 Employees all The 8 Employees details as to see. 
Beside of the Employees , you have to create three buttons. Like update button, delete button insert button 
In insert for inserting a new employee. 
Assume where the new employees is to join the company. So who will add their new employee That will be done by admin. 
Admin is a person who can add update and delete on employees 

Note:
The employee's Dashboard employee can see only their details. 
An employee will have the authority to view their details only and not other. 
As an employee, there is no Authority to update the details 

In admin Dashboard :
In the admin dashboard, be able to see all the employee details 
He has all authority to view all the employees details, as well as update and delete the employee records as well. 

Important:And also admin is the person who can insert a new employee record. 

Note:
In this project, you need to perform a role based authentication using a spring security 
For example :
Deepika,Sheila,Mala,Kamala ,Vimala Her role is an employee. 
and Ashok,Dinesh His role are admin. 

In this employee also common properties role. And also common properties role. 
Deepika role should be employed same way follow for other employees. And And when come to Ashok and Dinesh, the role should be as admin. 

So here we have to perform the authentication based On the role
What is authentication is nothing but a verification 
We have to verify if Deepika is enter her detail. What is her role? If it is an employee display employee dashboard. 
If Ashok is tried to login, verify What is he role Admin the display admin dashboard. 

So how we can do the role based authentication? You can make use of Spring security. 
Employee What he can view his details That is. He's not supposed to update his detail. And he is not Suppose to view other employee details. 

--------------These all are outline of our projects --------------------

Register and Role based login.
The employee should login with the employee mail id. Or employment code. And password 
For example, 
Excelr will provide company mail id As well as employee code Both are unique. 
An abhishek.avauala@Excelr.comThis company mail id, Which they have given too
Just assume that EmpId We'll be unique eg excelr12345
Company mail id and employee id Both are unique these will never be duplicate. 
So either you can take a company name, mail id as id, Or employer id as id. 
But should be unique. It should be a primary key It varies Employee to employees 
Duplication should not be there. 

The role need to cheque from backend api accordingly. 

--------------------------------

Admin Should see the employee list and able to select employee record to edit or delete 
In Edit Can change or update the data and Delete is to delete the record. 
But in view button Also, that time click on viewView. That time, only display basic information of the employee. 

Important point:
If If admin want to see your data, that time you cannot display your password or else sensitive data, like salary slip financial details 
Make sure hide that sensitive data. 
The admin can Add on employee by filling all Mandatory session. and need to have a validation to be in place for all field. 

Make sure admin is add to new Employ. By clicking on button and insert add button. 
That time make sure from validation 

In personal details:
Foreign admin for provide the authority for updating employee as well as deleting employee. 
Whatever To admin is try to update employee that time. He is not supposed to update employee code And Gender And date of birth. Because these Three things never change. 

---------------------------------

Modules:
Register and Role based Login:
The employee should login with company mail id or employment code and password, the role need to check from backend API and accordingly should navigate to dashboard.
Dashboard – Admin and Employee:
The dashboard for Admin and Employee should be different.
The Admin acts as a super user where they have privilege to Create an Employee, Update or Delete an existing employee
The Admin should see all the employees list and able to select an employee record to edit or delete. The Employee list view should comprises basic information of an employee likely Employment Code, Name of Employee, Company Email, Manager Name, Current project name and action items View, Edit and Delete icons.
The Admin can Add an employee by filling all mandatory sections and need to have validation to be in place for all fields.
The Employee dashboard view will just show all their details in different sections and will have only view access.

Employee record:
The each employee record consists following sections:
Personal Details
Professional Details
Project Details – The project details section is optional for creating an employee and should display current and all previous project history
Finance

Personal details:
The Employee personal details consists of following fields:
Employee Full Name, Date of Birth, Gender, Age, Current Address, Permanent Address, Mobile, Personal Mail, Emergency Contact Name and Mobile.
Employment Code should be 6 digit number, Personal and company mail validation to be done,  Age should be max 3 digit positive number and both Mobile fields should be 10 digit number.
The current and permanent Address fields should have City,  Address Line 1 & 2 and Pin code, where pin code should be 6 digit number.
All the fields in this section are mandatory and for admin should not have provision to update Employment Code, Gender and Date of Birth

Professional details:
The Employee Professional details consists of following fields:
Employment Code, Company Mail, Office Phone, City, Office Address, Reporting Manager employee code/mail, HR Name, Employment history and Date of Joining.
Employment Code should be 6 digit number, company mail validation to be done,  Office phone field should be maximum 12 and minimum 8 digit number.
The Office Address fields should have  Address Line 1 & 2 and Pin code, where pin code should be 6 digit number.
All the fields in this section are mandatory and for admin should not have provision to update Employment Code, Company mail and Date of Joining.
Employment history should have all previous company details likely company name, joining and end date.

Project details:
The project details section is optional for creating an employee and should display current and all previous project history:
The each project should contains Project code, Start and End Date, Client/Project name and reporting manager employee code/mail/
All the fields to map one project for employee are mandatory.

Finance:
The Finance section have below fields:
Pan card,  Aadhar card, Bank Details – Bank Name, Branch and IFSC Code and CTC breakup.
The employee should have option to download last 6 month payslips in PDF format and not required to show this functionality for admin.
All the fields in Finance section are mandatory

Hello Bull game. At the front end Hey Cortana Jibbal Drilla Karthika, the extractor. PNG phone. Kamal Haasan. Project Hello Project explorer Starting right now change workplace Starting Nitin Avinka Advantage. Using two zip create my project. Employment management packet Front end. Front end. OKOKOK. Hello Shahid Kapoor Possiblika Kukumini charge a beautiful prompt Lika Hai Poor Raghavpura Aapna Kohli back and thought about Ki move back in Bharmi Dalengi. According to charge executive, only three din mein. So if he filmed me pura, add Karke Do Mirago admin Play Kinjo Hotela Huska Employed. Curd Operation Kiata Springbok, who refer Karle are project points. Add kmna zip file adola charge. According to your front endship, I will create your backend Tuesday. Pilot Sophie or Usko Puragapura Connect Pura admin model employee admin card page authentication based authentication. Like a uska admin ka hoga, or admin kid as a bodhgaya employee. Employee dashboard. Our employee pura apnetters, the Executive 11 the surrogate except Kuwait. Update Nikkar Saktha was me. CJ. Adminco writer or badme admin only how admin the personal subdetails financial details. Vaishnavi Kuchh Hi. Hey Cortana, Project Vaishnav fronted championship The cmc Gandhaman set. Hello. Project September Youtube. Search is that you don't This looks good Hey Cortana, Wow. I signed. Did you want to feed on a war? I did. I did. Wow I used to always hate with something like this. What happened? No, I have to catch up. Here you go, bro. Wow, I did, I did always hang with something like this. What happened Wow, very great presentation. Developers are you? You need a job Equity trailer ironical, the company agent Hey Cortana September How to create a chip file? How to create zip file in laptop or desktop? PC, simply follow the steps, as shown in this guide. A zip file is a compressed archive file format that can contain one or more files or folders. When a file or folder is compressed into a zip file, it is reduced in size, making it easier to share and store. So here are the steps to make a zip file. First, select the files or folder that you want to compress into a zip file For example, I have selected these three files and folder on my desktop. Now right click on selected files or folder. I drop down menu will appear. From the drop down menu, select the send to option. Another menu will appear from this menu. Select the compressed zipped folder. Click Go on it. Windows will then create a new zip file in the same location as the original files or folders. You can rename the zip file by entering your file name here Now, if I cheque the size of original files It's 12.2 MP And the size of new zip file is 7.38 MP which is significantly smaller in size. So that is it. You now know how to create a zip file in laptop using windows. If you found it helpful, please give it a thumbs up and find too much journal for more helpful gifts and tutorials. Start Hello why is the chiptaker coming to the employee model Employees let me know which model like to start with and can guide you through a connexion to backend logic for the springboard It seems like can't do more adobe data analysis right now, please try again later. However, you share the content for admin model folder, and can assist In creating background form manually, let me know you didn't like employee model I know the label. However, you share the content of the admin model folder and I can assist you in creating a backend for manually. Let me know you're ready like to proceed manually. Karma did. A Run Arun Kasnagar song. Backend. Ems back in Itna Varanasi, a backend controller. Hello Java application label Jayalalitha testing This configuration database you attribute is not specified to embedded data source. Could you configure field determine the suitable classes Continuously Rishabh pant location There's a group fronted all lenses supplier data. The Pakadona lenses are highly Hey Cortana Hello. Hey Cortana Okay, okay. Was it a Search Data unlimited. More download guilty. Good luck. File uploads I. It is a subscription. Start gbd Chowkidar. Vish dollar. Try again. Read project archery print