; undefined FUN_080cc734(void)
; entry 0x80cc734  size 64 bytes

080CC734: 10b5         push {r4,lr}
080CC736: 041c         add r4,r0,#0x0
080CC738: 50f75afc     bl 0x0801cff0
080CC73C: 606d         ldr r0,[r4,#0x54]
080CC73E: e16d         ldr r1,[r4,#0x5c]
080CC740: 4018         add r0,r0,r1
080CC742: 6065         str r0,[r4,#0x54]
080CC744: a16d         ldr r1,[r4,#0x58]
080CC746: 226e         ldr r2,[r4,#0x60]
080CC748: 8918         add r1,r1,r2
080CC74A: a165         str r1,[r4,#0x58]
080CC74C: 3bf796fa     bl 0x08007c7c
080CC750: 0004         lsl r0,r0,#0x10
080CC752: 0028         cmp r0,#0x0
080CC754: 0bd0         beq 0x080cc76e
080CC756: 0749         ldr r1,[0x080cc774]
080CC758: 607a         ldrb r0,[r4,#0x9]
080CC75A: 8000         lsl r0,r0,#0x2
080CC75C: 4018         add r0,r0,r1
080CC75E: 0221         mov r1,#0x2
080CC760: e160         str r1,[r4,#0xc]
080CC762: 0068         ldr r0,[r0,#0x0]
080CC764: 8068         ldr r0,[r0,#0x8]
080CC766: 6061         str r0,[r4,#0x14]
080CC768: 201c         add r0,r4,#0x0
080CC76A: fff7a7fc     bl 0x080cc0bc
080CC76E: 10bc         pop {r4}
080CC770: 01bc         pop {r0}
080CC772: 0047         bx r0
