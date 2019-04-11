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
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Test_
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/file/fileOperator.o \
	${OBJECTDIR}/incdecOperator/valueChanger.o \
	${OBJECTDIR}/learnIt/learnAI.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/parceptron/parceptron.o \
	${OBJECTDIR}/randomizer/randomizer.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_2

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_2: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_2 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/file/fileOperator.o: file/fileOperator.cpp
	${MKDIR} -p ${OBJECTDIR}/file
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/file/fileOperator.o file/fileOperator.cpp

${OBJECTDIR}/incdecOperator/valueChanger.o: incdecOperator/valueChanger.cpp
	${MKDIR} -p ${OBJECTDIR}/incdecOperator
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/incdecOperator/valueChanger.o incdecOperator/valueChanger.cpp

${OBJECTDIR}/learnIt/learnAI.o: learnIt/learnAI.cpp
	${MKDIR} -p ${OBJECTDIR}/learnIt
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/learnIt/learnAI.o learnIt/learnAI.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/parceptron/parceptron.o: parceptron/parceptron.cpp
	${MKDIR} -p ${OBJECTDIR}/parceptron
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/parceptron/parceptron.o parceptron/parceptron.cpp

${OBJECTDIR}/randomizer/randomizer.o: randomizer/randomizer.cpp
	${MKDIR} -p ${OBJECTDIR}/randomizer
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/randomizer/randomizer.o randomizer/randomizer.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
