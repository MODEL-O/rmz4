; undefined FUN_080383cc(void)
; entry 0x80383cc  size 36 bytes

080383CC: 00b5         push {lr}
080383CE: 0906         lsl r1,r1,#0x18
080383D0: 090e         lsr r1,r1,#0x18
080383D2: f830         add r0,#0xf8
080383D4: 0078         ldrb r0,[r0,#0x0]
080383D6: 0128         cmp r0,#0x1
080383D8: 04d8         bhi 0x080383e4
080383DA: 0020         mov r0,#0x0
080383DC: 02f08cfa     bl 0x0803a8f8
080383E0: 0120         mov r0,#0x1
080383E2: 03e0         b 0x080383ec
080383E4: 0120         mov r0,#0x1
080383E6: 02f087fa     bl 0x0803a8f8
080383EA: 0220         mov r0,#0x2
080383EC: 02bc         pop {r1}
080383EE: 0847         bx r1
