; undefined FUN_0809ce1c(void)
; entry 0x809ce1c  size 64 bytes

0809CE1C: 00b5         push {lr}
0809CE1E: 021c         add r2,r0,#0x0
0809CE20: 916a         ldr r1,[r2,#0x28]
0809CE22: 107c         ldrb r0,[r2,#0x10]
0809CE24: 0228         cmp r0,#0x2
0809CE26: 11d0         beq 0x0809ce4c
0809CE28: 087b         ldrb r0,[r1,#0xc]
0809CE2A: 0128         cmp r0,#0x1
0809CE2C: 0ed9         bls 0x0809ce4c
0809CE2E: 0649         ldr r1,[0x0809ce48]
0809CE30: 507a         ldrb r0,[r2,#0x9]
0809CE32: 8000         lsl r0,r0,#0x2
0809CE34: 4018         add r0,r0,r1
0809CE36: 0221         mov r1,#0x2
0809CE38: d160         str r1,[r2,#0xc]
0809CE3A: 0068         ldr r0,[r0,#0x0]
0809CE3C: 8068         ldr r0,[r0,#0x8]
0809CE3E: 5061         str r0,[r2,#0x14]
0809CE40: 101c         add r0,r2,#0x0
0809CE42: 00f00ff8     bl 0x0809ce64
0809CE46: 09e0         b 0x0809ce5c
0809CE4C: 0448         ldr r0,[0x0809ce60]
0809CE4E: 117c         ldrb r1,[r2,#0x10]
0809CE50: 8900         lsl r1,r1,#0x2
0809CE52: 0918         add r1,r1,r0
0809CE54: 0968         ldr r1,[r1,#0x0]
0809CE56: 101c         add r0,r2,#0x0
0809CE58: 8cf092f8     bl 0x08128f80
0809CE5C: 01bc         pop {r0}
0809CE5E: 0047         bx r0
