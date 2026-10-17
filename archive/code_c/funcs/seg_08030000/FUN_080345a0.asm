; undefined FUN_080345a0(void)
; entry 0x80345a0  size 46 bytes

080345A0: 10b5         push {r4,lr}
080345A2: 041c         add r4,r0,#0x0
080345A4: 0a49         ldr r1,[0x080345d0]
080345A6: e8f7abfc     bl 0x0801cf00
080345AA: 201c         add r0,r4,#0x0
080345AC: 05f0acfe     bl 0x0803a308
080345B0: 0848         ldr r0,[0x080345d4]
080345B2: 2218         add r2,r4,r0
080345B4: 0021         mov r1,#0x0
080345B6: 0120         mov r0,#0x1
080345B8: 1070         strb r0,[r2,#0x0]
080345BA: 8122         mov r2,#0x81
080345BC: 5200         lsl r2,r2,#0x1
080345BE: a018         add r0,r4,r2
080345C0: 0170         strb r1,[r0,#0x0]
080345C2: 201c         add r0,r4,#0x0
080345C4: 00f008f8     bl 0x080345d8
080345C8: 10bc         pop {r4}
080345CA: 01bc         pop {r0}
080345CC: 0047         bx r0
