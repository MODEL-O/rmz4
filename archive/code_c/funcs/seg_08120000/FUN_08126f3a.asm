; undefined FUN_08126f3a(void)
; entry 0x8126f3a  size 22 bytes

08126F3A: 01b4         push {r0}
08126F3C: 500e         lsr r0,r2,#0x19
08126F3E: 05d1         bne 0x08126f4c
08126F40: 0348         ldr r0,[0x08126f50]
08126F42: 8242         cmp r2,r0
08126F44: 01d3         bcc 0x08126f4a
08126F46: 900b         lsr r0,r2,#0xe
08126F48: 00d0         beq 0x08126f4c
08126F4A: 0023         mov r3,#0x0
08126F4C: 01bc         pop {r0}
08126F4E: 7047         bx lr
