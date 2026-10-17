; undefined FUN_08117da0(void)
; entry 0x8117da0  size 68 bytes

08117DA0: 30b5         push {r4,r5,lr}
08117DA2: 051c         add r5,r0,#0x0
08117DA4: 0f48         ldr r0,[0x08117de4]
08117DA6: 2c18         add r4,r5,r0
08117DA8: 0020         mov r0,#0x0
08117DAA: 2070         strb r0,[r4,#0x0]
08117DAC: 0e49         ldr r1,[0x08117de8]
08117DAE: 0f4a         ldr r2,[0x08117dec]
08117DB0: a818         add r0,r5,r2
08117DB2: 0078         ldrb r0,[r0,#0x0]
08117DB4: 8000         lsl r0,r0,#0x2
08117DB6: 4018         add r0,r0,r1
08117DB8: 0168         ldr r1,[r0,#0x0]
08117DBA: 281c         add r0,r5,#0x0
08117DBC: 11f0e0f8     bl 0x08128f80
08117DC0: 1220         mov r0,#0x12
08117DC2: eaf609fc     bl 0x080025d8
08117DC6: 2078         ldrb r0,[r4,#0x0]
08117DC8: 0028         cmp r0,#0x0
08117DCA: 08d1         bne 0x08117dde
08117DCC: 0848         ldr r0,[0x08117df0]
08117DCE: 8188         ldrh r1,[r0,#0x4]
08117DD0: 0820         mov r0,#0x8
08117DD2: 0840         and r0,r1
08117DD4: 0028         cmp r0,#0x0
08117DD6: 02d0         beq 0x08117dde
08117DD8: 0320         mov r0,#0x3
08117DDA: 6870         strb r0,[r5,#0x1]
08117DDC: a870         strb r0,[r5,#0x2]
08117DDE: 30bc         pop {r4,r5}
08117DE0: 01bc         pop {r0}
08117DE2: 0047         bx r0
