cmake_minimum_required(VERSION 3.9)
project(pld_comp)

set(CMAKE_CXX_STANDARD 11)

# mettez ici le chemin vers votre runtime (en supposant que vous avez réussi à tout installer :3)
set(ANTLR_RUNTIME_DIR /home/nathan/Téléchargements/antlr_cpp_runtime_4.7.1/runtime)

set(ANTLR_LIB_DIR ${ANTLR_RUNTIME_DIR}/dist)
set(ANTLR_SRC_DIR ${ANTLR_RUNTIME_DIR}/src)

include_directories(${ANTLR_SRC_DIR})
link_directories(${ANTLR_LIB_DIR})

add_executable(
        pld_comp
        ${ANTLR_SRC_DIR}/
        main.cpp
        Struct/Block.cpp
        Struct/Declare.cpp
        Struct/Function.cpp
        Struct/GlobalVar.cpp
        Struct/Param.cpp
        Struct/Program.cpp
        Struct/Var.cpp
        Struct/Instr/
        Struct/Expr/
        antlr/ExprParser.cpp
        antlr/ExprBaseVisitor.cpp
        antlr/ExprLexer.cpp
        antlr/ExprVisitor.cpp
        antlr/Expr
)

target_link_libraries(pld_comp libantlr4-runtime.a)