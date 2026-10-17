; undefined FUN_080e4db4(void)
; entry 0x80e4db4  size 42 bytes

080E4DB4: 30b5         push {r4,r5,lr}
080E4DB6: 041c         add r4,r0,#0x0
080E4DB8: 0125         mov r5,#0x1
080E4DBA: 6574         strb r5,[r4,#0x11]
080E4DBC: 2a20         mov r0,#0x2a
080E4DBE: 1df7a7fe     bl 0x08002b10
080E4DC2: 201c         add r0,r4,#0x0
080E4DC4: 5430         add r0,#0x54
080E4DC6: 0649         ldr r1,[0x080e4de0]
080E4DC8: a27a         ldrb r2,[r4,#0xa]
080E4DCA: 1209         lsr r2,r2,#0x4
080E4DCC: 2a40         and r2,r5
080E4DCE: fff741fe     bl 0x080e4a54
080E4DD2: 201c         add r0,r4,#0x0
080E4DD4: fff738ff     bl 0x080e4c48
080E4DD8: 30bc         pop {r4,r5}
080E4DDA: 01bc         pop {r0}
080E4DDC: 0047         bx r0
