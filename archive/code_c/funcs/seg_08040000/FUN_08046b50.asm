; undefined FUN_08046b50(void)
; entry 0x8046b50  size 20 bytes

08046B50: 00b5         push {lr}
08046B52: c1f793f8     bl 0x08007c7c
08046B56: 0004         lsl r0,r0,#0x10
08046B58: 000c         lsr r0,r0,#0x10
08046B5A: 0f28         cmp r0,#0xf
08046B5C: 00d1         bne 0x08046b60
08046B5E: 0020         mov r0,#0x0
08046B60: 02bc         pop {r1}
08046B62: 0847         bx r1
