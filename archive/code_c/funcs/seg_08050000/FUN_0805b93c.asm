; undefined FUN_0805b93c(void)
; entry 0x805b93c  size 42 bytes

0805B93C: 70b5         push {r4,r5,r6,lr}
0805B93E: 84b0         sub sp,#0x10
0805B940: 041c         add r4,r0,#0x0
0805B942: 0748         ldr r0,[0x0805b960]
0805B944: 4168         ldr r1,[r0,#0x4]
0805B946: 0068         ldr r0,[r0,#0x0]
0805B948: 0090         str r0,[sp,#0x0]
0805B94A: 0191         str r1,[sp,#0x4]
0805B94C: e07b         ldrb r0,[r4,#0xf]
0805B94E: 0728         cmp r0,#0x7
0805B950: 00d9         bls 0x0805b954
0805B952: 58e1         b 0x0805bc06
0805B954: 8000         lsl r0,r0,#0x2
0805B956: 0349         ldr r1,[0x0805b964]
0805B958: 4018         add r0,r0,r1
0805B95A: 0068         ldr r0,[r0,#0x0]
0805B95C: 8746         mov pc,r0
0805BC06: 04b0         add sp,#0x10
0805BC08: 70bc         pop {r4,r5,r6}
0805BC0A: 01bc         pop {r0}
0805BC0C: 0047         bx r0
