; undefined FUN_080e1290(void)
; entry 0x80e1290  size 40 bytes

080E1290: 00b5         push {lr}
080E1292: 82b0         sub sp,#0x8
080E1294: 837a         ldrb r3,[r0,#0xa]
080E1296: 1b09         lsr r3,r3,#0x4
080E1298: 0121         mov r1,#0x1
080E129A: 0b40         and r3,r1
080E129C: 416d         ldr r1,[r0,#0x54]
080E129E: 0091         str r1,[sp,#0x0]
080E12A0: 806d         ldr r0,[r0,#0x58]
080E12A2: 0190         str r0,[sp,#0x4]
080E12A4: 0449         ldr r1,[0x080e12b8]
080E12A6: 1801         lsl r0,r3,#0x4
080E12A8: 0343         orr r3,r0
080E12AA: 6846         mov r0,sp
080E12AC: 0022         mov r2,#0x0
080E12AE: f3f7edfc     bl 0x080d4c8c
080E12B2: 02b0         add sp,#0x8
080E12B4: 01bc         pop {r0}
080E12B6: 0047         bx r0
