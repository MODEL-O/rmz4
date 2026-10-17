; undefined FUN_0810b774(void)
; entry 0x810b774  size 58 bytes

0810B774: 00b5         push {lr}
0810B776: 021c         add r2,r0,#0x0
0810B778: d06a         ldr r0,[r2,#0x2c]
0810B77A: 0078         ldrb r0,[r0,#0x0]
0810B77C: 0028         cmp r0,#0x0
0810B77E: 0fd0         beq 0x0810b7a0
0810B780: 0649         ldr r1,[0x0810b79c]
0810B782: 507a         ldrb r0,[r2,#0x9]
0810B784: 8000         lsl r0,r0,#0x2
0810B786: 4018         add r0,r0,r1
0810B788: 0221         mov r1,#0x2
0810B78A: d160         str r1,[r2,#0xc]
0810B78C: 0068         ldr r0,[r0,#0x0]
0810B78E: 8068         ldr r0,[r0,#0x8]
0810B790: 5061         str r0,[r2,#0x14]
0810B792: 101c         add r0,r2,#0x0
0810B794: 00f010f8     bl 0x0810b7b8
0810B798: 0ae0         b 0x0810b7b0
0810B7A0: 0448         ldr r0,[0x0810b7b4]
0810B7A2: 117c         ldrb r1,[r2,#0x10]
0810B7A4: 8900         lsl r1,r1,#0x2
0810B7A6: 0918         add r1,r1,r0
0810B7A8: 0968         ldr r1,[r1,#0x0]
0810B7AA: 101c         add r0,r2,#0x0
0810B7AC: 1df0e8fb     bl 0x08128f80
0810B7B0: 01bc         pop {r0}
0810B7B2: 0047         bx r0
