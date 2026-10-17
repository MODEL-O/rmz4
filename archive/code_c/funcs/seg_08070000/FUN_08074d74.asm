; undefined FUN_08074d74(void)
; entry 0x8074d74  size 22 bytes

08074D74: 00b5         push {lr}
08074D76: 4069         ldr r0,[r0,#0x14]
08074D78: 0121         mov r1,#0x1
08074D7A: 0840         and r0,r1
08074D7C: 0028         cmp r0,#0x0
08074D7E: 02d0         beq 0x08074d86
08074D80: 5120         mov r0,#0x51
08074D82: 91f7fffd     bl 0x08006984
08074D86: 01bc         pop {r0}
08074D88: 0047         bx r0
