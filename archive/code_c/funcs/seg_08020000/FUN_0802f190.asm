; undefined FUN_0802f190(void)
; entry 0x802f190  size 54 bytes

0802F190: 10b5         push {r4,lr}
0802F192: 041c         add r4,r0,#0x0
0802F194: fcf770f9     bl 0x0802b478
0802F198: 031c         add r3,r0,#0x0
0802F19A: 002b         cmp r3,#0x0
0802F19C: 0fd0         beq 0x0802f1be
0802F19E: 191c         add r1,r3,#0x0
0802F1A0: 2531         add r1,#0x25
0802F1A2: 0022         mov r2,#0x0
0802F1A4: 1020         mov r0,#0x10
0802F1A6: 0870         strb r0,[r1,#0x0]
0802F1A8: 0748         ldr r0,[0x0802f1c8]
0802F1AA: 5a72         strb r2,[r3,#0x9]
0802F1AC: 0068         ldr r0,[r0,#0x0]
0802F1AE: 0068         ldr r0,[r0,#0x0]
0802F1B0: 5861         str r0,[r3,#0x14]
0802F1B2: 2068         ldr r0,[r4,#0x0]
0802F1B4: 6168         ldr r1,[r4,#0x4]
0802F1B6: 5865         str r0,[r3,#0x54]
0802F1B8: 9965         str r1,[r3,#0x58]
0802F1BA: 1a74         strb r2,[r3,#0x10]
0802F1BC: 5a74         strb r2,[r3,#0x11]
0802F1BE: 181c         add r0,r3,#0x0
0802F1C0: 10bc         pop {r4}
0802F1C2: 02bc         pop {r1}
0802F1C4: 0847         bx r1
