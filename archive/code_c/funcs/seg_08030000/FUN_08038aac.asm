; undefined FUN_08038aac(void)
; entry 0x8038aac  size 42 bytes

08038AAC: 00b5         push {lr}
08038AAE: 011c         add r1,r0,#0x0
08038AB0: b430         add r0,#0xb4
08038AB2: c07c         ldrb r0,[r0,#0x13]
08038AB4: 0228         cmp r0,#0x2
08038AB6: 06d1         bne 0x08038ac6
08038AB8: 081c         add r0,r1,#0x0
08038ABA: f230         add r0,#0xf2
08038ABC: 0078         ldrb r0,[r0,#0x0]
08038ABE: 0628         cmp r0,#0x6
08038AC0: 06d9         bls 0x08038ad0
08038AC2: 0120         mov r0,#0x1
08038AC4: 05e0         b 0x08038ad2
08038AC6: 081c         add r0,r1,#0x0
08038AC8: f230         add r0,#0xf2
08038ACA: 0078         ldrb r0,[r0,#0x0]
08038ACC: 0728         cmp r0,#0x7
08038ACE: f8d0         beq 0x08038ac2
08038AD0: 0020         mov r0,#0x0
08038AD2: 02bc         pop {r1}
08038AD4: 0847         bx r1
