; undefined FUN_080e7cd8(void)
; entry 0x80e7cd8  size 34 bytes

080E7CD8: 00b5         push {lr}
080E7CDA: 021c         add r2,r0,#0x0
080E7CDC: 7330         add r0,#0x73
080E7CDE: 0078         ldrb r0,[r0,#0x0]
080E7CE0: 0328         cmp r0,#0x3
080E7CE2: 08d1         bne 0x080e7cf6
080E7CE4: 0549         ldr r1,[0x080e7cfc]
080E7CE6: 507a         ldrb r0,[r2,#0x9]
080E7CE8: 8000         lsl r0,r0,#0x2
080E7CEA: 4018         add r0,r0,r1
080E7CEC: 0221         mov r1,#0x2
080E7CEE: d160         str r1,[r2,#0xc]
080E7CF0: 0068         ldr r0,[r0,#0x0]
080E7CF2: 8068         ldr r0,[r0,#0x8]
080E7CF4: 5061         str r0,[r2,#0x14]
080E7CF6: 01bc         pop {r0}
080E7CF8: 0047         bx r0
