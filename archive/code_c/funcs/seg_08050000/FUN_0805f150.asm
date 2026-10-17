; undefined FUN_0805f150(void)
; entry 0x805f150  size 58 bytes

0805F150: 70b5         push {r4,r5,r6,lr}
0805F152: 85b0         sub sp,#0x14
0805F154: 041c         add r4,r0,#0x0
0805F156: 0d49         ldr r1,[0x0805f18c]
0805F158: 6846         mov r0,sp
0805F15A: 0522         mov r2,#0x5
0805F15C: caf07cf8     bl 0x08129258
0805F160: 02aa         add r2,sp,#0x8
0805F162: 111c         add r1,r2,#0x0
0805F164: 0a48         ldr r0,[0x0805f190]
0805F166: 68c8         ldmia r0!,{r3,r5,r6}
0805F168: 68c1         stmia r1!,{r3,r5,r6}
0805F16A: 217c         ldrb r1,[r4,#0x10]
0805F16C: a434         add r4,#0xa4
0805F16E: 0023         mov r3,#0x0
0805F170: e05e         ldrsh r0,[r4,r3]
0805F172: 8000         lsl r0,r0,#0x2
0805F174: 8900         lsl r1,r1,#0x2
0805F176: 5218         add r2,r2,r1
0805F178: 1168         ldr r1,[r2,#0x0]
0805F17A: c9f01dff     bl 0x08128fb8
0805F17E: 6844         add r0,sp
0805F180: 0078         ldrb r0,[r0,#0x0]
0805F182: 05b0         add sp,#0x14
0805F184: 70bc         pop {r4,r5,r6}
0805F186: 02bc         pop {r1}
0805F188: 0847         bx r1
