; undefined FUN_080afc7c(void)
; entry 0x80afc7c  size 72 bytes

080AFC7C: 70b5         push {r4,r5,r6,lr}
080AFC7E: 041c         add r4,r0,#0x0
080AFC80: 6069         ldr r0,[r4,#0x14]
080AFC82: 0126         mov r6,#0x1
080AFC84: 3040         and r0,r6
080AFC86: 0028         cmp r0,#0x0
080AFC88: 19d0         beq 0x080afcbe
080AFC8A: e56a         ldr r5,[r4,#0x2c]
080AFC8C: 0e20         mov r0,#0xe
080AFC8E: 56f779fe     bl 0x08006984
080AFC92: 6169         ldr r1,[r4,#0x14]
080AFC94: 8020         mov r0,#0x80
080AFC96: 8000         lsl r0,r0,#0x2
080AFC98: 0840         and r0,r1
080AFC9A: 0028         cmp r0,#0x0
080AFC9C: 0fd0         beq 0x080afcbe
080AFC9E: 8020         mov r0,#0x80
080AFCA0: 8002         lsl r0,r0,#0xa
080AFCA2: 0140         and r1,r0
080AFCA4: 0029         cmp r1,#0x0
080AFCA6: 0ad0         beq 0x080afcbe
080AFCA8: 281c         add r0,r5,#0x0
080AFCAA: b430         add r0,#0xb4
080AFCAC: 0670         strb r6,[r0,#0x0]
080AFCAE: 0548         ldr r0,[0x080afcc4]
080AFCB0: 0068         ldr r0,[r0,#0x0]
080AFCB2: 0028         cmp r0,#0x0
080AFCB4: 03d0         beq 0x080afcbe
080AFCB6: 0521         mov r1,#0x5
080AFCB8: 0722         mov r2,#0x7
080AFCBA: 8af75dfc     bl 0x0803a578
080AFCBE: 70bc         pop {r4,r5,r6}
080AFCC0: 01bc         pop {r0}
080AFCC2: 0047         bx r0
