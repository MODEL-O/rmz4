; undefined FUN_08054314(void)
; entry 0x8054314  size 20 bytes

08054314: 00b5         push {lr}
08054316: 044a         ldr r2,[0x08054328]
08054318: 817b         ldrb r1,[r0,#0xe]
0805431A: 8900         lsl r1,r1,#0x2
0805431C: 8918         add r1,r1,r2
0805431E: 0968         ldr r1,[r1,#0x0]
08054320: d4f02efe     bl 0x08128f80
08054324: 01bc         pop {r0}
08054326: 0047         bx r0
