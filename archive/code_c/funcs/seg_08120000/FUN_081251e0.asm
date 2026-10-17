; undefined FUN_081251e0(void)
; entry 0x81251e0  size 62 bytes

081251E0: 30b5         push {r4,r5,lr}
081251E2: 051c         add r5,r0,#0x0
081251E4: 0849         ldr r1,[0x08125208]
081251E6: 6818         add r0,r5,r1
081251E8: 0168         ldr r1,[r0,#0x0]
081251EA: 9522         mov r2,#0x95
081251EC: 9200         lsl r2,r2,#0x2
081251EE: 8918         add r1,r1,r2
081251F0: 0222         mov r2,#0x2
081251F2: 0a70         strb r2,[r1,#0x0]
081251F4: 407e         ldrb r0,[r0,#0x19]
081251F6: 0528         cmp r0,#0x5
081251F8: 00d9         bls 0x081251fc
081251FA: 7de0         b 0x081252f8
081251FC: 8000         lsl r0,r0,#0x2
081251FE: 0349         ldr r1,[0x0812520c]
08125200: 4018         add r0,r0,r1
08125202: 0068         ldr r0,[r0,#0x0]
08125204: 8746         mov pc,r0
081252F8: 0622         mov r2,#0x6
081252FA: a85e         ldrsh r0,[r5,r2]
081252FC: 0028         cmp r0,#0x0
081252FE: 03d1         bne 0x08125308
08125300: 0348         ldr r0,[0x08125310]
08125302: 2918         add r1,r5,r0
08125304: ff20         mov r0,#0xff
08125306: c862         str r0,[r1,#0x2c]
08125308: 0120         mov r0,#0x1
0812530A: 30bc         pop {r4,r5}
0812530C: 02bc         pop {r1}
0812530E: 0847         bx r1
