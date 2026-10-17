; undefined FUN_080b1170(void)
; entry 0x80b1170  size 64 bytes

080B1170: 10b5         push {r4,lr}
080B1172: 041c         add r4,r0,#0x0
080B1174: a06a         ldr r0,[r4,#0x28]
080B1176: 0028         cmp r0,#0x0
080B1178: 17d1         bne 0x080b11aa
080B117A: 201c         add r0,r4,#0x0
080B117C: 8c30         add r0,#0x8c
080B117E: 0068         ldr r0,[r0,#0x0]
080B1180: 0121         mov r1,#0x1
080B1182: 0840         and r0,r1
080B1184: 0028         cmp r0,#0x0
080B1186: 10d0         beq 0x080b11aa
080B1188: 094a         ldr r2,[0x080b11b0]
080B118A: 0020         mov r0,#0x0
080B118C: 211c         add r1,r4,#0x0
080B118E: 79f70dfe     bl 0x0802adac
080B1192: a062         str r0,[r4,#0x28]
080B1194: 0028         cmp r0,#0x0
080B1196: 08d0         beq 0x080b11aa
080B1198: 201c         add r0,r4,#0x0
080B119A: 7430         add r0,#0x74
080B119C: 0549         ldr r1,[0x080b11b4]
080B119E: 54f7f1fa     bl 0x08005784
080B11A2: 211c         add r1,r4,#0x0
080B11A4: c231         add r1,#0xc2
080B11A6: 0f20         mov r0,#0xf
080B11A8: 0870         strb r0,[r1,#0x0]
080B11AA: 10bc         pop {r4}
080B11AC: 01bc         pop {r0}
080B11AE: 0047         bx r0
