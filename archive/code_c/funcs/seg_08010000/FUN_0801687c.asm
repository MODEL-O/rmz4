; undefined FUN_0801687c(void)
; entry 0x801687c  size 28 bytes

0801687C: 10b5         push {r4,lr}
0801687E: 041c         add r4,r0,#0x0
08016880: a07b         ldrb r0,[r4,#0xe]
08016882: 0b28         cmp r0,#0xb
08016884: 00d9         bls 0x08016888
08016886: fde0         b 0x08016a84
08016888: 8000         lsl r0,r0,#0x2
0801688A: 0249         ldr r1,[0x08016894]
0801688C: 4018         add r0,r0,r1
0801688E: 0068         ldr r0,[r0,#0x0]
08016890: 8746         mov pc,r0
08016A84: 10bc         pop {r4}
08016A86: 01bc         pop {r0}
08016A88: 0047         bx r0
