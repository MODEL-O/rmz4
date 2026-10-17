; undefined FUN_080abb7c(void)
; entry 0x80abb7c  size 60 bytes

080ABB7C: 00b5         push {lr}
080ABB7E: 021c         add r2,r0,#0x0
080ABB80: d17b         ldrb r1,[r2,#0xf]
080ABB82: 0029         cmp r1,#0x0
080ABB84: 03d1         bne 0x080abb8e
080ABB86: 0820         mov r0,#0x8
080ABB88: 9074         strb r0,[r2,#0x12]
080ABB8A: 481c         add r0,r1,#0x1
080ABB8C: d073         strb r0,[r2,#0xf]
080ABB8E: 907c         ldrb r0,[r2,#0x12]
080ABB90: 0138         sub r0,#0x1
080ABB92: 9074         strb r0,[r2,#0x12]
080ABB94: 917c         ldrb r1,[r2,#0x12]
080ABB96: c800         lsl r0,r1,#0x3
080ABB98: 4018         add r0,r0,r1
080ABB9A: 8000         lsl r0,r0,#0x2
080ABB9C: 111c         add r1,r2,#0x0
080ABB9E: c231         add r1,#0xc2
080ABBA0: 0023         mov r3,#0x0
080ABBA2: 0880         strh r0,[r1,#0x0]
080ABBA4: 907c         ldrb r0,[r2,#0x12]
080ABBA6: 0028         cmp r0,#0x0
080ABBA8: 04d1         bne 0x080abbb4
080ABBAA: 507b         ldrb r0,[r2,#0xd]
080ABBAC: 0130         add r0,#0x1
080ABBAE: 5073         strb r0,[r2,#0xd]
080ABBB0: 9373         strb r3,[r2,#0xe]
080ABBB2: d373         strb r3,[r2,#0xf]
080ABBB4: 01bc         pop {r0}
080ABBB6: 0047         bx r0
