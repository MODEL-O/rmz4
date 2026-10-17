; undefined FUN_0801d390(void)
; entry 0x801d390  size 52 bytes

0801D390: 00b5         push {lr}
0801D392: 031c         add r3,r0,#0x0
0801D394: d97a         ldrb r1,[r3,#0xb]
0801D396: 0420         mov r0,#0x4
0801D398: 0840         and r0,r1
0801D39A: 0028         cmp r0,#0x0
0801D39C: 06d0         beq 0x0801d3ac
0801D39E: 1a1c         add r2,r3,#0x0
0801D3A0: 2232         add r2,#0x22
0801D3A2: 0148         ldr r0,[0x0801d3a8]
0801D3A4: 05e0         b 0x0801d3b2
0801D3AC: 1a1c         add r2,r3,#0x0
0801D3AE: 2232         add r2,#0x22
0801D3B0: 0648         ldr r0,[0x0801d3cc]
0801D3B2: 997f         ldrb r1,[r3,#0x1e]
0801D3B4: 4900         lsl r1,r1,#0x1
0801D3B6: 0918         add r1,r1,r0
0801D3B8: 0888         ldrh r0,[r1,#0x0]
0801D3BA: 1278         ldrb r2,[r2,#0x0]
0801D3BC: 8018         add r0,r0,r2
0801D3BE: 0004         lsl r0,r0,#0x10
0801D3C0: 000c         lsr r0,r0,#0x10
0801D3C2: 0006         lsl r0,r0,#0x18
0801D3C4: 000e         lsr r0,r0,#0x18
0801D3C6: 02bc         pop {r1}
0801D3C8: 0847         bx r1
