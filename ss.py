import pyscreenshot

img=pyscreenshot.backend_grab(bbox=(10, 10, 500, 500))

img.show()
img.save("ss.png")