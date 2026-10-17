; undefined FUN_08041900(void)
; entry 0x8041900  size 34 bytes

08041900: 30b5         push {r4,r5,lr}
08041902: 041c         add r4,r0,#0x0
08041904: a56a         ldr r5,[r4,#0x28]
08041906: 0749         ldr r1,[0x08041924]
08041908: dbf7fafa     bl 0x0801cf00
0804190C: 4420         mov r0,#0x44
0804190E: c1f7fff8     bl 0x08002b10
08041912: 281c         add r0,r5,#0x0
08041914: 211c         add r1,r4,#0x0
08041916: fff7ddfe     bl 0x080416d4
0804191A: e062         str r0,[r4,#0x2c]
0804191C: 30bc         pop {r4,r5}
0804191E: 01bc         pop {r0}
08041920: 0047         bx r0
