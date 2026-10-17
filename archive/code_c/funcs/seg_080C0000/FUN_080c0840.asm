; undefined FUN_080c0840(void)
; entry 0x80c0840  size 20 bytes

080C0840: 00b5         push {lr}
080C0842: 044a         ldr r2,[0x080c0854]
080C0844: 817b         ldrb r1,[r0,#0xe]
080C0846: 8900         lsl r1,r1,#0x2
080C0848: 8918         add r1,r1,r2
080C084A: 0968         ldr r1,[r1,#0x0]
080C084C: 68f098fb     bl 0x08128f80
080C0850: 01bc         pop {r0}
080C0852: 0047         bx r0
