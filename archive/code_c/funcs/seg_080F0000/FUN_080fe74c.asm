; undefined FUN_080fe74c(void)
; entry 0x80fe74c  size 28 bytes

080FE74C: 00b5         push {lr}
080FE74E: 011c         add r1,r0,#0x0
080FE750: 087c         ldrb r0,[r1,#0x10]
080FE752: 0028         cmp r0,#0x0
080FE754: 03d1         bne 0x080fe75e
080FE756: 081c         add r0,r1,#0x0
080FE758: 00f048f8     bl 0x080fe7ec
080FE75C: 02e0         b 0x080fe764
080FE75E: 081c         add r0,r1,#0x0
080FE760: 00f046f8     bl 0x080fe7f0
080FE764: 01bc         pop {r0}
080FE766: 0047         bx r0
