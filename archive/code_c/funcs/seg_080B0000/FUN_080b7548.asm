; undefined FUN_080b7548(void)
; entry 0x80b7548  size 60 bytes

080B7548: f0b5         push {r4,r5,r6,r7,lr}
080B754A: 82b0         sub sp,#0x8
080B754C: 817a         ldrb r1,[r0,#0xa]
080B754E: 0909         lsr r1,r1,#0x4
080B7550: 0122         mov r2,#0x1
080B7552: 1140         and r1,r2
080B7554: 426d         ldr r2,[r0,#0x54]
080B7556: 0092         str r2,[sp,#0x0]
080B7558: 806d         ldr r0,[r0,#0x58]
080B755A: 0190         str r0,[sp,#0x4]
080B755C: 0801         lsl r0,r1,#0x4
080B755E: 0143         orr r1,r0
080B7560: 0e06         lsl r6,r1,#0x18
080B7562: 0025         mov r5,#0x0
080B7564: 074f         ldr r7,[0x080b7584]
080B7566: 0224         mov r4,#0x2
080B7568: e919         add r1,r5,r7
080B756A: 6846         mov r0,sp
080B756C: 0022         mov r2,#0x0
080B756E: 330e         lsr r3,r6,#0x18
080B7570: 1df08cfb     bl 0x080d4c8c
080B7574: 1c35         add r5,#0x1c
080B7576: 013c         sub r4,#0x1
080B7578: 002c         cmp r4,#0x0
080B757A: f5da         bge 0x080b7568
080B757C: 02b0         add sp,#0x8
080B757E: f0bc         pop {r4,r5,r6,r7}
080B7580: 01bc         pop {r0}
080B7582: 0047         bx r0
