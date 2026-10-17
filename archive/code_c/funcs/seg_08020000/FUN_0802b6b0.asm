; undefined FUN_0802b6b0(void)
; entry 0x802b6b0  size 38 bytes

0802B6B0: 00b5         push {lr}
0802B6B2: 8446         mov r12,r0
0802B6B4: 0906         lsl r1,r1,#0x18
0802B6B6: 090e         lsr r1,r1,#0x18
0802B6B8: 9f22         mov r2,#0x9f
0802B6BA: 5200         lsl r2,r2,#0x1
0802B6BC: 6244         add r2,r12
0802B6BE: 1378         ldrb r3,[r2,#0x0]
0802B6C0: 5818         add r0,r3,r1
0802B6C2: ff28         cmp r0,#0xff
0802B6C4: 00dd         ble 0x0802b6c8
0802B6C6: ff20         mov r0,#0xff
0802B6C8: 1070         strb r0,[r2,#0x0]
0802B6CA: 9f20         mov r0,#0x9f
0802B6CC: 4000         lsl r0,r0,#0x1
0802B6CE: 6044         add r0,r12
0802B6D0: 0078         ldrb r0,[r0,#0x0]
0802B6D2: 02bc         pop {r1}
0802B6D4: 0847         bx r1
