; undefined FUN_08077748(void)
; entry 0x8077748  size 20 bytes

08077748: 00b5         push {lr}
0807774A: 044a         ldr r2,[0x0807775c]
0807774C: 817b         ldrb r1,[r0,#0xe]
0807774E: 8900         lsl r1,r1,#0x2
08077750: 8918         add r1,r1,r2
08077752: 0968         ldr r1,[r1,#0x0]
08077754: b1f014fc     bl 0x08128f80
08077758: 01bc         pop {r0}
0807775A: 0047         bx r0
