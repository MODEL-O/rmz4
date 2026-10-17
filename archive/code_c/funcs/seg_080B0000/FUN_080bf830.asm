; undefined FUN_080bf830(void)
; entry 0x80bf830  size 20 bytes

080BF830: 00b5         push {lr}
080BF832: 044a         ldr r2,[0x080bf844]
080BF834: 017c         ldrb r1,[r0,#0x10]
080BF836: 8900         lsl r1,r1,#0x2
080BF838: 8918         add r1,r1,r2
080BF83A: 0968         ldr r1,[r1,#0x0]
080BF83C: 69f0a0fb     bl 0x08128f80
080BF840: 01bc         pop {r0}
080BF842: 0047         bx r0
