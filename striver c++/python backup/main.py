import tkinter as tk
from tkinter import ttk
from layout import build_layout, add_control_buttons

root = tk.Tk()
root.title("DSA Revision Tracker — Dynamic Rows")
root.geometry("1650x750")

# Optional: Reset to native bg
root.configure(bg="SystemButtonFace")

# === TOP TOOLBAR ===
topbar = tk.Frame(root, padx=10, pady=5, bg="SystemButtonFace")
topbar.pack(side="top", fill="x")

# === Canvas for scrolling ===
canvas = tk.Canvas(root, highlightthickness=0, bg="SystemButtonFace")
scroll_x = ttk.Scrollbar(root, orient="horizontal", command=canvas.xview)
scroll_y = ttk.Scrollbar(root, orient="vertical", command=canvas.yview)
canvas.configure(xscrollcommand=scroll_x.set, yscrollcommand=scroll_y.set)

scroll_x.pack(side="bottom", fill="x")
scroll_y.pack(side="right", fill="y")
canvas.pack(side="left", fill="both", expand=True)

# === Frame inside canvas ===
frame = tk.Frame(canvas, bg="SystemButtonFace")
canvas.create_window((0, 0), window=frame, anchor="nw")

# === Build layout + controls ===
build_layout(frame)
add_control_buttons(topbar, frame)

# === Scroll binding ===
def on_frame_configure(event):
    canvas.configure(scrollregion=canvas.bbox("all"))

frame.bind("<Configure>", on_frame_configure)

root.mainloop()

