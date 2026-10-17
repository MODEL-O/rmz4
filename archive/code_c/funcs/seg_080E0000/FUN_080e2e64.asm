; undefined FUN_080e2e64(void)
; entry 0x80e2e64  size 34 bytes

080E2E64: 00b5         push {lr}
080E2E66: 021c         add r2,r0,#0x0
080E2E68: 7330         add r0,#0x73
080E2E6A: 0078         ldrb r0,[r0,#0x0]
080E2E6C: 0328         cmp r0,#0x3
080E2E6E: 08d1         bne 0x080e2e82
080E2E70: 0549         ldr r1,[0x080e2e88]
080E2E72: 507a         ldrb r0,[r2,#0x9]
080E2E74: 8000         lsl r0,r0,#0x2
080E2E76: 4018         add r0,r0,r1
080E2E78: 0221         mov r1,#0x2
080E2E7A: d160         str r1,[r2,#0xc]
080E2E7C: 0068         ldr r0,[r0,#0x0]
080E2E7E: 8068         ldr r0,[r0,#0x8]
080E2E80: 5061         str r0,[r2,#0x14]
080E2E82: 01bc         pop {r0}
080E2E84: 0047         bx r0
