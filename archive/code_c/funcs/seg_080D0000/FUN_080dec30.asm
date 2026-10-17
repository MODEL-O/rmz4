; undefined FUN_080dec30(void)
; entry 0x80dec30  size 62 bytes

080DEC30: 30b5         push {r4,r5,lr}
080DEC32: 051c         add r5,r0,#0x0
080DEC34: 0e48         ldr r0,[0x080dec70]
080DEC36: 0068         ldr r0,[r0,#0x0]
080DEC38: 26f762fc     bl 0x08005500
080DEC3C: 041c         add r4,r0,#0x0
080DEC3E: 002c         cmp r4,#0x0
080DEC40: 12d0         beq 0x080dec68
080DEC42: 2530         add r0,#0x25
080DEC44: 0023         mov r3,#0x0
080DEC46: 0122         mov r2,#0x1
080DEC48: 0270         strb r2,[r0,#0x0]
080DEC4A: 0a48         ldr r0,[0x080dec74]
080DEC4C: 3321         mov r1,#0x33
080DEC4E: 6172         strb r1,[r4,#0x9]
080DEC50: cc30         add r0,#0xcc
080DEC52: 0068         ldr r0,[r0,#0x0]
080DEC54: 0068         ldr r0,[r0,#0x0]
080DEC56: 6061         str r0,[r4,#0x14]
080DEC58: 0020         mov r0,#0x0
080DEC5A: 2384         strh r3,[r4,#0x20]
080DEC5C: 211c         add r1,r4,#0x0
080DEC5E: 2231         add r1,#0x22
080DEC60: 0870         strb r0,[r1,#0x0]
080DEC62: a562         str r5,[r4,#0x28]
080DEC64: 2274         strb r2,[r4,#0x10]
080DEC66: 6074         strb r0,[r4,#0x11]
080DEC68: 30bc         pop {r4,r5}
080DEC6A: 01bc         pop {r0}
080DEC6C: 0047         bx r0
