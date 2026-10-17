; undefined FUN_0810d5b8(void)
; entry 0x810d5b8  size 22 bytes

0810D5B8: 00b5         push {lr}
0810D5BA: 0549         ldr r1,[0x0810d5d0]
0810D5BC: 0a20         mov r0,#0xa
0810D5BE: c880         strh r0,[r1,#0x6]
0810D5C0: 0448         ldr r0,[0x0810d5d4]
0810D5C2: 0549         ldr r1,[0x0810d5d8]
0810D5C4: 3022         mov r2,#0x30
0810D5C6: 1bf00bfb     bl 0x08128be0
0810D5CA: 01bc         pop {r0}
0810D5CC: 0047         bx r0
