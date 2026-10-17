; undefined FUN_0807ea9c(void)
; entry 0x807ea9c  size 26 bytes

0807EA9C: 00b5         push {lr}
0807EA9E: a430         add r0,#0xa4
0807EAA0: 0022         mov r2,#0x0
0807EAA2: 815e         ldrsh r1,[r0,r2]
0807EAA4: 0220         mov r0,#0x2
0807EAA6: 2029         cmp r1,#0x20
0807EAA8: 03dd         ble 0x0807eab2
0807EAAA: 0020         mov r0,#0x0
0807EAAC: 4029         cmp r1,#0x40
0807EAAE: 00dc         bgt 0x0807eab2
0807EAB0: 0120         mov r0,#0x1
0807EAB2: 02bc         pop {r1}
0807EAB4: 0847         bx r1
