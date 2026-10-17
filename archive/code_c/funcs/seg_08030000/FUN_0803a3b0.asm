; undefined FUN_0803a3b0(void)
; entry 0x803a3b0  size 58 bytes

0803A3B0: 00b5         push {lr}
0803A3B2: 8446         mov r12,r0
0803A3B4: 0904         lsl r1,r1,#0x10
0803A3B6: 0a0c         lsr r2,r1,#0x10
0803A3B8: 817f         ldrb r1,[r0,#0x1e]
0803A3BA: 0902         lsl r1,r1,#0x8
0803A3BC: 7030         add r0,#0x70
0803A3BE: 0078         ldrb r0,[r0,#0x0]
0803A3C0: 0843         orr r0,r1
0803A3C2: 9042         cmp r0,r2
0803A3C4: 0fd0         beq 0x0803a3e6
0803A3C6: b620         mov r0,#0xb6
0803A3C8: 4000         lsl r0,r0,#0x1
0803A3CA: 6044         add r0,r12
0803A3CC: 0188         ldrh r1,[r0,#0x0]
0803A3CE: 9142         cmp r1,r2
0803A3D0: 09d1         bne 0x0803a3e6
0803A3D2: b720         mov r0,#0xb7
0803A3D4: 4000         lsl r0,r0,#0x1
0803A3D6: 6044         add r0,r12
0803A3D8: 0278         ldrb r2,[r0,#0x0]
0803A3DA: 0448         ldr r0,[0x0803a3ec]
0803A3DC: 6044         add r0,r12
0803A3DE: 0378         ldrb r3,[r0,#0x0]
0803A3E0: 6046         mov r0,r12
0803A3E2: e2f7f1fd     bl 0x0801cfc8
0803A3E6: 01bc         pop {r0}
0803A3E8: 0047         bx r0
