; undefined FUN_08109190(void)
; entry 0x8109190  size 22 bytes

08109190: 00b5         push {lr}
08109192: 011c         add r1,r0,#0x0
08109194: 0448         ldr r0,[0x081091a8]
08109196: 0068         ldr r0,[r0,#0x0]
08109198: 13f7cafc     bl 0x0801cb30
0810919C: 0028         cmp r0,#0x0
0810919E: 00d1         bne 0x081091a2
081091A0: 0020         mov r0,#0x0
081091A2: 02bc         pop {r1}
081091A4: 0847         bx r1
