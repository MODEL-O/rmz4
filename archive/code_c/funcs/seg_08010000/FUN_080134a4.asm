; undefined FUN_080134a4(void)
; entry 0x80134a4  size 52 bytes

080134A4: 00b5         push {lr}
080134A6: 094a         ldr r2,[0x080134cc]
080134A8: 918a         ldrh r1,[r2,#0x14]
080134AA: 0120         mov r0,#0x1
080134AC: 0840         and r0,r1
080134AE: 0028         cmp r0,#0x0
080134B0: 0ed0         beq 0x080134d0
080134B2: a220         mov r0,#0xa2
080134B4: 4000         lsl r0,r0,#0x1
080134B6: 1118         add r1,r2,r0
080134B8: f020         mov r0,#0xf0
080134BA: 0002         lsl r0,r0,#0x8
080134BC: 0860         str r0,[r1,#0x0]
080134BE: a420         mov r0,#0xa4
080134C0: 4000         lsl r0,r0,#0x1
080134C2: 1118         add r1,r2,r0
080134C4: f020         mov r0,#0xf0
080134C6: 8003         lsl r0,r0,#0xe
080134C8: 06e0         b 0x080134d8
080134D0: a220         mov r0,#0xa2
080134D2: 4000         lsl r0,r0,#0x1
080134D4: 1118         add r1,r2,r0
080134D6: 0248         ldr r0,[0x080134e0]
080134D8: 0860         str r0,[r1,#0x0]
080134DA: 01bc         pop {r0}
080134DC: 0047         bx r0
