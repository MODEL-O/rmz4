; undefined FUN_080fa164(void)
; entry 0x80fa164  size 52 bytes

080FA164: 10b5         push {r4,lr}
080FA166: 041c         add r4,r0,#0x0
080FA168: 22f742ff     bl 0x0801cff0
080FA16C: 221c         add r2,r4,#0x0
080FA16E: b432         add r2,#0xb4
080FA170: a16d         ldr r1,[r4,#0x58]
080FA172: 1068         ldr r0,[r2,#0x0]
080FA174: 8142         cmp r1,r0
080FA176: 0cd0         beq 0x080fa192
080FA178: 0748         ldr r0,[0x080fa198]
080FA17A: 084b         ldr r3,[0x080fa19c]
080FA17C: c018         add r0,r0,r3
080FA17E: 0078         ldrb r0,[r0,#0x0]
080FA180: 0028         cmp r0,#0x0
080FA182: 06d0         beq 0x080fa192
080FA184: 206e         ldr r0,[r4,#0x60]
080FA186: 0818         add r0,r1,r0
080FA188: a065         str r0,[r4,#0x58]
080FA18A: 1168         ldr r1,[r2,#0x0]
080FA18C: 8842         cmp r0,r1
080FA18E: 00da         bge 0x080fa192
080FA190: a165         str r1,[r4,#0x58]
080FA192: 10bc         pop {r4}
080FA194: 01bc         pop {r0}
080FA196: 0047         bx r0
