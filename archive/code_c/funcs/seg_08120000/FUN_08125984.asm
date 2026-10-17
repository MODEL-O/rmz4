; undefined FUN_08125984(void)
; entry 0x8125984  size 46 bytes

08125984: 30b5         push {r4,r5,lr}
08125986: 051c         add r5,r0,#0x0
08125988: 0849         ldr r1,[0x081259ac]
0812598A: 6818         add r0,r5,r1
0812598C: 0168         ldr r1,[r0,#0x0]
0812598E: 9522         mov r2,#0x95
08125990: 9200         lsl r2,r2,#0x2
08125992: 8918         add r1,r1,r2
08125994: 0222         mov r2,#0x2
08125996: 0a70         strb r2,[r1,#0x0]
08125998: 407e         ldrb r0,[r0,#0x19]
0812599A: 0528         cmp r0,#0x5
0812599C: 00d9         bls 0x081259a0
0812599E: 81e0         b 0x08125aa4
081259A0: 8000         lsl r0,r0,#0x2
081259A2: 0349         ldr r1,[0x081259b0]
081259A4: 4018         add r0,r0,r1
081259A6: 0068         ldr r0,[r0,#0x0]
081259A8: 8746         mov pc,r0
08125AA4: 0120         mov r0,#0x1
08125AA6: 30bc         pop {r4,r5}
08125AA8: 02bc         pop {r1}
08125AAA: 0847         bx r1
