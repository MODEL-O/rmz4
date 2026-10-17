; undefined FUN_080780a8(void)
; entry 0x80780a8  size 30 bytes

080780A8: 10b5         push {r4,lr}
080780AA: 041c         add r4,r0,#0x0
080780AC: 01f0e0f8     bl 0x08079270
080780B0: 0549         ldr r1,[0x080780c8]
080780B2: 607b         ldrb r0,[r4,#0xd]
080780B4: 8000         lsl r0,r0,#0x2
080780B6: 4018         add r0,r0,r1
080780B8: 0168         ldr r1,[r0,#0x0]
080780BA: 201c         add r0,r4,#0x0
080780BC: b0f060ff     bl 0x08128f80
080780C0: 10bc         pop {r4}
080780C2: 01bc         pop {r0}
080780C4: 0047         bx r0
