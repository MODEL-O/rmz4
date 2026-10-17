; undefined FUN_0810d51c(void)
; entry 0x810d51c  size 68 bytes

0810D51C: 30b5         push {r4,r5,lr}
0810D51E: 1048         ldr r0,[0x0810d560]
0810D520: b221         mov r1,#0xb2
0810D522: c900         lsl r1,r1,#0x3
0810D524: 4218         add r2,r0,r1
0810D526: 0021         mov r1,#0x0
0810D528: 1160         str r1,[r2,#0x0]
0810D52A: 4f24         mov r4,#0x4f
0810D52C: 051c         add r5,r0,#0x0
0810D52E: b020         mov r0,#0xb0
0810D530: c000         lsl r0,r0,#0x3
0810D532: 2918         add r1,r5,r0
0810D534: 0b4b         ldr r3,[0x0810d564]
0810D536: cb80         strh r3,[r1,#0x6]
0810D538: 1068         ldr r0,[r2,#0x0]
0810D53A: 0860         str r0,[r1,#0x0]
0810D53C: 1160         str r1,[r2,#0x0]
0810D53E: 0839         sub r1,#0x8
0810D540: 023b         sub r3,#0x2
0810D542: 013c         sub r4,#0x1
0810D544: 002c         cmp r4,#0x0
0810D546: f6da         bge 0x0810d536
0810D548: 0020         mov r0,#0x0
0810D54A: b122         mov r2,#0xb1
0810D54C: d200         lsl r2,r2,#0x3
0810D54E: a918         add r1,r5,r2
0810D550: 0860         str r0,[r1,#0x0]
0810D552: 0432         add r2,#0x4
0810D554: a918         add r1,r5,r2
0810D556: 0860         str r0,[r1,#0x0]
0810D558: a880         strh r0,[r5,#0x4]
0810D55A: 30bc         pop {r4,r5}
0810D55C: 01bc         pop {r0}
0810D55E: 0047         bx r0
