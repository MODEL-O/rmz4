; undefined FUN_0800f6b4(void)
; entry 0x800f6b4  size 20 bytes

0800F6B4: 00b5         push {lr}
0800F6B6: 6830         add r0,#0x68
0800F6B8: 0088         ldrh r0,[r0,#0x0]
0800F6BA: 7928         cmp r0,#0x79
0800F6BC: 02d1         bne 0x0800f6c4
0800F6BE: 7920         mov r0,#0x79
0800F6C0: f3f74cfa     bl 0x08002b5c
0800F6C4: 01bc         pop {r0}
0800F6C6: 0047         bx r0
