; undefined FUN_080b20c4(void)
; entry 0x80b20c4  size 78 bytes

080B20C4: 30b5         push {r4,r5,lr}
080B20C6: 051c         add r5,r0,#0x0
080B20C8: 2c1c         add r4,r5,#0x0
080B20CA: c034         add r4,#0xc0
080B20CC: 2068         ldr r0,[r4,#0x0]
080B20CE: 0028         cmp r0,#0x0
080B20D0: 1cd1         bne 0x080b210c
080B20D2: 281c         add r0,r5,#0x0
080B20D4: 8c30         add r0,#0x8c
080B20D6: 0068         ldr r0,[r0,#0x0]
080B20D8: 0121         mov r1,#0x1
080B20DA: 0840         and r0,r1
080B20DC: 0028         cmp r0,#0x0
080B20DE: 15d0         beq 0x080b210c
080B20E0: 0c4a         ldr r2,[0x080b2114]
080B20E2: 0020         mov r0,#0x0
080B20E4: 291c         add r1,r5,#0x0
080B20E6: 78f761fe     bl 0x0802adac
080B20EA: 2060         str r0,[r4,#0x0]
080B20EC: 0028         cmp r0,#0x0
080B20EE: 0dd0         beq 0x080b210c
080B20F0: 281c         add r0,r5,#0x0
080B20F2: 7430         add r0,#0x74
080B20F4: 0849         ldr r1,[0x080b2118]
080B20F6: 53f745fb     bl 0x08005784
080B20FA: 084c         ldr r4,[0x080b211c]
080B20FC: 281c         add r0,r5,#0x0
080B20FE: 211c         add r1,r4,#0x0
080B2100: 6af7fefe     bl 0x0801cf00
080B2104: 281c         add r0,r5,#0x0
080B2106: 211c         add r1,r4,#0x0
080B2108: 6af7fafe     bl 0x0801cf00
080B210C: 30bc         pop {r4,r5}
080B210E: 01bc         pop {r0}
080B2110: 0047         bx r0
