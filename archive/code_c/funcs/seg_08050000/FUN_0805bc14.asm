; undefined FUN_0805bc14(void)
; entry 0x805bc14  size 50 bytes

0805BC14: f0b5         push {r4,r5,r6,r7,lr}
0805BC16: 86b0         sub sp,#0x18
0805BC18: 051c         add r5,r0,#0x0
0805BC1A: 0948         ldr r0,[0x0805bc40]
0805BC1C: 4168         ldr r1,[r0,#0x4]
0805BC1E: 0068         ldr r0,[r0,#0x0]
0805BC20: 0090         str r0,[sp,#0x0]
0805BC22: 0191         str r1,[sp,#0x4]
0805BC24: a87a         ldrb r0,[r5,#0xa]
0805BC26: 0709         lsr r7,r0,#0x4
0805BC28: 0120         mov r0,#0x1
0805BC2A: 0740         and r7,r0
0805BC2C: e87b         ldrb r0,[r5,#0xf]
0805BC2E: 0728         cmp r0,#0x7
0805BC30: 00d9         bls 0x0805bc34
0805BC32: 82e1         b 0x0805bf3a
0805BC34: 8000         lsl r0,r0,#0x2
0805BC36: 0349         ldr r1,[0x0805bc44]
0805BC38: 4018         add r0,r0,r1
0805BC3A: 0068         ldr r0,[r0,#0x0]
0805BC3C: 8746         mov pc,r0
0805BF3A: 06b0         add sp,#0x18
0805BF3C: f0bc         pop {r4,r5,r6,r7}
0805BF3E: 01bc         pop {r0}
0805BF40: 0047         bx r0
