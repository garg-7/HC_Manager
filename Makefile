#compiler
CXX = g++

#flags
CXXFLAGS = -c
LDLIBS = -lncurses
all: hc

hc: main.o Patient.o Faculty.o OfficeOfAccounts.o Pharmacy.o DoctorsOffice.o OfficeOfAcademics.o
	$(CXX) $(CFLAGS) -o hc.out main.o Patient.o Faculty.o OfficeOfAccounts.o Pharmacy.o DoctorsOffice.o OfficeOfAcademics.o $(LDLIBS)

main.o: Patient.h Faculty.h OfficeOfAccounts.h Pharmacy.h DoctorsOffice.h OfficeOfAcademics.h

Patient.o: Patient.h DoctorsOffice.h Pharmacy.h OfficeOfAcademics.h OfficeOfAccounts.h

Faculty.o: Faculty.h OfficeOfAcademics.h

OfficeOfAccounts.o: OfficeOfAccounts.h OfficeOfAcademics.h

Pharmacy.o: Pharmacy.h OfficeOfAccounts.h OfficeOfAcademics.h

DoctorsOffice.o: DoctorsOffice.h OfficeOfAcademics.h

OfficeOfAcademics.o: OfficeOfAcademics.h

clean:
	rm -rf *o m1