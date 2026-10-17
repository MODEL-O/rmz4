; undefined FUN_0809f378(void)
; entry 0x809f378  size 42 bytes

0809F378: 30b5         push {r4,r5,lr}
0809F37A: 041c         add r4,r0,#0x0
0809F37C: 251c         add r5,r4,#0x0
0809F37E: c035         add r5,#0xc0
0809F380: 2868         ldr r0,[r5,#0x0]
0809F382: 8cf72ff8     bl 0x0802b3e4
0809F386: 0028         cmp r0,#0x0
0809F388: 08d0         beq 0x0809f39c
0809F38A: 201c         add r0,r4,#0x0
0809F38C: 7430         add r0,#0x74
0809F38E: 0549         ldr r1,[0x0809f3a4]
0809F390: 66f7f8f9     bl 0x08005784
0809F394: 0020         mov r0,#0x0
0809F396: 2860         str r0,[r5,#0x0]
0809F398: 6073         strb r0,[r4,#0xd]
0809F39A: a073         strb r0,[r4,#0xe]
0809F39C: 30bc         pop {r4,r5}
0809F39E: 01bc         pop {r0}
0809F3A0: 0047         bx r0
