; undefined FUN_080d8998(void)
; entry 0x80d8998  size 66 bytes

080D8998: f0b5         push {r4,r5,r6,r7,lr}
080D899A: 82b0         sub sp,#0x8
080D899C: 817a         ldrb r1,[r0,#0xa]
080D899E: 0909         lsr r1,r1,#0x4
080D89A0: 0122         mov r2,#0x1
080D89A2: 1140         and r1,r2
080D89A4: 021c         add r2,r0,#0x0
080D89A6: 7432         add r2,#0x74
080D89A8: 1378         ldrb r3,[r2,#0x0]
080D89AA: 426d         ldr r2,[r0,#0x54]
080D89AC: 0092         str r2,[sp,#0x0]
080D89AE: 806d         ldr r0,[r0,#0x58]
080D89B0: 0190         str r0,[sp,#0x4]
080D89B2: 0901         lsl r1,r1,#0x4
080D89B4: 0b43         orr r3,r1
080D89B6: 1e06         lsl r6,r3,#0x18
080D89B8: 0025         mov r5,#0x0
080D89BA: 084f         ldr r7,[0x080d89dc]
080D89BC: 0224         mov r4,#0x2
080D89BE: e919         add r1,r5,r7
080D89C0: 6846         mov r0,sp
080D89C2: 0022         mov r2,#0x0
080D89C4: 330e         lsr r3,r6,#0x18
080D89C6: fcf761f9     bl 0x080d4c8c
080D89CA: 1c35         add r5,#0x1c
080D89CC: 013c         sub r4,#0x1
080D89CE: 002c         cmp r4,#0x0
080D89D0: f5da         bge 0x080d89be
080D89D2: 02b0         add sp,#0x8
080D89D4: f0bc         pop {r4,r5,r6,r7}
080D89D6: 01bc         pop {r0}
080D89D8: 0047         bx r0
