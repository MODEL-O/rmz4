; undefined FUN_081276f4(void)
; entry 0x81276f4  size 20 bytes

081276F4: 021c         add r2,r0,#0x0
081276F6: 536b         ldr r3,[r2,#0x34]
081276F8: 0348         ldr r0,[0x08127708]
081276FA: 8342         cmp r3,r0
081276FC: 03d1         bne 0x08127706
081276FE: 5068         ldr r0,[r2,#0x4]
08127700: 0249         ldr r1,[0x0812770c]
08127702: 0840         and r0,r1
08127704: 5060         str r0,[r2,#0x4]
08127706: 7047         bx lr
