; undefined FUN_080c88a4(void)
; entry 0x80c88a4  size 64 bytes

080C88A4: 00b5         push {lr}
080C88A6: 021c         add r2,r0,#0x0
080C88A8: 8c30         add r0,#0x8c
080C88AA: 0068         ldr r0,[r0,#0x0]
080C88AC: 8021         mov r1,#0x80
080C88AE: 8900         lsl r1,r1,#0x2
080C88B0: 0840         and r0,r1
080C88B2: 0028         cmp r0,#0x0
080C88B4: 0ed0         beq 0x080c88d4
080C88B6: 0649         ldr r1,[0x080c88d0]
080C88B8: 507a         ldrb r0,[r2,#0x9]
080C88BA: 8000         lsl r0,r0,#0x2
080C88BC: 4018         add r0,r0,r1
080C88BE: 0221         mov r1,#0x2
080C88C0: d160         str r1,[r2,#0xc]
080C88C2: 0068         ldr r0,[r0,#0x0]
080C88C4: 8068         ldr r0,[r0,#0x8]
080C88C6: 5061         str r0,[r2,#0x14]
080C88C8: 101c         add r0,r2,#0x0
080C88CA: 00f00ff8     bl 0x080c88ec
080C88CE: 09e0         b 0x080c88e4
080C88D4: 0448         ldr r0,[0x080c88e8]
080C88D6: 117c         ldrb r1,[r2,#0x10]
080C88D8: 8900         lsl r1,r1,#0x2
080C88DA: 0918         add r1,r1,r0
080C88DC: 0968         ldr r1,[r1,#0x0]
080C88DE: 101c         add r0,r2,#0x0
080C88E0: 60f04efb     bl 0x08128f80
080C88E4: 01bc         pop {r0}
080C88E6: 0047         bx r0
