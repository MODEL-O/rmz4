; undefined FUN_0801f460(void)
; entry 0x801f460  size 64 bytes

0801F460: 70b5         push {r4,r5,r6,lr}
0801F462: 0006         lsl r0,r0,#0x18
0801F464: 0e4c         ldr r4,[0x0801f4a0]
0801F466: bc22         mov r2,#0xbc
0801F468: 5200         lsl r2,r2,#0x1
0801F46A: a118         add r1,r4,r2
0801F46C: 0d68         ldr r5,[r1,#0x0]
0801F46E: 0028         cmp r0,#0x0
0801F470: 03d1         bne 0x0801f47a
0801F472: 201c         add r0,r4,#0x0
0801F474: e830         add r0,#0xe8
0801F476: 00f029fa     bl 0x0801f8cc
0801F47A: 261c         add r6,r4,#0x0
0801F47C: e836         add r6,#0xe8
0801F47E: 1820         mov r0,#0x18
0801F480: 3056         ldrsb r0,[r6,r0]
0801F482: 0028         cmp r0,#0x0
0801F484: 02d0         beq 0x0801f48c
0801F486: 281c         add r0,r5,#0x0
0801F488: e7f750fc     bl 0x08006d2c
0801F48C: 201c         add r0,r4,#0x0
0801F48E: 1030         add r0,#0x10
0801F490: 08f0fef8     bl 0x08027690
0801F494: 301c         add r0,r6,#0x0
0801F496: 00f027fa     bl 0x0801f8e8
0801F49A: 70bc         pop {r4,r5,r6}
0801F49C: 01bc         pop {r0}
0801F49E: 0047         bx r0
