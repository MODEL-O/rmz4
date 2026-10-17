; undefined FUN_0810d568(void)
; entry 0x810d568  size 30 bytes

0810D568: 00b5         push {lr}
0810D56A: 0748         ldr r0,[0x0810d588]
0810D56C: 0749         ldr r1,[0x0810d58c]
0810D56E: 0a88         ldrh r2,[r1,#0x0]
0810D570: 0c21         mov r1,#0xc
0810D572: 1140         and r1,r2
0810D574: 0903         lsl r1,r1,#0xc
0810D576: 064a         ldr r2,[0x0810d590]
0810D578: 8918         add r1,r1,r2
0810D57A: 8022         mov r2,#0x80
0810D57C: 9200         lsl r2,r2,#0x2
0810D57E: 1bf02ffb     bl 0x08128be0
0810D582: 01bc         pop {r0}
0810D584: 0047         bx r0
