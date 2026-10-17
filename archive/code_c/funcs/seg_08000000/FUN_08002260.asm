; undefined FUN_08002260(void)
; entry 0x8002260  size 68 bytes

08002260: f0b5         push {r4,r5,r6,r7,lr}
08002262: ff24         mov r4,#0xff
08002264: 8e46         mov lr,r1
08002266: 0168         ldr r1,[r0,#0x0]
08002268: 1d68         ldr r5,[r3,#0x0]
0800226A: 0d40         and r5,r1
0800226C: 5543         mul r5,r2
0800226E: 6d09         lsr r5,r5,#0x5
08002270: 1e68         ldr r6,[r3,#0x0]
08002272: 2e40         and r6,r5
08002274: 5d68         ldr r5,[r3,#0x4]
08002276: 0d40         and r5,r1
08002278: 5543         mul r5,r2
0800227A: 6d09         lsr r5,r5,#0x5
0800227C: 5f68         ldr r7,[r3,#0x4]
0800227E: 2f40         and r7,r5
08002280: 3e43         orr r6,r7
08002282: 9d68         ldr r5,[r3,#0x8]
08002284: 0d40         and r5,r1
08002286: 6d09         lsr r5,r5,#0x5
08002288: 5543         mul r5,r2
0800228A: 9f68         ldr r7,[r3,#0x8]
0800228C: 2f40         and r7,r5
0800228E: 3e43         orr r6,r7
08002290: 7146         mov r1,lr
08002292: 0e60         str r6,[r1,#0x0]
08002294: 0430         add r0,#0x4
08002296: 0431         add r1,#0x4
08002298: 013c         sub r4,#0x1
0800229A: e3d5         bpl 0x08002264
0800229C: f0bc         pop {r4,r5,r6,r7}
0800229E: 01bc         pop {r0}
080022A0: 8646         mov lr,r0
080022A2: 7047         bx lr
