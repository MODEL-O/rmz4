; undefined FUN_080e1024(void)
; entry 0x80e1024  size 40 bytes

080E1024: 00b5         push {lr}
080E1026: 82b0         sub sp,#0x8
080E1028: 837a         ldrb r3,[r0,#0xa]
080E102A: 1b09         lsr r3,r3,#0x4
080E102C: 0121         mov r1,#0x1
080E102E: 0b40         and r3,r1
080E1030: 416d         ldr r1,[r0,#0x54]
080E1032: 0091         str r1,[sp,#0x0]
080E1034: 806d         ldr r0,[r0,#0x58]
080E1036: 0190         str r0,[sp,#0x4]
080E1038: 0449         ldr r1,[0x080e104c]
080E103A: 1801         lsl r0,r3,#0x4
080E103C: 0343         orr r3,r0
080E103E: 6846         mov r0,sp
080E1040: 0022         mov r2,#0x0
080E1042: f3f723fe     bl 0x080d4c8c
080E1046: 02b0         add sp,#0x8
080E1048: 01bc         pop {r0}
080E104A: 0047         bx r0
