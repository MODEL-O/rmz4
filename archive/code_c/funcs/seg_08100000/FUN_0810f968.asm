; undefined FUN_0810f968(void)
; entry 0x810f968  size 20 bytes

0810F968: 10b5         push {r4,lr}
0810F96A: 041c         add r4,r0,#0x0
0810F96C: f6f64cff     bl 0x08006808
0810F970: 0248         ldr r0,[0x0810f97c]
0810F972: 0078         ldrb r0,[r0,#0x0]
0810F974: 2082         strh r0,[r4,#0x10]
0810F976: 10bc         pop {r4}
0810F978: 01bc         pop {r0}
0810F97A: 0047         bx r0
