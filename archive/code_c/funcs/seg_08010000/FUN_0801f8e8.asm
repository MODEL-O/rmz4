; undefined FUN_0801f8e8(void)
; entry 0x801f8e8  size 32 bytes

0801F8E8: 10b5         push {r4,lr}
0801F8EA: 011c         add r1,r0,#0x0
0801F8EC: 0c69         ldr r4,[r1,#0x10]
0801F8EE: 1820         mov r0,#0x18
0801F8F0: 0856         ldrsb r0,[r1,r0]
0801F8F2: 0028         cmp r0,#0x0
0801F8F4: 05d0         beq 0x0801f902
0801F8F6: 201c         add r0,r4,#0x0
0801F8F8: e3f760fd     bl 0x080033bc
0801F8FC: 201c         add r0,r4,#0x0
0801F8FE: e3f78ffd     bl 0x08003420
0801F902: 10bc         pop {r4}
0801F904: 01bc         pop {r0}
0801F906: 0047         bx r0
