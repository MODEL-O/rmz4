; undefined FUN_080a0bcc(void)
; entry 0x80a0bcc  size 70 bytes

080A0BCC: f0b5         push {r4,r5,r6,r7,lr}
080A0BCE: 817a         ldrb r1,[r0,#0xa]
080A0BD0: 0909         lsr r1,r1,#0x4
080A0BD2: 0122         mov r2,#0x1
080A0BD4: 1140         and r1,r2
080A0BD6: 4900         lsl r1,r1,#0x1
080A0BD8: 0139         sub r1,#0x1
080A0BDA: 8a00         lsl r2,r1,#0x2
080A0BDC: 5218         add r2,r2,r1
080A0BDE: 9202         lsl r2,r2,#0xa
080A0BE0: 416d         ldr r1,[r0,#0x54]
080A0BE2: 8d18         add r5,r1,r2
080A0BE4: 846d         ldr r4,[r0,#0x58]
080A0BE6: 271c         add r7,r4,#0x0
080A0BE8: 281c         add r0,r5,#0x0
080A0BEA: 211c         add r1,r4,#0x0
080A0BEC: 67f746f8     bl 0x08007c7c
080A0BF0: 0004         lsl r0,r0,#0x10
080A0BF2: 0028         cmp r0,#0x0
080A0BF4: 0cd0         beq 0x080a0c10
080A0BF6: 281c         add r0,r5,#0x0
080A0BF8: 211c         add r1,r4,#0x0
080A0BFA: 67f79bfc     bl 0x08008534
080A0BFE: 034a         ldr r2,[0x080a0c0c]
080A0C00: b918         add r1,r7,r2
080A0C02: 8842         cmp r0,r1
080A0C04: 04da         bge 0x080a0c10
080A0C06: 0120         mov r0,#0x1
080A0C08: 03e0         b 0x080a0c12
080A0C10: 0020         mov r0,#0x0
080A0C12: f0bc         pop {r4,r5,r6,r7}
080A0C14: 02bc         pop {r1}
080A0C16: 0847         bx r1
