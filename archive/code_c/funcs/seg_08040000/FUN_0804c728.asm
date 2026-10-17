; undefined FUN_0804c728(void)
; entry 0x804c728  size 64 bytes

0804C728: 00b5         push {lr}
0804C72A: 021c         add r2,r0,#0x0
0804C72C: 8c30         add r0,#0x8c
0804C72E: 0068         ldr r0,[r0,#0x0]
0804C730: 8021         mov r1,#0x80
0804C732: 8900         lsl r1,r1,#0x2
0804C734: 0840         and r0,r1
0804C736: 0028         cmp r0,#0x0
0804C738: 0ed0         beq 0x0804c758
0804C73A: 0649         ldr r1,[0x0804c754]
0804C73C: 507a         ldrb r0,[r2,#0x9]
0804C73E: 8000         lsl r0,r0,#0x2
0804C740: 4018         add r0,r0,r1
0804C742: 0221         mov r1,#0x2
0804C744: d160         str r1,[r2,#0xc]
0804C746: 0068         ldr r0,[r0,#0x0]
0804C748: 8068         ldr r0,[r0,#0x8]
0804C74A: 5061         str r0,[r2,#0x14]
0804C74C: 101c         add r0,r2,#0x0
0804C74E: 00f00ff8     bl 0x0804c770
0804C752: 09e0         b 0x0804c768
0804C758: 0448         ldr r0,[0x0804c76c]
0804C75A: 117c         ldrb r1,[r2,#0x10]
0804C75C: 8900         lsl r1,r1,#0x2
0804C75E: 0918         add r1,r1,r0
0804C760: 0968         ldr r1,[r1,#0x0]
0804C762: 101c         add r0,r2,#0x0
0804C764: dcf00cfc     bl 0x08128f80
0804C768: 01bc         pop {r0}
0804C76A: 0047         bx r0
