; undefined FUN_08123cac(void)
; entry 0x8123cac  size 46 bytes

08123CAC: 30b5         push {r4,r5,lr}
08123CAE: 051c         add r5,r0,#0x0
08123CB0: 0849         ldr r1,[0x08123cd4]
08123CB2: 6818         add r0,r5,r1
08123CB4: 0168         ldr r1,[r0,#0x0]
08123CB6: 9522         mov r2,#0x95
08123CB8: 9200         lsl r2,r2,#0x2
08123CBA: 8918         add r1,r1,r2
08123CBC: 0222         mov r2,#0x2
08123CBE: 0a70         strb r2,[r1,#0x0]
08123CC0: 407e         ldrb r0,[r0,#0x19]
08123CC2: 0528         cmp r0,#0x5
08123CC4: 00d9         bls 0x08123cc8
08123CC6: 79e0         b 0x08123dbc
08123CC8: 8000         lsl r0,r0,#0x2
08123CCA: 0349         ldr r1,[0x08123cd8]
08123CCC: 4018         add r0,r0,r1
08123CCE: 0068         ldr r0,[r0,#0x0]
08123CD0: 8746         mov pc,r0
08123DBC: 0120         mov r0,#0x1
08123DBE: 30bc         pop {r4,r5}
08123DC0: 02bc         pop {r1}
08123DC2: 0847         bx r1
