; undefined FUN_080ec888(void)
; entry 0x80ec888  size 78 bytes

080EC888: 70b5         push {r4,r5,r6,lr}
080EC88A: 041c         add r4,r0,#0x0
080EC88C: e07b         ldrb r0,[r4,#0xf]
080EC88E: 0028         cmp r0,#0x0
080EC890: 07d1         bne 0x080ec8a2
080EC892: b821         mov r1,#0xb8
080EC894: 8900         lsl r1,r1,#0x2
080EC896: 0920         mov r0,#0x9
080EC898: 15f700fe     bl 0x0800249c
080EC89C: e07b         ldrb r0,[r4,#0xf]
080EC89E: 0130         add r0,#0x1
080EC8A0: e073         strb r0,[r4,#0xf]
080EC8A2: 0920         mov r0,#0x9
080EC8A4: 15f798fe     bl 0x080025d8
080EC8A8: 0006         lsl r0,r0,#0x18
080EC8AA: 060e         lsr r6,r0,#0x18
080EC8AC: 201c         add r0,r4,#0x0
080EC8AE: 30f79ffb     bl 0x0801cff0
080EC8B2: 201c         add r0,r4,#0x0
080EC8B4: b430         add r0,#0xb4
080EC8B6: 0578         ldrb r5,[r0,#0x0]
080EC8B8: 002d         cmp r5,#0x0
080EC8BA: 09d1         bne 0x080ec8d0
080EC8BC: f01e         sub r0,r6,#0x3
080EC8BE: 0128         cmp r0,#0x1
080EC8C0: 06d8         bhi 0x080ec8d0
080EC8C2: 0920         mov r0,#0x9
080EC8C4: 15f7aefe     bl 0x08002624
080EC8C8: 0220         mov r0,#0x2
080EC8CA: 6073         strb r0,[r4,#0xd]
080EC8CC: a573         strb r5,[r4,#0xe]
080EC8CE: e573         strb r5,[r4,#0xf]
080EC8D0: 70bc         pop {r4,r5,r6}
080EC8D2: 01bc         pop {r0}
080EC8D4: 0047         bx r0
