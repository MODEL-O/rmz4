; undefined FUN_08126f20(void)
; entry 0x8126f20  size 22 bytes

08126F20: f446         mov r12,lr
08126F22: 2421         mov r1,#0x24
08126F24: 0a4a         ldr r2,[0x08126f50]
08126F26: 1368         ldr r3,[r2,#0x0]
08126F28: 00f007f8     bl 0x08126f3a
08126F2C: 08c0         stmia r0!,{r3}
08126F2E: 0432         add r2,#0x4
08126F30: 0139         sub r1,#0x1
08126F32: f8dc         bgt 0x08126f26
08126F34: 6047         bx r12
