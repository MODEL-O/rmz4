; undefined FUN_0810b148(void)
; entry 0x810b148  size 64 bytes

0810B148: 00b5         push {lr}
0810B14A: 021c         add r2,r0,#0x0
0810B14C: 906a         ldr r0,[r2,#0x28]
0810B14E: dd21         mov r1,#0xdd
0810B150: 0901         lsl r1,r1,#0x4
0810B152: 4018         add r0,r0,r1
0810B154: 4078         ldrb r0,[r0,#0x1]
0810B156: 0028         cmp r0,#0x0
0810B158: 0ed0         beq 0x0810b178
0810B15A: 0649         ldr r1,[0x0810b174]
0810B15C: 507a         ldrb r0,[r2,#0x9]
0810B15E: 8000         lsl r0,r0,#0x2
0810B160: 4018         add r0,r0,r1
0810B162: 0221         mov r1,#0x2
0810B164: d160         str r1,[r2,#0xc]
0810B166: 0068         ldr r0,[r0,#0x0]
0810B168: 8068         ldr r0,[r0,#0x8]
0810B16A: 5061         str r0,[r2,#0x14]
0810B16C: 101c         add r0,r2,#0x0
0810B16E: 00f00ff8     bl 0x0810b190
0810B172: 09e0         b 0x0810b188
0810B178: 0448         ldr r0,[0x0810b18c]
0810B17A: 117c         ldrb r1,[r2,#0x10]
0810B17C: 8900         lsl r1,r1,#0x2
0810B17E: 0918         add r1,r1,r0
0810B180: 0968         ldr r1,[r1,#0x0]
0810B182: 101c         add r0,r2,#0x0
0810B184: 1df0fcfe     bl 0x08128f80
0810B188: 01bc         pop {r0}
0810B18A: 0047         bx r0
