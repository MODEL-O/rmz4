; undefined FUN_08060db4(void)
; entry 0x8060db4  size 52 bytes

08060DB4: 10b5         push {r4,lr}
08060DB6: 041c         add r4,r0,#0x0
08060DB8: a07b         ldrb r0,[r4,#0xe]
08060DBA: 0028         cmp r0,#0x0
08060DBC: 06d1         bne 0x08060dcc
08060DBE: 0a49         ldr r1,[0x08060de8]
08060DC0: 201c         add r0,r4,#0x0
08060DC2: bcf79df8     bl 0x0801cf00
08060DC6: a07b         ldrb r0,[r4,#0xe]
08060DC8: 0130         add r0,#0x1
08060DCA: a073         strb r0,[r4,#0xe]
08060DCC: 201c         add r0,r4,#0x0
08060DCE: bcf70ff9     bl 0x0801cff0
08060DD2: 201c         add r0,r4,#0x0
08060DD4: 7330         add r0,#0x73
08060DD6: 0178         ldrb r1,[r0,#0x0]
08060DD8: 0329         cmp r1,#0x3
08060DDA: 02d1         bne 0x08060de2
08060DDC: 0020         mov r0,#0x0
08060DDE: 6173         strb r1,[r4,#0xd]
08060DE0: a073         strb r0,[r4,#0xe]
08060DE2: 10bc         pop {r4}
08060DE4: 01bc         pop {r0}
08060DE6: 0047         bx r0
