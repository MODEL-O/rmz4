; undefined FUN_080e3c3c(void)
; entry 0x80e3c3c  size 34 bytes

080E3C3C: 10b5         push {r4,lr}
080E3C3E: 041c         add r4,r0,#0x0
080E3C40: a06d         ldr r0,[r4,#0x58]
080E3C42: 0749         ldr r1,[0x080e3c60]
080E3C44: 4018         add r0,r0,r1
080E3C46: a065         str r0,[r4,#0x58]
080E3C48: 0649         ldr r1,[0x080e3c64]
080E3C4A: 201c         add r0,r4,#0x0
080E3C4C: 39f758f9     bl 0x0801cf00
080E3C50: b420         mov r0,#0xb4
080E3C52: a074         strb r0,[r4,#0x12]
080E3C54: 0220         mov r0,#0x2
080E3C56: 6073         strb r0,[r4,#0xd]
080E3C58: 10bc         pop {r4}
080E3C5A: 01bc         pop {r0}
080E3C5C: 0047         bx r0
