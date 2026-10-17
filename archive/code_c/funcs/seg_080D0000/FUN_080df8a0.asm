; undefined FUN_080df8a0(void)
; entry 0x80df8a0  size 44 bytes

080DF8A0: 10b5         push {r4,lr}
080DF8A2: 041c         add r4,r0,#0x0
080DF8A4: 607b         ldrb r0,[r4,#0xd]
080DF8A6: 0028         cmp r0,#0x0
080DF8A8: 0ad1         bne 0x080df8c0
080DF8AA: 0849         ldr r1,[0x080df8cc]
080DF8AC: 201c         add r0,r4,#0x0
080DF8AE: 3df727fb     bl 0x0801cf00
080DF8B2: 617c         ldrb r1,[r4,#0x11]
080DF8B4: 201c         add r0,r4,#0x0
080DF8B6: fff731ff     bl 0x080df71c
080DF8BA: 607b         ldrb r0,[r4,#0xd]
080DF8BC: 0130         add r0,#0x1
080DF8BE: 6073         strb r0,[r4,#0xd]
080DF8C0: 201c         add r0,r4,#0x0
080DF8C2: fff773ff     bl 0x080df7ac
080DF8C6: 10bc         pop {r4}
080DF8C8: 01bc         pop {r0}
080DF8CA: 0047         bx r0
