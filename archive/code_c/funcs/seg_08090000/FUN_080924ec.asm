; undefined FUN_080924ec(void)
; entry 0x80924ec  size 36 bytes

080924EC: f0b5         push {r4,r5,r6,r7,lr}
080924EE: 4746         mov r7,r8
080924F0: 80b4         push {r7}
080924F2: 061c         add r6,r0,#0x0
080924F4: b07b         ldrb r0,[r6,#0xe]
080924F6: 0428         cmp r0,#0x4
080924F8: 00d9         bls 0x080924fc
080924FA: b6e0         b 0x0809266a
080924FC: 8000         lsl r0,r0,#0x2
080924FE: 0249         ldr r1,[0x08092508]
08092500: 4018         add r0,r0,r1
08092502: 0068         ldr r0,[r0,#0x0]
08092504: 8746         mov pc,r0
0809266A: 08bc         pop {r3}
0809266C: 9846         mov r8,r3
0809266E: f0bc         pop {r4,r5,r6,r7}
08092670: 01bc         pop {r0}
08092672: 0047         bx r0
