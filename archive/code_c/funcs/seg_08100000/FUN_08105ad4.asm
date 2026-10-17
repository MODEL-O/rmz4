; undefined FUN_08105ad4(void)
; entry 0x8105ad4  size 52 bytes

08105AD4: 10b5         push {r4,lr}
08105AD6: 041c         add r4,r0,#0x0
08105AD8: a17a         ldrb r1,[r4,#0xa]
08105ADA: 0120         mov r0,#0x1
08105ADC: 0843         orr r0,r1
08105ADE: 0221         mov r1,#0x2
08105AE0: 0843         orr r0,r1
08105AE2: a072         strb r0,[r4,#0xa]
08105AE4: 201c         add r0,r4,#0x0
08105AE6: 17f7d9f8     bl 0x0801cc9c
08105AEA: 0749         ldr r1,[0x08105b08]
08105AEC: 607a         ldrb r0,[r4,#0x9]
08105AEE: 8000         lsl r0,r0,#0x2
08105AF0: 4018         add r0,r0,r1
08105AF2: 0121         mov r1,#0x1
08105AF4: e160         str r1,[r4,#0xc]
08105AF6: 0068         ldr r0,[r0,#0x0]
08105AF8: 4068         ldr r0,[r0,#0x4]
08105AFA: 6061         str r0,[r4,#0x14]
08105AFC: 201c         add r0,r4,#0x0
08105AFE: fff75bfe     bl 0x081057b8
08105B02: 10bc         pop {r4}
08105B04: 01bc         pop {r0}
08105B06: 0047         bx r0
