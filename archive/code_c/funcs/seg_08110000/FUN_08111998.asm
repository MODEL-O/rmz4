; undefined FUN_08111998(void)
; entry 0x8111998  size 64 bytes

08111998: 30b5         push {r4,r5,lr}
0811199A: 82b0         sub sp,#0x8
0811199C: 051c         add r5,r0,#0x0
0811199E: 1435         add r5,#0x14
081119A0: 281c         add r0,r5,#0x0
081119A2: f1f665fd     bl 0x08003470
081119A6: 0c49         ldr r1,[0x081119d8]
081119A8: 0020         mov r0,#0x0
081119AA: 0870         strb r0,[r1,#0x0]
081119AC: 0020         mov r0,#0x0
081119AE: 0b49         ldr r1,[0x081119dc]
081119B0: 0090         str r0,[sp,#0x0]
081119B2: 0b4a         ldr r2,[0x081119e0]
081119B4: 6846         mov r0,sp
081119B6: 17f013f9     bl 0x08128be0
081119BA: 0a4c         ldr r4,[0x081119e4]
081119BC: 2068         ldr r0,[r4,#0x0]
081119BE: 0af7edfe     bl 0x0801c79c
081119C2: 2068         ldr r0,[r4,#0x0]
081119C4: 291c         add r1,r5,#0x0
081119C6: 0af7adff     bl 0x0801c924
081119CA: 281c         add r0,r5,#0x0
081119CC: f1f628fd     bl 0x08003420
081119D0: 02b0         add sp,#0x8
081119D2: 30bc         pop {r4,r5}
081119D4: 01bc         pop {r0}
081119D6: 0047         bx r0
