cmake_minimum_required(VERSION 3.9)
project(pld_comp)

set(CMAKE_CXX_STANDARD 11)

# mettez ici le chemin vers votre runtime (en supposant que vous avez réussi à tout installer :3)
set(ANTLR_RUNTIME_DIR /home/nathan/Téléchargements/antlr_cpp_runtime_4.7.1)

set(ANTLR_LIB_DIR ${ANTLR_RUNTIME_DIR}/dist)
set(ANTLR_SRC_DIR ${ANTLR_RUNTIME_DIR}/runtime/src)

include_directories(${ANTLR_SRC_DIR})
link_directories(${ANTLR_LIB_DIR})

add_executable(
        pld_comp
        ${ANTLR_SRC_DIR}/
        antlr/ProgParser.cpp
        antlr/ProgBaseVisitor.cpp
        antlr/ProgLexer.cpp
        antlr/ProgVisitor.cpp
        Struct/Var
        Struct/Program
        Struct/Param
        Struct/IR
        Struct/GlobalVar
        Struct/Function
        Struct/Block
        Struct/Instr/If
        Struct/Instr/Instr
        Struct/Instr/Return
        Struct/Instr/While
        Struct/Expr/Affect
        Struct/Expr/Expr
        Struct/Expr/ExprBin
        Struct/Expr/ExprConst
        Struct/Expr/ExprUni
        Struct/Expr/ExprVar
        Struct/Expr/FunctionCall
        main.cpp
)

target_link_libraries(pld_comp libantlr4-runtime.a)