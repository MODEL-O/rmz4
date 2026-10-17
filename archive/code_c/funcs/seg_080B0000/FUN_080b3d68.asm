; undefined FUN_080b3d68(void)
; entry 0x80b3d68  size 72 bytes

080B3D68: 10b5         push {r4,lr}
080B3D6A: 041c         add r4,r0,#0x0
080B3D6C: b530         add r0,#0xb5
080B3D6E: 0078         ldrb r0,[r0,#0x0]
080B3D70: 0028         cmp r0,#0x0
080B3D72: 1ad0         beq 0x080b3daa
080B3D74: e06a         ldr r0,[r4,#0x2c]
080B3D76: 0028         cmp r0,#0x0
080B3D78: 17d1         bne 0x080b3daa
080B3D7A: 201c         add r0,r4,#0x0
080B3D7C: 8c30         add r0,#0x8c
080B3D7E: 0068         ldr r0,[r0,#0x0]
080B3D80: 0121         mov r1,#0x1
080B3D82: 0840         and r0,r1
080B3D84: 0028         cmp r0,#0x0
080B3D86: 10d0         beq 0x080b3daa
080B3D88: 094a         ldr r2,[0x080b3db0]
080B3D8A: 0020         mov r0,#0x0
080B3D8C: 211c         add r1,r4,#0x0
080B3D8E: 77f70df8     bl 0x0802adac
080B3D92: e062         str r0,[r4,#0x2c]
080B3D94: 0028         cmp r0,#0x0
080B3D96: 08d0         beq 0x080b3daa
080B3D98: 201c         add r0,r4,#0x0
080B3D9A: 7430         add r0,#0x74
080B3D9C: 0549         ldr r1,[0x080b3db4]
080B3D9E: 51f7f1fc     bl 0x08005784
080B3DA2: 0549         ldr r1,[0x080b3db8]
080B3DA4: 201c         add r0,r4,#0x0
080B3DA6: 69f7abf8     bl 0x0801cf00
080B3DAA: 10bc         pop {r4}
080B3DAC: 01bc         pop {r0}
080B3DAE: 0047         bx r0
