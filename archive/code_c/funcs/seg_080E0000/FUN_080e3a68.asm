; undefined FUN_080e3a68(void)
; entry 0x80e3a68  size 70 bytes

080E3A68: 10b5         push {r4,lr}
080E3A6A: 82b0         sub sp,#0x8
080E3A6C: 041c         add r4,r0,#0x0
080E3A6E: fff717ff     bl 0x080e38a0
080E3A72: 606d         ldr r0,[r4,#0x54]
080E3A74: 0090         str r0,[sp,#0x0]
080E3A76: a06d         ldr r0,[r4,#0x58]
080E3A78: 0d49         ldr r1,[0x080e3ab0]
080E3A7A: 4018         add r0,r0,r1
080E3A7C: 0190         str r0,[sp,#0x4]
080E3A7E: 0120         mov r0,#0x1
080E3A80: 6946         mov r1,sp
080E3A82: edf701f9     bl 0x080d0c88
080E3A86: 2a20         mov r0,#0x2a
080E3A88: 1ff742f8     bl 0x08002b10
080E3A8C: 0123         mov r3,#0x1
080E3A8E: 6374         strb r3,[r4,#0x11]
080E3A90: 201c         add r0,r4,#0x0
080E3A92: 5430         add r0,#0x54
080E3A94: 0749         ldr r1,[0x080e3ab4]
080E3A96: a27a         ldrb r2,[r4,#0xa]
080E3A98: 1209         lsr r2,r2,#0x4
080E3A9A: 1a40         and r2,r3
080E3A9C: fff780fe     bl 0x080e37a0
080E3AA0: 201c         add r0,r4,#0x0
080E3AA2: 00f009f8     bl 0x080e3ab8
080E3AA6: 02b0         add sp,#0x8
080E3AA8: 10bc         pop {r4}
080E3AAA: 01bc         pop {r0}
080E3AAC: 0047         bx r0
