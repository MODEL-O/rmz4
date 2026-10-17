; undefined FUN_081183ac(void)
; entry 0x81183ac  size 28 bytes

081183AC: 00b5         push {lr}
081183AE: 021c         add r2,r0,#0x0
081183B0: 0549         ldr r1,[0x081183c8]
081183B2: 507a         ldrb r0,[r2,#0x9]
081183B4: 8000         lsl r0,r0,#0x2
081183B6: 4018         add r0,r0,r1
081183B8: 0168         ldr r1,[r0,#0x0]
081183BA: 0029         cmp r1,#0x0
081183BC: 02d0         beq 0x081183c4
081183BE: 101c         add r0,r2,#0x0
081183C0: 10f0defd     bl 0x08128f80
081183C4: 01bc         pop {r0}
081183C6: 0047         bx r0
