; undefined FUN_081241ec(void)
; entry 0x81241ec  size 40 bytes

081241EC: 00b5         push {lr}
081241EE: 011c         add r1,r0,#0x0
081241F0: 0622         mov r2,#0x6
081241F2: 885e         ldrsh r0,[r1,r2]
081241F4: 0028         cmp r0,#0x0
081241F6: 0ad0         beq 0x0812420e
081241F8: 064a         ldr r2,[0x08124214]
081241FA: 8818         add r0,r1,r2
081241FC: 0649         ldr r1,[0x08124218]
081241FE: 0269         ldr r2,[r0,#0x10]
08124200: 086a         ldr r0,[r1,#0x20]
08124202: 8242         cmp r2,r0
08124204: 03d9         bls 0x0812420e
08124206: 0120         mov r0,#0x1
08124208: 111c         add r1,r2,#0x0
0812420A: e2f62ffc     bl 0x08006a6c
0812420E: 0020         mov r0,#0x0
08124210: 02bc         pop {r1}
08124212: 0847         bx r1
