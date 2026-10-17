; undefined FUN_0807c2b8(void)
; entry 0x807c2b8  size 30 bytes

0807C2B8: 00b5         push {lr}
0807C2BA: 817b         ldrb r1,[r0,#0xe]
0807C2BC: 0131         add r1,#0x1
0807C2BE: 0022         mov r2,#0x0
0807C2C0: 8173         strb r1,[r0,#0xe]
0807C2C2: c273         strb r2,[r0,#0xf]
0807C2C4: 044a         ldr r2,[0x0807c2d8]
0807C2C6: 417b         ldrb r1,[r0,#0xd]
0807C2C8: 8900         lsl r1,r1,#0x2
0807C2CA: 8918         add r1,r1,r2
0807C2CC: 0968         ldr r1,[r1,#0x0]
0807C2CE: acf057fe     bl 0x08128f80
0807C2D2: 01bc         pop {r0}
0807C2D4: 0047         bx r0
