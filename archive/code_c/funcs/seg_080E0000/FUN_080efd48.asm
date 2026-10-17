; undefined FUN_080efd48(void)
; entry 0x80efd48  size 34 bytes

080EFD48: 30b5         push {r4,r5,lr}
080EFD4A: 041c         add r4,r0,#0x0
080EFD4C: 607c         ldrb r0,[r4,#0x11]
080EFD4E: 0f28         cmp r0,#0xf
080EFD50: 00d9         bls 0x080efd54
080EFD52: 1fe1         b 0x080eff94
080EFD54: 8000         lsl r0,r0,#0x2
080EFD56: 0249         ldr r1,[0x080efd60]
080EFD58: 4018         add r0,r0,r1
080EFD5A: 0068         ldr r0,[r0,#0x0]
080EFD5C: 8746         mov pc,r0
080EFF94: 201c         add r0,r4,#0x0
080EFF96: 2df72bf8     bl 0x0801cff0
080EFF9A: 30bc         pop {r4,r5}
080EFF9C: 01bc         pop {r0}
080EFF9E: 0047         bx r0
