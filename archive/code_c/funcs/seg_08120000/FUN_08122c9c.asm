; undefined FUN_08122c9c(void)
; entry 0x8122c9c  size 22 bytes

08122C9C: 00b5         push {lr}
08122C9E: 0349         ldr r1,[0x08122cac]
08122CA0: 0878         ldrb r0,[r1,#0x0]
08122CA2: 0228         cmp r0,#0x2
08122CA4: 04d0         beq 0x08122cb0
08122CA6: 1c20         mov r0,#0x1c
08122CA8: 0856         ldrsb r0,[r1,r0]
08122CAA: 02e0         b 0x08122cb2
08122CB0: 0020         mov r0,#0x0
08122CB2: 02bc         pop {r1}
08122CB4: 0847         bx r1
