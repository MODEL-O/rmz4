; undefined FUN_081243c8(void)
; entry 0x81243c8  size 46 bytes

081243C8: 30b5         push {r4,r5,lr}
081243CA: 051c         add r5,r0,#0x0
081243CC: 0849         ldr r1,[0x081243f0]
081243CE: 6818         add r0,r5,r1
081243D0: 0168         ldr r1,[r0,#0x0]
081243D2: 9522         mov r2,#0x95
081243D4: 9200         lsl r2,r2,#0x2
081243D6: 8918         add r1,r1,r2
081243D8: 0222         mov r2,#0x2
081243DA: 0a70         strb r2,[r1,#0x0]
081243DC: 407e         ldrb r0,[r0,#0x19]
081243DE: 0528         cmp r0,#0x5
081243E0: 00d9         bls 0x081243e4
081243E2: 77e0         b 0x081244d4
081243E4: 8000         lsl r0,r0,#0x2
081243E6: 0349         ldr r1,[0x081243f4]
081243E8: 4018         add r0,r0,r1
081243EA: 0068         ldr r0,[r0,#0x0]
081243EC: 8746         mov pc,r0
081244D4: 0120         mov r0,#0x1
081244D6: 30bc         pop {r4,r5}
081244D8: 02bc         pop {r1}
081244DA: 0847         bx r1
