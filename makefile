difusion.png : ej29.dat ej29.py
	python ej29.py
    
ej29.dat : ej29.x
	./ej29.x > ej29.dat

ej29.x : ej29.cpp
	c++ ej29.cpp -o ej29.x

clean:
	rm -rf ej29.x ej29.dat difusion.png