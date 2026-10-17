; undefined FUN_0801d3fc(void)
; entry 0x801d3fc  size 66 bytes

0801D3FC: 10b5         push {r4,lr}
0801D3FE: 0d24         mov r4,#0xd
0801D400: 0f49         ldr r1,[0x0801d440]
0801D402: 427f         ldrb r2,[r0,#0x1d]
0801D404: 5309         lsr r3,r2,#0x5
0801D406: 9b00         lsl r3,r3,#0x2
0801D408: 5b18         add r3,r3,r1
0801D40A: 1f21         mov r1,#0x1f
0801D40C: 1140         and r1,r2
0801D40E: 0122         mov r2,#0x1
0801D410: 8a40         lsl r2,r1
0801D412: 1968         ldr r1,[r3,#0x0]
0801D414: 1143         orr r1,r2
0801D416: 1960         str r1,[r3,#0x0]
0801D418: c27a         ldrb r2,[r0,#0xb]
0801D41A: 2021         mov r1,#0x20
0801D41C: 1143         orr r1,r2
0801D41E: c172         strb r1,[r0,#0xb]
0801D420: 4921         mov r1,#0x49
0801D422: 0918         add r1,r1,r0
0801D424: 8c46         mov r12,r1
0801D426: d023         mov r3,#0xd0
0801D428: 0a78         ldrb r2,[r1,#0x0]
0801D42A: 0f21         mov r1,#0xf
0801D42C: 1140         and r1,r2
0801D42E: 1943         orr r1,r3
0801D430: 6246         mov r2,r12
0801D432: 1170         strb r1,[r2,#0x0]
0801D434: 2330         add r0,#0x23
0801D436: 0470         strb r4,[r0,#0x0]
0801D438: 10bc         pop {r4}
0801D43A: 01bc         pop {r0}
0801D43C: 0047         bx r0
