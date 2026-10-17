; undefined FUN_080f541c(void)
; entry 0x80f541c  size 36 bytes

080F541C: 30b5         push {r4,r5,lr}
080F541E: 051c         add r5,r0,#0x0
080F5420: 2c1c         add r4,r5,#0x0
080F5422: c234         add r4,#0xc2
080F5424: 2088         ldrh r0,[r4,#0x0]
080F5426: 7728         cmp r0,#0x77
080F5428: 04d1         bne 0x080f5434
080F542A: 7720         mov r0,#0x77
080F542C: 0df796fb     bl 0x08002b5c
080F5430: 0020         mov r0,#0x0
080F5432: 2080         strh r0,[r4,#0x0]
080F5434: 281c         add r0,r5,#0x0
080F5436: f4f789f8     bl 0x080e954c
080F543A: 30bc         pop {r4,r5}
080F543C: 01bc         pop {r0}
080F543E: 0047         bx r0
