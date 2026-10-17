; undefined FUN_0810f6d0(void)
; entry 0x810f6d0  size 32 bytes

0810F6D0: 30b5         push {r4,r5,lr}
0810F6D2: f1f6adfe     bl 0x08001430
0810F6D6: 064d         ldr r5,[0x0810f6f0]
0810F6D8: 064c         ldr r4,[0x0810f6f4]
0810F6DA: 2079         ldrb r0,[r4,#0x4]
0810F6DC: 8000         lsl r0,r0,#0x2
0810F6DE: 4019         add r0,r0,r5
0810F6E0: 0168         ldr r1,[r0,#0x0]
0810F6E2: 201c         add r0,r4,#0x0
0810F6E4: 19f04cfc     bl 0x08128f80
0810F6E8: 0120         mov r0,#0x1
0810F6EA: f1f6fffd     bl 0x080012ec
0810F6EE: f4e7         b 0x0810f6da
