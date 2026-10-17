; undefined FUN_08077398(void)
; entry 0x8077398  size 20 bytes

08077398: 00b5         push {lr}
0807739A: 044a         ldr r2,[0x080773ac]
0807739C: 817b         ldrb r1,[r0,#0xe]
0807739E: 8900         lsl r1,r1,#0x2
080773A0: 8918         add r1,r1,r2
080773A2: 0968         ldr r1,[r1,#0x0]
080773A4: b1f0ecfd     bl 0x08128f80
080773A8: 01bc         pop {r0}
080773AA: 0047         bx r0
