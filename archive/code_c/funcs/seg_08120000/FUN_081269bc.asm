; undefined FUN_081269bc(void)
; entry 0x81269bc  size 62 bytes

081269BC: 30b5         push {r4,r5,lr}
081269BE: 051c         add r5,r0,#0x0
081269C0: 0849         ldr r1,[0x081269e4]
081269C2: 6818         add r0,r5,r1
081269C4: 0168         ldr r1,[r0,#0x0]
081269C6: 9522         mov r2,#0x95
081269C8: 9200         lsl r2,r2,#0x2
081269CA: 8918         add r1,r1,r2
081269CC: 0322         mov r2,#0x3
081269CE: 0a70         strb r2,[r1,#0x0]
081269D0: 407e         ldrb r0,[r0,#0x19]
081269D2: 0528         cmp r0,#0x5
081269D4: 00d9         bls 0x081269d8
081269D6: 7fe0         b 0x08126ad8
081269D8: 8000         lsl r0,r0,#0x2
081269DA: 0349         ldr r1,[0x081269e8]
081269DC: 4018         add r0,r0,r1
081269DE: 0068         ldr r0,[r0,#0x0]
081269E0: 8746         mov pc,r0
08126AD8: 0549         ldr r1,[0x08126af0]
08126ADA: 6818         add r0,r5,r1
08126ADC: 0068         ldr r0,[r0,#0x0]
08126ADE: 9522         mov r2,#0x95
08126AE0: 9200         lsl r2,r2,#0x2
08126AE2: 8018         add r0,r0,r2
08126AE4: 0121         mov r1,#0x1
08126AE6: 0170         strb r1,[r0,#0x0]
08126AE8: 0120         mov r0,#0x1
08126AEA: 30bc         pop {r4,r5}
08126AEC: 02bc         pop {r1}
08126AEE: 0847         bx r1
