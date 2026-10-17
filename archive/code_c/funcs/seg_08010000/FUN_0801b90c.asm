; undefined FUN_0801b90c(void)
; entry 0x801b90c  size 56 bytes

0801B90C: 00b5         push {lr}
0801B90E: 021c         add r2,r0,#0x0
0801B910: 907b         ldrb r0,[r2,#0xe]
0801B912: 0028         cmp r0,#0x0
0801B914: 17d1         bne 0x0801b946
0801B916: 5064         str r0,[r2,#0x44]
0801B918: 9064         str r0,[r2,#0x48]
0801B91A: 516b         ldr r1,[r2,#0x34]
0801B91C: 0448         ldr r0,[0x0801b930]
0801B91E: 8142         cmp r1,r0
0801B920: 08dc         bgt 0x0801b934
0801B922: b420         mov r0,#0xb4
0801B924: 8000         lsl r0,r0,#0x2
0801B926: d064         str r0,[r2,#0x4c]
0801B928: dc20         mov r0,#0xdc
0801B92A: c000         lsl r0,r0,#0x3
0801B92C: 07e0         b 0x0801b93e
0801B934: b420         mov r0,#0xb4
0801B936: 0001         lsl r0,r0,#0x4
0801B938: d064         str r0,[r2,#0x4c]
0801B93A: f020         mov r0,#0xf0
0801B93C: 8000         lsl r0,r0,#0x2
0801B93E: 1065         str r0,[r2,#0x50]
0801B940: 907b         ldrb r0,[r2,#0xe]
0801B942: 0130         add r0,#0x1
0801B944: 9073         strb r0,[r2,#0xe]
0801B946: 01bc         pop {r0}
0801B948: 0047         bx r0
