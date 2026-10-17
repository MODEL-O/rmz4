; undefined FUN_0801d3d0(void)
; entry 0x801d3d0  size 44 bytes

0801D3D0: 10b5         push {r4,lr}
0801D3D2: 0906         lsl r1,r1,#0x18
0801D3D4: 090e         lsr r1,r1,#0x18
0801D3D6: c37a         ldrb r3,[r0,#0xb]
0801D3D8: 2022         mov r2,#0x20
0801D3DA: 1a43         orr r2,r3
0801D3DC: c272         strb r2,[r0,#0xb]
0801D3DE: 4922         mov r2,#0x49
0801D3E0: 1218         add r2,r2,r0
0801D3E2: 9446         mov r12,r2
0801D3E4: 0c01         lsl r4,r1,#0x4
0801D3E6: 1378         ldrb r3,[r2,#0x0]
0801D3E8: 0f22         mov r2,#0xf
0801D3EA: 1a40         and r2,r3
0801D3EC: 2243         orr r2,r4
0801D3EE: 6346         mov r3,r12
0801D3F0: 1a70         strb r2,[r3,#0x0]
0801D3F2: 2330         add r0,#0x23
0801D3F4: 0170         strb r1,[r0,#0x0]
0801D3F6: 10bc         pop {r4}
0801D3F8: 01bc         pop {r0}
0801D3FA: 0047         bx r0
