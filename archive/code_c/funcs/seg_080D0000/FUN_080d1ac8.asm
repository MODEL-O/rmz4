; undefined FUN_080d1ac8(void)
; entry 0x80d1ac8  size 66 bytes

080D1AC8: 10b5         push {r4,lr}
080D1ACA: 041c         add r4,r0,#0x0
080D1ACC: a17a         ldrb r1,[r4,#0xa]
080D1ACE: 0120         mov r0,#0x1
080D1AD0: 0843         orr r0,r1
080D1AD2: a072         strb r0,[r4,#0xa]
080D1AD4: 201c         add r0,r4,#0x0
080D1AD6: 4bf7e1f8     bl 0x0801cc9c
080D1ADA: 221c         add r2,r4,#0x0
080D1ADC: 4932         add r2,#0x49
080D1ADE: 1178         ldrb r1,[r2,#0x0]
080D1AE0: 0d20         mov r0,#0xd
080D1AE2: 4042         rsb r0,r0
080D1AE4: 0840         and r0,r1
080D1AE6: 1070         strb r0,[r2,#0x0]
080D1AE8: 8020         mov r0,#0x80
080D1AEA: e074         strb r0,[r4,#0x13]
080D1AEC: 0749         ldr r1,[0x080d1b0c]
080D1AEE: 607a         ldrb r0,[r4,#0x9]
080D1AF0: 8000         lsl r0,r0,#0x2
080D1AF2: 4018         add r0,r0,r1
080D1AF4: 0121         mov r1,#0x1
080D1AF6: e160         str r1,[r4,#0xc]
080D1AF8: 0068         ldr r0,[r0,#0x0]
080D1AFA: 4068         ldr r0,[r0,#0x4]
080D1AFC: 6061         str r0,[r4,#0x14]
080D1AFE: 201c         add r0,r4,#0x0
080D1B00: fff7c6ff     bl 0x080d1a90
080D1B04: 10bc         pop {r4}
080D1B06: 01bc         pop {r0}
080D1B08: 0047         bx r0
