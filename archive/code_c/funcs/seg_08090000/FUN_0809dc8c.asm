; undefined FUN_0809dc8c(void)
; entry 0x809dc8c  size 72 bytes

0809DC8C: 30b5         push {r4,r5,lr}
0809DC8E: 041c         add r4,r0,#0x0
0809DC90: 6069         ldr r0,[r4,#0x14]
0809DC92: 0125         mov r5,#0x1
0809DC94: 2840         and r0,r5
0809DC96: 0028         cmp r0,#0x0
0809DC98: 19d0         beq 0x0809dcce
0809DC9A: 1d20         mov r0,#0x1d
0809DC9C: 68f772fe     bl 0x08006984
0809DCA0: e26a         ldr r2,[r4,#0x2c]
0809DCA2: 6169         ldr r1,[r4,#0x14]
0809DCA4: 8020         mov r0,#0x80
0809DCA6: 8000         lsl r0,r0,#0x2
0809DCA8: 0840         and r0,r1
0809DCAA: 0028         cmp r0,#0x0
0809DCAC: 0fd0         beq 0x0809dcce
0809DCAE: 8020         mov r0,#0x80
0809DCB0: 8002         lsl r0,r0,#0xa
0809DCB2: 0140         and r1,r0
0809DCB4: 0029         cmp r1,#0x0
0809DCB6: 0ad0         beq 0x0809dcce
0809DCB8: 101c         add r0,r2,#0x0
0809DCBA: be30         add r0,#0xbe
0809DCBC: 0570         strb r5,[r0,#0x0]
0809DCBE: 0548         ldr r0,[0x0809dcd4]
0809DCC0: 0068         ldr r0,[r0,#0x0]
0809DCC2: 0028         cmp r0,#0x0
0809DCC4: 03d0         beq 0x0809dcce
0809DCC6: 0321         mov r1,#0x3
0809DCC8: 0d22         mov r2,#0xd
0809DCCA: 9cf755fc     bl 0x0803a578
0809DCCE: 30bc         pop {r4,r5}
0809DCD0: 01bc         pop {r0}
0809DCD2: 0047         bx r0
