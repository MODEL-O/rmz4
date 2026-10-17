; undefined FUN_080377d0(void)
; entry 0x80377d0  size 48 bytes

080377D0: 10b5         push {r4,lr}
080377D2: 041c         add r4,r0,#0x0
080377D4: 9021         mov r1,#0x90
080377D6: 8901         lsl r1,r1,#0x6
080377D8: e5f792fb     bl 0x0801cf00
080377DC: 201c         add r0,r4,#0x0
080377DE: 02f093fd     bl 0x0803a308
080377E2: 0748         ldr r0,[0x08037800]
080377E4: 2218         add r2,r4,r0
080377E6: 0021         mov r1,#0x0
080377E8: 0120         mov r0,#0x1
080377EA: 1070         strb r0,[r2,#0x0]
080377EC: 8122         mov r2,#0x81
080377EE: 5200         lsl r2,r2,#0x1
080377F0: a018         add r0,r4,r2
080377F2: 0170         strb r1,[r0,#0x0]
080377F4: 201c         add r0,r4,#0x0
080377F6: 00f005f8     bl 0x08037804
080377FA: 10bc         pop {r4}
080377FC: 01bc         pop {r0}
080377FE: 0047         bx r0
