; undefined FUN_0803b574(void)
; entry 0x803b574  size 30 bytes

0803B574: 00b5         push {lr}
0803B576: 031c         add r3,r0,#0x0
0803B578: b433         add r3,#0xb4
0803B57A: 1a68         ldr r2,[r3,#0x0]
0803B57C: a421         mov r1,#0xa4
0803B57E: 4900         lsl r1,r1,#0x1
0803B580: 5218         add r2,r2,r1
0803B582: 1178         ldrb r1,[r2,#0x0]
0803B584: 9b7b         ldrb r3,[r3,#0xe]
0803B586: c91a         sub r1,r1,r3
0803B588: 1170         strb r1,[r2,#0x0]
0803B58A: caf70bf8     bl 0x080055a4
0803B58E: 01bc         pop {r0}
0803B590: 0047         bx r0
