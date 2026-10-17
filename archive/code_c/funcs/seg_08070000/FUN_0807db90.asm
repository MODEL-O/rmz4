; undefined FUN_0807db90(void)
; entry 0x807db90  size 30 bytes

0807DB90: 00b5         push {lr}
0807DB92: 817b         ldrb r1,[r0,#0xe]
0807DB94: 0131         add r1,#0x1
0807DB96: 0022         mov r2,#0x0
0807DB98: 8173         strb r1,[r0,#0xe]
0807DB9A: c273         strb r2,[r0,#0xf]
0807DB9C: 044a         ldr r2,[0x0807dbb0]
0807DB9E: 417b         ldrb r1,[r0,#0xd]
0807DBA0: 8900         lsl r1,r1,#0x2
0807DBA2: 8918         add r1,r1,r2
0807DBA4: 0968         ldr r1,[r1,#0x0]
0807DBA6: abf0ebf9     bl 0x08128f80
0807DBAA: 01bc         pop {r0}
0807DBAC: 0047         bx r0
