/*
import java.io.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.applet.Applet;
import java.net.*;

public class NewProject extends Applet 
{
	Button write = new Button("WriteToFile");
	Label label1 = new Label("Enter the file name with directory:");
	TextField text = new TextField(20);
	Label label2 = new Label("Write your text:");
	TextArea area = new TextArea(35,100);
   
	public void init()
	{
		add(label1);
		label1.setBackground(Color.lightGray);
		add(text);
		//newline required
    	add(label2);
      
      	label2.setBackground(Color.lightGray);
      	add(area);
      	add(write,BorderLayout.CENTER);
      
      	write.addActionListener(new ActionListener () 
		{
			public void actionPerformed(ActionEvent e) 
			{ 
	            new WriteText();
	        }
   		});
   	} 
   	public class WriteText 
	{
		WriteText() 
		{ 
	        try 
			{
	            String FILENAME = text.getText();
	            
	            if(FILENAME.equals("")) 
				{ 
	               JOptionPane.showMessageDialog(null, "Please enter the file name!");
	               text.requestFocus();
	            }
				else 
				{ 
               		File f = new File(FILENAME);
               		if(f.exists()) 
					{
                  		BufferedWriter out = new BufferedWriter(new FileWriter(f,true));
									//	BufferedWriter bw=null;
									//	FileWriter fw=null;                  
				 		if(area.getText().equals(""))
						{
                     		JOptionPane.showMessageDialog (null,"Please enter your text!");
                     		area.requestFocus();
                  		} 
						else 
						{
							out.write(area.getText());
							//
     				 		BufferedWriter bw = null;
							FileWriter fw = null;

							try 
							{

								String content = "This is the content to write into file\n";

								fw = new FileWriter(FILENAME);
								bw = new BufferedWriter(fw);
								bw.write(content);

			//System.out.println("Done");

							}
							catch (IOException e) 
							{
								e.printStackTrace();
							} 
							finally 
							{
								try 
								{
									if (bw != null)
									bw.close();

									if (fw != null)
									fw.close();
								}
								catch (IOException ex)
								{
									ex.printStackTrace();
								}
							}
                   			else  (f.canWrite()) 
							{
                        		JOptionPane.showMessageDialog(null, "Text is written in "+FILENAME);
                        		text.setText("");
                        		area.setText("");
                        		text.requestFocus();
                     		} 
							else  
							{
                        		JOptionPane.showMessageDialog(null, "Text isn't written in "+FILENAME);
                     		}
                     		out.close();
                  		}
               		}
					else 
					{
						JOptionPane.showMessageDialog (null,"File not found!");
		   	            text.setText("");
                 		text.requestFocus();
               		}
            	}
         	} 
			catch(Exception x) 
			{
	            x.printStackTrace();
	        }
		}
	}
}*/




import java.awt.*;
import java.awt.event.*;
import java.applet.*;
 
/* 
<applet code="Cal" width=300 height=300>
</applet>
*/
 
public class NewProject extends Applet
implements ActionListener
{
	String msg=" ";
	int v1,v2,result;
	TextField t1=new TextField(20);
	Button b[]=new Button[10];
	Button add,sub,mul,div,clear,mod,EQ;
	char OP;
	public void init()
	{
		Color k=new Color(12,8,120);
		setBackground(k);
		t1=new TextField(10);
		GridLayout gl=new GridLayout(4,5);
		setLayout(gl);
		for(int i=0;i<10;i++)
		{
			b[i]=new Button(""+i);
		}
		add=new Button("+");
		sub=new Button("-");
		mul=new Button("*");
		div=new Button("/");
		mod=new Button("%");
		clear=new Button("<--");
		EQ=new Button("=");
		t1.addActionListener(this);
		add(t1);
		for(int i=0;i<10;i++)
		{
			add(b[i]);
		}
		add(add);
		add(sub);
		add(mul);
		add(div);
		add(mod);
		add(clear);
		add(EQ);
		for(int i=0;i<10;i++)
		{
			b[i].addActionListener(this);
		}
		add.addActionListener(this);
		sub.addActionListener(this);
		mul.addActionListener(this);
		div.addActionListener(this);
		mod.addActionListener(this);
		clear.addActionListener(this);
		EQ.addActionListener(this);
	}
 
	public void actionPerformed(ActionEvent ae)
	{
		String str=ae.getActionCommand();
		char ch=str.charAt(0);
		if ( Character.isDigit(ch))
		t1.setText(t1.getText()+str);
		else
		if(str.equals("add"))
		{
			v1=Integer.parseInt(t1.getText());
			OP='+';
			t1.setText("");
		}
		else if(str.equals("sub"))
		{
			v1=Integer.parseInt(t1.getText());
			OP='-';
			t1.setText("");
		}
		else if(str.equals("mul"))
		{
			v1=Integer.parseInt(t1.getText());
			OP='*';
			t1.setText("");
		}
		else if(str.equals("div"))
		{
			v1=Integer.parseInt(t1.getText());
			OP='/';
			t1.setText("");
		}
		else if(str.equals("mod"))
		{
			v1=Integer.parseInt(t1.getText());
			OP='%';
			t1.setText("");
		}
		if(str.equals("EQ"))
		{
			v2=Integer.parseInt(t1.getText());
			if(OP=='+')
				result=v1+v2;
			else if(OP=='-')
				result=v1-v2;
			else if(OP=='*')
				result=v1*v2;
			else if(OP=='/')
				result=v1/v2;
			else if(OP=='%')
				result=v1%v2;
			t1.setText(""+result);
		}	
		if(str.equals("clear"))
		{
			t1.setText("");
		}
	}
}

