; undefined FUN_0810d3c4(void)
; entry 0x810d3c4  size 52 bytes

0810D3C4: 70b5         push {r4,r5,r6,lr}
0810D3C6: 061c         add r6,r0,#0x0
0810D3C8: 0b1c         add r3,r1,#0x0
0810D3CA: 141c         add r4,r2,#0x0
0810D3CC: f21a         sub r2,r6,r3
0810D3CE: 1019         add r0,r2,r4
0810D3D0: ff25         mov r5,#0xff
0810D3D2: 2840         and r0,r5
0810D3D4: 6100         lsl r1,r4,#0x1
0810D3D6: 8842         cmp r0,r1
0810D3D8: 01d8         bhi 0x0810d3de
0810D3DA: 331c         add r3,r6,#0x0
0810D3DC: 08e0         b 0x0810d3f0
0810D3DE: 2a40         and r2,r5
0810D3E0: 0120         mov r0,#0x1
0810D3E2: 4042         rsb r0,r0
0810D3E4: 7f2a         cmp r2,#0x7f
0810D3E6: 00dc         bgt 0x0810d3ea
0810D3E8: 0120         mov r0,#0x1
0810D3EA: 6043         mul r0,r4
0810D3EC: 1b18         add r3,r3,r0
0810D3EE: 2b40         and r3,r5
0810D3F0: 181c         add r0,r3,#0x0
0810D3F2: 70bc         pop {r4,r5,r6}
0810D3F4: 02bc         pop {r1}
0810D3F6: 0847         bx r1
