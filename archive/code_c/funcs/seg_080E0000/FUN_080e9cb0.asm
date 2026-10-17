; undefined FUN_080e9cb0(void)
; entry 0x80e9cb0  size 28 bytes

080E9CB0: 30b5         push {r4,r5,lr}
080E9CB2: 051c         add r5,r0,#0x0
080E9CB4: a87b         ldrb r0,[r5,#0xe]
080E9CB6: 0428         cmp r0,#0x4
080E9CB8: 00d9         bls 0x080e9cbc
080E9CBA: f2e0         b 0x080e9ea2
080E9CBC: 8000         lsl r0,r0,#0x2
080E9CBE: 0249         ldr r1,[0x080e9cc8]
080E9CC0: 4018         add r0,r0,r1
080E9CC2: 0068         ldr r0,[r0,#0x0]
080E9CC4: 8746         mov pc,r0
080E9EA2: 30bc         pop {r4,r5}
080E9EA4: 01bc         pop {r0}
080E9EA6: 0047         bx r0
