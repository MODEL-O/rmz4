; undefined FUN_080c3eb4(void)
; entry 0x80c3eb4  size 70 bytes

080C3EB4: 10b5         push {r4,lr}
080C3EB6: 041c         add r4,r0,#0x0
080C3EB8: 1048         ldr r0,[0x080c3efc]
080C3EBA: 0068         ldr r0,[r0,#0x0]
080C3EBC: 41f720fb     bl 0x08005500
080C3EC0: 031c         add r3,r0,#0x0
080C3EC2: 002b         cmp r3,#0x0
080C3EC4: 15d0         beq 0x080c3ef2
080C3EC6: 191c         add r1,r3,#0x0
080C3EC8: 2531         add r1,#0x25
080C3ECA: 0022         mov r2,#0x0
080C3ECC: 0820         mov r0,#0x8
080C3ECE: 0870         strb r0,[r1,#0x0]
080C3ED0: 0b49         ldr r1,[0x080c3f00]
080C3ED2: 1520         mov r0,#0x15
080C3ED4: 5872         strb r0,[r3,#0x9]
080C3ED6: 486d         ldr r0,[r1,#0x54]
080C3ED8: 0068         ldr r0,[r0,#0x0]
080C3EDA: 5861         str r0,[r3,#0x14]
080C3EDC: 0021         mov r1,#0x0
080C3EDE: 1a84         strh r2,[r3,#0x20]
080C3EE0: 181c         add r0,r3,#0x0
080C3EE2: 2230         add r0,#0x22
080C3EE4: 0170         strb r1,[r0,#0x0]
080C3EE6: 9c62         str r4,[r3,#0x28]
080C3EE8: 1974         strb r1,[r3,#0x10]
080C3EEA: 9330         add r0,#0x93
080C3EEC: 0170         strb r1,[r0,#0x0]
080C3EEE: 0138         sub r0,#0x1
080C3EF0: 0170         strb r1,[r0,#0x0]
080C3EF2: 181c         add r0,r3,#0x0
080C3EF4: 10bc         pop {r4}
080C3EF6: 02bc         pop {r1}
080C3EF8: 0847         bx r1
