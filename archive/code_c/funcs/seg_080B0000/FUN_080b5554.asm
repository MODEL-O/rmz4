; undefined FUN_080b5554(void)
; entry 0x80b5554  size 68 bytes

080B5554: 30b5         push {r4,r5,lr}
080B5556: 041c         add r4,r0,#0x0
080B5558: 251c         add r5,r4,#0x0
080B555A: c035         add r5,#0xc0
080B555C: 2868         ldr r0,[r5,#0x0]
080B555E: 0028         cmp r0,#0x0
080B5560: 17d1         bne 0x080b5592
080B5562: 201c         add r0,r4,#0x0
080B5564: 8c30         add r0,#0x8c
080B5566: 0068         ldr r0,[r0,#0x0]
080B5568: 0121         mov r1,#0x1
080B556A: 0840         and r0,r1
080B556C: 0028         cmp r0,#0x0
080B556E: 10d0         beq 0x080b5592
080B5570: 094a         ldr r2,[0x080b5598]
080B5572: 0020         mov r0,#0x0
080B5574: 211c         add r1,r4,#0x0
080B5576: 75f719fc     bl 0x0802adac
080B557A: 2860         str r0,[r5,#0x0]
080B557C: 0028         cmp r0,#0x0
080B557E: 08d0         beq 0x080b5592
080B5580: 201c         add r0,r4,#0x0
080B5582: 7430         add r0,#0x74
080B5584: 0549         ldr r1,[0x080b559c]
080B5586: 50f7fdf8     bl 0x08005784
080B558A: 0549         ldr r1,[0x080b55a0]
080B558C: 201c         add r0,r4,#0x0
080B558E: 67f7b7fc     bl 0x0801cf00
080B5592: 30bc         pop {r4,r5}
080B5594: 01bc         pop {r0}
080B5596: 0047         bx r0
