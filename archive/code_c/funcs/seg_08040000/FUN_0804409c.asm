; undefined FUN_0804409c(void)
; entry 0x804409c  size 40 bytes

0804409C: 00b5         push {lr}
0804409E: c3f7edfd     bl 0x08007c7c
080440A2: 0004         lsl r0,r0,#0x10
080440A4: 000c         lsr r0,r0,#0x10
080440A6: 011c         add r1,r0,#0x0
080440A8: 0f20         mov r0,#0xf
080440AA: 0840         and r0,r1
080440AC: 0f28         cmp r0,#0xf
080440AE: 06d0         beq 0x080440be
080440B0: 8020         mov r0,#0x80
080440B2: 0002         lsl r0,r0,#0x8
080440B4: 0840         and r0,r1
080440B6: 0028         cmp r0,#0x0
080440B8: 01d1         bne 0x080440be
080440BA: 081c         add r0,r1,#0x0
080440BC: 00e0         b 0x080440c0
080440BE: 0020         mov r0,#0x0
080440C0: 02bc         pop {r1}
080440C2: 0847         bx r1
