; undefined FUN_080e0cd4(void)
; entry 0x80e0cd4  size 42 bytes

080E0CD4: 00b5         push {lr}
080E0CD6: 021c         add r2,r0,#0x0
080E0CD8: 907c         ldrb r0,[r2,#0x12]
080E0CDA: 0028         cmp r0,#0x0
080E0CDC: 03d0         beq 0x080e0ce6
080E0CDE: 0138         sub r0,#0x1
080E0CE0: 9074         strb r0,[r2,#0x12]
080E0CE2: 0020         mov r0,#0x0
080E0CE4: 09e0         b 0x080e0cfa
080E0CE6: 0649         ldr r1,[0x080e0d00]
080E0CE8: 507a         ldrb r0,[r2,#0x9]
080E0CEA: 8000         lsl r0,r0,#0x2
080E0CEC: 4018         add r0,r0,r1
080E0CEE: 0221         mov r1,#0x2
080E0CF0: d160         str r1,[r2,#0xc]
080E0CF2: 0068         ldr r0,[r0,#0x0]
080E0CF4: 8068         ldr r0,[r0,#0x8]
080E0CF6: 5061         str r0,[r2,#0x14]
080E0CF8: 0120         mov r0,#0x1
080E0CFA: 02bc         pop {r1}
080E0CFC: 0847         bx r1
