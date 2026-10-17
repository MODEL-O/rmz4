; undefined FUN_080e9494(void)
; entry 0x80e9494  size 38 bytes

080E9494: 00b5         push {lr}
080E9496: 021c         add r2,r0,#0x0
080E9498: 907c         ldrb r0,[r2,#0x12]
080E949A: 0028         cmp r0,#0x0
080E949C: 08d1         bne 0x080e94b0
080E949E: 0749         ldr r1,[0x080e94bc]
080E94A0: 507a         ldrb r0,[r2,#0x9]
080E94A2: 8000         lsl r0,r0,#0x2
080E94A4: 4018         add r0,r0,r1
080E94A6: 0221         mov r1,#0x2
080E94A8: d160         str r1,[r2,#0xc]
080E94AA: 0068         ldr r0,[r0,#0x0]
080E94AC: 8068         ldr r0,[r0,#0x8]
080E94AE: 5061         str r0,[r2,#0x14]
080E94B0: 907c         ldrb r0,[r2,#0x12]
080E94B2: 0138         sub r0,#0x1
080E94B4: 9074         strb r0,[r2,#0x12]
080E94B6: 01bc         pop {r0}
080E94B8: 0047         bx r0
