; undefined FUN_080b9790(void)
; entry 0x80b9790  size 60 bytes

080B9790: f0b5         push {r4,r5,r6,r7,lr}
080B9792: 82b0         sub sp,#0x8
080B9794: 817a         ldrb r1,[r0,#0xa]
080B9796: 0909         lsr r1,r1,#0x4
080B9798: 0122         mov r2,#0x1
080B979A: 1140         and r1,r2
080B979C: 426d         ldr r2,[r0,#0x54]
080B979E: 0092         str r2,[sp,#0x0]
080B97A0: 806d         ldr r0,[r0,#0x58]
080B97A2: 0190         str r0,[sp,#0x4]
080B97A4: 0801         lsl r0,r1,#0x4
080B97A6: 0143         orr r1,r0
080B97A8: 0e06         lsl r6,r1,#0x18
080B97AA: 0025         mov r5,#0x0
080B97AC: 074f         ldr r7,[0x080b97cc]
080B97AE: 0224         mov r4,#0x2
080B97B0: e919         add r1,r5,r7
080B97B2: 6846         mov r0,sp
080B97B4: 0022         mov r2,#0x0
080B97B6: 330e         lsr r3,r6,#0x18
080B97B8: 1bf068fa     bl 0x080d4c8c
080B97BC: 1c35         add r5,#0x1c
080B97BE: 013c         sub r4,#0x1
080B97C0: 002c         cmp r4,#0x0
080B97C2: f5da         bge 0x080b97b0
080B97C4: 02b0         add sp,#0x8
080B97C6: f0bc         pop {r4,r5,r6,r7}
080B97C8: 01bc         pop {r0}
080B97CA: 0047         bx r0
