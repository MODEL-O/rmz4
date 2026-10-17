; undefined FUN_08048458(void)
; entry 0x8048458  size 20 bytes

08048458: 00b5         push {lr}
0804845A: 044a         ldr r2,[0x0804846c]
0804845C: 017c         ldrb r1,[r0,#0x10]
0804845E: 8900         lsl r1,r1,#0x2
08048460: 8918         add r1,r1,r2
08048462: 0968         ldr r1,[r1,#0x0]
08048464: e0f08cfd     bl 0x08128f80
08048468: 01bc         pop {r0}
0804846A: 0047         bx r0
