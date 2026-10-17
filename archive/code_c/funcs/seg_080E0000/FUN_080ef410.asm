; undefined FUN_080ef410(void)
; entry 0x80ef410  size 42 bytes

080EF410: f0b5         push {r4,r5,r6,r7,lr}
080EF412: 90b0         sub sp,#0x40
080EF414: 041c         add r4,r0,#0x0
080EF416: 0749         ldr r1,[0x080ef434]
080EF418: 6846         mov r0,sp
080EF41A: 3822         mov r2,#0x38
080EF41C: 39f01cff     bl 0x08129258
080EF420: 607b         ldrb r0,[r4,#0xd]
080EF422: 0d28         cmp r0,#0xd
080EF424: 00d9         bls 0x080ef428
080EF426: a5e1         b 0x080ef774
080EF428: 8000         lsl r0,r0,#0x2
080EF42A: 0349         ldr r1,[0x080ef438]
080EF42C: 4018         add r0,r0,r1
080EF42E: 0068         ldr r0,[r0,#0x0]
080EF430: 8746         mov pc,r0
080EF774: 10b0         add sp,#0x40
080EF776: f0bc         pop {r4,r5,r6,r7}
080EF778: 01bc         pop {r0}
080EF77A: 0047         bx r0
