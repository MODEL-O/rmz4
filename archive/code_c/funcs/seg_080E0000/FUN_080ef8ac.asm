; undefined FUN_080ef8ac(void)
; entry 0x80ef8ac  size 34 bytes

080EF8AC: 10b5         push {r4,lr}
080EF8AE: 041c         add r4,r0,#0x0
080EF8B0: 607c         ldrb r0,[r4,#0x11]
080EF8B2: 1128         cmp r0,#0x11
080EF8B4: 00d9         bls 0x080ef8b8
080EF8B6: 44e1         b 0x080efb42
080EF8B8: 8000         lsl r0,r0,#0x2
080EF8BA: 0249         ldr r1,[0x080ef8c4]
080EF8BC: 4018         add r0,r0,r1
080EF8BE: 0068         ldr r0,[r0,#0x0]
080EF8C0: 8746         mov pc,r0
080EFB42: 201c         add r0,r4,#0x0
080EFB44: 2df754fa     bl 0x0801cff0
080EFB48: 10bc         pop {r4}
080EFB4A: 01bc         pop {r0}
080EFB4C: 0047         bx r0
