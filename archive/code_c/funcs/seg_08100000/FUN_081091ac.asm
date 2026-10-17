; undefined FUN_081091ac(void)
; entry 0x81091ac  size 22 bytes

081091AC: 00b5         push {lr}
081091AE: 011c         add r1,r0,#0x0
081091B0: 0448         ldr r0,[0x081091c4]
081091B2: 0068         ldr r0,[r0,#0x0]
081091B4: 13f7bcfc     bl 0x0801cb30
081091B8: 0028         cmp r0,#0x0
081091BA: 00d1         bne 0x081091be
081091BC: 0020         mov r0,#0x0
081091BE: 02bc         pop {r1}
081091C0: 0847         bx r1
