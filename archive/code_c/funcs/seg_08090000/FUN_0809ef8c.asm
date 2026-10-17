; undefined FUN_0809ef8c(void)
; entry 0x809ef8c  size 56 bytes

0809EF8C: 10b5         push {r4,lr}
0809EF8E: 011c         add r1,r0,#0x0
0809EF90: 4a69         ldr r2,[r1,#0x14]
0809EF92: 0120         mov r0,#0x1
0809EF94: 1040         and r0,r2
0809EF96: 0028         cmp r0,#0x0
0809EF98: 11d0         beq 0x0809efbe
0809EF9A: cc6a         ldr r4,[r1,#0x2c]
0809EF9C: 0948         ldr r0,[0x0809efc4]
0809EF9E: 0168         ldr r1,[r0,#0x0]
0809EFA0: 8020         mov r0,#0x80
0809EFA2: 8002         lsl r0,r0,#0xa
0809EFA4: 0240         and r2,r0
0809EFA6: 002a         cmp r2,#0x0
0809EFA8: 09d0         beq 0x0809efbe
0809EFAA: 0029         cmp r1,#0x0
0809EFAC: 07d0         beq 0x0809efbe
0809EFAE: 081c         add r0,r1,#0x0
0809EFB0: 0521         mov r1,#0x5
0809EFB2: 0322         mov r2,#0x3
0809EFB4: 9bf7e0fa     bl 0x0803a578
0809EFB8: 211c         add r1,r4,#0x0
0809EFBA: b431         add r1,#0xb4
0809EFBC: 0870         strb r0,[r1,#0x0]
0809EFBE: 10bc         pop {r4}
0809EFC0: 01bc         pop {r0}
0809EFC2: 0047         bx r0
