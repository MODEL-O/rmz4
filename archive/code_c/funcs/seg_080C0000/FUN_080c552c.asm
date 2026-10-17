; undefined FUN_080c552c(void)
; entry 0x80c552c  size 66 bytes

080C552C: 10b5         push {r4,lr}
080C552E: 041c         add r4,r0,#0x0
080C5530: 0f49         ldr r1,[0x080c5570]
080C5532: 607a         ldrb r0,[r4,#0x9]
080C5534: 8000         lsl r0,r0,#0x2
080C5536: 4018         add r0,r0,r1
080C5538: 0121         mov r1,#0x1
080C553A: e160         str r1,[r4,#0xc]
080C553C: 0068         ldr r0,[r0,#0x0]
080C553E: 4068         ldr r0,[r0,#0x4]
080C5540: 6061         str r0,[r4,#0x14]
080C5542: a17a         ldrb r1,[r4,#0xa]
080C5544: fe20         mov r0,#0xfe
080C5546: 0840         and r0,r1
080C5548: 0022         mov r2,#0x0
080C554A: 0221         mov r1,#0x2
080C554C: 0843         orr r0,r1
080C554E: a072         strb r0,[r4,#0xa]
080C5550: 201c         add r0,r4,#0x0
080C5552: b430         add r0,#0xb4
080C5554: 0021         mov r1,#0x0
080C5556: 0280         strh r2,[r0,#0x0]
080C5558: 0430         add r0,#0x4
080C555A: 0170         strb r1,[r0,#0x0]
080C555C: 201c         add r0,r4,#0x0
080C555E: 57f79dfb     bl 0x0801cc9c
080C5562: 201c         add r0,r4,#0x0
080C5564: 00f0b6f8     bl 0x080c56d4
080C5568: 10bc         pop {r4}
080C556A: 01bc         pop {r0}
080C556C: 0047         bx r0
