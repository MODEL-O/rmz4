; undefined FUN_0810d594(void)
; entry 0x810d594  size 22 bytes

0810D594: 00b5         push {lr}
0810D596: 0549         ldr r1,[0x0810d5ac]
0810D598: 0220         mov r0,#0x2
0810D59A: c880         strh r0,[r1,#0x6]
0810D59C: 0448         ldr r0,[0x0810d5b0]
0810D59E: 0549         ldr r1,[0x0810d5b4]
0810D5A0: 3022         mov r2,#0x30
0810D5A2: 1bf01dfb     bl 0x08128be0
0810D5A6: 01bc         pop {r0}
0810D5A8: 0047         bx r0
