; undefined FUN_080e19e0(void)
; entry 0x80e19e0  size 66 bytes

080E19E0: 10b5         push {r4,lr}
080E19E2: 041c         add r4,r0,#0x0
080E19E4: 616d         ldr r1,[r4,#0x54]
080E19E6: e06d         ldr r0,[r4,#0x5c]
080E19E8: 0a18         add r2,r1,r0
080E19EA: 6265         str r2,[r4,#0x54]
080E19EC: a16d         ldr r1,[r4,#0x58]
080E19EE: 206e         ldr r0,[r4,#0x60]
080E19F0: 0918         add r1,r1,r0
080E19F2: a165         str r1,[r4,#0x58]
080E19F4: 4030         add r0,#0x40
080E19F6: 2066         str r0,[r4,#0x60]
080E19F8: 607c         ldrb r0,[r4,#0x11]
080E19FA: 0128         cmp r0,#0x1
080E19FC: 0ed0         beq 0x080e1a1c
080E19FE: 101c         add r0,r2,#0x0
080E1A00: 26f73cf9     bl 0x08007c7c
080E1A04: 0004         lsl r0,r0,#0x10
080E1A06: 0028         cmp r0,#0x0
080E1A08: 08d0         beq 0x080e1a1c
080E1A0A: 0649         ldr r1,[0x080e1a24]
080E1A0C: 607a         ldrb r0,[r4,#0x9]
080E1A0E: 8000         lsl r0,r0,#0x2
080E1A10: 4018         add r0,r0,r1
080E1A12: 0221         mov r1,#0x2
080E1A14: e160         str r1,[r4,#0xc]
080E1A16: 0068         ldr r0,[r0,#0x0]
080E1A18: 8068         ldr r0,[r0,#0x8]
080E1A1A: 6061         str r0,[r4,#0x14]
080E1A1C: 10bc         pop {r4}
080E1A1E: 01bc         pop {r0}
080E1A20: 0047         bx r0
