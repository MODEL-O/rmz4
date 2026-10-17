; undefined FUN_0807728c(void)
; entry 0x807728c  size 20 bytes

0807728C: 00b5         push {lr}
0807728E: 044a         ldr r2,[0x080772a0]
08077290: 817b         ldrb r1,[r0,#0xe]
08077292: 8900         lsl r1,r1,#0x2
08077294: 8918         add r1,r1,r2
08077296: 0968         ldr r1,[r1,#0x0]
08077298: b1f072fe     bl 0x08128f80
0807729C: 01bc         pop {r0}
0807729E: 0047         bx r0
