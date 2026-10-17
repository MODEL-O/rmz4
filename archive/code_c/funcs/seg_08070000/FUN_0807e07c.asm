; undefined FUN_0807e07c(void)
; entry 0x807e07c  size 30 bytes

0807E07C: 00b5         push {lr}
0807E07E: 817b         ldrb r1,[r0,#0xe]
0807E080: 0131         add r1,#0x1
0807E082: 0022         mov r2,#0x0
0807E084: 8173         strb r1,[r0,#0xe]
0807E086: c273         strb r2,[r0,#0xf]
0807E088: 044a         ldr r2,[0x0807e09c]
0807E08A: 417b         ldrb r1,[r0,#0xd]
0807E08C: 8900         lsl r1,r1,#0x2
0807E08E: 8918         add r1,r1,r2
0807E090: 0968         ldr r1,[r1,#0x0]
0807E092: aaf075ff     bl 0x08128f80
0807E096: 01bc         pop {r0}
0807E098: 0047         bx r0
