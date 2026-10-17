; undefined FUN_081004a4(void)
; entry 0x81004a4  size 70 bytes

081004A4: 10b5         push {r4,lr}
081004A6: 041c         add r4,r0,#0x0
081004A8: 1048         ldr r0,[0x081004ec]
081004AA: c179         ldrb r1,[r0,#0x7]
081004AC: 0820         mov r0,#0x8
081004AE: 0840         and r0,r1
081004B0: 0028         cmp r0,#0x0
081004B2: 09d1         bne 0x081004c8
081004B4: 0e48         ldr r0,[0x081004f0]
081004B6: 211c         add r1,r4,#0x0
081004B8: 5431         add r1,#0x54
081004BA: 1ff72bfb     bl 0x0801fb14
081004BE: 0028         cmp r0,#0x0
081004C0: 02d1         bne 0x081004c8
081004C2: 3b20         mov r0,#0x3b
081004C4: 06f75efa     bl 0x08006984
081004C8: 0a49         ldr r1,[0x081004f4]
081004CA: 607b         ldrb r0,[r4,#0xd]
081004CC: 8000         lsl r0,r0,#0x2
081004CE: 4018         add r0,r0,r1
081004D0: 0168         ldr r1,[r0,#0x0]
081004D2: 201c         add r0,r4,#0x0
081004D4: 28f054fd     bl 0x08128f80
081004D8: 201c         add r0,r4,#0x0
081004DA: 1cf789fd     bl 0x0801cff0
081004DE: e07c         ldrb r0,[r4,#0x13]
081004E0: 0130         add r0,#0x1
081004E2: e074         strb r0,[r4,#0x13]
081004E4: 10bc         pop {r4}
081004E6: 01bc         pop {r0}
081004E8: 0047         bx r0
