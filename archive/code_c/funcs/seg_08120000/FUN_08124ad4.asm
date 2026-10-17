; undefined FUN_08124ad4(void)
; entry 0x8124ad4  size 46 bytes

08124AD4: 30b5         push {r4,r5,lr}
08124AD6: 051c         add r5,r0,#0x0
08124AD8: 0849         ldr r1,[0x08124afc]
08124ADA: 6818         add r0,r5,r1
08124ADC: 0168         ldr r1,[r0,#0x0]
08124ADE: 9522         mov r2,#0x95
08124AE0: 9200         lsl r2,r2,#0x2
08124AE2: 8918         add r1,r1,r2
08124AE4: 0222         mov r2,#0x2
08124AE6: 0a70         strb r2,[r1,#0x0]
08124AE8: 407e         ldrb r0,[r0,#0x19]
08124AEA: 0528         cmp r0,#0x5
08124AEC: 00d9         bls 0x08124af0
08124AEE: 79e0         b 0x08124be4
08124AF0: 8000         lsl r0,r0,#0x2
08124AF2: 0349         ldr r1,[0x08124b00]
08124AF4: 4018         add r0,r0,r1
08124AF6: 0068         ldr r0,[r0,#0x0]
08124AF8: 8746         mov pc,r0
08124BE4: 0120         mov r0,#0x1
08124BE6: 30bc         pop {r4,r5}
08124BE8: 02bc         pop {r1}
08124BEA: 0847         bx r1
