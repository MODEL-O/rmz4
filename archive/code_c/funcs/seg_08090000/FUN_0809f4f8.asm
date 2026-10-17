; undefined FUN_0809f4f8(void)
; entry 0x809f4f8  size 74 bytes

0809F4F8: 00b5         push {lr}
0809F4FA: 021c         add r2,r0,#0x0
0809F4FC: c030         add r0,#0xc0
0809F4FE: 0078         ldrb r0,[r0,#0x0]
0809F500: 0028         cmp r0,#0x0
0809F502: 17d0         beq 0x0809f534
0809F504: 101c         add r0,r2,#0x0
0809F506: 8c30         add r0,#0x8c
0809F508: 0068         ldr r0,[r0,#0x0]
0809F50A: 8021         mov r1,#0x80
0809F50C: 8900         lsl r1,r1,#0x2
0809F50E: 0840         and r0,r1
0809F510: 0028         cmp r0,#0x0
0809F512: 0fd0         beq 0x0809f534
0809F514: 0649         ldr r1,[0x0809f530]
0809F516: 507a         ldrb r0,[r2,#0x9]
0809F518: 8000         lsl r0,r0,#0x2
0809F51A: 4018         add r0,r0,r1
0809F51C: 0221         mov r1,#0x2
0809F51E: d160         str r1,[r2,#0xc]
0809F520: 0068         ldr r0,[r0,#0x0]
0809F522: 8068         ldr r0,[r0,#0x8]
0809F524: 5061         str r0,[r2,#0x14]
0809F526: 101c         add r0,r2,#0x0
0809F528: 00f010f8     bl 0x0809f54c
0809F52C: 0ae0         b 0x0809f544
0809F534: 0448         ldr r0,[0x0809f548]
0809F536: 117c         ldrb r1,[r2,#0x10]
0809F538: 8900         lsl r1,r1,#0x2
0809F53A: 0918         add r1,r1,r0
0809F53C: 0968         ldr r1,[r1,#0x0]
0809F53E: 101c         add r0,r2,#0x0
0809F540: 89f01efd     bl 0x08128f80
0809F544: 01bc         pop {r0}
0809F546: 0047         bx r0
