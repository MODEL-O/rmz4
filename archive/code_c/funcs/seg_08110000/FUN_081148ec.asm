; undefined FUN_081148ec(void)
; entry 0x81148ec  size 74 bytes

081148EC: 10b5         push {r4,lr}
081148EE: 041c         add r4,r0,#0x0
081148F0: a078         ldrb r0,[r4,#0x2]
081148F2: 0028         cmp r0,#0x0
081148F4: 02d0         beq 0x081148fc
081148F6: 0128         cmp r0,#0x1
081148F8: 0ad0         beq 0x08114910
081148FA: 19e0         b 0x08114930
081148FC: 0620         mov r0,#0x6
081148FE: eef607f9     bl 0x08002b10
08114902: e120         mov r0,#0xe1
08114904: 4001         lsl r0,r0,#0x5
08114906: a080         strh r0,[r4,#0x4]
08114908: a078         ldrb r0,[r4,#0x2]
0811490A: 0130         add r0,#0x1
0811490C: a070         strb r0,[r4,#0x2]
0811490E: 0fe0         b 0x08114930
08114910: a088         ldrh r0,[r4,#0x4]
08114912: 0138         sub r0,#0x1
08114914: a080         strh r0,[r4,#0x4]
08114916: 0004         lsl r0,r0,#0x10
08114918: 0028         cmp r0,#0x0
0811491A: 04d0         beq 0x08114926
0811491C: 0620         mov r0,#0x6
0811491E: eef649f9     bl 0x08002bb4
08114922: 0028         cmp r0,#0x0
08114924: 04d1         bne 0x08114930
08114926: c021         mov r1,#0xc0
08114928: 8900         lsl r1,r1,#0x2
0811492A: 201c         add r0,r4,#0x0
0811492C: fdf7befe     bl 0x081126ac
08114930: 10bc         pop {r4}
08114932: 01bc         pop {r0}
08114934: 0047         bx r0
