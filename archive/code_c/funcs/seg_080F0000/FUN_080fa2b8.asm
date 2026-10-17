; undefined FUN_080fa2b8(void)
; entry 0x80fa2b8  size 48 bytes

080FA2B8: 00b5         push {lr}
080FA2BA: 021c         add r2,r0,#0x0
080FA2BC: 906a         ldr r0,[r2,#0x28]
080FA2BE: 007b         ldrb r0,[r0,#0xc]
080FA2C0: 0128         cmp r0,#0x1
080FA2C2: 0fd9         bls 0x080fa2e4
080FA2C4: 0649         ldr r1,[0x080fa2e0]
080FA2C6: 507a         ldrb r0,[r2,#0x9]
080FA2C8: 8000         lsl r0,r0,#0x2
080FA2CA: 4018         add r0,r0,r1
080FA2CC: 0221         mov r1,#0x2
080FA2CE: d160         str r1,[r2,#0xc]
080FA2D0: 0068         ldr r0,[r0,#0x0]
080FA2D2: 8068         ldr r0,[r0,#0x8]
080FA2D4: 5061         str r0,[r2,#0x14]
080FA2D6: 101c         add r0,r2,#0x0
080FA2D8: 00f00af8     bl 0x080fa2f0
080FA2DC: 05e0         b 0x080fa2ea
080FA2E4: 101c         add r0,r2,#0x0
080FA2E6: 22f783fe     bl 0x0801cff0
080FA2EA: 01bc         pop {r0}
080FA2EC: 0047         bx r0
