; undefined FUN_080e59d4(void)
; entry 0x80e59d4  size 66 bytes

080E59D4: 10b5         push {r4,lr}
080E59D6: 82b0         sub sp,#0x8
080E59D8: 041c         add r4,r0,#0x0
080E59DA: 606d         ldr r0,[r4,#0x54]
080E59DC: 0090         str r0,[sp,#0x0]
080E59DE: a06d         ldr r0,[r4,#0x58]
080E59E0: 0d49         ldr r1,[0x080e5a18]
080E59E2: 4018         add r0,r0,r1
080E59E4: 0190         str r0,[sp,#0x4]
080E59E6: 0120         mov r0,#0x1
080E59E8: 6946         mov r1,sp
080E59EA: ebf74df9     bl 0x080d0c88
080E59EE: 2a20         mov r0,#0x2a
080E59F0: 1df78ef8     bl 0x08002b10
080E59F4: 0123         mov r3,#0x1
080E59F6: 6374         strb r3,[r4,#0x11]
080E59F8: 201c         add r0,r4,#0x0
080E59FA: 5430         add r0,#0x54
080E59FC: 0749         ldr r1,[0x080e5a1c]
080E59FE: a27a         ldrb r2,[r4,#0xa]
080E5A00: 1209         lsr r2,r2,#0x4
080E5A02: 1a40         and r2,r3
080E5A04: fff764fe     bl 0x080e56d0
080E5A08: 201c         add r0,r4,#0x0
080E5A0A: fff739ff     bl 0x080e5880
080E5A0E: 02b0         add sp,#0x8
080E5A10: 10bc         pop {r4}
080E5A12: 01bc         pop {r0}
080E5A14: 0047         bx r0
