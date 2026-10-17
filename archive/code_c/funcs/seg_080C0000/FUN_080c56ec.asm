; undefined FUN_080c56ec(void)
; entry 0x80c56ec  size 58 bytes

080C56EC: 00b5         push {lr}
080C56EE: 021c         add r2,r0,#0x0
080C56F0: 906a         ldr r0,[r2,#0x28]
080C56F2: 007b         ldrb r0,[r0,#0xc]
080C56F4: 0128         cmp r0,#0x1
080C56F6: 0fd9         bls 0x080c5718
080C56F8: 0649         ldr r1,[0x080c5714]
080C56FA: 507a         ldrb r0,[r2,#0x9]
080C56FC: 8000         lsl r0,r0,#0x2
080C56FE: 4018         add r0,r0,r1
080C5700: 0221         mov r1,#0x2
080C5702: d160         str r1,[r2,#0xc]
080C5704: 0068         ldr r0,[r0,#0x0]
080C5706: 8068         ldr r0,[r0,#0x8]
080C5708: 5061         str r0,[r2,#0x14]
080C570A: 101c         add r0,r2,#0x0
080C570C: 00f0a0fb     bl 0x080c5e50
080C5710: 0ae0         b 0x080c5728
080C5718: 0448         ldr r0,[0x080c572c]
080C571A: 517b         ldrb r1,[r2,#0xd]
080C571C: 8900         lsl r1,r1,#0x2
080C571E: 0918         add r1,r1,r0
080C5720: 0968         ldr r1,[r1,#0x0]
080C5722: 101c         add r0,r2,#0x0
080C5724: 63f02cfc     bl 0x08128f80
080C5728: 01bc         pop {r0}
080C572A: 0047         bx r0
