; undefined FUN_08032fdc(void)
; entry 0x8032fdc  size 30 bytes

08032FDC: 00b5         push {lr}
08032FDE: ba21         mov r1,#0xba
08032FE0: 4900         lsl r1,r1,#0x1
08032FE2: 4218         add r2,r0,r1
08032FE4: 0521         mov r1,#0x5
08032FE6: 1170         strb r1,[r2,#0x0]
08032FE8: 044a         ldr r2,[0x08032ffc]
08032FEA: 817b         ldrb r1,[r0,#0xe]
08032FEC: 8900         lsl r1,r1,#0x2
08032FEE: 8918         add r1,r1,r2
08032FF0: 0968         ldr r1,[r1,#0x0]
08032FF2: f5f0c5ff     bl 0x08128f80
08032FF6: 01bc         pop {r0}
08032FF8: 0047         bx r0
