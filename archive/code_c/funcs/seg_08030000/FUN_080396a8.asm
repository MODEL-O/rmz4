; undefined FUN_080396a8(void)
; entry 0x80396a8  size 22 bytes

080396A8: 00b5         push {lr}
080396AA: f2f729f8     bl 0x0802b700
080396AE: 0006         lsl r0,r0,#0x18
080396B0: 0028         cmp r0,#0x0
080396B2: 01d1         bne 0x080396b8
080396B4: 0020         mov r0,#0x0
080396B6: 00e0         b 0x080396ba
080396B8: 0120         mov r0,#0x1
080396BA: 02bc         pop {r1}
080396BC: 0847         bx r1
