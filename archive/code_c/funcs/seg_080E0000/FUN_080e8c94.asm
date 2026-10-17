; undefined FUN_080e8c94(void)
; entry 0x80e8c94  size 68 bytes

080E8C94: 10b5         push {r4,lr}
080E8C96: 041c         add r4,r0,#0x0
080E8C98: 0f49         ldr r1,[0x080e8cd8]
080E8C9A: 607a         ldrb r0,[r4,#0x9]
080E8C9C: 8000         lsl r0,r0,#0x2
080E8C9E: 4018         add r0,r0,r1
080E8CA0: 0121         mov r1,#0x1
080E8CA2: e160         str r1,[r4,#0xc]
080E8CA4: 0068         ldr r0,[r0,#0x0]
080E8CA6: 4068         ldr r0,[r0,#0x4]
080E8CA8: 6061         str r0,[r4,#0x14]
080E8CAA: 201c         add r0,r4,#0x0
080E8CAC: 34f786f8     bl 0x0801cdbc
080E8CB0: 211c         add r1,r4,#0x0
080E8CB2: 2531         add r1,#0x25
080E8CB4: 1920         mov r0,#0x19
080E8CB6: 0870         strb r0,[r1,#0x0]
080E8CB8: 201c         add r0,r4,#0x0
080E8CBA: 0d21         mov r1,#0xd
080E8CBC: 34f788fb     bl 0x0801d3d0
080E8CC0: a17a         ldrb r1,[r4,#0xa]
080E8CC2: 0120         mov r0,#0x1
080E8CC4: 0843         orr r0,r1
080E8CC6: a072         strb r0,[r4,#0xa]
080E8CC8: 8020         mov r0,#0x80
080E8CCA: e074         strb r0,[r4,#0x13]
080E8CCC: 201c         add r0,r4,#0x0
080E8CCE: 00f005f8     bl 0x080e8cdc
080E8CD2: 10bc         pop {r4}
080E8CD4: 01bc         pop {r0}
080E8CD6: 0047         bx r0
