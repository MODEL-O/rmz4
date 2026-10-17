; undefined FUN_0800a3c4(void)
; entry 0x800a3c4  size 58 bytes

0800A3C4: 0013         asr r0,r0,#0xc
0800A3C6: 0138         sub r0,#0x1
0800A3C8: 0913         asr r1,r1,#0xc
0800A3CA: 0139         sub r1,#0x1
0800A3CC: 0c4b         ldr r3,[0x0800a400]
0800A3CE: fc22         mov r2,#0xfc
0800A3D0: d200         lsl r2,r2,#0x3
0800A3D2: 9b18         add r3,r3,r2
0800A3D4: 1a88         ldrh r2,[r3,#0x0]
0800A3D6: 0904         lsl r1,r1,#0x10
0800A3D8: 0914         asr r1,r1,#0x10
0800A3DA: 4a43         mul r2,r1
0800A3DC: 0004         lsl r0,r0,#0x10
0800A3DE: 0014         asr r0,r0,#0x10
0800A3E0: 1118         add r1,r2,r0
0800A3E2: 0231         add r1,#0x2
0800A3E4: 4900         lsl r1,r1,#0x1
0800A3E6: c918         add r1,r1,r3
0800A3E8: 1218         add r2,r2,r0
0800A3EA: 7a32         add r2,#0x7a
0800A3EC: 5200         lsl r2,r2,#0x1
0800A3EE: d218         add r2,r2,r3
0800A3F0: 0988         ldrh r1,[r1,#0x0]
0800A3F2: 1088         ldrh r0,[r2,#0x0]
0800A3F4: 4140         eor r1,r0
0800A3F6: 4842         rsb r0,r1
0800A3F8: 0843         orr r0,r1
0800A3FA: c00f         lsr r0,r0,#0x1f
0800A3FC: 7047         bx lr
