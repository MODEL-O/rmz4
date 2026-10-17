; undefined FUN_080725f0(void)
; entry 0x80725f0  size 20 bytes

080725F0: 00b5         push {lr}
080725F2: 044a         ldr r2,[0x08072604]
080725F4: 817b         ldrb r1,[r0,#0xe]
080725F6: 8900         lsl r1,r1,#0x2
080725F8: 8918         add r1,r1,r2
080725FA: 0968         ldr r1,[r1,#0x0]
080725FC: b6f0c0fc     bl 0x08128f80
08072600: 01bc         pop {r0}
08072602: 0047         bx r0
