#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/OBI2000/BIT.o \
	${OBJECTDIR}/OBI2000/MACACO.o \
	${OBJECTDIR}/OBI2000/QUERM.o \
	${OBJECTDIR}/OBI2000/REDOTICA.o \
	${OBJECTDIR}/OBI2000/SALDO.o \
	${OBJECTDIR}/OBI2001/METEORO.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/maratona_cpp

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/maratona_cpp: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/maratona_cpp ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/OBI2000/BIT.o: OBI2000/BIT.cpp 
	${MKDIR} -p ${OBJECTDIR}/OBI2000
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/OBI2000/BIT.o OBI2000/BIT.cpp

${OBJECTDIR}/OBI2000/MACACO.o: OBI2000/MACACO.cpp 
	${MKDIR} -p ${OBJECTDIR}/OBI2000
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/OBI2000/MACACO.o OBI2000/MACACO.cpp

${OBJECTDIR}/OBI2000/QUERM.o: OBI2000/QUERM.cpp 
	${MKDIR} -p ${OBJECTDIR}/OBI2000
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/OBI2000/QUERM.o OBI2000/QUERM.cpp

${OBJECTDIR}/OBI2000/REDOTICA.o: OBI2000/REDOTICA.cpp 
	${MKDIR} -p ${OBJECTDIR}/OBI2000
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/OBI2000/REDOTICA.o OBI2000/REDOTICA.cpp

${OBJECTDIR}/OBI2000/SALDO.o: OBI2000/SALDO.cpp 
	${MKDIR} -p ${OBJECTDIR}/OBI2000
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/OBI2000/SALDO.o OBI2000/SALDO.cpp

${OBJECTDIR}/OBI2001/METEORO.o: OBI2001/METEORO.cpp 
	${MKDIR} -p ${OBJECTDIR}/OBI2001
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/OBI2001/METEORO.o OBI2001/METEORO.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/maratona_cpp

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
