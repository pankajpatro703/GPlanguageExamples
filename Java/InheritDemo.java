import java.io.*;
class Employee
{
	String name;
	int age, id;
	Employee(String name,int age,int id)
	{
		this.name=name;
		this.age=age;
		this.id=id;
	}
}
class Manager extends Employee
{
	String designation;
	int salary;
	Manager(String name,int age,int id,String designation,int salary)
	{
		super(name,age,id);
		this.designation=designation;
		this.salary=salary;
	}
}
class ProjectManager extends Manager
{
	int experience, projects;
	ProjectManager(String name,int age,int id,String designation,int salary,int experience,int projects)
	{
		super(name,age,id,designation,salary);
		this.experience=experience;
		this.projects=projects;
	}
	void display()
	{
		System.out.println("Employee Details");
		System.out.println("Name: "+name);
		System.out.println("Age: "+age);
		System.out.println("ID: "+id);
		System.out.println("Designation: "+designation);
		System.out.println("Salary: "+salary);
		System.out.println("Total years of experience: "+experience);
		System.out.println("Total no. of projects handled: "+projects);
	}
}
class InheritDemo
{
	public static void main(String args[])
	{
		ProjectManager obj=new ProjectManager("Somaiya",35,1008,"Leader",1000000,5,25);
		obj.display();
	}
}

