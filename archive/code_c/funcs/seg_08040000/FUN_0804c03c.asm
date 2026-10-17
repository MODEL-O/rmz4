; undefined FUN_0804c03c(void)
; entry 0x804c03c  size 64 bytes

0804C03C: 00b5         push {lr}
0804C03E: 021c         add r2,r0,#0x0
0804C040: 8c30         add r0,#0x8c
0804C042: 0068         ldr r0,[r0,#0x0]
0804C044: 8021         mov r1,#0x80
0804C046: 8900         lsl r1,r1,#0x2
0804C048: 0840         and r0,r1
0804C04A: 0028         cmp r0,#0x0
0804C04C: 0ed0         beq 0x0804c06c
0804C04E: 0649         ldr r1,[0x0804c068]
0804C050: 507a         ldrb r0,[r2,#0x9]
0804C052: 8000         lsl r0,r0,#0x2
0804C054: 4018         add r0,r0,r1
0804C056: 0221         mov r1,#0x2
0804C058: d160         str r1,[r2,#0xc]
0804C05A: 0068         ldr r0,[r0,#0x0]
0804C05C: 8068         ldr r0,[r0,#0x8]
0804C05E: 5061         str r0,[r2,#0x14]
0804C060: 101c         add r0,r2,#0x0
0804C062: 00f00ff8     bl 0x0804c084
0804C066: 09e0         b 0x0804c07c
0804C06C: 0448         ldr r0,[0x0804c080]
0804C06E: 117c         ldrb r1,[r2,#0x10]
0804C070: 8900         lsl r1,r1,#0x2
0804C072: 0918         add r1,r1,r0
0804C074: 0968         ldr r1,[r1,#0x0]
0804C076: 101c         add r0,r2,#0x0
0804C078: dcf082ff     bl 0x08128f80
0804C07C: 01bc         pop {r0}
0804C07E: 0047         bx r0
