; undefined FUN_08053e9c(void)
; entry 0x8053e9c  size 74 bytes

08053E9C: 10b5         push {r4,lr}
08053E9E: 041c         add r4,r0,#0x0
08053EA0: e07b         ldrb r0,[r4,#0xf]
08053EA2: 0028         cmp r0,#0x0
08053EA4: 0dd1         bne 0x08053ec2
08053EA6: 221c         add r2,r4,#0x0
08053EA8: b632         add r2,#0xb6
08053EAA: 1178         ldrb r1,[r2,#0x0]
08053EAC: 0220         mov r0,#0x2
08053EAE: 0843         orr r0,r1
08053EB0: 1070         strb r0,[r2,#0x0]
08053EB2: b021         mov r1,#0xb0
08053EB4: 8901         lsl r1,r1,#0x6
08053EB6: 201c         add r0,r4,#0x0
08053EB8: c9f722f8     bl 0x0801cf00
08053EBC: e07b         ldrb r0,[r4,#0xf]
08053EBE: 0130         add r0,#0x1
08053EC0: e073         strb r0,[r4,#0xf]
08053EC2: 201c         add r0,r4,#0x0
08053EC4: c9f794f8     bl 0x0801cff0
08053EC8: 201c         add r0,r4,#0x0
08053ECA: 01f071f8     bl 0x08054fb0
08053ECE: 0648         ldr r0,[0x08053ee8]
08053ED0: 817c         ldrb r1,[r0,#0x12]
08053ED2: 0120         mov r0,#0x1
08053ED4: 0840         and r0,r1
08053ED6: 0028         cmp r0,#0x0
08053ED8: 02d1         bne 0x08053ee0
08053EDA: 201c         add r0,r4,#0x0
08053EDC: 01f088f8     bl 0x08054ff0
08053EE0: 10bc         pop {r4}
08053EE2: 01bc         pop {r0}
08053EE4: 0047         bx r0
