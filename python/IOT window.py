import tkinter as tk

def button1_pressed(event):
    label.config(text="Roterar framåt!")

def button1_released(event):
    label.config(text="Välj knapp")


def button2_pressed(event):
    label.config(text="Roterar bakåt!")

def button2_released(event):
    label.config(text="Välj knapp")


# Skapa huvudfönstret
root = tk.Tk()
root.title("Rotera din motor")

# Ange fönstrets dimensioner
root.geometry("800x400")

# Skapa knappar med färger och bindningar för tryck och släpp
button1 = tk.Button(root, text="Framåt", width=20, height=4, bg="green", fg="white")
button1.bind("<ButtonPress-1>", button1_pressed)
button1.bind("<ButtonRelease-1>", button1_released)

button2 = tk.Button(root, text="Bakåt", width=20, height=2, bg="green", fg="white")
button2.bind("<ButtonPress-1>", button2_pressed)
button2.bind("<ButtonRelease-1>", button2_released)

# Skapa en etikett för att visa meddelanden om knapptryckningar
label = tk.Label(root, text="Klicka en knapp.")

# Packa knappar och etikett i fönstret
button1.pack(pady=10)
button2.pack(pady=10)
label.pack(pady=20)

# Starta huvudloopen
root.mainloop()
