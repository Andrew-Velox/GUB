
;-------STRING PRINT FUNTION
PRINTS MACRO S
    LEA DX,S
    MOV AH,9
    INT 21H
  ENDM

;--------INT PRINT FUNCTION
PRINTI MACRO VAL
    MOV DL,VAL
    MOV AH,2
    INT 21H
  ENDM

;-------SUM FUNTION
SUMF MACRO A,B
    MOV AL,A
    SUB AL,48
    MOV BL,B 
    SUB BL,48
     
     
    ADD AL,BL
    ADD AL,48 
    
    PRINTI AL

  ENDM

;------SUB FUNCTION
SUBF MACRO A,B
    MOV AL,A
    SUB AL,48
    MOV BL,B
    SUB BL,48
    
    
    SUB AL,BL
    ADD AL,48
    
    PRINTI AL
  ENDM

;-----MUL FUNCTION

MULF MACRO A,B
    MOV AL,A
    SUB AL,48
    MOV BL,B
    SUB BL,48
    
    
    MUL BL
    ADD AL,48
    
    PRINTI AL
  ENDM           

;----DIV FUNCTION

DIVF MACRO A,B
    MOV AL,A
    SUB AL,48
    MOV BL,B
    SUB BL,48
    
    XOR AH,AH ; WE HAVE TO MAKE AH = 0
    DIV BL
    ADD AL,48
    
    PRINTI AL; AL=A/B, AH=A%B, BL=DIVISOR, AX=DIVIDENT
    
  ENDM 

;----COMPARE FUNCTION
COMPF MACRO A,B
    XOR AX,AX
    XOR BX,BX
    MOV AL,A
    MOV BL,B
    
    CMP AL,BL
    
    JGE BIG
       PRINTI BL 
       JMP _END 
    
    BIG:
        PRINTI AL
        JMP _END    
    _END: 
  ENDM

;-----LOOP FUNCITON
LOOPF MACRO VAL
    XOR BX,BX
    MOV CX,VAL
    
    FOR:
        TEST CX,1
        
        JZ SKIP
        
            ADD BX,CX
        SKIP:
         LOOP FOR
     
     MOV AL,BL
     ADD AL,48    
     PRINTI AL
  ENDM 
 
 
;------ARRAY FUNCTION
ARRAYF MACRO AR,SZ
    LEA SI,AR
    MOV CX,SZ
    
    
    FOR2:
        
        MOV AL,[SI]
        ADD AL,48
        PRINTI AL
        
        INC SI
        LOOP FOR2
        
  ENDM
    

org 100h  


    .DATA
        TK1 DW "ENTER 1ST NUMBER: $"
        TK2 DW "ENTER 2ND NUBMER: $"
        SUMS DW "SUMMATION: $"
        SUBS DW "SUBTRACTION: $"
        MULS DW "MULTIPLICATION: $"
        DIVS DW "DIVISION: $"
        
        COMPS DW "BIG-NUMBER: $"
        LOOPS DW "SUM USING LOOP: $"
        ARRYS DW "ARRAY VALUES: $"
        
        AR DB 2,3,1,4,1,5
        
        NUM1 DB ?
        NUM2 DB ?
                                
    .CODE
        MOV AX, @DATA 
        MOV DS, AX
    

        
        PRINTS TK1
        MOV AH,1
        INT 21H    
        MOV NUM1,AL
        
        
        CALL NLINE
          
        PRINTS TK2  
        MOV AH,1
        INT 21H
        MOV NUM2,AL    

        
        
        
        
        
        
        ;ADDITION OF TWO NUMBER
        CALL NLINE
        PRINTS SUMS

        SUMF NUM1, NUM2
        
        ; SUBTRACT OF TWO NUMBER
        
        CALL NLINE
        PRINTS SUBS
        SUBF NUM1,NUM2
        
        ; MULTIPLICATION OF TWO NUMBER
        CALL NLINE
        PRINTS MULS
        MULF NUM1,NUM2
        
        
        ; DIVISION OF TWO NUMBER
        CALL NLINE 
        PRINTS DIVS
        DIVF NUM1,NUM2
        
                                  
                                  
        ; COMPARISON OF TWO NUMBER
        CALL NLINE
        PRINTS COMPS
        COMPF NUM1,NUM2
        
        
        ;LOOP FOR SUM OF ODD NUMBERS
        CALL NLINE
        PRINTS LOOPS
        LOOPF 5 ;INITIALY PASSING 5 
                            
                            
        ;PRINT ARRAY NUMBERS
        CALL NLINE 
        PRINTS ARRYS
        ARRAYF AR,6
        
        
        ;NEW LINE FUNCTION  
        NLINE PROC
                
            MOV DL,10
            MOV AH,2
            INT 21H
            
            MOV DL,13
            MOV AH,2
            INT 21H
            RET
        ENDP    
ret




