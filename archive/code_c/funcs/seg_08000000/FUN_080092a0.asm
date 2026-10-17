; undefined FUN_080092a0(void)
; entry 0x80092a0  size 26 bytes

080092A0: 00b5         push {lr}
080092A2: 021c         add r2,r0,#0x0
080092A4: 0348         ldr r0,[0x080092b4]
080092A6: 8242         cmp r2,r0
080092A8: 02dc         bgt 0x080092b0
080092AA: 5000         lsl r0,r2,#0x1
080092AC: 8142         cmp r1,r0
080092AE: 03da         bge 0x080092b8
080092B0: c843         mvn r0,r1
080092B2: 02e0         b 0x080092ba
080092B8: 0020         mov r0,#0x0
080092BA: 02bc         pop {r1}
080092BC: 0847         bx r1
