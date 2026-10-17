; undefined FUN_08084c24(void)
; entry 0x8084c24  size 58 bytes

08084C24: 10b5         push {r4,lr}
08084C26: 041c         add r4,r0,#0x0
08084C28: fff74aff     bl 0x08084ac0
08084C2C: 0006         lsl r0,r0,#0x18
08084C2E: 0028         cmp r0,#0x0
08084C30: 12d1         bne 0x08084c58
08084C32: 201c         add r0,r4,#0x0
08084C34: fff76cff     bl 0x08084b10
08084C38: 0949         ldr r1,[0x08084c60]
08084C3A: 607b         ldrb r0,[r4,#0xd]
08084C3C: 8000         lsl r0,r0,#0x2
08084C3E: 4018         add r0,r0,r1
08084C40: 0168         ldr r1,[r0,#0x0]
08084C42: 201c         add r0,r4,#0x0
08084C44: a4f09cf9     bl 0x08128f80
08084C48: 0649         ldr r1,[0x08084c64]
08084C4A: 607b         ldrb r0,[r4,#0xd]
08084C4C: 8000         lsl r0,r0,#0x2
08084C4E: 4018         add r0,r0,r1
08084C50: 0168         ldr r1,[r0,#0x0]
08084C52: 201c         add r0,r4,#0x0
08084C54: a4f094f9     bl 0x08128f80
08084C58: 10bc         pop {r4}
08084C5A: 01bc         pop {r0}
08084C5C: 0047         bx r0
