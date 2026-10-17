; undefined FUN_080294dc(void)
; entry 0x80294dc  size 36 bytes

080294DC: f0b5         push {r4,r5,r6,r7,lr}
080294DE: 83b0         sub sp,#0xc
080294E0: 071c         add r7,r0,#0x0
080294E2: f868         ldr r0,[r7,#0xc]
080294E4: 4078         ldrb r0,[r0,#0x1]
080294E6: 0b28         cmp r0,#0xb
080294E8: 00d9         bls 0x080294ec
080294EA: 31e3         b 0x08029b50
080294EC: 8000         lsl r0,r0,#0x2
080294EE: 0249         ldr r1,[0x080294f8]
080294F0: 4018         add r0,r0,r1
080294F2: 0068         ldr r0,[r0,#0x0]
080294F4: 8746         mov pc,r0
08029B50: 0020         mov r0,#0x0
08029B52: 03b0         add sp,#0xc
08029B54: f0bc         pop {r4,r5,r6,r7}
08029B56: 02bc         pop {r1}
08029B58: 0847         bx r1
