from tkinter import*
from tkinter import ttk
from PIL import Image,ImageTk

class ChatBot(object):


    #USER INTERFACE FRONT END
    def __init__(self,root):
         self.root = root
         self.root.title("ASK CAPTAIN ROUNAK")
         self.root.geometry("730x620+0+0")
         self.root.bind('<Return>',self.enter_func)


         main_frame=Frame( self.root,bd=4,bg='powder blue',width=610)
         main_frame.pack()


         img_chat=Image.open('D:\All Somak Projects\All Programming Coding Projects\Full Stack HTML CSS IBM freecodecamp.org\Chat bot\Ask captain rounak.jpg')
         img_chat=img_chat.resize((200,70),Image.Resampling.LANCZOS)
         self.photoimg=ImageTk.PhotoImage(img_chat)
         Title_label=Label(main_frame,bd=3,relief=RAISED,anchor='nw',width=750,compound=LEFT,image=self.photoimg,text='ASK CAPTAIN ROUNAK',font=('arial',30,'bold'),fg='blue',bg='maroon')
         Title_label.pack(side=TOP)
               

         self.scroll_y=ttk.Scrollbar(main_frame,orient=VERTICAL)
         self.text=Text(main_frame,width=65,height=20,border=20,relief=RAISED,font=('arial',14),yscrollcommand=self.scroll_y.set)
         self.scroll_y.pack(side=RIGHT,fill=Y)
         self.text.pack()


         btn_frame=Frame(self.root,bd=4,bg='white',width=730)
         btn_frame.pack()

         label=Label(btn_frame,text="Type Here:-",font=('arial',14,'bold'),fg='black',bg='gold')
         label.grid(row=0,column=0,padx=5,sticky=W)

         self.entry=StringVar()
         self.entry1=ttk.Entry(btn_frame,width=40,textvariable=self.entry,font=('arial',12,'bold'))
         self.entry1.grid(row=0,column=1,padx=5,sticky=W)

         
         self.send=Button(btn_frame,text="ASK ROUNAK>>",command=self.send,width=12,font=('arial',10,'bold'),fg='pink',bg='GREEN')
         self.send.grid(row=0,column=2,padx=5,sticky=W)

         
         self.clear=Button(btn_frame,text="REMOVE",width=9,command=self.clear,font=('arial',10,'bold'),fg='LIGHT PINK',bg='RED')
         self.clear.grid(row=1,column=2,padx=6,sticky=W)                                                                                   

         self.msg=''
         self.level_11=Label(btn_frame,text=self.msg,width=20,font=('arial',14,'bold'),fg='red',bg='white')
         self.level_11.grid(row=5,column=1,padx=5,sticky=W)



    #FUNCTION DECLARATION BACK END 
    def enter_func(self,event):
        self.send.invoke()
        self.entry.set('')

    def clear(self)   :
        self.text.delete('1.0',END) 
        self.entry.set('')
    
    def send(self):
        send='\t\t\t'+'YOU:   '+self.entry.get()
        self.text.insert(END,'\n'+send)
        self.text.yview(END)

        if (self.entry.get()==''):
            self.msg='अपनी भावनाए व्यक्त करें'
            self.level_11.config(text=self.msg,fg='red')

        else:
            self.msg==''   
            self.level_11.config(text=self.msg,fg='red')

        if  (self.entry.get()=='hello'):   
            self.text.insert(END,'\n\n'+'Bot: Hi,I am Captain Rounak,How may I help you?')

        elif (self.entry.get()=='hi'):   
            self.text.insert(END,'\n\n'+'Bot: Hi,This is Captain Rounak speaking.How may I help you?') 

        elif (self.entry.get()=='Happy Birthday,Captain Rounak'):   
            self.text.insert(END,'\n\n'+'Bot: Thanks for wishing Captain Rounak.Have a nice day.')

        elif (self.entry.get()=='Bye'):   
            self.text.insert(END,'\n\n'+'Bot:adios amigos.See you later.')

        elif (self.entry.get()=='Who invented you?'):   
            self.text.insert(END,'\n\n'+'Bot: Commander Somak aka HELLOGAMER761')

        elif (self.entry.get()=='How are you?'):   
            self.text.insert(END,'\n\n'+'Bot: fantastic. How about You?') 

        elif (self.entry.get()=='what is chatbot?'):   
            self.text.insert(END,'\n\n'+'Bot:A chatbot (coined from the term “chat robot”) is a computer program that simulates human conversation either by voice or text communication, and is designed to help solve a problem.  ')  

        elif (self.entry.get()=='what is captain rounak?'):   
            self.text.insert(END,'\n\n'+'Bot: It is a chatbot') 

        elif (self.entry.get()=='what is machine learning?'):   
            self.text.insert(END,'\n\n'+'Bot: Machine learning is a field of inquiry devoted to understanding and building methods that learn, that is, methods that leverage data to improve performance on some set of tasks. It is seen as a part of artificial intelligence.')     

        elif (self.entry.get()=='what is artificial intelligence?'):   
            self.text.insert(END,'\n\n'+'Bot: Artificial intelligence (AI) makes it possible for machines to learn from experience, adjust to new inputs and perform human-like tasks. Most AI examples that you hear about today – from chess-playing computers to self-driving cars – rely heavily on deep learning and natural language processing.')   

        elif (self.entry.get()=='what is python programming?'):   
            self.text.insert(END,'\n\n'+'Bot:Python is a high-level, general-purpose programming language. Its design philosophy emphasizes code readability with the use of significant indentation. Python is dynamically-typed and garbage-collected. It supports multiple programming paradigms, including structured, object-oriented and functional programming.Designed by: Guido van Rossum.First appeared: 20 February 1991; 31 years ago OS: Windows, macOS, Linux/UNIX, Android and more Filename extensions: .py,.pyi,.pyc,.pyd,.pyw,.pyz (since 3.5),.pyo (prior to 3.5) Paradigm: Multi-paradigm: object-oriented, procedural (imperative), functional, structured, reflective Preview release: 3.12.0a3 / 6 December 2022; 23 days ago Parent company: Python Software Foundation')
  
        elif (self.entry.get()=='who is HELLOGAMER761?'):   
            self.text.insert(END,'\n\n'+'Bot: Its a secret but just for you.....He is Batman! I am kidding.HELLOGAMER761 is SOMAK DUTTA.')

        elif (self.entry.get()=='I am fine too'):   
            self.text.insert(END,'\n\n'+'Bot:Great.Want to learn something new?Just type "what is machine learning?" so that you can start learning. ')
 
        else: 
            self.text.insert(END,'\n\n'+'Bot:Sorry, I couldnt get that.Could you please repeat?')

    
          







if __name__ == '__main__':
    root=Tk()
    obj=ChatBot(root)
    root.mainloop()






    #HELLOGAMER761
     #WRIITEN IN PYTHON
    #AUTHOR: SOMAK DUTTA 