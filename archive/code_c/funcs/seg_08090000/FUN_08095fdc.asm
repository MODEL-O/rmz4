; undefined FUN_08095fdc(void)
; entry 0x8095fdc  size 50 bytes

08095FDC: 00b5         push {lr}
08095FDE: 021c         add r2,r0,#0x0
08095FE0: b530         add r0,#0xb5
08095FE2: 0078         ldrb r0,[r0,#0x0]
08095FE4: 0028         cmp r0,#0x0
08095FE6: 10d0         beq 0x0809600a
08095FE8: 101c         add r0,r2,#0x0
08095FEA: b430         add r0,#0xb4
08095FEC: 0078         ldrb r0,[r0,#0x0]
08095FEE: 0028         cmp r0,#0x0
08095FF0: 0bd1         bne 0x0809600a
08095FF2: 0749         ldr r1,[0x08096010]
08095FF4: 507a         ldrb r0,[r2,#0x9]
08095FF6: 8000         lsl r0,r0,#0x2
08095FF8: 4018         add r0,r0,r1
08095FFA: 0221         mov r1,#0x2
08095FFC: d160         str r1,[r2,#0xc]
08095FFE: 0068         ldr r0,[r0,#0x0]
08096000: 8068         ldr r0,[r0,#0x8]
08096002: 5061         str r0,[r2,#0x14]
08096004: 101c         add r0,r2,#0x0
08096006: 00f00df9     bl 0x08096224
0809600A: 01bc         pop {r0}
0809600C: 0047         bx r0
