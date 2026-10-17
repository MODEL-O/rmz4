; undefined FUN_080e3d88(void)
; entry 0x80e3d88  size 38 bytes

080E3D88: 10b5         push {r4,lr}
080E3D8A: 041c         add r4,r0,#0x0
080E3D8C: fff7b6fd     bl 0x080e38fc
080E3D90: 0006         lsl r0,r0,#0x18
080E3D92: 0028         cmp r0,#0x0
080E3D94: 08d0         beq 0x080e3da8
080E3D96: 0649         ldr r1,[0x080e3db0]
080E3D98: 607a         ldrb r0,[r4,#0x9]
080E3D9A: 8000         lsl r0,r0,#0x2
080E3D9C: 4018         add r0,r0,r1
080E3D9E: 0221         mov r1,#0x2
080E3DA0: e160         str r1,[r4,#0xc]
080E3DA2: 0068         ldr r0,[r0,#0x0]
080E3DA4: 8068         ldr r0,[r0,#0x8]
080E3DA6: 6061         str r0,[r4,#0x14]
080E3DA8: 10bc         pop {r4}
080E3DAA: 01bc         pop {r0}
080E3DAC: 0047         bx r0
