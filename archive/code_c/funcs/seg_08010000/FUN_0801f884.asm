; undefined FUN_0801f884(void)
; entry 0x801f884  size 60 bytes

0801F884: 70b5         push {r4,r5,r6,lr}
0801F886: 041c         add r4,r0,#0x0
0801F888: 0e1c         add r6,r1,#0x0
0801F88A: e660         str r6,[r4,#0xc]
0801F88C: 2261         str r2,[r4,#0x10]
0801F88E: 0025         mov r5,#0x0
0801F890: a563         str r5,[r4,#0x38]
0801F892: e563         str r5,[r4,#0x3c]
0801F894: 211c         add r1,r4,#0x0
0801F896: 3831         add r1,#0x38
0801F898: 0022         mov r2,#0x0
0801F89A: 0023         mov r3,#0x0
0801F89C: e3f7b6f9     bl 0x08002c0c
0801F8A0: 201c         add r0,r4,#0x0
0801F8A2: 2830         add r0,#0x28
0801F8A4: 6060         str r0,[r4,#0x4]
0801F8A6: 6576         strb r5,[r4,#0x19]
0801F8A8: 6584         strh r5,[r4,#0x22]
0801F8AA: 201c         add r0,r4,#0x0
0801F8AC: 311c         add r1,r6,#0x0
0801F8AE: 00f039f8     bl 0x0801f924
0801F8B2: 201c         add r0,r4,#0x0
0801F8B4: 0821         mov r1,#0x8
0801F8B6: 00f06ff8     bl 0x0801f998
0801F8BA: 70bc         pop {r4,r5,r6}
0801F8BC: 01bc         pop {r0}
0801F8BE: 0047         bx r0
