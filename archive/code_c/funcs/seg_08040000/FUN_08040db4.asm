; undefined FUN_08040db4(void)
; entry 0x8040db4  size 40 bytes

08040DB4: 10b5         push {r4,lr}
08040DB6: 041c         add r4,r0,#0x0
08040DB8: be30         add r0,#0xbe
08040DBA: 0078         ldrb r0,[r0,#0x0]
08040DBC: 0028         cmp r0,#0x0
08040DBE: 07d0         beq 0x08040dd0
08040DC0: 211c         add r1,r4,#0x0
08040DC2: 5431         add r1,#0x54
08040DC4: 0120         mov r0,#0x1
08040DC6: 8ff05fff     bl 0x080d0c88
08040DCA: 2720         mov r0,#0x27
08040DCC: c1f7a0fe     bl 0x08002b10
08040DD0: 201c         add r0,r4,#0x0
08040DD2: f9f76ffd     bl 0x0803a8b4
08040DD6: 10bc         pop {r4}
08040DD8: 01bc         pop {r0}
08040DDA: 0047         bx r0
