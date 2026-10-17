; undefined FUN_080c6088(void)
; entry 0x80c6088  size 70 bytes

080C6088: f0b5         push {r4,r5,r6,r7,lr}
080C608A: 82b0         sub sp,#0x8
080C608C: 051c         add r5,r0,#0x0
080C608E: a87a         ldrb r0,[r5,#0xa]
080C6090: 0009         lsr r0,r0,#0x4
080C6092: 0121         mov r1,#0x1
080C6094: 0840         and r0,r1
080C6096: 0024         mov r4,#0x0
080C6098: 6f46         mov r7,sp
080C609A: 0101         lsl r1,r0,#0x4
080C609C: 0843         orr r0,r1
080C609E: 0606         lsl r6,r0,#0x18
080C60A0: 686d         ldr r0,[r5,#0x54]
080C60A2: 0090         str r0,[sp,#0x0]
080C60A4: a86d         ldr r0,[r5,#0x58]
080C60A6: 7860         str r0,[r7,#0x4]
080C60A8: 0134         add r4,#0x1
080C60AA: 0320         mov r0,#0x3
080C60AC: 2040         and r0,r4
080C60AE: c100         lsl r1,r0,#0x3
080C60B0: 091a         sub r1,r1,r0
080C60B2: 8900         lsl r1,r1,#0x2
080C60B4: 0648         ldr r0,[0x080c60d0]
080C60B6: 0918         add r1,r1,r0
080C60B8: 6846         mov r0,sp
080C60BA: 0022         mov r2,#0x0
080C60BC: 330e         lsr r3,r6,#0x18
080C60BE: 0ef0e5fd     bl 0x080d4c8c
080C60C2: 012c         cmp r4,#0x1
080C60C4: ecdd         ble 0x080c60a0
080C60C6: 02b0         add sp,#0x8
080C60C8: f0bc         pop {r4,r5,r6,r7}
080C60CA: 01bc         pop {r0}
080C60CC: 0047         bx r0
