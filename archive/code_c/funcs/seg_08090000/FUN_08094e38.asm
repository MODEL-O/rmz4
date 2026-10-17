; undefined FUN_08094e38(void)
; entry 0x8094e38  size 44 bytes

08094E38: 00b5         push {lr}
08094E3A: 82b0         sub sp,#0x8
08094E3C: 837a         ldrb r3,[r0,#0xa]
08094E3E: 1b09         lsr r3,r3,#0x4
08094E40: 0121         mov r1,#0x1
08094E42: 0b40         and r3,r1
08094E44: 416d         ldr r1,[r0,#0x54]
08094E46: 0091         str r1,[sp,#0x0]
08094E48: 806d         ldr r0,[r0,#0x58]
08094E4A: 0649         ldr r1,[0x08094e64]
08094E4C: 4018         add r0,r0,r1
08094E4E: 0190         str r0,[sp,#0x4]
08094E50: 0549         ldr r1,[0x08094e68]
08094E52: 1801         lsl r0,r3,#0x4
08094E54: 0343         orr r3,r0
08094E56: 6846         mov r0,sp
08094E58: 0022         mov r2,#0x0
08094E5A: 3ff017ff     bl 0x080d4c8c
08094E5E: 02b0         add sp,#0x8
08094E60: 01bc         pop {r0}
08094E62: 0047         bx r0
