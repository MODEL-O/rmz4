; undefined FUN_080372b0(void)
; entry 0x80372b0  size 40 bytes

080372B0: 00b5         push {lr}
080372B2: 0949         ldr r1,[0x080372d8]
080372B4: 4318         add r3,r0,r1
080372B6: 1978         ldrb r1,[r3,#0x0]
080372B8: 0422         mov r2,#0x4
080372BA: 1143         orr r1,r2
080372BC: 0222         mov r2,#0x2
080372BE: 1143         orr r1,r2
080372C0: 1970         strb r1,[r3,#0x0]
080372C2: 064a         ldr r2,[0x080372dc]
080372C4: 064b         ldr r3,[0x080372e0]
080372C6: c118         add r1,r0,r3
080372C8: 0978         ldrb r1,[r1,#0x0]
080372CA: 8900         lsl r1,r1,#0x2
080372CC: 8918         add r1,r1,r2
080372CE: 0968         ldr r1,[r1,#0x0]
080372D0: f1f056fe     bl 0x08128f80
080372D4: 01bc         pop {r0}
080372D6: 0047         bx r0
