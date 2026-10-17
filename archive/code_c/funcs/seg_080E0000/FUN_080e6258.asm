; undefined FUN_080e6258(void)
; entry 0x80e6258  size 24 bytes

080E6258: 00b5         push {lr}
080E625A: 011c         add r1,r0,#0x0
080E625C: 887c         ldrb r0,[r1,#0x12]
080E625E: 0028         cmp r0,#0x0
080E6260: 03d0         beq 0x080e626a
080E6262: 0138         sub r0,#0x1
080E6264: 8874         strb r0,[r1,#0x12]
080E6266: 0020         mov r0,#0x0
080E6268: 00e0         b 0x080e626c
080E626A: 0120         mov r0,#0x1
080E626C: 02bc         pop {r1}
080E626E: 0847         bx r1
