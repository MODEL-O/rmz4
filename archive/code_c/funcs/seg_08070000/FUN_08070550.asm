; undefined FUN_08070550(void)
; entry 0x8070550  size 40 bytes

08070550: 00b5         push {lr}
08070552: 011c         add r1,r0,#0x0
08070554: b431         add r1,#0xb4
08070556: 0968         ldr r1,[r1,#0x0]
08070558: b431         add r1,#0xb4
0807055A: 0022         mov r2,#0x0
0807055C: 0a70         strb r2,[r1,#0x0]
0807055E: 817b         ldrb r1,[r0,#0xe]
08070560: 0131         add r1,#0x1
08070562: 8173         strb r1,[r0,#0xe]
08070564: c273         strb r2,[r0,#0xf]
08070566: 044a         ldr r2,[0x08070578]
08070568: 417b         ldrb r1,[r0,#0xd]
0807056A: 8900         lsl r1,r1,#0x2
0807056C: 8918         add r1,r1,r2
0807056E: 0968         ldr r1,[r1,#0x0]
08070570: b8f006fd     bl 0x08128f80
08070574: 01bc         pop {r0}
08070576: 0047         bx r0
