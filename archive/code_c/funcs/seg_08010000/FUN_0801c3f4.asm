; undefined FUN_0801c3f4(void)
; entry 0x801c3f4  size 56 bytes

0801C3F4: 00b5         push {lr}
0801C3F6: 031c         add r3,r0,#0x0
0801C3F8: 9a6e         ldr r2,[r3,#0x68]
0801C3FA: 002a         cmp r2,#0x0
0801C3FC: 08d0         beq 0x0801c410
0801C3FE: 0b49         ldr r1,[0x0801c42c]
0801C400: 507a         ldrb r0,[r2,#0x9]
0801C402: 8000         lsl r0,r0,#0x2
0801C404: 4018         add r0,r0,r1
0801C406: 0221         mov r1,#0x2
0801C408: d160         str r1,[r2,#0xc]
0801C40A: 0068         ldr r0,[r0,#0x0]
0801C40C: 8068         ldr r0,[r0,#0x8]
0801C40E: 5061         str r0,[r2,#0x14]
0801C410: da6e         ldr r2,[r3,#0x6c]
0801C412: 002a         cmp r2,#0x0
0801C414: 08d0         beq 0x0801c428
0801C416: 0549         ldr r1,[0x0801c42c]
0801C418: 507a         ldrb r0,[r2,#0x9]
0801C41A: 8000         lsl r0,r0,#0x2
0801C41C: 4018         add r0,r0,r1
0801C41E: 0221         mov r1,#0x2
0801C420: d160         str r1,[r2,#0xc]
0801C422: 0068         ldr r0,[r0,#0x0]
0801C424: 8068         ldr r0,[r0,#0x8]
0801C426: 5061         str r0,[r2,#0x14]
0801C428: 01bc         pop {r0}
0801C42A: 0047         bx r0
