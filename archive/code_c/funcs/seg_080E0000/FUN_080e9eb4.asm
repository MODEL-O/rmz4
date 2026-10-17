; undefined FUN_080e9eb4(void)
; entry 0x80e9eb4  size 28 bytes

080E9EB4: 30b5         push {r4,r5,lr}
080E9EB6: 051c         add r5,r0,#0x0
080E9EB8: a87b         ldrb r0,[r5,#0xe]
080E9EBA: 0428         cmp r0,#0x4
080E9EBC: 00d9         bls 0x080e9ec0
080E9EBE: f4e0         b 0x080ea0aa
080E9EC0: 8000         lsl r0,r0,#0x2
080E9EC2: 0249         ldr r1,[0x080e9ecc]
080E9EC4: 4018         add r0,r0,r1
080E9EC6: 0068         ldr r0,[r0,#0x0]
080E9EC8: 8746         mov pc,r0
080EA0AA: 30bc         pop {r4,r5}
080EA0AC: 01bc         pop {r0}
080EA0AE: 0047         bx r0
