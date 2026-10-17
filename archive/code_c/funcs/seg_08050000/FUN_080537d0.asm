; undefined FUN_080537d0(void)
; entry 0x80537d0  size 58 bytes

080537D0: 10b5         push {r4,lr}
080537D2: 041c         add r4,r0,#0x0
080537D4: e07b         ldrb r0,[r4,#0xf]
080537D6: 0028         cmp r0,#0x0
080537D8: 07d1         bne 0x080537ea
080537DA: b621         mov r1,#0xb6
080537DC: 0902         lsl r1,r1,#0x8
080537DE: 201c         add r0,r4,#0x0
080537E0: c9f78efb     bl 0x0801cf00
080537E4: e07b         ldrb r0,[r4,#0xf]
080537E6: 0130         add r0,#0x1
080537E8: e073         strb r0,[r4,#0xf]
080537EA: 201c         add r0,r4,#0x0
080537EC: c9f700fc     bl 0x0801cff0
080537F0: a069         ldr r0,[r4,#0x18]
080537F2: 417a         ldrb r1,[r0,#0x9]
080537F4: 0122         mov r2,#0x1
080537F6: 101c         add r0,r2,#0x0
080537F8: 0840         and r0,r1
080537FA: 0028         cmp r0,#0x0
080537FC: 02d0         beq 0x08053804
080537FE: 0020         mov r0,#0x0
08053800: a273         strb r2,[r4,#0xe]
08053802: e073         strb r0,[r4,#0xf]
08053804: 10bc         pop {r4}
08053806: 01bc         pop {r0}
08053808: 0047         bx r0
